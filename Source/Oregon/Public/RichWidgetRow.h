#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "RichWidgetRow.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct OREGON_API FRichWidgetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidget> InlineWidget;
    
    FRichWidgetRow();
};

