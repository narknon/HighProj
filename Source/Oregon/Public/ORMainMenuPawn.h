#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "ORMainMenuPawn.generated.h"

class UORPlayerInputComponent;

UCLASS(Blueprintable)
class AORMainMenuPawn : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORPlayerInputComponent> InputComponentClass;
    
    AORMainMenuPawn();
};

