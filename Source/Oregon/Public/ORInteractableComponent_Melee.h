#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent.h"
#include "ORInteractableComponent_Melee.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_Melee : public UORInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerMeleeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReflect;
    
    UORInteractableComponent_Melee();
};

