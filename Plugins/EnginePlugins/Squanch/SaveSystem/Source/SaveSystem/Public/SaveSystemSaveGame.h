#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "UObject/NoExportTypes.h"
#include "SaveData.h"
#include "SaveSystemSaveGame.generated.h"

class USaveSystemBindableSetState;

UCLASS(Blueprintable)
class SAVESYSTEM_API USaveSystemSaveGame : public USaveGame {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USaveSystemBindableSetState*> BindableSetStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveData SaveData;
    
public:
    USaveSystemSaveGame();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSaved();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDelete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime GetLastSaveDateTime() const;
    
};

