#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EChoiceCategory.h"
#include "STChoiceInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FSTChoiceInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChoiceCategory ChoiceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChoiceString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OptionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRepeatChoice;
    
    SQUANCHTHEATER_API FSTChoiceInstanceData();
};

