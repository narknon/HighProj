#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MerOctreeEditorSettings.generated.h"

USTRUCT(BlueprintType)
struct FMerOctreeEditorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NavigableColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HighCostColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor UnnavigableColor;
    
    MERCUNA_API FMerOctreeEditorSettings();
};

