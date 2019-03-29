class CAdapterSteamMatchmaking004
{
	virtual unknown_ret GetFavoriteGameCount() = 0;
	virtual unknown_ret GetFavoriteGame( int32, uint32 *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 * ) = 0;
	virtual unknown_ret AddFavoriteGame( uint32, uint32, uint16, uint16, uint32, uint32 ) = 0;
	virtual unknown_ret RemoveFavoriteGame( uint32, uint32, uint16, uint16, uint32 ) = 0;
	virtual unknown_ret RequestLobbyList() = 0;
	virtual unknown_ret AddRequestLobbyListFilter( char const*, char const* ) = 0;
	virtual unknown_ret AddRequestLobbyListNumericalFilter( char const*, int32, int32 ) = 0;
	virtual unknown_ret AddRequestLobbyListSlotsAvailableFilter() = 0;
	virtual unknown_ret GetLobbyByIndex( int32 ) = 0;
	virtual unknown_ret CreateLobby( bool ) = 0;
	virtual unknown_ret JoinLobby( CSteamID ) = 0;
	virtual unknown_ret LeaveLobby( CSteamID ) = 0;
	virtual unknown_ret InviteUserToLobby( CSteamID, CSteamID ) = 0;
	virtual unknown_ret GetNumLobbyMembers( CSteamID ) = 0;
	virtual unknown_ret GetLobbyMemberByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret GetLobbyData( CSteamID, char const* ) = 0;
	virtual unknown_ret SetLobbyData( CSteamID, char const*, char const* ) = 0;
	virtual unknown_ret GetLobbyMemberData( CSteamID, CSteamID, char const* ) = 0;
	virtual unknown_ret SetLobbyMemberData( CSteamID, char const*, char const* ) = 0;
	virtual unknown_ret SendLobbyChatMsg( CSteamID, void const*, int32 ) = 0;
	virtual unknown_ret GetLobbyChatEntry( CSteamID, int32, CSteamID*, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret RequestLobbyData( CSteamID ) = 0;
	virtual unknown_ret SetLobbyGameServer( CSteamID, uint32, uint16, CSteamID ) = 0;
	virtual unknown_ret GetLobbyGameServer( CSteamID, uint32 *, uint16 *, CSteamID* ) = 0;
	virtual unknown_ret SetLobbyMemberLimit( CSteamID, int32 ) = 0;
	virtual unknown_ret GetLobbyMemberLimit( CSteamID ) = 0;
	virtual unknown_ret RequestFriendsLobbies() = 0;
};

