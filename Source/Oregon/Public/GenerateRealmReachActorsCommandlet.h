#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "GenerateRealmReachActorsCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UGenerateRealmReachActorsCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UGenerateRealmReachActorsCommandlet();
};

