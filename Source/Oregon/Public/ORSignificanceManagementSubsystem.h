#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "ORSignificanceManagementSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API UORSignificanceManagementSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UORSignificanceManagementSubsystem();
    UFUNCTION(BlueprintCallable)
    void RegisterObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void DeregisterObject(UObject* Object);
    
};

