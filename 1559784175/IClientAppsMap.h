class IClientAppsMap
{
	virtual void * GetAppData( uint32, char const*, char *, int32 ) = 0;
	virtual void * SetLocalAppConfig( uint32, uint8 *, int32 ) = 0;
	virtual void * GetInternalAppIDFromGameID( CGameID ) = 0;
	virtual void * GetAllOwnedMultiplayerApps( uint32 *, int32 ) = 0;
	virtual void * GetAppDataSection( uint32, int32, uint8 *, int32, bool ) = 0;
	virtual void * RequestAppInfoUpdate( uint32 const*, int32 ) = 0;
	virtual void * GetDLCCount( uint32 ) = 0;
	virtual void * BGetDLCDataByIndex( uint32, int32, uint32 *, bool *, char *, int32 ) = 0;
	virtual void * GetAppType( uint32 ) = 0;
	virtual void * GetStoreTagLocalization( ELanguage, uint32 *, int32, uint8 *, int32 ) = 0;
};

