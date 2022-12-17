#pragma once
#include "CoreMinimal.h"
#include "SignificanceManager.h"
#include "SignificanceWeighting.h"
#include "ORSignificanceManager.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORSignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSignificanceWeighting> SignificanceBuckets;
    
    UORSignificanceManager();
};

