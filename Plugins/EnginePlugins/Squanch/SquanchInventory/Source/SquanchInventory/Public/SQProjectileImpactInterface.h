#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/EngineTypes.h"
#include "SQProjectileImpactInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable, MinimalAPI)
class USQProjectileImpactInterface : public UInterface {
    GENERATED_BODY()
};

class ISQProjectileImpactInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BlockHitImpactWithActor(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AvoidedImpactResults(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowImpactWithActor(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowBounce(AActor* OtherActor);
    
};

