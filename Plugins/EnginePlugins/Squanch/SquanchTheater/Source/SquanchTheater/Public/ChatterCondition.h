#pragma once
#include "CoreMinimal.h"
#include "ChatterLogicOperator.h"
#include "ChatterCondition.generated.h"

USTRUCT(BlueprintType)
struct FChatterCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChatterLogicOperator LogicOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Glossary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Comparison;
    
    SQUANCHTHEATER_API FChatterCondition();
};

