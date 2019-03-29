class CAdapterSteamUnifiedMessages001
{
	virtual unknown_ret SendMethod( char const*, void const*, uint32, uint64 ) = 0;
	virtual unknown_ret GetMethodResponseInfo( uint64, uint32 *, EResult * ) = 0;
	virtual unknown_ret GetMethodResponseData( uint64, void *, uint32, bool ) = 0;
	virtual unknown_ret ReleaseMethod( uint64 ) = 0;
	virtual unknown_ret SendNotification( char const*, void const*, uint32 ) = 0;
};

