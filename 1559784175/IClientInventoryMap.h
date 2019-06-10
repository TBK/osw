class IClientInventoryMap
{
	virtual void * GetResultStatus( int32 ) = 0;
	virtual void DestroyResult( int32 ) = 0;
	virtual void * GetResultItems( int32, SteamItemDetails_t *, uint32, uint32 * ) = 0;
	virtual void * GetResultItemProperty( int32, uint32, char const*, char *, uint32, uint32 * ) = 0;
	virtual void * GetResultTimestamp( int32 ) = 0;
	virtual void * CheckResultSteamID( int32, CSteamID ) = 0;
	virtual void * SerializeResult( int32, void *, uint32, uint32 * ) = 0;
	virtual void * DeserializeResult( int32 *, void const*, uint32, bool ) = 0;
	virtual void * GetAllItems( int32 * ) = 0;
	virtual void * GetItemsByID( int32 *, uint64 const*, uint32 ) = 0;
	virtual void * GenerateItems( int32 *, int32 const*, uint32, uint32 const*, uint32 ) = 0;
	virtual void * AddPromoItems( int32 *, int32 const*, uint32 ) = 0;
	virtual void * ConsumeItem( int32 *, uint64, uint32 ) = 0;
	virtual void * ExchangeItems( int32 *, int32 const*, uint32, uint32 const*, uint32, uint64 const*, uint32, uint32 const*, uint32 ) = 0;
	virtual void * TransferItemQuantity( int32 *, uint64, uint32, uint64 ) = 0;
	virtual void SendItemDropHeartbeat() = 0;
	virtual void * TriggerItemDrop( int32 *, int32 ) = 0;
	virtual void * TradeItems( int32 *, CSteamID, uint64 const*, uint32, uint32 const*, uint32, uint64 const*, uint32, uint32 const*, uint32 ) = 0;
	virtual void * LoadItemDefinitions() = 0;
	virtual void * GetItemDefinitionIDs( int32 *, uint32, uint32 * ) = 0;
	virtual void * GetItemDefinitionProperty( int32, char const*, char *, uint32, uint32 * ) = 0;
	virtual void * RequestEligiblePromoItemDefinitionsIDs( CSteamID ) = 0;
	virtual void * GetEligiblePromoItemDefinitionIDs( CSteamID, int32 *, uint32, uint32 * ) = 0;
	virtual void * StartPurchase( int32 const*, uint32, uint32 const*, uint32 ) = 0;
	virtual void * RequestPrices() = 0;
	virtual void * GetNumItemsWithPrices() = 0;
	virtual void * GetItemsWithPrices( int32 *, uint64 *, uint64 *, uint32 ) = 0;
	virtual void * GetItemPrice( int32, uint64 *, uint64 * ) = 0;
	virtual void * StartUpdateProperties() = 0;
	virtual void * RemoveProperty( uint64, uint64, char const* ) = 0;
	virtual void * SetProperty( uint64, uint64, char const*, char const* ) = 0;
	virtual void * SetProperty( uint64, uint64, char const*, bool ) = 0;
	virtual void * SetProperty( uint64, uint64, char const*, int64 ) = 0;
	virtual void * SetProperty( uint64, uint64, char const*, float ) = 0;
	virtual void * SubmitUpdateProperties( uint64, int32 * ) = 0;
};

