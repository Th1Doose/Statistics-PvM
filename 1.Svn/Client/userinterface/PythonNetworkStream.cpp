//Search for:
			Set(HEADER_GC_DRAGON_SOUL_REFINE,		CNetworkPacketHeaderMap::TPacketType(sizeof(TPacketGCDragonSoulRefine), STATIC_SIZE_PACKET));

//Add after:
#ifdef __STATISTICS__
			Set(HEADER_GC_STATISTICS, CNetworkPacketHeaderMap::TPacketType(sizeof(GCStatistics), STATIC_SIZE_PACKET));
#endif