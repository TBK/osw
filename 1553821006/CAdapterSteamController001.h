class CAdapterSteamController001
{
	virtual unknown_ret Init( char const* ) = 0;
	virtual unknown_ret Shutdown() = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetControllerState( uint32, SteamControllerState001_t * ) = 0;
	virtual unknown_ret TriggerHapticPulse( uint32, ESteamControllerPad, uint16 ) = 0;
	virtual unknown_ret SetOverrideMode( char const* ) = 0;
};

