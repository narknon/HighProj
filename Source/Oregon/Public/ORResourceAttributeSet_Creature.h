#pragma once
#include "CoreMinimal.h"
#include "SQResourceAttributeSet.h"
#include "AttributeValueChangedDelegate.h"
#include "SQGameplayAttributeData.h"
#include "ORResourceAttributeSet_Creature.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORResourceAttributeSet_Creature : public USQResourceAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData MaxActiveMinions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged MaxActiveMinionsChangedDelegate;
    
    UORResourceAttributeSet_Creature();
};

