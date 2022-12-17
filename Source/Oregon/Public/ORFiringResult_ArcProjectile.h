#pragma once
#include "CoreMinimal.h"
#include "ORFiringResult_Projectile.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "ORFiringResult_ArcProjectile.generated.h"

class AActor;
class AORAIController;
class UAnimSequence;

UCLASS(Blueprintable)
class OREGON_API UORFiringResult_ArcProjectile : public UORFiringResult_Projectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTravelTimeConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LateralSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TravelTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PeakHeightFudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AIAimPointOffsetRandomRanges;
    
    UORFiringResult_ArcProjectile();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClearViewToProbableShotApexFromSocket(UAnimSequence* AnimSequence, FName BoneName, int32 FrameIndex, FVector TargetOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasClearViewToProbableShotApex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AORAIController* GetORAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAIControllerTargetActor() const;
    
};

