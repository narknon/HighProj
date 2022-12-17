#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "EORHouseExteriorLocation.h"
#include "EORHouseExteriorState.h"
#include "ORHouseStreamingSubsystem.generated.h"

class AORStreamingPortal;

UCLASS(Blueprintable)
class OREGON_API UORHouseStreamingSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FORHouseStreamingSubsystemExteriorStateChanged, EORHouseExteriorState, NewState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORHouseStreamingSubsystemExteriorStateChanged ExteriorStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORHouseExteriorLocation Location;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORStreamingPortal*> HousePortals;
    
public:
    UORHouseStreamingSubsystem();
    UFUNCTION(BlueprintCallable)
    void ToggleHousePortal();
    
    UFUNCTION(BlueprintCallable)
    void SyncPortalStreaming(const FGameplayTag& InRemotePortalId, const FName& InRemotePortalAddress);
    
    UFUNCTION(BlueprintCallable)
    void SetPortalStreaming(const FGameplayTag& InRemotePortalId);
    
    UFUNCTION(BlueprintCallable)
    void SetHouseExteriorLocation(EORHouseExteriorLocation InState);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag GetRemotePortalId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EORHouseExteriorState GetExteriorState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPortalStreaming();
    
};

