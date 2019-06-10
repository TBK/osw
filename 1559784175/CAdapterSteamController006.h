class CAdapterSteamController006
{
	virtual unknown_ret Init() = 0;
	virtual unknown_ret Shutdown() = 0;
	virtual unknown_ret RunFrame() = 0;
	virtual unknown_ret GetConnectedControllers( uint64 * ) = 0;
	virtual unknown_ret ShowBindingPanel( uint64 ) = 0;
	virtual unknown_ret GetActionSetHandle( char const* ) = 0;
	virtual unknown_ret ActivateActionSet( uint64, uint64 ) = 0;
	virtual unknown_ret GetCurrentActionSet( uint64 ) = 0;
	virtual unknown_ret ActivateActionSetLayer( uint64, uint64 ) = 0;
	virtual unknown_ret DeactivateActionSetLayer( uint64, uint64 ) = 0;
	virtual unknown_ret DeactivateAllActionSetLayers( uint64 ) = 0;
	virtual unknown_ret GetActiveActionSetLayers( uint64, uint64 * ) = 0;
	virtual unknown_ret GetDigitalActionHandle( char const* ) = 0;
	virtual unknown_ret GetDigitalActionData( uint64, uint64 ) = 0;
	virtual unknown_ret GetDigitalActionOrigins( uint64, uint64, uint64, EControllerActionOrigin * ) = 0;
	virtual unknown_ret GetAnalogActionHandle( char const* ) = 0;
	virtual unknown_ret GetAnalogActionData( uint64, uint64 ) = 0;
	virtual unknown_ret GetAnalogActionOrigins( uint64, uint64, uint64, EControllerActionOrigin * ) = 0;
	virtual unknown_ret StopAnalogActionMomentum( uint64, uint64 ) = 0;
	virtual unknown_ret TriggerHapticPulse( uint64, ESteamControllerPad, uint16 ) = 0;
	virtual unknown_ret TriggerRepeatedHapticPulse( uint64, ESteamControllerPad, uint16, uint16, uint16, uint32 ) = 0;
	virtual unknown_ret TriggerVibration( uint64, uint16, uint16 ) = 0;
	virtual unknown_ret SetLEDColor( uint64, uint8, uint8, uint8, uint32 ) = 0;
	virtual unknown_ret GetGamepadIndexForController( uint64 ) = 0;
	virtual unknown_ret GetControllerForGamepadIndex( int32 ) = 0;
	virtual unknown_ret GetMotionData( uint64 ) = 0;
	virtual unknown_ret ShowDigitalActionOrigins( uint64, uint64, float, float, float ) = 0;
	virtual unknown_ret ShowAnalogActionOrigins( uint64, uint64, float, float, float ) = 0;
	virtual unknown_ret GetStringForActionOrigin( EControllerActionOrigin ) = 0;
	virtual unknown_ret GetGlyphForActionOrigin( EControllerActionOrigin ) = 0;
	virtual unknown_ret GetInputTypeForHandle( uint64 ) = 0;
};

