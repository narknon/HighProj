#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORDouglasHookPoint.generated.h"

class AORDouglasHookPoint;

UCLASS(Blueprintable)
class OREGON_API AORDouglasHookPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORDouglasHookPoint*> NextPossibleJumpPoints;
    
    AORDouglasHookPoint();
};

