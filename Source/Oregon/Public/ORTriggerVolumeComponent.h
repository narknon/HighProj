#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORTriggerSubsystemComponentBase.h"
#include "UObject/NoExportTypes.h"
#include "ORTriggerVolumeComponentCallbackDelegate.h"
#include "ORTriggerVolumeComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTriggerVolumeComponent : public UORTriggerSubsystemComponentBase {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnLeaveWhenRemoved;
    
    UORTriggerVolumeComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsPlayerOnly(bool bInPlayerOnly);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool IsPointInVolume(const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerOnly() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerInVolume();
    
    UFUNCTION(BlueprintCallable)
    float GetSignedDistanceToEdge(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetNormalizedLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocalSpaceWorldLocation(const FVector& LocalSpaceLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetActorsInVolume(TSubclassOf<AActor> ClassFilter);
    
    UFUNCTION(BlueprintCallable)
    FVector ConstrainPoint(const FVector& Point, float& Fitness);
    
};

