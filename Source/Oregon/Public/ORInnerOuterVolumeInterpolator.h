#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORInnerOuterVolumeInterpolatorCallbackDelegate.h"
#include "ORInnerOuterVolumeInterpolator.generated.h"

class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API AORInnerOuterVolumeInterpolator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* InnerVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* OuterVolumeComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORInnerOuterVolumeInterpolatorCallback OnValueChanged;
    
    AORInnerOuterVolumeInterpolator();
    UFUNCTION(BlueprintCallable)
    void HandleLeft(AActor* Actor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* Actor, int32 VolumeIndex);
    
};

