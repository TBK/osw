class IClientUnifiedMessagesMap
{
	virtual void * SendMethod( char const*, void const*, uint32, uint64 ) = 0;
	virtual void * GetMethodResponseInfo( uint64, uint32 *, EResult * ) = 0;
	virtual void * GetMethodResponseData( uint64, void *, uint32, bool ) = 0;
	virtual void * ReleaseMethod( uint64 ) = 0;
	virtual void * SendNotification( char const*, void const*, uint32 ) = 0;
};

