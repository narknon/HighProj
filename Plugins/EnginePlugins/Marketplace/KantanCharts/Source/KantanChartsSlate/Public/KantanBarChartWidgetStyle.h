#pragma once
#include "CoreMinimal.h"
#include "KantanBarChartStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "KantanBarChartWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKantanBarChartWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanBarChartStyle ChartStyle;
    
    UKantanBarChartWidgetStyle();
};

