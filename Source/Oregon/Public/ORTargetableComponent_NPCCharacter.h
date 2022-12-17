#pragma once
#include "CoreMinimal.h"
#include "ORTargetableComponent_AICharacter.h"
#include "ORTargetableComponent_NPCCharacter.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent_NPCCharacter : public UORTargetableComponent_AICharacter {
    GENERATED_BODY()
public:
    UORTargetableComponent_NPCCharacter();
};

