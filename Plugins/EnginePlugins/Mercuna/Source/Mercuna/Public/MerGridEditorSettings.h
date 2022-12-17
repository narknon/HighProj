#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MerGridEditorSettings.generated.h"

USTRUCT(BlueprintType)
struct FMerGridEditorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NavigableColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    MERCUNA_API FMerGridEditorSettings();
};

