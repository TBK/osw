class CAdapterSteamNetworkingSockets001
{
	virtual unknown_ret CreateListenSocketIP( SteamNetworkingIPAddr const& ) = 0;
	virtual unknown_ret ConnectByIPAddress( SteamNetworkingIPAddr const& ) = 0;
	virtual unknown_ret CreateListenSocketP2P( int32 ) = 0;
	virtual unknown_ret ConnectP2P( SteamNetworkingIdentity const&, int32 ) = 0;
	virtual unknown_ret AcceptConnection( uint32 ) = 0;
	virtual unknown_ret CloseConnection( uint32, int32, char const*, bool ) = 0;
	virtual unknown_ret CloseListenSocket( uint32 ) = 0;
	virtual unknown_ret SetConnectionUserData( uint32, int64 ) = 0;
	virtual unknown_ret GetConnectionUserData( uint32 ) = 0;
	virtual unknown_ret SetConnectionName( uint32, char const* ) = 0;
	virtual unknown_ret GetConnectionName( uint32, char *, int32 ) = 0;
	virtual unknown_ret SendMessageToConnection( uint32, void const*, uint32, int32 ) = 0;
	virtual unknown_ret FlushMessagesOnConnection( uint32 ) = 0;
	virtual unknown_ret ReceiveMessagesOnConnection( uint32, SteamNetworkingMessage_t **, int32 ) = 0;
	virtual unknown_ret ReceiveMessagesOnListenSocket( uint32, SteamNetworkingMessage_t **, int32 ) = 0;
	virtual unknown_ret GetConnectionInfo( uint32, SteamNetConnectionInfo_t * ) = 0;
	virtual unknown_ret GetQuickConnectionStatus( uint32, SteamNetworkingQuickConnectionStatus * ) = 0;
	virtual unknown_ret GetDetailedConnectionStatus( uint32, char *, int32 ) = 0;
	virtual unknown_ret GetListenSocketAddress( uint32, SteamNetworkingIPAddr * ) = 0;
	virtual unknown_ret CreateSocketPair( uint32 *, uint32 *, bool, SteamNetworkingIdentity const*, SteamNetworkingIdentity const* ) = 0;
	virtual unknown_ret GetIdentity( SteamNetworkingIdentity * ) = 0;
	virtual unknown_ret ReceivedRelayAuthTicket( void const*, int32, SteamDatagramRelayAuthTicket * ) = 0;
	virtual unknown_ret FindRelayAuthTicketForServer( SteamNetworkingIdentity const&, int32, SteamDatagramRelayAuthTicket * ) = 0;
	virtual unknown_ret ConnectToHostedDedicatedServer( SteamNetworkingIdentity const&, int32 ) = 0;
	virtual unknown_ret GetHostedDedicatedServerPort() = 0;
	virtual unknown_ret GetHostedDedicatedServerPOPID() = 0;
	virtual unknown_ret GetHostedDedicatedServerAddress( SteamDatagramHostedAddress * ) = 0;
	virtual unknown_ret CreateHostedDedicatedServerListenSocket( int32 ) = 0;
};

