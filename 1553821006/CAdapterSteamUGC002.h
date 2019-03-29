class CAdapterSteamUGC002
{
	virtual unknown_ret CreateQueryUserUGCRequest( uint32, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret CreateQueryAllUGCRequest( EUGCQuery, EUGCMatchingUGCType, uint32, uint32, uint32 ) = 0;
	virtual unknown_ret SendQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret GetQueryUGCResult( uint64, uint32, SteamUGCDetails_t * ) = 0;
	virtual unknown_ret ReleaseQueryUGCRequest( uint64 ) = 0;
	virtual unknown_ret AddRequiredTag( uint64, char const* ) = 0;
	virtual unknown_ret AddExcludedTag( uint64, char const* ) = 0;
	virtual unknown_ret SetReturnLongDescription( uint64, bool ) = 0;
	virtual unknown_ret SetReturnTotalOnly( uint64, bool ) = 0;
	virtual unknown_ret SetAllowCachedResponse( uint64, uint32 ) = 0;
	virtual unknown_ret SetCloudFileNameFilter( uint64, char const* ) = 0;
	virtual unknown_ret SetMatchAnyTag( uint64, bool ) = 0;
	virtual unknown_ret SetSearchText( uint64, char const* ) = 0;
	virtual unknown_ret SetRankedByTrendDays( uint64, uint32 ) = 0;
	virtual unknown_ret RequestUGCDetails( uint64, uint32 ) = 0;
	virtual unknown_ret CreateItem( uint32, EWorkshopFileType ) = 0;
	virtual unknown_ret StartItemUpdate( uint32, uint64 ) = 0;
	virtual unknown_ret SetItemTitle( uint64, char const* ) = 0;
	virtual unknown_ret SetItemDescription( uint64, char const* ) = 0;
	virtual unknown_ret SetItemVisibility( uint64, ERemoteStoragePublishedFileVisibility ) = 0;
	virtual unknown_ret SetItemTags( uint64, SteamParamStringArray_t const* ) = 0;
	virtual unknown_ret SetItemContent( uint64, char const* ) = 0;
	virtual unknown_ret SetItemPreview( uint64, char const* ) = 0;
	virtual unknown_ret SubmitItemUpdate( uint64, char const* ) = 0;
	virtual unknown_ret GetItemUpdateProgress( uint64, uint64 *, uint64 * ) = 0;
	virtual unknown_ret SubscribeItem( uint64 ) = 0;
	virtual unknown_ret UnsubscribeItem( uint64 ) = 0;
	virtual unknown_ret GetNumSubscribedItems() = 0;
	virtual unknown_ret GetSubscribedItems( uint64 *, uint32 ) = 0;
	virtual unknown_ret GetItemInstallInfo( uint64, uint64 *, char *, uint32 ) = 0;
	virtual unknown_ret GetItemUpdateInfo( uint64, bool *, bool *, uint64 *, uint64 * ) = 0;
};

