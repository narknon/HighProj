#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Settings_EmotionTrack.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=SquanchEditor)
class EMOTIONSYSTEM_API USettings_EmotionTrack : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEmotionExtraDuration;
    
    USettings_EmotionTrack();
};

