#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "ORGlobalEventPayloadWithSource.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithSource : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Source;
    
    UORGlobalEventPayloadWithSource();
};

