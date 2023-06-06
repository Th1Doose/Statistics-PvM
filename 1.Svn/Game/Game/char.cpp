//Search for:
memset(&m_quickslot, 0, sizeof(m_quickslot));

//Add after:
#ifdef __STATISTICS__
	memset(&kills_pvm, 0, sizeof(kills_pvm));
#endif

//Search for:
	tab.sRandomSP = m_points.iRandomSP;

//Add after:
#ifdef __STATISTICS__
	tab.boss = GetBoss();
	tab.stones = GetStones();
	tab.monsters = GetMonsters();
#endif

//Search for:
m_points.iRandomSP = t->sRandomSP;

//Add after:
#ifdef __STATISTICS__
	kills_pvm.boss = t->boss;
	kills_pvm.stones = t->stones;
	kills_pvm.monsters = t->monsters;
#endif

//Search for:
void CHARACTER::SetLastPMPulse(void)
{
	m_iLastPMPulse = thecore_pulse() + 25;
}

//Add before:
#ifdef __STATISTICS__
void CHARACTER::StatisticsPacket()
{

	GCStatistics StatisticsGC;

	StatisticsGC.bHeader = HEADER_GC_STATISTICS;
	StatisticsGC.boss = GetBoss();
	StatisticsGC.stones = GetStones();
	StatisticsGC.monsters = GetMonsters();
	GetDesc()->Packet(&StatisticsGC, sizeof(GCStatistics));
}
#endif