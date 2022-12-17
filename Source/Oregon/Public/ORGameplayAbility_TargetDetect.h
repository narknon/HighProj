#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORGameplayAbility.h"
#include "GameplayTagContainer.h"
#include "ORGameplayAbility_TargetDetect.generated.h"

class AActor;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class OREGON_API UORGameplayAbility_TargetDetect : public UORGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORTriggerVolumeComponent> TriggerVolumeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTagsForTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BannedTagsforTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerSphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDeadTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanTargetPlayer;
    
    UORGameplayAbility_TargetDetect();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetRemoved(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTargetAdded(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorExited(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEntered(AActor* OtherActor, int32 VolumeIndex);
    
};

