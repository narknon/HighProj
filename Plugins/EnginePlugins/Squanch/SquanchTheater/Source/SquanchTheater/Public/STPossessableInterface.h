#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "STPossessableInterface.generated.h"

class USTPossessableComponent;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class USTPossessableInterface : public UInterface {
    GENERATED_BODY()
};

class ISTPossessableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual USTPossessableComponent* GetPossessableComponent() const PURE_VIRTUAL(GetPossessableComponent, return NULL;);
    
};

