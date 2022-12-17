#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "Settings_LookAtTrack.generated.h"

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=SquanchEditor)
class LOOKATTRACK_API USettings_LookAtTrack : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PlayerSpeakerTag;
    
    USettings_LookAtTrack();
};

