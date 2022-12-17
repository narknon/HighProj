#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DifficultyFloat -FallbackName=DifficultyFloat
#include "BTDecorator_CooldownDifficulty.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_CooldownDifficulty : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDifficultyFloat CooldownTime;
    
    UBTDecorator_CooldownDifficulty();
};

