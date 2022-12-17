#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnAsyncSaveCompleteDelegate.h"
#include "OnFloatSettingChangedDelegate.h"
#include "OnBoolSettingChangedDelegate.h"
#include "SQSaveSystem.generated.h"

class USaveSystemSaveGame;
class USaveGame;
class UProfileSaveGame;

UCLASS(Abstract, Blueprintable)
class SAVESYSTEM_API USQSaveSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolSettingChanged InvertMouseYChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolSettingChanged InvertGamepadYChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged MouseSensitivityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatSettingChanged GamepadSensitivityChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSaveComplete OnAsyncSaveStartDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAsyncSaveComplete OnAsyncSaveCompleteDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveSystemSaveGame* RuntimeInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveSystemSaveGame* SoftSavedInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveSystemSaveGame*> DiskInstanceSwapChain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveSystemSaveGame* TransientInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProfileSaveGame* ProfileInstance;
    
public:
    USQSaveSystem();
    UFUNCTION(BlueprintCallable)
    void SetActiveGameSaveSlot(FName SlotName);
    
    UFUNCTION(BlueprintCallable)
    void RecoverGameSavesIfNecessary();
    
    UFUNCTION(BlueprintCallable)
    USaveGame* LoadDiskInstanceForSlot(FName SlotName, int32 UserIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void AttemptProfileDataSave();
    
};

