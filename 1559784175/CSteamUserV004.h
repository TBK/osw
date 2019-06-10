class CSteamUserV004
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual unknown_ret LogOn( CSteamID ) = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret GetLogonState() = 0;
	virtual unknown_ret BConnected() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret IsVACBanned( int32 ) = 0;
	virtual unknown_ret RequireShowVACBannedMessage( int32 ) = 0;
	virtual unknown_ret AcknowledgeVACBanning( int32 ) = 0;
	virtual unknown_ret NClientGameIDAdd( int32 ) = 0;
	virtual unknown_ret RemoveClientGame( int32 ) = 0;
	virtual unknown_ret SetClientGameServer( int32, uint32, uint16 ) = 0;
	virtual unknown_ret SetSteam2Ticket( uint8 *, int32 ) = 0;
	virtual unknown_ret AddServerNetAddress( uint32, uint16 ) = 0;
	virtual unknown_ret SetEmail( char const* ) = 0;
	virtual unknown_ret GetSteamGameConnectToken( void *, int32 ) = 0;
	virtual unknown_ret SetRegistryString( EConfigSubTree, char const*, char const* ) = 0;
	virtual unknown_ret GetRegistryString( EConfigSubTree, char const*, char *, int32 ) = 0;
	virtual unknown_ret SetRegistryInt( EConfigSubTree, char const*, int32 ) = 0;
	virtual unknown_ret GetRegistryInt( EConfigSubTree, char const*, int32 * ) = 0;
	virtual unknown_ret InitiateGameConnection( void *, int32, CSteamID, int32, uint32, uint16, bool ) = 0;
	virtual unknown_ret TerminateGameConnection( uint32, uint16 ) = 0;
	virtual unknown_ret SetSelfAsPrimaryChatDestination() = 0;
	virtual unknown_ret IsPrimaryChatDestination() = 0;
	virtual unknown_ret RequestLegacyCDKey( uint32 ) = 0;
};

