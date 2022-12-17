#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORGusDiskImpactInterface.generated.h"

class AORGusDiskProjectile;

UINTERFACE(Blueprintable, MinimalAPI)
class UORGusDiskImpactInterface : public UInterface {
    GENERATED_BODY()
};

class IORGusDiskImpactInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldGusAutoReflectProjectile(AORGusDiskProjectile* Disk);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGusAutoReflectProjectile(AORGusDiskProjectile* Disk);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetGusAutoReflectProjectileClass();
    
};

