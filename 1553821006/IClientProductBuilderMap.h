class IClientProductBuilderMap
{
	virtual void * SignInstallScript( uint32, char const*, char const* ) = 0;
	virtual void * DRMWrap( uint32, char const*, char const*, char const*, uint32 ) = 0;
	virtual void * CEGWrap( uint32, char const*, char const*, char const* ) = 0;
};

