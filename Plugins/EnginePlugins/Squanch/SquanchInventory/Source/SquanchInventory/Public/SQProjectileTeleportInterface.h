#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SQProjectileTeleportInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class USQProjectileTeleportInterface : public UInterface {
    GENERATED_BODY()
};

class ISQProjectileTeleportInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TeleportProjectile(AActor* Projectile, USceneComponent* MovementComponent);
    
};

