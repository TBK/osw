class CAdapterSteamNetworkingSocketSerialized002
{
	virtual unknown_ret SendP2PRendezvous( CSteamID, uint32, void const*, uint32 ) = 0;
	virtual unknown_ret SendP2PConnectionFailure( CSteamID, uint32, uint32, char const* ) = 0;
	virtual unknown_ret GetCertAsync() = 0;
	virtual unknown_ret GetNetworkConfigJSON( void *, uint32 ) = 0;
	virtual unknown_ret CacheRelayTicket( void const*, uint32 ) = 0;
	virtual unknown_ret GetCachedRelayTicketCount() = 0;
	virtual unknown_ret GetCachedRelayTicket( uint32, void *, uint32 ) = 0;
	virtual unknown_ret PostConnectionStateMsg( void const*, uint32 ) = 0;
};

