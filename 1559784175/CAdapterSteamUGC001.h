class CAdapterSteamUGC001
{
	virtual unknown_ret CreateQueryUserUGCRequest( uint32, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret CreateQueryAllUGCRequest( EUGCQuery, EUGCMatchingUGCType, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret SendQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret GetQueryUGCResult( uint64, uint32, CAdapterSteamUGC001::SteamUGCDetails_t_v1 * ) = 0;
	virtual unknown_ret ReleaseQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret AddRequiredTag( uint64, char const* ) = 0;
	virtual unknown_ret AddExcludedTag( uint64, char const* ) = 0;
	virtual unknown_ret SetReturnLongDescription( uint64, bool ) = 0;
	virtual unknown_ret SetReturnTotalOnly( uint64, bool ) = 0;
	virtual unknown_ret SetCloudFileNameFilter( uint64, char const* ) = 0;
	virtual unknown_ret SetMatchAnyTag( uint64, bool ) = 0;
	virtual unknown_ret SetSearchText( uint64, char const* ) = 0;
	virtual unknown_ret SetRankedByTrendDays( uint64, uint32 ) = 0;
	virtual unknown_ret RequestUGCDetails( uint64 ) = 0;
};

