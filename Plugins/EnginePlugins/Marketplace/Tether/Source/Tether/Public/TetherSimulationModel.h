#pragma once
#include "CoreMinimal.h"
#include "TetherSimulationSegmentSeries.h"
#include "TetherSimulationSegment.h"
#include "UObject/NoExportTypes.h"
#include "TetherSimulationModel.generated.h"

USTRUCT(BlueprintType)
struct TETHER_API FTetherSimulationModel : public FTetherSimulationSegmentSeries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SimulationBaseWorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTetherSimulationSegment> Segments;
    
    FTetherSimulationModel();
};

