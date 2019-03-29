class CAdapterSteamController003
{
	virtual unknown_ret Init() = 0;
	virtual unknown_ret Shutdown() = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetConnectedControllers( uint64 * ) = 0;
	virtual unknown_ret ShowBindingPanel( uint64 ) = 0;
	virtual unknown_ret GetActionSetHandle( char const* ) = 0;
	virtual unknown_ret ActivateActionSet( uint64, uint64 ) = 0;
	virtual unknown_ret GetCurrentActionSet( uint64 ) = 0;
	virtual unknown_ret GetDigitalActionHandle( char const* ) = 0;
	virtual unknown_ret GetDigitalActionData( uint64, uint64 ) = 0;
	virtual unknown_ret GetDigitalActionOrigins( uint64, uint64, uint64, EControllerActionOrigin * ) = 0;
	virtual unknown_ret GetAnalogActionHandle( char const* ) = 0;
	virtual unknown_ret GetAnalogActionData( uint64, uint64 ) = 0;
	virtual unknown_ret GetAnalogActionOrigins( uint64, uint64, uint64, EControllerActionOrigin * ) = 0;
	virtual unknown_ret StopAnalogActionMomentum( uint64, uint64 ) = 0;
	virtual unknown_ret TriggerHapticPulse( uint64, ESteamControllerPad, uint16 ) = 0;
	virtual unknown_ret TriggerRepeatedHapticPulse( uint64, ESteamControllerPad, uint16, uint16, uint16, uint32 ) = 0;
};

