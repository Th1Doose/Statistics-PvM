//Search for:
			"horse_stamina = %d, "
			"horse_skill_point = %d, "

//Add after:
#ifdef __STATISTICS__
			"boss = %d, "
			"stones = %d, "
			"monsters = %d, "
#endif

//Search for:
		pkTab->horse.sStamina,
		pkTab->horse_skill_point,

//Add after:
#ifdef __STATISTICS__
		pkTab->boss,
		pkTab->stones,
		pkTab->monsters
#endif

//Search for:
												"horse_stamina, "
												"UNIX_TIMESTAMP(NOW())-UNIX_TIMESTAMP(last_play), "
												"horse_skill_point, "

//Add after:
#ifdef __STATISTICS__
												"boss, "
												"stones, "
												"monsters "
#endif

//Search for:
	str_to_number(pkTab->logoff_interval, row[col++]);
	str_to_number(pkTab->horse_skill_point, row[col++]);

//Add after:
#ifdef __STATISTICS__
	str_to_number(pkTab->boss, row[col++]);
	str_to_number(pkTab->stones, row[col++]);
	str_to_number(pkTab->monsters, row[col++]);
#endif