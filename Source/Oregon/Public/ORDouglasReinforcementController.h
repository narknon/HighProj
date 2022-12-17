#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "ORReinforcementData.h"
#include "ORDouglasReinforcementController.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API AORDouglasReinforcementController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> StopCharactersEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORReinforcementData> ReinforcementWaves;
    
public:
    AORDouglasReinforcementController();
    UFUNCTION(BlueprintCallable)
    void DropAIWave(int32 WaveIndex);
    
    UFUNCTION(BlueprintCallable)
    void DestroyRemainingAI();
    
};

