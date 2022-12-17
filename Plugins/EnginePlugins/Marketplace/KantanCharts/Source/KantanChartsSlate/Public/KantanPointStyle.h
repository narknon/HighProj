#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "KantanPointStyle.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class KANTANCHARTSSLATE_API UKantanPointStyle : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DataPointTexture;
    
    UPROPERTY(EditAnywhere)
    FIntPoint PointSizeTextureOffsets[3];
    
    UKantanPointStyle();
};

