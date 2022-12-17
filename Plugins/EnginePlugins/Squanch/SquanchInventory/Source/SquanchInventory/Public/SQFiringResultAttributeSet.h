#pragma once
#include "CoreMinimal.h"
#include "SQAttributeSet.h"
#include "AttributeValueChangedDelegate.h"
#include "SQGameplayAttributeData.h"
#include "SQFiringResultAttributeSet.generated.h"

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQFiringResultAttributeSet : public USQAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData PrimaryProjectileLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData FalloffMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData FalloffMinDistanceMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData FalloffMaxDistanceMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData FiringSpreadMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData ActiveFiringSpreadMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData ShotFiringSpreadModRecoveryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQGameplayAttributeData PrimaryShotsToFireMod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttributeValueChanged FiringSpreadModChangedDelegate;
    
    USQFiringResultAttributeSet();
};

