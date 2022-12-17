#pragma once
#include "CoreMinimal.h"
#include "STAudioComponent.h"
#include "STDummyAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHTHEATER_API USTDummyAudioComponent : public USTAudioComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USTAudioComponent* RealAudioComponent;
    
    USTDummyAudioComponent();
};

