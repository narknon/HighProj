#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORAnchoredAnimationAnchor.generated.h"

UCLASS(Blueprintable)
class AORAnchoredAnimationAnchor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SupportedAction;
    
    AORAnchoredAnimationAnchor();
};

