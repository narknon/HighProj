#pragma once
#include "CoreMinimal.h"
#include "ORResource_PlayerPrimaryFire.h"
#include "ORResource_SweezyPrimaryFire.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORResource_SweezyPrimaryFire : public UORResource_PlayerPrimaryFire {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTempResourceCount;
    
    UORResource_SweezyPrimaryFire();
    UFUNCTION(BlueprintCallable)
    void ClearTempResource();
    
    UFUNCTION(BlueprintCallable)
    void AddTempResource();
    
};

