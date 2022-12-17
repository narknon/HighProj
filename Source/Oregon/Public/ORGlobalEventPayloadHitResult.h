#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayloadWithSource.h"
#include "Engine/EngineTypes.h"
#include "ORGlobalEventPayloadHitResult.generated.h"

class UObject;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayloadHitResult : public UORGlobalEventPayloadWithSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OriginatingObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UORGlobalEventPayloadHitResult();
};

