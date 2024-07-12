﻿using FishMMO.Shared;
using UnityEngine;
using UnityEngine.UI;

namespace FishMMO.Client
{
	public class ImageCanvasTypeSettings : BaseCanvasTypeSettings
	{
		public override void ApplySettings(object component, Configuration configuration)
		{
			Image image = component as Image;
			if (image == null)
			{
				return;
			}
			if (image.sprite != null)
			{
				if (image.sprite.name.Equals("Background"))
				{
					// Make the sprite fully bright
					image.color = ParseColor("Primary", configuration);
				}
				else if (image.name.Contains("UI"))
				{
					image.color = ParseColor("Primary", configuration);
				}
				else
				{
					image.color = Color.white;
				}
			}
			else
			{
				if (image.name.Contains("Health"))
				{
					image.color = ParseColor("Health", configuration);
				}
				else if (image.name.Contains("Mana"))
				{
					image.color = ParseColor("Mana", configuration);
				}
				else if (image.name.Contains("Stamina"))
				{
					image.color = ParseColor("Stamina", configuration);
				}
			}
		}
	}
}