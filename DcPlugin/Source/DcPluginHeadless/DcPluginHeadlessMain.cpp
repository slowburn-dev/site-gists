#include "CoreMinimal.h"
#include "Misc/CommandLine.h"
#include "RequiredProgramMainCPPInclude.h"

#include "DcFoo.h"
#include "stdio.h"

IMPLEMENT_APPLICATION(DcPluginHeadless, "DcPluginHeadless");

INT32_MAIN_INT32_ARGC_TCHAR_ARGV()
{
	if (GEngineLoop.PreInit(ArgC, ArgV) != 0) // NOLINT
	{
		checkf(false, TEXT("Engine Preinit Failed"));
		return -1;
	}

	FFoo Foo{"DcPluginHeadless"};
	UE_LOG(LogTemp, Display, TEXT("%s"), *HelloFoo(Foo));

	RequestEngineExit(TEXT("DcPluginHeadless Main Exit"));
	FEngineLoop::AppPreExit();
	FEngineLoop::AppExit();

	return 0;
}


