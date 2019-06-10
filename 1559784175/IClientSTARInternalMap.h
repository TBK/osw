class IClientSTARInternalMap
{
	virtual void * SendSerializedMessage( void *, uint32 ) = 0;
	virtual void * GetMessageResponse( uint64, void *, uint32 ) = 0;
};

