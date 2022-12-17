#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ORLastGoodLocationTracker.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORLastGoodLocationTracker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeSafeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageTakenCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> OverlapTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> GroundTraceChannel;
    
    UORLastGoodLocationTracker();
    UFUNCTION(BlueprintCallable)
    void SetLastGoodLocation(AActor* LocationTracker);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledForRespawn(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabledForGameplay(bool bDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetLastGoodKnownLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnTookDamage();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckpointChanged(const FVector& CheckpointLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastGoodLocation(FVector& OutLocation, FRotator& OutRotation);
    
};

