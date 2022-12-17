#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "ORGlobalEventPayloadWithSourceWidget.generated.h"

class UWidget;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithSourceWidget : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Source;
    
    UORGlobalEventPayloadWithSourceWidget();
};

