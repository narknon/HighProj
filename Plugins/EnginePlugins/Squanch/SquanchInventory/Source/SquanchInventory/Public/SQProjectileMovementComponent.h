#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "CustomEngine/DifficultyFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "SQProjectileMovementComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHINVENTORY_API USQProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProjectileHomingDelegate, USceneComponent*, NewHomingTargetComponent);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileHomingDelegate OnHomingTargetUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableProjectileAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat DifficultyBasedFinalSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat DifficultyBasedAccellerationTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTravelDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHomingWithGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceHomingVelocityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceHomingHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HomingTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
public:
    USQProjectileMovementComponent();
    UFUNCTION(BlueprintCallable)
    void SetNewVelocity(const FVector NewVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetHomingTarget(USceneComponent* NewHomingTargetComponent);
    
    UFUNCTION(BlueprintCallable)
    float GetTimeForDistanceTraveled(float DistanceTraveled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxTravelDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDistanceTraveledForTime(float Time);
    
};

