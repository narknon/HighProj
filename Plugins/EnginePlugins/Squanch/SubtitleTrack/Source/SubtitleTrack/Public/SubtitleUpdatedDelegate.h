#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
#include "SubtitleUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FSubtitleUpdated, const FText, SubtitleText, AActor*, SpeakerActor, FGameplayTag, SpeakerTag, FSlateColor, TextColorOverride, FSlateFontInfo, FontOverride, int32, SubtitleSlot, bool, bAnySlotsActive, bool, bIgnoreDistance);

