#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "EInventoryFireType.h"
#include "SQPhysicsProjectile.generated.h"

class ASQFireableInventoryItem;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API ASQPhysicsProjectile : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> ExplodeOnImpactTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShutdownOnImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShutdownLifespan;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ASQFireableInventoryItem> OwningItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInventoryFireType> FiringType;
    
public:
    ASQPhysicsProjectile();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldExplodeOnImpact(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginShutdown(bool bExploded);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(FGameplayTag InModeType, ASQFireableInventoryItem* InOwningItem, FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPrimitiveComponent* GetPhysicsComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyImpactEffects(const FHitResult& ImpactResult);
    
};

