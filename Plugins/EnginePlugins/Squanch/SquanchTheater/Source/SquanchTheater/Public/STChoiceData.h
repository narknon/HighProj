#pragma once
#include "CoreMinimal.h"
#include "STChoiceData.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FSTChoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* QuestionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCancelChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestionExitTime;
    
    SQUANCHTHEATER_API FSTChoiceData();
};

