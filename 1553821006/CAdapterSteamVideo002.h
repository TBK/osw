class CAdapterSteamVideo002
{
	virtual unknown_ret GetVideoURL( uint32 ) = 0;
	virtual unknown_ret IsBroadcasting( int32 * ) = 0;
	virtual unknown_ret GetOPFSettings( uint32 ) = 0;
	virtual unknown_ret GetOPFStringForApp( uint32, char *, int32 * ) = 0;
};

