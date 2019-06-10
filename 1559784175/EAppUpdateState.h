enum EAppUpdateState
{
	k_EAppUpdateStateNone = 0,	// None
	k_EAppUpdateStateReconfiguring = 2,	// Reconfiguring
	k_EAppUpdateStateValidating = 4,	// Validating
	k_EAppUpdateStateAddingFiles = 8,	// AddingFiles
	k_EAppUpdateStatePreallocating = 16,	// Preallocating
	k_EAppUpdateStateDownloading = 32,	// Downloading
	k_EAppUpdateStateStaging = 64,	// Staging
	k_EAppUpdateStateCommitting = 256,	// Committing
	k_EAppUpdateStateVerifying = 128,	// Verifying
	k_EAppUpdateStateStopping = 512,	// Stopping
	k_EAppUpdateStateRunning = 1,	// Running
}
