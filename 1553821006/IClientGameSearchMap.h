class IClientGameSearchMap
{
	virtual void * AddGameSearchParams( char const*, char const* ) = 0;
	virtual void * SearchForGameWithLobby( CSteamID, int32, int32 ) = 0;
	virtual void * SearchForGameSolo( int32, int32 ) = 0;
	virtual void * AcceptGame() = 0;
	virtual void * DeclineGame() = 0;
	virtual void * RetrieveConnectionDetails( CSteamID, char *, int32 ) = 0;
	virtual void * EndGameSearch() = 0;
	virtual void * SetGameHostParams( char const*, char const* ) = 0;
	virtual void * SetConnectionDetails( char const*, int32 ) = 0;
	virtual void * RequestPlayersForGame( int32, int32, int32 ) = 0;
	virtual void * HostConfirmGameStart( uint64 ) = 0;
	virtual void * CancelRequestPlayersForGame() = 0;
	virtual void * SubmitPlayerResult( uint64, CSteamID, EPlayerResult_t ) = 0;
	virtual void * EndGame( uint64 ) = 0;
};

