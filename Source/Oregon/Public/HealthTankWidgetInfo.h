#pragma once
#include "CoreMinimal.h"
#include "HealthTankWidgetInfo.generated.h"

class UUserWidget;
class AORHealthTankItem;

USTRUCT(BlueprintType)
struct FHealthTankWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORHealthTankItem* Tank;
    
    OREGON_API FHealthTankWidgetInfo();
};

