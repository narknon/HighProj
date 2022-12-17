#pragma once
#include "CoreMinimal.h"
#include "STChoiceInstanceData.h"
#include "Engine/DataTable.h"
#include "STChoiceTableRow.generated.h"

USTRUCT(BlueprintType)
struct FSTChoiceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText QuestionString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FSTChoiceInstanceData> ChoiceIndexToData;
    
    SQUANCHTHEATER_API FSTChoiceTableRow();
};

