#pragma once
#include "CoreMinimal.h"
#include "ORInteractableComponent.h"
#include "ORInteractableComponent_Dialogue.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORInteractableComponent_Dialogue : public UORInteractableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasGunChoice;
    
    UORInteractableComponent_Dialogue();
    UFUNCTION(BlueprintCallable)
    void SetHasGunChoice(bool bGunChoice);
    
    UFUNCTION(BlueprintCallable)
    bool HasGunChoice();
    
};

