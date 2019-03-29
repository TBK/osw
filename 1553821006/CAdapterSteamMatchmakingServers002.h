class CAdapterSteamMatchmakingServers002
{
	virtual unknown_ret RequestInternetServerList( uint32, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret RequestLANServerList( uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret RequestFriendsServerList( uint32, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret RequestFavoritesServerList( uint32, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret RequestHistoryServerList( uint32, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret RequestSpectatorServerList( uint32, MatchMakingKeyValuePair_t **, uint32, ISteamMatchmakingServerListResponse * ) = 0;
	virtual unknown_ret ReleaseRequest( void * ) = 0;
	virtual unknown_ret GetServerDetails( void *, int32 ) = 0;
	virtual unknown_ret CancelQuery( void * ) = 0;
	virtual unknown_ret RefreshQuery( void * ) = 0;
	virtual unknown_ret IsRefreshing( void * ) = 0;
	virtual unknown_ret GetServerCount( void * ) = 0;
	virtual unknown_ret RefreshServer( void *, int32 ) = 0;
	virtual unknown_ret PingServer( uint32, uint16, ISteamMatchmakingPingResponse * ) = 0;
	virtual unknown_ret PlayerDetails( uint32, uint16, ISteamMatchmakingPlayersResponse * ) = 0;
	virtual unknown_ret ServerRules( uint32, uint16, ISteamMatchmakingRulesResponse * ) = 0;
	virtual unknown_ret CancelServerQuery( int32 ) = 0;
};

