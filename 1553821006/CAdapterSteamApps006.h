class CAdapterSteamApps006
{
	virtual unknown_ret BIsSubscribed() = 0;
	virtual unknown_ret BIsLowViolence() = 0;
	virtual unknown_ret BIsCybercafe() = 0;
	virtual unknown_ret BIsVACBanned() = 0;
	virtual unknown_ret GetCurrentGameLanguage() = 0;
	virtual unknown_ret GetAvailableGameLanguages() = 0;
	virtual unknown_ret BIsSubscribedApp( uint32 ) = 0;
	virtual unknown_ret BIsDlcInstalled( uint32 ) = 0;
	virtual unknown_ret GetEarliestPurchaseUnixTime( uint32 ) = 0;
	virtual unknown_ret BIsSubscribedFromFreeWeekend() = 0;
	virtual unknown_ret GetDLCCount() = 0;
	virtual unknown_ret BGetDLCDataByIndex( int32, uint32 *, bool *, char *, int32 ) = 0;
	virtual unknown_ret InstallDLC( uint32 ) = 0;
	virtual unknown_ret UninstallDLC( uint32 ) = 0;
	virtual unknown_ret RequestAppProofOfPurchaseKey( uint32 ) = 0;
	virtual unknown_ret GetCurrentBetaName( char *, int32 ) = 0;
	virtual unknown_ret MarkContentCorrupt( bool ) = 0;
	virtual unknown_ret GetInstalledDepots( uint32, uint32 *, uint32 ) = 0;
	virtual unknown_ret GetAppInstallDir( uint32, char *, uint32 ) = 0;
	virtual unknown_ret BIsAppInstalled( uint32 ) = 0;
	virtual unknown_ret GetAppOwner() = 0;
	virtual unknown_ret GetLaunchQueryParam( char const* ) = 0;
	virtual unknown_ret GetDlcDownloadProgress( uint32, uint64 *, uint64 * ) = 0;
};

