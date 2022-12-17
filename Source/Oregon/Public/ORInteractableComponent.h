#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORDetachedTriggerComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPromptWidgetState.h"
#include "EPromptWidgetType.h"
#include "OnComponentInteractDelegate.h"
#include "OnOverlapEndDelegate.h"
#include "OnOverlapBeginDelegate.h"
#include "ORInteractableComponent.generated.h"

class AActor;
class AORCharacter;
class UORInteractorResult;
class UCapsuleComponent;
class UORWidget_HUDPrompt;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent : public UORDetachedTriggerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapBegin OverlapBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOverlapEnd OverlapEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentInteract InteractEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RequiredInteractCapability;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreOwnerDuringRankingTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAIOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORInteractorResult> InteractorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseDistancePercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterInteractionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetSocket;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> CurrentTargets;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORWidget_HUDPrompt> CachedInteractWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPromptWidgetState>, FVector> WidgetOffsetByState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPromptWidgetType> WidgetType;
    
public:
    UORInteractableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetWithinInteractionDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetWithinDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation, bool bInteractionDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetWithinCloseDist(UCapsuleComponent* TargetCollisionCapsule, FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowInteractWidget(FVector TargetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldRestrictByEyeVector(AORCharacter* InteractionCharacter, FVector EyeVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCancelFiringOnInteract();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractableLocation(const FVector& Location);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(AActor* OtherActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWidgetLocation();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetSocketLocation(AORCharacter* InteractionCharacter);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSocketLocation(AORCharacter* InteractionCharacter, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetRequiredInteractCapability();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInteractableLocation(AORCharacter* InteractionCharacter, bool bIgnoreOffset);
    
};

