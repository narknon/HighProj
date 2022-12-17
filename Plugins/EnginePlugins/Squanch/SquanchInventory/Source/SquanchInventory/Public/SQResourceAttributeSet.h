#pragma once
#include "CoreMinimal.h"
#include "SQAttributeSet.h"
#include "AttributeValueChangedDelegate.h"
#include "SQGameplayAttributeData.h"
#include "SQResourceAttributeSet.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQResourceAttributeSet : public USQAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData ResourceRegenRateMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData ResourceRegenBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData MaxPrimaryResourceMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData SupportResourceRegenReductionMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged ResourceRegenRateModChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged ResourceRegenBoostChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged ResourceMaxPrimaryModChangedDelegate;
    
    USQResourceAttributeSet();
};

