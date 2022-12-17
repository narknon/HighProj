#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OROnNewSpeakerRegisteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOROnNewSpeakerRegistered, FGameplayTag, SpeakerTag);

