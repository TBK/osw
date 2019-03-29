class CAdapterSteamGameServer003
{
	virtual unknown_ret LogOn() = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret BSecure() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret GSGetSteam2GetEncryptionKeyToSendToNewClient( void *, uint32 *, uint32 ) = 0;
	virtual unknown_ret GSSendUserConnect( uint32, uint32, uint16, void const*, uint32 ) = 0;
	virtual unknown_ret GSRemoveUserConnect( uint32 ) = 0;
	virtual unknown_ret GSSendUserDisconnect( CSteamID, uint32 ) = 0;
	virtual unknown_ret GSSetSpawnCount( uint32 ) = 0;
	virtual unknown_ret GSSetServerType( int32, uint32, uint32, uint16, uint16, uint16, char const*, char const*, bool ) = 0;
	virtual unknown_ret GSUpdateStatus( int32, int32, int32, char const*, char const*, char const* ) = 0;
	virtual unknown_ret GSCreateUnauthenticatedUser( CSteamID * ) = 0;
	virtual unknown_ret GSSetUserData( CSteamID, char const*, uint32 ) = 0;
	virtual unknown_ret GSUpdateSpectatorPort( uint16 ) = 0;
	virtual unknown_ret GSSetGameType( char const* ) = 0;
	virtual unknown_ret GSGetUserAchievementStatus( CSteamID, char const* ) = 0;
};

