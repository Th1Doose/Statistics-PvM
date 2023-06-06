//Search for:
	BYTE			skill_group;
} CHARACTER_POINT;

//Add after:
#ifdef __STATISTICS__
typedef struct character_kills
{
	int	boss;
	int	stones;
	int	monsters;
} CHARACTER_KILLS;
#endif

//Search for:
		CHARACTER_POINT		m_points;
		CHARACTER_POINT_INSTANT	m_pointsInstant;

//Add after:
#ifdef __STATISTICS__
		CHARACTER_KILLS	kills_pvm;
#endif

//Search for:
};

ESex GET_SEX(LPCHARACTER ch);

//Add before:
#ifdef __STATISTICS__
	public:
		void			StatisticsPacket();

		void SetBoss() { kills_pvm.boss += 1; }
		int GetBoss() const { return kills_pvm.boss; }

		void SetStones() { kills_pvm.stones += 1; }
		int GetStones() const { return kills_pvm.stones; }

		void SetMonsters() { kills_pvm.monsters += 1; }
		int GetMonsters() const { return kills_pvm.monsters; }
#endif