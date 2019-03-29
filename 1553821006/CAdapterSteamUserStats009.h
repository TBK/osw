class CAdapterSteamUserStats009
{
	virtual unknown_ret RequestCurrentStats() = 0;
	virtual unknown_ret GetStat( char const*, int32 * ) = 0;
	virtual unknown_ret GetStat( char const*, float * ) = 0;
	virtual unknown_ret SetStat( char const*, int32 ) = 0;
	virtual unknown_ret SetStat( char const*, float ) = 0;
	virtual unknown_ret UpdateAvgRateStat( char const*, float, double ) = 0;
	virtual unknown_ret GetAchievement( char const*, bool * ) = 0;
	virtual unknown_ret SetAchievement( char const* ) = 0;
	virtual unknown_ret ClearAchievement( char const* ) = 0;
	virtual unknown_ret GetAchievementAndUnlockTime( char const*, bool *, uint32 * ) = 0;
	virtual unknown_ret StoreStats() = 0;
	virtual unknown_ret GetAchievementIcon( char const* ) = 0;
	virtual unknown_ret GetAchievementDisplayAttribute( char const*, char const* ) = 0;
	virtual unknown_ret IndicateAchievementProgress( char const*, uint32, uint32 ) = 0;
	virtual unknown_ret RequestUserStats( CSteamID ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, char const*, int32 * ) = 0;
	virtual unknown_ret GetUserStat( CSteamID, char const*, float * ) = 0;
	virtual unknown_ret GetUserAchievement( CSteamID, char const*, bool * ) = 0;
	virtual unknown_ret GetUserAchievementAndUnlockTime( CSteamID, char const*, bool *, uint32 * ) = 0;
	virtual unknown_ret ResetAllStats( bool ) = 0;
	virtual unknown_ret FindOrCreateLeaderboard( char const*, ELeaderboardSortMethod, ELeaderboardDisplayType ) = 0;
	virtual unknown_ret FindLeaderboard( char const* ) = 0;
	virtual unknown_ret GetLeaderboardName( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardEntryCount( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardSortMethod( uint64 ) = 0;
	virtual unknown_ret GetLeaderboardDisplayType( uint64 ) = 0;
	virtual unknown_ret DownloadLeaderboardEntries( uint64, ELeaderboardDataRequest, int32, int32 ) = 0;
	virtual unknown_ret DownloadLeaderboardEntriesForUsers( uint64, CSteamID *, int32 ) = 0;
	virtual unknown_ret GetDownloadedLeaderboardEntry( uint64, int32, LeaderboardEntry_t *, int32 *, int32 ) = 0;
	virtual unknown_ret UploadLeaderboardScore( uint64, ELeaderboardUploadScoreMethod, int32, int32 const*, int32 ) = 0;
	virtual unknown_ret AttachLeaderboardUGC( uint64, uint64 ) = 0;
	virtual unknown_ret GetNumberOfCurrentPlayers() = 0;
};

