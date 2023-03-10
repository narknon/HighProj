#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "StaticMeshInfoCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Editor)
class UStaticMeshInfoCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true), Category="StaticMeshInfoCommandlet")
    TArray<FName> AssetsToSkip;
    
    UStaticMeshInfoCommandlet();
};

