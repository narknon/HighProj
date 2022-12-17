#pragma once
#include "CoreMinimal.h"
#include "SQSaveSystem.h"
#include "GameplayTagContainer.h"
#include "OnFloatSettingChangedDelegate.h"
#include "OnBoolSettingChangedDelegate.h"
#include "ORGameSaveSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameSaveSubsystem : public USQSaveSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged GunChatterRateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged GlobalChatterRateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged MouseADSSensitivityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged GamepadADSSensitivityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolSettingChanged BigEyeModeChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolSettingChanged MultigunModeChangedDelegate;
    
    UORGameSaveSubsystem();
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetDiscoveredRegions();
    
    UFUNCTION(BlueprintCallable)
    TSet<FGameplayTag> GetDiscoveredPortals();
    
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetDiscoveredPOIs();
    
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetCompletedHunterChallenges();
    
    UFUNCTION(BlueprintCallable)
    TSet<FName> GetCompletedAchievements();
    
    UFUNCTION(BlueprintCallable)
    void DebugClearProfile();
    
    UFUNCTION(BlueprintCallable)
    void ClearSave(bool bOnlyClearSwap);
    
};

