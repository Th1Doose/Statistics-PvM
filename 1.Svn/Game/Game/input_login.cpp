//Search for:
ch->StartCheckSpeedHackEvent();

//Add after:
#ifdef __STATISTICS__
	ch->StatisticsPacket();
#endif