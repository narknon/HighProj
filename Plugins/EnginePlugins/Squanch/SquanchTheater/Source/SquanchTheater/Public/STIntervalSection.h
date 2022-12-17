#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "STIntervalSectionData.h"
#include "STIntervalSection.generated.h"

UCLASS(Blueprintable)
class SQUANCHTHEATER_API USTIntervalSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSTIntervalSectionData Data;
    
public:
    USTIntervalSection();
};

