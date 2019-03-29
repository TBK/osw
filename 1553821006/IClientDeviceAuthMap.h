class IClientDeviceAuthMap
{
	virtual void * AuthorizeLocalDevice( char const*, uint32 ) = 0;
	virtual void * DeauthorizeDevice( uint64 ) = 0;
	virtual void * RequestAuthorizationInfos() = 0;
	virtual void * GetDeviceAuthorizations( uint64 *, uint32, bool ) = 0;
	virtual void * GetDeviceAuthorizationInfo( uint64, uint32 *, uint32 *, uint32 *, bool *, char *, int32, char *, int32, char *, int32, uint32 * ) = 0;
	virtual void * GetAuthorizedBorrowers( uint32 *, uint32 ) = 0;
	virtual void * GetLocalUsers( uint32 *, uint32 ) = 0;
	virtual void * GetBorrowerInfo( uint32, char *, int32, bool * ) = 0;
	virtual void * UpdateAuthorizedBorrowers( uint32 const*, uint32, bool ) = 0;
	virtual void * GetSharedLibraryLockedBy( uint32 ) = 0;
	virtual void * GetSharedLibraryOwners( uint32 *, uint32 ) = 0;
};

