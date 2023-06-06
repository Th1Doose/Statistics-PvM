//Search for:
bool RecvMallItemDelPacket();

//Add after:
#ifdef __STATISTICS__
		bool RecvStatistics();
#endif