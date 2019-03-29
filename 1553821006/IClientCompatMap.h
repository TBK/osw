class IClientCompatMap
{
	virtual void * BIsCompatLayerEnabled() = 0;
	virtual void EnableCompat( bool ) = 0;
	virtual void GetAvailableCompatTools( CUtlVector<CUtlString, CUtlMemory<CUtlString>> * ) = 0;
	virtual void SpecifyCompatTool( uint32, char const*, char const*, int32 ) = 0;
	virtual void * BIsCompatibilityToolEnabled( uint32 ) = 0;
	virtual const char * GetCompatToolName( uint32 ) = 0;
	virtual void * GetCompatToolMappingPriority( uint32 ) = 0;
	virtual const char * GetCompatToolDisplayName( char const* ) = 0;
};

