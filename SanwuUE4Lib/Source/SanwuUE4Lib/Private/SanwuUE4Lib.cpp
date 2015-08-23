// Some copyright should be here...

#include "SanwuUE4LibPrivatePCH.h"



#define LOCTEXT_NAMESPACE "FSanwuUE4LibModule"

void FSanwuUE4LibModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FSanwuUE4LibModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FSanwuUE4LibModule, SanwuUE4Lib)