class IClientGameServerStatsMap
{
	virtual void * RequestUserStats( CSteamID, CGameID ) = 0;
	virtual void * GetUserStat( CSteamID, CGameID, char const*, int32 * ) = 0;
	virtual void * GetUserStat( CSteamID, CGameID, char const*, float * ) = 0;
	virtual void * GetUserAchievement( CSteamID, CGameID, char const*, bool *, uint32 * ) = 0;
	virtual void * SetUserStat( CSteamID, CGameID, char const*, int32 ) = 0;
	virtual void * SetUserStat( CSteamID, CGameID, char const*, float ) = 0;
	virtual void * UpdateUserAvgRateStat( CSteamID, CGameID, char const*, float, double ) = 0;
	virtual void * SetUserAchievement( CSteamID, CGameID, char const* ) = 0;
	virtual void * ClearUserAchievement( CSteamID, CGameID, char const* ) = 0;
	virtual void * StoreUserStats( CSteamID, CGameID ) = 0;
	virtual void SetMaxStatsLoaded( uint32 ) = 0;
};

