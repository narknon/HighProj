#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ButtonPromptIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct OREGON_API FButtonPromptIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> WidgetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WidgetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InlineTextBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush InlineTextPixelBrush;
    
    FButtonPromptIcon();
};

