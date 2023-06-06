//Search for:
	REMOVE_BIT(m_pointsInstant.instant_flag, INSTANT_FLAG_STUN);

	// ÇÃ·¹ÀÌ¾î Ä³¸¯ÅÍÀÌ¸é
	if (GetDesc() != NULL) {
		//
		// Å¬¶óÀÌ¾ðÆ®¿¡ ¿¡ÆåÆ® ÆÐÅ¶À» ´Ù½Ã º¸³½´Ù.
		//
		itertype(m_list_pkAffect) it = m_list_pkAffect.begin();

		while (it != m_list_pkAffect.end())
			SendAffectAddPacket(GetDesc(), *it++);
	}

//Add after:
#ifdef __STATISTICS__
	if (pkKiller && pkKiller->IsPC())
	{
		if (!IsPC())
		{
			if (GetMobRank() > 4 && !IsStone())
				pkKiller->SetBoss();
			if (IsStone())
				pkKiller->SetStones();
			if (IsMonster())
				pkKiller->SetMonsters();
		}
		if(IsPC())
			StatisticsPacket();
		pkKiller->StatisticsPacket();
	}
#endif