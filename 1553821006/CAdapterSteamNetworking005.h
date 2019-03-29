class CAdapterSteamNetworking005
{
	virtual unknown_ret SendP2PPacket( CSteamID, void const*, uint32, EP2PSend, int32 ) = 0;
	virtual unknown_ret IsP2PPacketAvailable( uint32 *, int32 ) = 0;
	virtual unknown_ret ReadP2PPacket( void *, uint32, uint32 *, CSteamID *, int32 ) = 0;
	virtual unknown_ret AcceptP2PSessionWithUser( CSteamID ) = 0;
	virtual unknown_ret CloseP2PSessionWithUser( CSteamID ) = 0;
	virtual unknown_ret CloseP2PChannelWithUser( CSteamID, int32 ) = 0;
	virtual unknown_ret GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
	virtual unknown_ret AllowP2PPacketRelay( bool ) = 0;
	virtual unknown_ret CreateListenSocket( int32, uint32, uint16, bool ) = 0;
	virtual unknown_ret CreateP2PConnectionSocket( CSteamID, int32, int32, bool ) = 0;
	virtual unknown_ret CreateConnectionSocket( uint32, uint16, int32 ) = 0;
	virtual unknown_ret DestroySocket( uint32, bool ) = 0;
	virtual unknown_ret DestroyListenSocket( uint32, bool ) = 0;
	virtual unknown_ret SendDataOnSocket( uint32, void *, uint32, bool ) = 0;
	virtual unknown_ret IsDataAvailableOnSocket( uint32, uint32 * ) = 0;
	virtual unknown_ret RetrieveDataFromSocket( uint32, void *, uint32, uint32 * ) = 0;
	virtual unknown_ret IsDataAvailable( uint32, uint32 *, uint32 * ) = 0;
	virtual unknown_ret RetrieveData( uint32, void *, uint32, uint32 *, uint32 * ) = 0;
	virtual unknown_ret GetSocketInfo( uint32, CSteamID *, int32 *, uint32 *, uint16 * ) = 0;
	virtual unknown_ret GetListenSocketInfo( uint32, uint32 *, uint16 * ) = 0;
	virtual unknown_ret GetSocketConnectionType( uint32 ) = 0;
	virtual unknown_ret GetMaxPacketSize( uint32 ) = 0;
};

