class CAdapterSteamInventory001
{
	virtual unknown_ret GetResultStatus( int32 ) = 0;
	virtual unknown_ret GetResultItems( int32, SteamItemDetails_t *, uint32 * ) = 0;
	virtual unknown_ret GetResultTimestamp( int32 ) = 0;
	virtual unknown_ret CheckResultSteamID( int32, CSteamID ) = 0;
	virtual unknown_ret DestroyResult( int32 ) = 0;
	virtual unknown_ret GetAllItems( int32 * ) = 0;
	virtual unknown_ret GetItemsByID( int32 *, uint64 const*, uint32 ) = 0;
	virtual unknown_ret SerializeResult( int32, void *, uint32 * ) = 0;
	virtual unknown_ret DeserializeResult( int32 *, void const*, uint32, bool ) = 0;
	virtual unknown_ret GenerateItems( int32 *, int32 const*, uint32 const*, uint32 ) = 0;
	virtual unknown_ret GrantPromoItems( int32 * ) = 0;
	virtual unknown_ret AddPromoItem( int32 *, int32 ) = 0;
	virtual unknown_ret AddPromoItems( int32 *, int32 const*, uint32 ) = 0;
	virtual unknown_ret ConsumeItem( int32 *, uint64, uint32 ) = 0;
	virtual unknown_ret ExchangeItems( int32 *, int32 const*, uint32 const*, uint32, uint64 const*, uint32 const*, uint32 ) = 0;
	virtual unknown_ret TransferItemQuantity( int32 *, uint64, uint32, uint64 ) = 0;
	virtual unknown_ret SendItemDropHeartbeat() = 0;
	virtual unknown_ret TriggerItemDrop( int32 *, int32 ) = 0;
	virtual unknown_ret TradeItems( int32 *, CSteamID, uint64 const*, uint32 const*, uint32, uint64 const*, uint32 const*, uint32 ) = 0;
	virtual unknown_ret LoadItemDefinitions() = 0;
	virtual unknown_ret GetItemDefinitionIDs( int32 *, uint32 * ) = 0;
	virtual unknown_ret GetItemDefinitionProperty( int32, char const*, char *, uint32 * ) = 0;
	virtual unknown_ret RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
	virtual unknown_ret GetEligiblePromoItemDefinitionIDs( CSteamID, int32 *, uint32 * ) = 0;
};

