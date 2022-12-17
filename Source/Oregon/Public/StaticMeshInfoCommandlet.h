#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "StaticMeshInfoCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UStaticMeshInfoCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssetsToSkip;
    
    UStaticMeshInfoCommandlet();
};

