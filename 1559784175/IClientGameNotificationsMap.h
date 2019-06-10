class IClientGameNotificationsMap
{
	virtual void * EnumerateNotifications( uint32 ) = 0;
	virtual void * GetNotificationCount( uint32 ) = 0;
	virtual void * GetNotification( uint32, int32, GameNotification_t * ) = 0;
	virtual void RemoveSession( uint32, uint64 ) = 0;
	virtual void UpdateSession( uint32, uint64 ) = 0;
};

