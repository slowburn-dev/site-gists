#pragma once

#include "CoreMinimal.h"

struct DCPLUGINCORE_API FFoo
{
    FName Name;
};

DCPLUGINCORE_API FString HelloFoo(FFoo& Foo);


