class IClientAudioMap
{
	virtual void StartVoiceRecording() = 0;
	virtual void StopVoiceRecording() = 0;
	virtual void ResetVoiceRecording() = 0;
	virtual void * GetAvailableVoice( uint32 *, uint32 *, uint32 ) = 0;
	virtual void * GetVoice( bool, void *, uint32, uint32 *, bool, void *, uint32, uint32 *, uint32 ) = 0;
	virtual void * GetCompressedVoice( void *, uint32, uint32 * ) = 0;
	virtual void * DecompressVoice( void const*, uint32, void *, uint32, uint32 *, uint32 ) = 0;
	virtual void * GetVoiceOptimalSampleRate() = 0;
	virtual void * BAppUsesVoice( uint32 ) = 0;
};

