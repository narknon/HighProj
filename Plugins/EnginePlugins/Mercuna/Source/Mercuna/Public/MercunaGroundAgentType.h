#pragma once
#include "CoreMinimal.h"
#include "MercunaGroundAgentType.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaGroundAgentType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FMercunaGroundAgentType();
};

