﻿using System;
using System.ComponentModel.DataAnnotations.Schema;
using Microsoft.EntityFrameworkCore;

namespace FishMMO.Database.Npgsql.Entities
{
	[Table("scene_servers", Schema = "fish_mmo_postgresql")]
	[Index(nameof(Name))]
	public class SceneServerEntity
	{
		[DatabaseGenerated(DatabaseGeneratedOption.Identity)]
		public long ID { get; set; }
		public string Name { get; set; }
		public DateTime LastPulse { get; set; }
		public string Address { get; set; }
		public ushort Port { get; set; }
		public int CharacterCount { get; set; }
		public bool Locked { get; set; }
	}
}