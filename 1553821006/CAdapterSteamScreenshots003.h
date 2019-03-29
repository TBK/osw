class CAdapterSteamScreenshots003
{
	virtual unknown_ret WriteScreenshot( void *, uint32, int32, int32 ) = 0;
	virtual unknown_ret AddScreenshotToLibrary( char const*, char const*, int32, int32 ) = 0;
	virtual unknown_ret TriggerScreenshot() = 0;
	virtual unknown_ret HookScreenshots( bool ) = 0;
	virtual unknown_ret SetLocation( uint32, char const* ) = 0;
	virtual unknown_ret TagUser( uint32, CSteamID ) = 0;
	virtual unknown_ret TagPublishedFile( uint32, uint64 ) = 0;
	virtual unknown_ret IsScreenshotsHooked() = 0;
	virtual unknown_ret AddVRScreenshotToLibrary( EVRScreenshotType, char const*, char const* ) = 0;
};

