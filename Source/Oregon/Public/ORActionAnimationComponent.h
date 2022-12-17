#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionAnimationData.h"
#include "ORActionAnimationComponent.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORActionAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionAnimationData> ActionData;
    
    UORActionAnimationComponent();
    UFUNCTION(BlueprintCallable)
    void SetActionAnimations(const FName& ActionName, const FActionAnimationData& Animations);
    
    UFUNCTION(BlueprintCallable)
    float PlayNextActionAnimation(const FName& ActionName);
    
    UFUNCTION(BlueprintCallable)
    float PlayActionAnimation(const FName& ActionName, int32 AnimIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationAsset* GetNextActionAnimation(const FName& ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimationAsset* GetActionAnimation(const FName& ActionName, int32 AnimIndex);
    
};

