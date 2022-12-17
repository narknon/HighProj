#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQDifficultySetting -FallbackName=ESQDifficultySetting
#include "ORGameInstanceBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UORGameInstanceBase : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLoad;
    
    UORGameInstanceBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseRecommendedDebugLoadouts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidSaveFile();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleControllerConnectionUIClosed(bool SuccessfulConnection, bool UICancelled, int32 PlatformUserID);
    
public:
    UFUNCTION(BlueprintCallable)
    void ContinueGame();
    
    UFUNCTION(BlueprintCallable)
    void BeginNewGame(ESQDifficultySetting InDifficulty);
    
};

