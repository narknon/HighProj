#pragma once
#include "CoreMinimal.h"
#include "ORPlayerInputComponent.h"
#include "ORPlayerInputComponent_XSCabinet.generated.h"

class APawn;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPlayerInputComponent_XSCabinet : public UORPlayerInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<APawn> XenoslaughterPawn;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORPlayerInputComponent> XenoslaughterInputComponent;
    
public:
    UORPlayerInputComponent_XSCabinet();
protected:
    UFUNCTION(BlueprintCallable)
    void XenoslaughterLoaded(APawn* XSPawn);
    
};

