#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "DisableLightmapUVCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UDisableLightmapUVCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UDisableLightmapUVCommandlet();
};

