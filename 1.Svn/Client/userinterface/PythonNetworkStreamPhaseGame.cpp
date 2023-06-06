//Search for:
			case HEADER_GC_DRAGON_SOUL_REFINE:
				ret = RecvDragonSoulRefine();
				break;

//Add after:
#ifdef __STATISTICS__
			case HEADER_GC_STATISTICS:
				ret = RecvStatistics();
				break;
#endif

//Add at the end:
#ifdef __STATISTICS__
bool CPythonNetworkStream::RecvStatistics()
{
	GCStatistics KStatisticsGC;

	if (!Recv(sizeof(GCStatistics), &KStatisticsGC))
	{
		Tracen("Recv KStatisticsGC Packet Error");
		return false;
	}

	PyCallClassMemberFunc(m_apoPhaseWnd[PHASE_WINDOW_GAME], "ReceiveStatisticsPacket", Py_BuildValue("(iii)", 
		KStatisticsGC.boss, KStatisticsGC.stones, KStatisticsGC.monsters));
	return true;
}
#endif