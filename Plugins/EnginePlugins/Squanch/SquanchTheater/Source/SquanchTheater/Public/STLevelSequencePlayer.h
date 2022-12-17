#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "STLevelSequencePlayer.generated.h"

class USTLCutWorker;

UCLASS(Blueprintable)
class SQUANCHTHEATER_API USTLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<USTLCutWorker> LCutWorker;
    
public:
    USTLevelSequencePlayer();
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
};

