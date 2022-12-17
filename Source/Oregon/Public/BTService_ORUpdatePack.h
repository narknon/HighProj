#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_ORUpdatePack.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTService_ORUpdatePack : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorThesholdPCT;
    
    UBTService_ORUpdatePack();
};

