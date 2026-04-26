#include "TestClass.h"

DEFINE_LOG_CATEGORY_STATIC(LogTestClass, Log, All)

void UTestClass::HelloWorld(const FString& arguments)
{
	UE_LOG(LogTestClass, Warning, TEXT("Hello %s  !!"), *arguments)
}
