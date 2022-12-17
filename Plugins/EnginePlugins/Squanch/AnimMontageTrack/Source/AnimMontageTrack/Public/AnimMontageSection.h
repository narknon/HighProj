#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "AnimMontageSectionParams.h"
#include "AnimMontageSection.generated.h"

UCLASS(Blueprintable)
class ANIMMONTAGETRACK_API UAnimMontageSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimMontageSectionParams Params;
    
    UAnimMontageSection();
};

