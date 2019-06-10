class CAdapterSteamGameSearch001
{
	virtual unknown_ret AddGameSearchParams( char const*, char const* ) = 0;
	virtual unknown_ret SearchForGameWithLobby( CSteamID, int32, int32 ) = 0;
	virtual unknown_ret SearchForGameSolo( int32, int32 ) = 0;
	virtual unknown_ret AcceptGame() = 0;
	virtual unknown_ret DeclineGame() = 0;
	virtual unknown_ret RetrieveConnectionDetails( CSteamID, char *, int32 ) = 0;
	virtual unknown_ret EndGameSearch() = 0;
	virtual unknown_ret SetGameHostParams( char const*, char const* ) = 0;
	virtual unknown_ret SetConnectionDetails( char const*, int32 ) = 0;
	virtual unknown_ret RequestPlayersForGame( int32, int32, int32 ) = 0;
	virtual unknown_ret HostConfirmGameStart( uint64 ) = 0;
	virtual unknown_ret CancelRequestPlayersForGame() = 0;
	virtual unknown_ret SubmitPlayerResult( uint64, CSteamID, EPlayerResult_t ) = 0;
	virtual unknown_ret EndGame( uint64 ) = 0;
};

