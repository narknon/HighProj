#pragma once
#include "CoreMinimal.h"
#include "MerNavGraphRenderingComponent.h"
#include "MerNavOctreeRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavOctreeRenderingComponent : public UMerNavGraphRenderingComponent {
    GENERATED_BODY()
public:
    UMerNavOctreeRenderingComponent();
};

