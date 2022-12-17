#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ORXenoslaughterMachineInterface.generated.h"

class UMaterialInterface;

UINTERFACE(Blueprintable, MinimalAPI)
class UORXenoslaughterMachineInterface : public UInterface {
    GENERATED_BODY()
};

class IORXenoslaughterMachineInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInterface* GetXenoslaughterScreenMaterial();
    
};

