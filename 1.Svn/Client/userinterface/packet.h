//Search for:
HEADER_GC_PARTY_UNLINK                      = 92,

//Add after:
#ifdef __STATISTICS__
	HEADER_GC_STATISTICS						= 93,
#endif

//Search for:
#pragma pack(pop)

//Add before:
#ifdef __STATISTICS__
typedef struct command_kill_statistics_packet
{
	BYTE bHeader;
	int	boss;
	int	stones;
	int	monsters;
} GCStatistics;
#endif