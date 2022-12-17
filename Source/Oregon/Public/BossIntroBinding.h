#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "BossIntroBinding.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct OREGON_API FBossIntroBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID Binding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
    FBossIntroBinding();
};

