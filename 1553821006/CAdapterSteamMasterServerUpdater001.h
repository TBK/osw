class CAdapterSteamMasterServerUpdater001
{
	virtual unknown_ret SetActive( bool ) = 0;
	virtual unknown_ret SetHeartbeatInterval( int32 ) = 0;
	virtual unknown_ret HandleIncomingPacket( void const*, int32, uint32, uint16 ) = 0;
	virtual unknown_ret GetNextOutgoingPacket( void *, int32, uint32 *, uint16 * ) = 0;
	virtual unknown_ret SetBasicServerData( uint16, bool, char const*, char const*, uint16, bool, char const* ) = 0;
	virtual unknown_ret ClearAllKeyValues() = 0;
	virtual unknown_ret SetKeyValue( char const*, char const* ) = 0;
	virtual unknown_ret NotifyShutdown() = 0;
	virtual unknown_ret WasRestartRequested() = 0;
	virtual unknown_ret ForceHeartbeat() = 0;
	virtual unknown_ret AddMasterServer( char const* ) = 0;
	virtual unknown_ret RemoveMasterServer( char const* ) = 0;
	virtual unknown_ret GetNumMasterServers() = 0;
	virtual unknown_ret GetMasterServerAddress( int32, char *, int32 ) = 0;
};

