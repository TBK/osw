class CAdapterSteamParties002
{
	virtual unknown_ret GetNumActiveBeacons() = 0;
	virtual unknown_ret GetBeaconByIndex( uint32 ) = 0;
	virtual unknown_ret GetBeaconDetails( uint64, CSteamID *, SteamPartyBeaconLocation_t *, char *, int32 ) = 0;
	virtual unknown_ret JoinParty( uint64 ) = 0;
	virtual unknown_ret GetNumAvailableBeaconLocations( uint32 * ) = 0;
	virtual unknown_ret GetAvailableBeaconLocations( SteamPartyBeaconLocation_t *, uint32 ) = 0;
	virtual unknown_ret CreateBeacon( uint32, SteamPartyBeaconLocation_t *, char const*, char const* ) = 0;
	virtual unknown_ret OnReservationCompleted( uint64, CSteamID ) = 0;
	virtual unknown_ret CancelReservation( uint64, CSteamID ) = 0;
	virtual unknown_ret ChangeNumOpenSlots( uint64, uint32 ) = 0;
	virtual unknown_ret DestroyBeacon( uint64 ) = 0;
	virtual unknown_ret GetBeaconLocationData( SteamPartyBeaconLocation_t, ESteamPartyBeaconLocationData, char *, int32 ) = 0;
};

