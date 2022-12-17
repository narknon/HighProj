#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "ORRichTextBlockButtonDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORRichTextBlockButtonDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ButtonIcons;
    
public:
    UORRichTextBlockButtonDecorator();
};

