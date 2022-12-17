#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "BTService_ApplyGE.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class OREGON_API UBTService_ApplyGE : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UBTService_ApplyGE();
};

