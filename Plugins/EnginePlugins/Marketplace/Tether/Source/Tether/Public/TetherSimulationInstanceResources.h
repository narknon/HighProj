#pragma once
#include "CoreMinimal.h"
#include "TetherSimulationInstanceResources.generated.h"

class UWorld;
class UBodySetup;

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationInstanceResources {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitialized;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBodySetup* BodySetup;
    
    FTetherSimulationInstanceResources();
};

