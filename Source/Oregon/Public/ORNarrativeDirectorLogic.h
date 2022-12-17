#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORNarrativeDirectorLogic.generated.h"

USTRUCT(BlueprintType)
struct FORNarrativeDirectorLogic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* ShouldPlayInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShouldPlayParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldInvertBoolean;
    
    OREGON_API FORNarrativeDirectorLogic();
};

