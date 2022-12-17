#pragma once
#include "CoreMinimal.h"
#include "SubtitleSettings.generated.h"

USTRUCT(BlueprintType)
struct SUBTITLETRACK_API FSubtitleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeflectionX;
    
    FSubtitleSettings();
};

