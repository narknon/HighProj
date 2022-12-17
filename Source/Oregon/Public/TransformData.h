#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TransformInfo.h"
#include "ETransformState.h"
#include "TransformData.generated.h"

UCLASS(Blueprintable)
class OREGON_API UTransformData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true), Category="Transform Data")
    TMap<TEnumAsByte<ETransformState>, FTransformInfo> TransformData;
    
    UTransformData();
};

