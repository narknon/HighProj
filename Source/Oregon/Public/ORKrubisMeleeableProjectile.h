#pragma once
#include "CoreMinimal.h"
#include "ORMeleeableProjectile_Enemy.h"
#include "ORKrubisMeleeableProjectile.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORKrubisMeleeableProjectile : public AORMeleeableProjectile_Enemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxObjectRicochets;
    
    AORKrubisMeleeableProjectile();
};

