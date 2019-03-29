class IClientPartiesMap
{
	virtual void * GetNumActiveBeacons() = 0;
	virtual void * GetBeaconByIndex( uint32 ) = 0;
	virtual void * GetBeaconDetails( uint64, CSteamID *, SteamPartyBeaconLocation_t *, char *, int32 ) = 0;
	virtual void * JoinParty( uint64 ) = 0;
	virtual void * GetNumAvailableBeaconLocations( uint32 * ) = 0;
	virtual void * GetAvailableBeaconLocations( SteamPartyBeaconLocation_t *, uint32 ) = 0;
	virtual void * CreateBeacon( uint32, SteamPartyBeaconLocation_t *, int32, char const*, char const* ) = 0;
	virtual void OnReservationCompleted( uint64, CSteamID ) = 0;
	virtual void CancelReservation( uint64, CSteamID ) = 0;
	virtual void * ChangeNumOpenSlots( uint64, uint32 ) = 0;
	virtual void * DestroyBeacon( uint64 ) = 0;
	virtual void * GetBeaconLocationData( SteamPartyBeaconLocation_t, ESteamPartyBeaconLocationData, char *, int32 ) = 0;
	virtual void * ReservePartySlot( uint32, uint64 ) = 0;
};

