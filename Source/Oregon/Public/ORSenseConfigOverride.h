#pragma once
#include "CoreMinimal.h"
#include "ORSenseConfigOverride.generated.h"

class UAISenseConfig;

USTRUCT(BlueprintType)
struct OREGON_API FORSenseConfigOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> SensesConfig;
    
    FORSenseConfigOverride();
};

