#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayloadWithSource.h"
#include "ORGlobalEventPayloadWithTargetAndSource.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadWithTargetAndSource : public UORGlobalEventPayloadWithSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UORGlobalEventPayloadWithTargetAndSource();
};

