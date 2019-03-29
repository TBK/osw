class CAdapterSteamUserStats002
{
	virtual unknown_ret GetNumStats( CGameID ) = 0;
	virtual unknown_ret GetStatName( CGameID, uint32 ) = 0;
	virtual unknown_ret GetStatType( CGameID, char const* ) = 0;
	virtual unknown_ret GetNumAchievements( CGameID ) = 0;
	virtual unknown_ret GetAchievementName( CGameID, uint32 ) = 0;
	virtual unknown_ret RequestCurrentStats( CGameID ) = 0;
	virtual unknown_ret GetStat( CGameID, char const*, int32 * ) = 0;
	virtual unknown_ret GetStat( CGameID, char const*, float * ) = 0;
	virtual unknown_ret SetStat( CGameID, char const*, int32 ) = 0;
	virtual unknown_ret SetStat( CGameID, char const*, float ) = 0;
	virtual unknown_ret UpdateAvgRateStat( CGameID, char const*, float, double ) = 0;
	virtual unknown_ret GetAchievement( CGameID, char const*, bool * ) = 0;
	virtual unknown_ret SetAchievement( CGameID, char const* ) = 0;
	virtual unknown_ret ClearAchievement( CGameID, char const* ) = 0;
	virtual unknown_ret StoreStats( CGameID ) = 0;
	virtual unknown_ret GetAchievementIcon( CGameID, char const* ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( CGameID, char const*, char const* ) = 0;
	virtual unknown_ret IndicateAchievementProgress( CGameID, char const*, uint32, uint32 ) = 0;
};

