class CSteamUserV009
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret InitiateGameConnection( void *, int32, CSteamID, CGameID, uint32, uint16, bool ) = 0;
	virtual unknown_ret TerminateGameConnection( uint32, uint16 ) = 0;
	virtual unknown_ret TrackAppUsageEvent( CGameID, int32, char const* ) = 0;
	virtual unknown_ret RefreshSteam2Login() = 0;
};

