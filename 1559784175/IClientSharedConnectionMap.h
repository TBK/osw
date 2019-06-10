class IClientSharedConnectionMap
{
	virtual void * AllocateSharedConnection() = 0;
	virtual void ReleaseSharedConnection( uint32 ) = 0;
	virtual void * SendMessage( uint32, void const*, uint32 ) = 0;
	virtual void * SendMessageAndAwaitResponse( uint32, void const*, uint32 ) = 0;
	virtual void RegisterEMsgHandler( uint32, uint32 ) = 0;
	virtual void RegisterServiceMethodHandler( uint32, char const* ) = 0;
	virtual void * BPopReceivedMessage( uint32, CUtlBuffer *, uint32 * ) = 0;
};

