class IClientScreenshotsMap
{
	virtual const char * GetShortcutDisplayName( CGameID ) = 0;
	virtual void SetShortcutDisplayName( CGameID, char const* ) = 0;
	virtual void * WriteScreenshot( CGameID, void *, uint32, int32, int32 ) = 0;
	virtual void * AddScreenshotToLibrary( CGameID, EVRScreenshotType, char const*, char const*, char const*, int32, int32 ) = 0;
	virtual void TriggerScreenshot( CGameID ) = 0;
	virtual void RequestScreenshotFromGame( uint32 ) = 0;
	virtual void * SetLocation( CGameID, uint32, char const* ) = 0;
	virtual void * TagUser( CGameID, uint32, CSteamID ) = 0;
	virtual void * TagPublishedFile( CGameID, uint32, uint64 ) = 0;
	virtual void * ResolvePath( CGameID, uint32, EScreenshotFile, char *, uint32 ) = 0;
	virtual void * GetSizeOnDisk( CGameID, uint32 ) = 0;
	virtual void * GetSizeInCloud( CGameID, uint32 ) = 0;
	virtual void * IsPersisted( CGameID, uint32 ) = 0;
	virtual void * GetNumGamesWithLocalScreenshots() = 0;
	virtual void * GetGameWithLocalScreenshots( int32 ) = 0;
	virtual void * GetLocalScreenshotCount( CGameID ) = 0;
	virtual void * GetLocalScreenshot( CGameID, int32, uint32 *, int32 *, int32 *, uint32 *, EUCMFilePrivacyState *, uint64 *, char *, uint32, bool * ) = 0;
	virtual void * GetLocalScreenshotByHandle( CGameID, uint32, int32 *, int32 *, uint32 *, EUCMFilePrivacyState *, uint64 *, char *, uint32, bool * ) = 0;
	virtual void * SetLocalScreenshotCaption( CGameID, uint32, char const* ) = 0;
	virtual void * SetLocalScreenshotPrivacy( CGameID, uint32, EUCMFilePrivacyState ) = 0;
	virtual void * SetLocalScreenshotSpoiler( CGameID, uint32, bool ) = 0;
	virtual void * StartBatch( CGameID ) = 0;
	virtual void * AddToBatch( uint32 ) = 0;
	virtual void * UploadBatch( EUCMFilePrivacyState ) = 0;
	virtual void * DeleteBatch( bool ) = 0;
	virtual void * CancelBatch() = 0;
	virtual void RecoverOldScreenshots() = 0;
	virtual void * GetTaggedUserCount( CGameID, uint32 ) = 0;
	virtual CSteamID GetTaggedUser( CGameID, uint32, int32 ) = 0;
	virtual void * GetLocation( CGameID, uint32, char *, uint32 ) = 0;
	virtual void * GetTaggedPublishedFileCount( CGameID, uint32 ) = 0;
	virtual void * GetTaggedPublishedFile( CGameID, uint32, int32 ) = 0;
	virtual void * GetScreenshotVRType( CGameID, uint32 ) = 0;
	virtual void * BGetUserScreenshotDirectory( char *, uint32 ) = 0;
};

