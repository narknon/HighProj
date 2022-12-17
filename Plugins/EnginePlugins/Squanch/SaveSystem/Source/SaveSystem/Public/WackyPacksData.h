#pragma once
#include "CoreMinimal.h"
#include "WackyPacksData.generated.h"

USTRUCT(BlueprintType)
struct FWackyPacksData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CardDescription;
    
    SAVESYSTEM_API FWackyPacksData();
};

