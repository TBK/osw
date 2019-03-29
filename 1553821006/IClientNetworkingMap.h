class IClientNetworkingMap
{
	virtual void * SendP2PPacket( CSteamID, void const*, uint32, EP2PSend, int32 ) = 0;
	virtual void * IsP2PPacketAvailable( uint32 *, int32 ) = 0;
	virtual void * ReadP2PPacket( void *, uint32, uint32 *, CSteamID *, int32 ) = 0;
	virtual void * AcceptP2PSessionWithUser( CSteamID ) = 0;
	virtual void * CloseP2PSessionWithUser( CSteamID ) = 0;
	virtual void * CloseP2PChannelWithUser( CSteamID, int32 ) = 0;
	virtual void * GetP2PSessionState( CSteamID, P2PSessionState_t * ) = 0;
	virtual void * AllowP2PPacketRelay( bool ) = 0;
	virtual void * CreateListenSocket( int32, uint32, uint16, bool ) = 0;
	virtual void * CreateP2PConnectionSocket( CSteamID, int32, int32, bool ) = 0;
	virtual void * CreateConnectionSocket( uint32, uint16, int32 ) = 0;
	virtual void * DestroySocket( uint32, bool ) = 0;
	virtual void * DestroyListenSocket( uint32, bool ) = 0;
	virtual void * SendDataOnSocket( uint32, void *, uint32, bool ) = 0;
	virtual void * IsDataAvailableOnSocket( uint32, uint32 * ) = 0;
	virtual void * RetrieveDataFromSocket( uint32, void *, uint32, uint32 * ) = 0;
	virtual void * IsDataAvailable( uint32, uint32 *, uint32 * ) = 0;
	virtual void * RetrieveData( uint32, void *, uint32, uint32 *, uint32 * ) = 0;
	virtual void * GetSocketInfo( uint32, CSteamID *, int32 *, uint32 *, uint16 * ) = 0;
	virtual void * GetListenSocketInfo( uint32, uint32 *, uint16 * ) = 0;
	virtual void * GetSocketConnectionType( uint32 ) = 0;
	virtual void * GetMaxPacketSize( uint32 ) = 0;
};

