#pragma once
#include "CoreMinimal.h"
#include "ButtonPromptIcon.h"
#include "Engine/DataTable.h"
#include "EInputDeviceType.h"
#include "ButtonPromptRow.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FButtonPromptRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EInputDeviceType>, FButtonPromptIcon> DeviceIconMap;
    
    FButtonPromptRow();
};

