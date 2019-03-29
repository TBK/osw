class CAdapterSteamApps004
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
};

