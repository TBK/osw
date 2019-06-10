class IClientGameCoordinatorMap
{
	virtual void * SendMessage( uint32, uint32, void const*, uint32 ) = 0;
	virtual void * IsMessageAvailable( uint32, uint32 * ) = 0;
	virtual void * RetrieveMessage( uint32, uint32 *, void *, uint32, uint32 * ) = 0;
};

