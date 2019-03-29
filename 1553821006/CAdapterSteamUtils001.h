class CAdapterSteamUtils001
{
	virtual unknown_ret GetSecondsSinceAppActive() = 0;
	virtual unknown_ret GetSecondsSinceComputerActive() = 0;
	virtual unknown_ret GetConnectedUniverse() = 0;
	virtual unknown_ret GetServerRealTime() = 0;
	virtual unknown_ret GetIPCountry() = 0;
	virtual unknown_ret GetImageSize( int32, uint32 *, uint32 * ) = 0;
	virtual unknown_ret GetImageRGBA( int32, uint8 *, int32 ) = 0;
};

