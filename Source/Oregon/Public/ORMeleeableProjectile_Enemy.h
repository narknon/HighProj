#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORMeleeableProjectile.h"
#include "ORMeleeableProjectile_Enemy.generated.h"

class AActor;
class AORProjectile;
class UORInteractableComponent_Melee;

UCLASS(Blueprintable)
class OREGON_API AORMeleeableProjectile_Enemy : public AORMeleeableProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORInteractableComponent_Melee* MeleeInteractableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORProjectile> DeflectProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeflectProjectileMaxTravelDistance;
    
public:
    AORMeleeableProjectile_Enemy();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitDeflectProjectile(AActor* Player, AORProjectile* DeflectProjectile);
    
};

