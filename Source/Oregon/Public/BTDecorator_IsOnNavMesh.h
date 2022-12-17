#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsOnNavMesh.generated.h"

UCLASS(Blueprintable)
class OREGON_API UBTDecorator_IsOnNavMesh : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsOnNavMesh();
};

