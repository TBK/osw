class CAdapterSteamAppList001
{
	virtual unknown_ret GetNumInstalledApps() = 0;
	virtual unknown_ret GetInstalledApps( uint32 *, uint32 ) = 0;
	virtual unknown_ret GetAppName( uint32, char *, int32 ) = 0;
	virtual unknown_ret GetAppInstallDir( uint32, char *, int32 ) = 0;
	virtual unknown_ret GetAppBuildId( uint32 ) = 0;
};

