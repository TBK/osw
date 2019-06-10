class IClientGameStatsMap
{
	virtual void * GetNewSession( int8, uint64, int32, uint32 ) = 0;
	virtual void * EndSession( uint64, uint32, int16 ) = 0;
	virtual void * AddSessionAttributeInt( uint64, char const*, int32 ) = 0;
	virtual void * AddSessionAttributeString( uint64, char const*, char const* ) = 0;
	virtual void * AddSessionAttributeFloat( uint64, char const*, float ) = 0;
	virtual void * AddNewRow( uint64 *, uint64, char const* ) = 0;
	virtual void * CommitRow( uint64 ) = 0;
	virtual void * CommitOutstandingRows( uint64 ) = 0;
	virtual void * AddRowAttributeInt( uint64, char const*, int32 ) = 0;
	virtual void * AddRowAttributeString( uint64, char const*, char const* ) = 0;
	virtual void * AddRowAttributeFloat( uint64, char const*, float ) = 0;
	virtual void * AddSessionAttributeInt64( uint64, char const*, int64 ) = 0;
	virtual void * AddRowAttributeInt64( uint64, char const*, int64 ) = 0;
};

