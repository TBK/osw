class CAdapterSteamRemoteStorage001
{
	virtual unknown_ret FileWrite( char const*, void const*, int32 ) = 0;
	virtual unknown_ret GetFileSize( char const* ) = 0;
	virtual unknown_ret FileRead( char const*, void *, int32 ) = 0;
	virtual unknown_ret FileExists( char const* ) = 0;
	virtual unknown_ret FileDelete( char const* ) = 0;
	virtual unknown_ret GetFileCount() = 0;
	virtual unknown_ret GetFileNameAndSize( int32, int32 * ) = 0;
	virtual unknown_ret GetQuota( int32 *, int32 * ) = 0;
};

