#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "TexturePOTCheckCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UTexturePOTCheckCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UTexturePOTCheckCommandlet();
};

