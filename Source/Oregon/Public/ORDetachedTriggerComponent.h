#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORDetachedTriggerSubsystemComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "ORDetachedTriggerComponentEnabledChangedDelegate.h"
#include "ORTriggerVolumeComponentCallbackDelegate.h"
#include "ORDetachedTriggerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORDetachedTriggerComponent : public UORDetachedTriggerSubsystemComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerOnly;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTriggerVolumeComponentCallback OnEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORTriggerVolumeComponentCallback OnLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORDetachedTriggerComponentEnabledChanged OnDetachedTriggerComponentEnabledChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnLeaveWhenRemoved;
    
    UORDetachedTriggerComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsPlayerOnly(bool bInPlayerOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointInVolume(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    float GetSignedDistanceToEdge(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNormalizedLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocalSpaceWorldLocation(const FVector& LocalSpaceLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInVolume(TSubclassOf<AActor> ClassFilter);
    
};

