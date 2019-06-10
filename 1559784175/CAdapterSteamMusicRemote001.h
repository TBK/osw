class CAdapterSteamMusicRemote001
{
	virtual unknown_ret RegisterSteamMusicRemote( char const* ) = 0;
	virtual unknown_ret DeregisterSteamMusicRemote() = 0;
	virtual unknown_ret BIsCurrentMusicRemote() = 0;
	virtual unknown_ret BActivationSuccess( bool ) = 0;
	virtual unknown_ret SetDisplayName( char const* ) = 0;
	virtual unknown_ret SetPNGIcon_64x64( void *, uint32 ) = 0;
	virtual unknown_ret EnablePlayPrevious( bool ) = 0;
	virtual unknown_ret EnablePlayNext( bool ) = 0;
	virtual unknown_ret EnableShuffled( bool ) = 0;
	virtual unknown_ret EnableLooped( bool ) = 0;
	virtual unknown_ret EnableQueue( bool ) = 0;
	virtual unknown_ret EnablePlaylists( bool ) = 0;
	virtual unknown_ret UpdatePlaybackStatus( AudioPlayback_Status ) = 0;
	virtual unknown_ret UpdateShuffled( bool ) = 0;
	virtual unknown_ret UpdateLooped( bool ) = 0;
	virtual unknown_ret UpdateVolume( float ) = 0;
	virtual unknown_ret CurrentEntryWillChange() = 0;
	virtual unknown_ret CurrentEntryIsAvailable( bool ) = 0;
	virtual unknown_ret UpdateCurrentEntryText( char const* ) = 0;
	virtual unknown_ret UpdateCurrentEntryElapsedSeconds( int32 ) = 0;
	virtual unknown_ret UpdateCurrentEntryCoverArt( void *, uint32 ) = 0;
	virtual unknown_ret CurrentEntryDidChange() = 0;
	virtual unknown_ret QueueWillChange() = 0;
	virtual unknown_ret ResetQueueEntries() = 0;
	virtual unknown_ret SetQueueEntry( int32, int32, char const* ) = 0;
	virtual unknown_ret SetCurrentQueueEntry( int32 ) = 0;
	virtual unknown_ret QueueDidChange() = 0;
	virtual unknown_ret PlaylistWillChange() = 0;
	virtual unknown_ret ResetPlaylistEntries() = 0;
	virtual unknown_ret SetPlaylistEntry( int32, int32, char const* ) = 0;
	virtual unknown_ret SetCurrentPlaylistEntry( int32 ) = 0;
	virtual unknown_ret PlaylistDidChange() = 0;
};

