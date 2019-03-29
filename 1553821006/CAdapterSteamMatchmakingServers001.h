class CAdapterSteamMatchmakingServers001
{
	virtual unknown_ret RequestInternetServerList( uint32, MatchMakingKeyValuePair_t **, uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret RequestLANServerList( uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret RequestFriendsServerList( uint32, MatchMakingKeyValuePair_t **, uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret RequestFavoritesServerList( uint32, MatchMakingKeyValuePair_t **, uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret RequestHistoryServerList( uint32, MatchMakingKeyValuePair_t **, uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret RequestSpectatorServerList( uint32, MatchMakingKeyValuePair_t **, uint32, _ISteamMatchmakingServerListResponse_v001 * ) = 0;
	virtual unknown_ret GetServerDetails( _EMatchMakingType_v001, int32 ) = 0;
	virtual unknown_ret CancelQuery( _EMatchMakingType_v001 ) = 0;
	virtual unknown_ret RefreshQuery( _EMatchMakingType_v001 ) = 0;
	virtual unknown_ret IsRefreshing( _EMatchMakingType_v001 ) = 0;
	virtual unknown_ret GetServerCount( _EMatchMakingType_v001 ) = 0;
	virtual unknown_ret RefreshServer( _EMatchMakingType_v001, int32 ) = 0;
	virtual unknown_ret PingServer( uint32, uint16, ISteamMatchmakingPingResponse * ) = 0;
	virtual unknown_ret PlayerDetails( uint32, uint16, ISteamMatchmakingPlayersResponse * ) = 0;
	virtual unknown_ret ServerRules( uint32, uint16, ISteamMatchmakingRulesResponse * ) = 0;
	virtual unknown_ret CancelServerQuery( int32 ) = 0;
};

