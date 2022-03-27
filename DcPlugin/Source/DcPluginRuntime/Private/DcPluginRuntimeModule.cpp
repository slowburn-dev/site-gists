#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "DcFoo.h"

class FDcPluginRuntimeModule
	: public IModuleInterface
{
public:

	//~ IModuleInterface interface

	virtual void StartupModule() override
	{
		FFoo Foo{"RuntimePlugin"};
		UE_LOG(LogTemp, Log, TEXT("%s"), *HelloFoo(Foo));
	}
	
	virtual void ShutdownModule() override 
	{

	}
};


IMPLEMENT_MODULE(FDcPluginRuntimeModule, DcPluginRuntime);


