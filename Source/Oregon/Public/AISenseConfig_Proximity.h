#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "AISenseConfig_Proximity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UAISenseConfig_Proximity : public UAISenseConfig {
    GENERATED_BODY()
public:
    UAISenseConfig_Proximity();
};

