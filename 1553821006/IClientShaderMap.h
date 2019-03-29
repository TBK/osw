class IClientShaderMap
{
	virtual void * BIsShaderManagementEnabled() = 0;
	virtual void EnableShaderManagement( bool ) = 0;
	virtual void * GetShaderDepotsTotalDiskUsage() = 0;
	virtual void StartShaderScan( uint32, char const* ) = 0;
	virtual void * ProcessShaderCache( uint32 ) = 0;
	virtual void * SetupShaderCacheEnvironment( char *, uint32 ) = 0;
};

