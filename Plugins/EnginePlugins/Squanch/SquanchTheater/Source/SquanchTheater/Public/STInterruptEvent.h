#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERandomMethod.h"
#include "STInterruptEvent.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FSTInterruptEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERandomMethod::Type> PlayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> ExitSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> ReentrySequences;
    
    SQUANCHTHEATER_API FSTInterruptEvent();
};

