#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "QueueLocationSubtitleDelegate.h"
#include "STAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API USTAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueueLocationSubtitle QueueLocationSubtitleDelegate;
    
    USTAudioComponent();
};

