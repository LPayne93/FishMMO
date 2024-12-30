using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations.Schema;
using Microsoft.EntityFrameworkCore;

namespace FishMMO.Database.Npgsql.Entities
{
	[Table("characters", Schema = "fish_mmo_postgresql")]
	[Index(nameof(Name))]
	[Index(nameof(Account))]
	public class TesttableEntity
    {
		[DatabaseGenerated(DatabaseGeneratedOption.Identity)]
		public long ID { get; set; }
		//[Collation("NOCASE")] // [COLLATE NOCASE for case insensitive compare. this way we can't both create 'Archer' and 'archer' as characters]
		// note: the collation has been added in the DbContext OnModelCreating function since the Postgres provider
		// doesn't support collations via attributes
		public string firstString { get; set; }
		public string secondString { get; set; }
		public float firstFloat { get; set; }
		public float secondFloat { get; set; }
		public int firstInt { get; set; }
		public int secondInt { get; set; }
	}
}