#pragma once
#include "CoreMinimal.h"
#include "SQAttributeSet.h"
#include "AttributeValueChangedDelegate.h"
#include "SQGameplayAttributeData.h"
#include "SQFireLoopAttributeSet.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQFireLoopAttributeSet : public USQAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData FireRateMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData PrimaryChargeSpeedMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData PrimaryFullAutoFireRateIncreaseMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged FireRateModChangedDelegate;
    
    USQFireLoopAttributeSet();
};

