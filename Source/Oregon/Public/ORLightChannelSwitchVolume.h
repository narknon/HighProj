#pragma once
#include "CoreMinimal.h"
#include "ORTriggerVolume.h"
#include "EORLightChannelSwitchType.h"
#include "ORLightChannelSwitchVolume.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORLightChannelSwitchVolume : public AORTriggerVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORLightChannelSwitchType Channel0Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORLightChannelSwitchType Channel1Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EORLightChannelSwitchType Channel2Operation;
    
    AORLightChannelSwitchVolume();
};

