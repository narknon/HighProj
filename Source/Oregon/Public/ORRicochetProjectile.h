#pragma once
#include "CoreMinimal.h"
#include "ORProjectile.h"
#include "Engine/EngineTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "Engine/EngineTypes.h"
#include "ORRicochetProjectile.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AORRicochetProjectile : public AORProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxRicochets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RicochetRedirectRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HiddenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LOSCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceScoreWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerCameraDotScoreWeight;
    
private:
    UPROPERTY(EditAnywhere)
    TMap<uint32, TWeakObjectPtr<AActor>> LOSChecks;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> ActiveLOSToTargets;
    
    UPROPERTY(EditAnywhere)
    uint32 VisibilityTraceCount;
    
public:
    AORRicochetProjectile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRicochetImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRicochetSpeed(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float CalcRicochetTargetScore(AActor* Target, const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowRicochetWithActor(AActor* OtherActor);
    
};

