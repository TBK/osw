class CAdapterSteamGameServer010
{
	virtual unknown_ret LogOn() = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret BSecure() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret SendUserConnectAndAuthenticate( uint32, void const*, uint32, CSteamID * ) = 0;
	virtual unknown_ret CreateUnauthenticatedUserConnection() = 0;
	virtual unknown_ret SendUserDisconnect( CSteamID ) = 0;
	virtual unknown_ret BUpdateUserData( CSteamID, char const*, uint32 ) = 0;
	virtual unknown_ret BSetServerType( uint32, uint32, uint16, uint16, uint16, char const*, char const*, bool ) = 0;
	virtual unknown_ret UpdateServerStatus( int32, int32, int32, char const*, char const*, char const* ) = 0;
	virtual unknown_ret UpdateSpectatorPort( uint16 ) = 0;
	virtual unknown_ret SetGameTags( char const* ) = 0;
	virtual unknown_ret GetGameplayStats() = 0;
	virtual unknown_ret GetServerReputation() = 0;
	virtual unknown_ret RequestUserGroupStatus( CSteamID, CSteamID ) = 0;
	virtual unknown_ret GetPublicIP() = 0;
	virtual unknown_ret SetGameData( char const* ) = 0;
	virtual unknown_ret UserHasLicenseForApp( CSteamID, uint32 ) = 0;
	virtual unknown_ret GetAuthSessionTicket( void *, int32, uint32 * ) = 0;
	virtual unknown_ret BeginAuthSession( void const*, int32, CSteamID ) = 0;
	virtual unknown_ret EndAuthSession( CSteamID ) = 0;
	virtual unknown_ret CancelAuthTicket( uint32 ) = 0;
};

