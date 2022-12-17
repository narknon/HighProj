#pragma once
#include "CoreMinimal.h"
#include "Commandlets/Commandlet.h"
#include "StaticMeshLODGenerationCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UStaticMeshLODGenerationCommandlet : public UCommandlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssetsToSkip;
    
    UStaticMeshLODGenerationCommandlet();
};

