#pragma once
#include "CoreMinimal.h"
#include "ORGlobalEventPayload.h"
#include "GameplayTagContainer.h"
#include "ORGlobalEventPayload_ND.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API UORGlobalEventPayload_ND : public UORGlobalEventPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifetimeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorOverride;
    
    UORGlobalEventPayload_ND();
};

