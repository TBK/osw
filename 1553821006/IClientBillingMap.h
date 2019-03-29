class IClientBillingMap
{
	virtual void * PurchaseWithActivationCode( char const* ) = 0;
	virtual void * HasActiveLicense( uint32 ) = 0;
	virtual void * GetLicenseInfo( uint32, uint32 *, uint32 *, int32 *, int32 *, EPaymentMethod *, uint32 *, int32 *, char * ) = 0;
	virtual void EnableTestLicense( uint32 ) = 0;
	virtual void DisableTestLicense( uint32 ) = 0;
	virtual void * GetAppsInPackage( uint32, uint32 *, uint32 ) = 0;
	virtual void * RequestFreeLicenseForApps( uint32 const*, uint32 ) = 0;
};

