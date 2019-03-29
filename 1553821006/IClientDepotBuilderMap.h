class IClientDepotBuilderMap
{
	virtual void * BGetDepotBuildStatus( uint64, EDepotBuildStatus *, uint64 *, uint64 * ) = 0;
	virtual void * VerifyChunkStore( uint32, uint32, char const* ) = 0;
	virtual void * DownloadDepot( uint32, uint32, uint64, uint64, uint64, uint32 ) = 0;
	virtual void * StartDepotBuild( uint32, uint32, uint32, char const* ) = 0;
	virtual void * CommitAppBuild( uint32, uint32, uint32 const*, uint64 const*, char const*, char const* ) = 0;
};

