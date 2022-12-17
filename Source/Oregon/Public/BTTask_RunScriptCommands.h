#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RunScriptCommands.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTTask_RunScriptCommands : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_RunScriptCommands();
};

