#pragma once
#include "CoreMinimal.h"
#include "ORAIController.h"
#include "ORAIBossController.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORAIBossController : public AORAIController {
    GENERATED_BODY()
public:
    AORAIBossController();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MusicPhaseChange(int32 PhaseNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitBossFight();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CompletedBossFight();
    
};

