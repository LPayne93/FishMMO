﻿using FishNet.Connection;
using FishNet.Serializing;
using FishNet.Transporting;
using System.Collections.Generic;
using UnityEngine;

namespace FishMMO.Shared
{
	public class EquipmentController : ItemContainer
	{
		public override void OnAwake()
		{
			AddSlots(null, System.Enum.GetNames(typeof(ItemSlot)).Length); // equipment size = itemslot size
		}

		public override void ReadPayload(NetworkConnection connection, Reader reader)
		{
			int itemCount = reader.ReadInt32();
			for (int i = 0; i < itemCount; ++i)
			{
				long id = reader.ReadInt64();
				int templateID = reader.ReadInt32();
				int slot = reader.ReadInt32();
				int seed = reader.ReadInt32();
				uint stackSize = reader.ReadUInt32();

				Item item = new Item(id, seed, templateID, stackSize);

				SetItemSlot(item, slot);
			}
		}

		public override void WritePayload(NetworkConnection connection, Writer writer)
		{
			if (Items == null ||
				Items.Count < 1)
			{
				writer.WriteUInt32(0);
				return;
			}

			writer.WriteInt32(FilledSlots());
			foreach (Item item in Items)
			{
				if (item == null)
				{
					continue;
				}
				writer.WriteInt64(item.ID);
				writer.WriteInt32(item.Template.ID);
				writer.WriteInt32(item.Slot);
				writer.WriteInt32(item.IsGenerated ? item.Generator.Seed : 0);
				writer.WriteUInt32(item.IsStackable ? item.Stackable.Amount : 0);
			}
		}

#if !UNITY_SERVER
		public override void OnStartCharacter()
		{
			base.OnStartCharacter();

			foreach (Item item in Items)
			{
				if (item == null ||
					!item.IsEquippable)
				{
					continue;
				}
				item.Equippable.SetOwner(Character);
			}

			if (!base.IsOwner)
			{
				enabled = false;
				return;
			}

			ClientManager.RegisterBroadcast<EquipmentSetItemBroadcast>(OnClientEquipmentSetItemBroadcastReceived);
			ClientManager.RegisterBroadcast<EquipmentSetMultipleItemsBroadcast>(OnClientEquipmentSetMultipleItemsBroadcastReceived);
			ClientManager.RegisterBroadcast<EquipmentEquipItemBroadcast>(OnClientEquipmentEquipItemBroadcastReceived);
			ClientManager.RegisterBroadcast<EquipmentUnequipItemBroadcast>(OnClientEquipmentUnequipItemBroadcastReceived);
		}

		public override void OnStopCharacter()
		{
			base.OnStopCharacter();

			if (base.IsOwner)
			{
				ClientManager.UnregisterBroadcast<EquipmentSetItemBroadcast>(OnClientEquipmentSetItemBroadcastReceived);
				ClientManager.UnregisterBroadcast<EquipmentSetMultipleItemsBroadcast>(OnClientEquipmentSetMultipleItemsBroadcastReceived);
				ClientManager.UnregisterBroadcast<EquipmentEquipItemBroadcast>(OnClientEquipmentEquipItemBroadcastReceived);
				ClientManager.UnregisterBroadcast<EquipmentUnequipItemBroadcast>(OnClientEquipmentUnequipItemBroadcastReceived);
			}
		}

		/// <summary>
		/// Server sent a set item broadcast. Item slot is set to the received item details.
		/// </summary>
		private void OnClientEquipmentSetItemBroadcastReceived(EquipmentSetItemBroadcast msg, Channel channel)
		{
			Item newItem = new Item(msg.instanceID, msg.seed, msg.templateID, msg.stackSize);
			Equip(newItem, -1, null, (ItemSlot)msg.slot);
		}

		/// <summary>
		/// Server sent a multiple set item broadcast. Item slot is set to the received item details.
		/// </summary>
		private void OnClientEquipmentSetMultipleItemsBroadcastReceived(EquipmentSetMultipleItemsBroadcast msg, Channel channel)
		{
			foreach (EquipmentSetItemBroadcast subMsg in msg.items)
			{
				Item newItem = new Item(subMsg.instanceID, subMsg.seed, subMsg.templateID, subMsg.stackSize);
				Equip(newItem, -1, null, (ItemSlot)subMsg.slot);
			}
		}

		/// <summary>
		/// Server sent an equip item broadcast.
		/// </summary>
		private void OnClientEquipmentEquipItemBroadcastReceived(EquipmentEquipItemBroadcast msg, Channel channel)
		{
			switch (msg.fromInventory)
			{
				case InventoryType.Inventory:
					if (Character.TryGet(out InventoryController inventoryController) &&
						inventoryController.TryGetItem(msg.inventoryIndex, out Item inventoryItem))
					{
						Equip(inventoryItem, msg.inventoryIndex, inventoryController, (ItemSlot)msg.slot);
					}
					break;
				case InventoryType.Equipment:
					break;
				case InventoryType.Bank:
					if (Character.TryGet(out BankController bankController) &&
						bankController.TryGetItem(msg.inventoryIndex, out Item bankItem))
					{
						Equip(bankItem, msg.inventoryIndex, bankController, (ItemSlot)msg.slot);
					}
					break;
				default: return;
			}
		}

		/// <summary>
		/// Server sent an unequip item broadcast.
		/// </summary>
		private void OnClientEquipmentUnequipItemBroadcastReceived(EquipmentUnequipItemBroadcast msg, Channel channel)
		{
			switch (msg.toInventory)
			{
				case InventoryType.Inventory:
					if (Character.TryGet(out InventoryController inventoryController))
					{
						Unequip(inventoryController, msg.slot, out List<Item> modifiedItems);
					}
					break;
				case InventoryType.Equipment:
					break;
				case InventoryType.Bank:
					if (Character.TryGet(out BankController bankController))
					{
						Unequip(bankController, msg.slot, out List<Item> modifiedItems);
					}
					break;
				default: return;
			}
		}
#endif

		public override bool CanManipulate()
		{
			if (!base.CanManipulate())
			{
				return false;
			}

			/*if ((character.State == CharacterState.Idle ||
				  character.State == CharacterState.Moving) &&
				  character.State != CharacterState.UsingObject &&
				  character.State != CharacterState.IsFrozen &&
				  character.State != CharacterState.IsStunned &&
				  character.State != CharacterState.IsMesmerized) return true;
			*/
			return true;
		}

		public void Activate(int index)
		{
			if (TryGetItem(index, out Item item))
			{
				Debug.Log("EquipmentController: using item in slot[" + index + "]");
				//items[index].OnUseItem();
			}
		}

		public bool Equip(Item item, int inventoryIndex, ItemContainer container, ItemSlot toSlot)
		{
			if (item == null ||
				!item.IsEquippable ||
				!CanManipulate())
			{
				return false;
			}

			EquippableItemTemplate Equippable = item.Template as EquippableItemTemplate;
			// make sure the slot type matches so we aren't equipping things in weird places
			if (Equippable == null || toSlot != Equippable.Slot)
			{
				return false;
			}

			byte slotIndex = (byte)toSlot;

			if (container != null)
			{
				if (TryGetItem(slotIndex, out Item previousItem) &&
					previousItem.IsEquippable)
				{
					previousItem.Equippable.Unequip();

					// swap the items
					if (!container.SetItemSlot(previousItem, inventoryIndex))
					{
						return false;
					}
				}
				else
				{
					// remove the item from the inventory
					container.RemoveItem(inventoryIndex);
				}
			}

			// put the new item in the correct slot
			if (!SetItemSlot(item, slotIndex))
			{
				return false;
			}

			// equip the item to the character (adds attributes.. etc..)
			if (item.IsEquippable)
			{
				item.Equippable.Equip(Character);
			}
			return true;
		}

		/// <summary>
		/// Unequips the item and puts it in the inventory.
		/// </summary>
		public bool Unequip(ItemContainer container, byte slot, out List<Item> modifiedItems)
		{
			if (!CanManipulate() ||
				!TryGetItem(slot, out Item item) ||
				container == null ||
				!container.CanAddItem(item))
			{
				modifiedItems = null;
				return false;
			}

			// try to add the item back to the inventory before we remove it from the slot
			if (!container.TryAddItem(item, out modifiedItems))
			{
				return false;
			}

			// unequip the item
			if (item.IsEquippable)
			{
				item.Equippable.Unequip();
			}

			// remove the equipped item
			SetItemSlot(null, slot);
			
			return true;
		}
	}
}