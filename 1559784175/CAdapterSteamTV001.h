class CAdapterSteamTV001
{
	virtual unknown_ret IsBroadcasting( int32 * ) = 0;
	virtual unknown_ret AddBroadcastGameData( char const*, char const* ) = 0;
	virtual unknown_ret RemoveBroadcastGameData( char const* ) = 0;
	virtual unknown_ret AddTimelineMarker( char const*, bool, uint8, uint8, uint8 ) = 0;
	virtual unknown_ret RemoveTimelineMarker() = 0;
	virtual unknown_ret AddRegion( char const*, char const*, SteamTVRegion_t const*, ESteamTVRegionBehavior ) = 0;
	virtual unknown_ret RemoveRegion( uint32 ) = 0;
};

