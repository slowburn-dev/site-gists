#include "DcFoo.h"

FString HelloFoo(FFoo& Foo)
{
    return FString::Printf(TEXT("Hello %s"), *Foo.Name.ToString());
}
