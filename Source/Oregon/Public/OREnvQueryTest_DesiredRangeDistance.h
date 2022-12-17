#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Distance.h"
#include "DataProviders/AIDataProvider.h"
#include "OREnvQueryTest_DesiredRangeDistance.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class OREGON_API UOREnvQueryTest_DesiredRangeDistance : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvTestDistance::Type> TestMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> DistanceTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MinDesiredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue MaxDesiredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue InnerRangeRandomDistanceVariance;
    
public:
    UOREnvQueryTest_DesiredRangeDistance();
};

