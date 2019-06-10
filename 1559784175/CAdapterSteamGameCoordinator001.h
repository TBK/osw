class CAdapterSteamGameCoordinator001
{
	virtual unknown_ret SendMessage( uint32, void const*, uint32 ) = 0;
	virtual unknown_ret IsMessageAvailable( uint32 * ) = 0;
	virtual unknown_ret RetrieveMessage( uint32 *, void *, uint32, uint32 * ) = 0;
};

