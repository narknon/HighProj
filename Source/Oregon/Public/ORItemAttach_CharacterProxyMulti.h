#pragma once
#include "CoreMinimal.h"
#include "ORItemAttach_CharacterProxy.h"
#include "ORItemAttach_CharacterProxyMulti.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORItemAttach_CharacterProxyMulti : public AORItemAttach_CharacterProxy {
    GENERATED_BODY()
public:
    AORItemAttach_CharacterProxyMulti();
    UFUNCTION(BlueprintCallable)
    UMeshComponent* GetLastSocketsMeshComponent();
    
};

