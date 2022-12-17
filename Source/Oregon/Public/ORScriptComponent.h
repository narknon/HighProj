#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORScriptComponent.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORScriptComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    UORScriptComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initalize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Deinitalize();
    
};

