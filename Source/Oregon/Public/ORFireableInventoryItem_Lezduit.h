#pragma once
#include "CoreMinimal.h"
#include "ORFireableInventoryItem.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "ORFireableInventoryItem_Lezduit.generated.h"

UCLASS(Blueprintable)
class OREGON_API AORFireableInventoryItem_Lezduit : public AORFireableInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TargetingArc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> DryFireOffsets;
    
public:
    AORFireableInventoryItem_Lezduit();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingDistanceSq();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetingArc();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTargetCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDryFireOffset(int32 Index);
    
};

