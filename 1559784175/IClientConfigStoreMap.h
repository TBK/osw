class IClientConfigStoreMap
{
	virtual void * IsSet( EConfigStore, char const* ) = 0;
	virtual void * GetBool( EConfigStore, char const*, bool ) = 0;
	virtual void * GetInt( EConfigStore, char const*, int32 ) = 0;
	virtual void * GetUint64( EConfigStore, char const*, uint64 ) = 0;
	virtual void * GetFloat( EConfigStore, char const*, float ) = 0;
	virtual const char * GetString( EConfigStore, char const*, char const* ) = 0;
	virtual void * GetBinary( EConfigStore, char const*, uint8 *, uint32 ) = 0;
	virtual void * GetBinary( EConfigStore, char const*, CUtlBuffer * ) = 0;
	virtual void * GetBinaryWatermarked( EConfigStore, char const*, uint8 *, uint32 ) = 0;
	virtual void * SetBool( EConfigStore, char const*, bool ) = 0;
	virtual void * SetInt( EConfigStore, char const*, int32 ) = 0;
	virtual void * SetUint64( EConfigStore, char const*, uint64 ) = 0;
	virtual void * SetFloat( EConfigStore, char const*, float ) = 0;
	virtual void * SetString( EConfigStore, char const*, char const* ) = 0;
	virtual void * SetBinary( EConfigStore, char const*, uint8 const*, uint32 ) = 0;
	virtual void * SetBinaryWatermarked( EConfigStore, char const*, uint8 const*, uint32 ) = 0;
	virtual void * RemoveKey( EConfigStore, char const* ) = 0;
	virtual void * GetKeySerialized( EConfigStore, char const*, uint8 *, int32 ) = 0;
	virtual void * FlushToDisk( bool ) = 0;
};

