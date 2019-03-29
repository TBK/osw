class CSteamFriendsV001
{
	virtual unknown_ret GetPersonaName() = 0;
	virtual unknown_ret SetPersonaName( char const* ) = 0;
	virtual unknown_ret GetPersonaState() = 0;
	virtual unknown_ret SetPersonaState( EPersonaState ) = 0;
	virtual unknown_ret AddFriend( CSteamID ) = 0;
	virtual unknown_ret RemoveFriend( CSteamID ) = 0;
	virtual unknown_ret HasFriend( CSteamID ) = 0;
	virtual unknown_ret GetFriendRelationship( CSteamID ) = 0;
	virtual unknown_ret GetFriendPersonaState( CSteamID ) = 0;
	virtual unknown_ret Deprecated_GetFriendGamePlayed( CSteamID, int32 *, uint32 *, uint16 * ) = 0;
	virtual unknown_ret GetFriendPersonaName( CSteamID ) = 0;
	virtual unknown_ret AddFriendByName( char const* ) = 0;
	virtual unknown_ret GetFriendCount() = 0;
	virtual unknown_ret GetFriendByIndex( int32 ) = 0;
	virtual unknown_ret SendMsgToFriend( CSteamID, EChatEntryType, char const* ) = 0;
	virtual unknown_ret SetFriendRegValue( CSteamID, char const*, char const* ) = 0;
	virtual unknown_ret GetFriendRegValue( CSteamID, char const* ) = 0;
	virtual unknown_ret GetFriendPersonaNameHistory( CSteamID, int32 ) = 0;
	virtual unknown_ret GetChatMessage( CSteamID, int32, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret SendMsgToFriend( CSteamID, EChatEntryType, void const*, int32 ) = 0;
	virtual unknown_ret GetChatIDOfChatHistoryStart( CSteamID ) = 0;
	virtual unknown_ret SetChatHistoryStart( CSteamID, int32 ) = 0;
	virtual unknown_ret ClearChatHistory( CSteamID ) = 0;
	virtual unknown_ret InviteFriendByEmail( char const* ) = 0;
	virtual unknown_ret GetBlockedFriendCount() = 0;
	virtual unknown_ret GetFriendGamePlayed( CSteamID, uint64 *, uint32 *, uint16 * ) = 0;
	virtual unknown_ret GetFriendGamePlayed2( CSteamID, uint64 *, uint32 *, uint16 *, uint16 * ) = 0;
};

