#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "ORGlobalEventPayloadWithFloat.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithFloat : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UORGlobalEventPayloadWithFloat();
};

