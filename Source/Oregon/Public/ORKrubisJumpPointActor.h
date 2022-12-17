#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORKrubisJumpPointActor.generated.h"

class AORKrubisJumpPointActor;

UCLASS(Blueprintable)
class OREGON_API AORKrubisJumpPointActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAddToController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowPathStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPathTerminalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORKrubisJumpPointActor*> PossibleJumpPoints;
    
    AORKrubisJumpPointActor();
};

