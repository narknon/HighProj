#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "ORSmoothPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSmoothPathFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSnapTurnDistance;
    
    UORSmoothPathFollowingComponent();
};

