#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LipFlapInterface.generated.h"

class USkeletalMeshComponent;
class UCurveFloat;

UINTERFACE(Blueprintable)
class LIPFLAP_API ULipFlapInterface : public UInterface {
    GENERATED_BODY()
};

class LIPFLAP_API ILipFlapInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLips();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FlapLips(USkeletalMeshComponent* Skelmesh, FName LipMorphName, UCurveFloat* FlapCurve, float BlendshapeEndValue);
    
};

