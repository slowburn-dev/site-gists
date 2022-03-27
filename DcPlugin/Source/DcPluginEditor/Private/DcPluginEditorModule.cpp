#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"
#include "DcFoo.h"

class FDcPluginEditorModule
	: public IModuleInterface
{
public:

	//~ IModuleInterface interface

	virtual void StartupModule() override
	{
		FFoo Foo{"EditorPlugin"};
		UE_LOG(LogTemp, Log, TEXT("%s"), *HelloFoo(Foo));
	}
	
	virtual void ShutdownModule() override 
	{

	}
};


IMPLEMENT_MODULE(FDcPluginEditorModule, DcPluginEditor);


