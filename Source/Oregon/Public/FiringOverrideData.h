#pragma once
#include "CoreMinimal.h"
#include "FiringComponentList.h"
#include "GameplayTagContainer.h"
#include "FiringOverrideData.generated.h"

class UItemImpactResult;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFiringOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFiringComponentList> OverrideItemComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UItemImpactResult*> OverrideImpactResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompleteOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FFiringComponentList> PreviousItemComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UItemImpactResult*> PreviousImpactResultList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> UpdatedWeaponMaterials;
    
    OREGON_API FFiringOverrideData();
};

