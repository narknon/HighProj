#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORInteractorResult.h"
#include "Engine/EngineTypes.h"
#include "ORInteractorResult_AITweenToTarget.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORInteractorResult_AITweenToTarget : public UORInteractorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORInteractorResult> PostAnchorActionClass;
    
    UORInteractorResult_AITweenToTarget();
    UFUNCTION(BlueprintCallable)
    void ActorTweenComplete(const FHitResult& ImpactResult);
    
};

