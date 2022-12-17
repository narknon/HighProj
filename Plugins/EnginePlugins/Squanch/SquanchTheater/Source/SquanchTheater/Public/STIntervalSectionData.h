#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "STIntervalPayload.h"
#include "STIntervalSectionData.generated.h"

USTRUCT(BlueprintType)
struct FSTIntervalSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSTIntervalPayload> KeyValues;
    
public:
    SQUANCHTHEATER_API FSTIntervalSectionData();
};

