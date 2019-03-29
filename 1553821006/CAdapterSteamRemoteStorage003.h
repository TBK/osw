class CAdapterSteamRemoteStorage003
{
	virtual unknown_ret FileWrite( char const*, void const*, int32 ) = 0;
	virtual unknown_ret FileRead( char const*, void *, int32 ) = 0;
	virtual unknown_ret FileForget( char const* ) = 0;
	virtual unknown_ret FileDelete( char const* ) = 0;
	virtual unknown_ret FileShare( char const* ) = 0;
	virtual unknown_ret FileExists( char const* ) = 0;
	virtual unknown_ret FilePersisted( char const* ) = 0;
	virtual unknown_ret GetFileSize( char const* ) = 0;
	virtual unknown_ret GetFileTimestamp( char const* ) = 0;
	virtual unknown_ret GetFileCount() = 0;
	virtual unknown_ret GetFileNameAndSize( int32, int32 * ) = 0;
	virtual unknown_ret GetQuota( int32 *, int32 * ) = 0;
	virtual unknown_ret IsCloudEnabledForAccount() = 0;
	virtual unknown_ret IsCloudEnabledForApp() = 0;
	virtual unknown_ret SetCloudEnabledForApp( bool ) = 0;
	virtual unknown_ret UGCDownload( uint64 ) = 0;
	virtual unknown_ret GetUGCDetails( uint64, uint32 *, char **, int32 *, CSteamID * ) = 0;
	virtual unknown_ret UGCRead( uint64, void *, int32 ) = 0;
	virtual unknown_ret GetCachedUGCCount() = 0;
	virtual unknown_ret GetCachedUGCHandle( int32 ) = 0;
};

