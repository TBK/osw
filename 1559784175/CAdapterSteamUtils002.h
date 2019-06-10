class CAdapterSteamUtils002
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
};

