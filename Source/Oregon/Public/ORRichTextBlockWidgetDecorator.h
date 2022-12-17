#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "ORRichTextBlockWidgetDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORRichTextBlockWidgetDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WidgetSet;
    
public:
    UORRichTextBlockWidgetDecorator();
};

