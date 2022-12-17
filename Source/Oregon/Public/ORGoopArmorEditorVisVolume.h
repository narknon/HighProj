#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "ORGoopArmorEditorVisVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORGoopArmorEditorVisVolume : public ATriggerSphere {
    GENERATED_BODY()
public:
    AORGoopArmorEditorVisVolume();
private:
    UFUNCTION(BlueprintCallable)
    void Reapply();
    
};

