﻿using System;
using System.Collections.Generic;

namespace FishMMO.Shared
{
	public interface IBuffController : ICharacterBehaviour
	{
		static Action<Buff> OnAddBuff;
		static Action<Buff> OnRemoveBuff;
		static Action<Buff> OnAddDebuff;
		static Action<Buff> OnRemoveDebuff;

		Dictionary<int, Buff> Buffs { get; }
		void Apply(BuffTemplate template);
		void Apply(Buff buff);
		void Remove(int buffID);
		void RemoveAll();
	}
}