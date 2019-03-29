enum EFileIOError
{
	k_EFileIOErrorNone = 0,	// None
	k_EFileIOErrorUnknown,	// Unknown
	k_EFileIOErrorFileNotFound,	// File Not Found
	k_EFileIOErrorDiskFull,	// Disk Full
	k_EFileIOErrorTimeout,	// Timeout
	k_EFileIOErrorAccessDenied,	// Access Denied
	k_EFileIOErrorInvalidHandle,	// Invalid Handle
	k_EFileIOErrorReadFailed = 9,	// Read Failed
	k_EFileIOErrorWriteFailed,	// Write Failed
	k_EFileIOErrorSeekFailed = 7,	// Seek Failed
	k_EFileIOErrorCanceled,	// Canceled
	k_EFileIOErrorEndOfFile = 11,	// End of File
	k_EFileIOErrorDeviceNotFound,	// Device Not Found
	k_EFileIOErrorDeviceCorrupt,	// Device Corrupt
	k_EFileIOErrorDeviceError,	// Device Error
	k_EFileIOErrorFileLocked,	// File Locked
	k_EFileIOErrorOutOfResources,	// Out of Resources
}
