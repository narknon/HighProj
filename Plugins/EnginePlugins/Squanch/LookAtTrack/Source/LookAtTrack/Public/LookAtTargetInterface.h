#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "LookAtTargetInterface.generated.h"

UINTERFACE(Blueprintable)
class LOOKATTRACK_API ULookAtTargetInterface : public UInterface {
    GENERATED_BODY()
};

class LOOKATTRACK_API ILookAtTargetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetLookAtLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetFaceLocation();
    
};

