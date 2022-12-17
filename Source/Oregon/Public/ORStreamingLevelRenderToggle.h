#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ORStreamingLevelRenderToggle.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORStreamingLevelRenderToggle : public UActorComponent {
    GENERATED_BODY()
public:
    UORStreamingLevelRenderToggle();
    UFUNCTION(BlueprintCallable)
    void UpdateState();
    
};

