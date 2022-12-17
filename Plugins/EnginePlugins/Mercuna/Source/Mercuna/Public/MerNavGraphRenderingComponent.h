#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "MerNavGraphRenderingComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMerNavGraphRenderingComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UMerNavGraphRenderingComponent();
};

