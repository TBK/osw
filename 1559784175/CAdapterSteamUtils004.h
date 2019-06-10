class CAdapterSteamUtils004
{
	virtual unknown_ret GetSecondsSinceAppActive() = 0;
	virtual unknown_ret GetSecondsSinceComputerActive() = 0;
	virtual unknown_ret GetConnectedUniverse() = 0;
	virtual unknown_ret GetServerRealTime() = 0;
	virtual unknown_ret GetIPCountry() = 0;
	virtual unknown_ret GetImageSize( int32, uint32 *, uint32 * ) = 0;
	virtual unknown_ret GetImageRGBA( int32, uint8 *, int32 ) = 0;
	virtual unknown_ret GetCSERIPPort( uint32 *, uint16 * ) = 0;
	virtual unknown_ret GetCurrentBatteryPower() = 0;
	virtual unknown_ret GetAppID() = 0;
	virtual unknown_ret SetOverlayNotificationPosition( ENotificationPosition ) = 0;
	virtual unknown_ret IsAPICallCompleted( uint64, bool * ) = 0;
	virtual unknown_ret GetAPICallFailureReason( uint64 ) = 0;
	virtual unknown_ret GetAPICallResult( uint64, void *, int32, int32, bool * ) = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetIPCCallCount() = 0;
	virtual unknown_ret SetWarningMessageHook( void ( * )( int32, char const* ) ) = 0;
	virtual unknown_ret IsOverlayEnabled() = 0;
};

