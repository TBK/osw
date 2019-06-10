class IClientHTTPMap
{
	virtual void * CreateHTTPRequest( EHTTPMethod, char const* ) = 0;
	virtual void * SetHTTPRequestContextValue( uint32, uint64 ) = 0;
	virtual void * SetHTTPRequestNetworkActivityTimeout( uint32, uint32 ) = 0;
	virtual void * SetHTTPRequestHeaderValue( uint32, char const*, char const* ) = 0;
	virtual void * SetHTTPRequestGetOrPostParameter( uint32, char const*, char const* ) = 0;
	virtual void * SendHTTPRequest( uint32, uint64 * ) = 0;
	virtual void * SendHTTPRequestAndStreamResponse( uint32, uint64 * ) = 0;
	virtual void * DeferHTTPRequest( uint32 ) = 0;
	virtual void * PrioritizeHTTPRequest( uint32 ) = 0;
	virtual void * CancelHTTPRequest( uint32 ) = 0;
	virtual void * GetHTTPResponseHeaderSize( uint32, char const*, uint32 * ) = 0;
	virtual void * GetHTTPResponseHeaderValue( uint32, char const*, uint8 *, uint32 ) = 0;
	virtual void * GetHTTPResponseBodySize( uint32, uint32 * ) = 0;
	virtual void * GetHTTPResponseBodyData( uint32, uint8 *, uint32 ) = 0;
	virtual void * GetHTTPStreamingResponseBodyData( uint32, uint32, uint8 *, uint32 ) = 0;
	virtual void * ReleaseHTTPRequest( uint32 ) = 0;
	virtual void * GetHTTPDownloadProgressPct( uint32, float * ) = 0;
	virtual void * SetHTTPRequestRawPostBody( uint32, char const*, uint8 *, uint32 ) = 0;
	virtual void * CreateCookieContainer( bool ) = 0;
	virtual void * ReleaseCookieContainer( uint32 ) = 0;
	virtual void * SetCookie( uint32, char const*, char const*, char const* ) = 0;
	virtual void * SetHTTPRequestCookieContainer( uint32, uint32 ) = 0;
	virtual void * SetHTTPRequestUserAgentInfo( uint32, char const* ) = 0;
	virtual void * SetHTTPRequestRequiresVerifiedCertificate( uint32, bool ) = 0;
	virtual void * SetHTTPRequestAbsoluteTimeoutMS( uint32, uint32 ) = 0;
	virtual void * GetHTTPRequestWasTimedOut( uint32, bool * ) = 0;
};

