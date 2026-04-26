#pragma once
#include "CoreMinimal.h"
#include "TestClass.generated.h"

UCLASS(Blueprintable)
class UTestClass : public UObject { 
	GENERATED_BODY()
public: 
	UFUNCTION(BlueprintCallable)
	void HelloWorld(const FString& arguments);
};
