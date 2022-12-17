#pragma once
#include "CoreMinimal.h"
#include "ORTargetableComponent_Character.h"
#include "ORTargetableComponent_AICharacter.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent_AICharacter : public UORTargetableComponent_Character {
    GENERATED_BODY()
public:
    UORTargetableComponent_AICharacter();
};

