#pragma once
#include "CoreMinimal.h"
#include "HealthTankWidgetInfo.h"
#include "ORWidget.h"
#include "ORWidget_HealthHUD.generated.h"

class UUserWidget;
class AORHealthTankItem;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_HealthHUD : public UORWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHealthTankWidgetInfo> HealthTankWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActiveHealthTankIndex;
    
public:
    UORWidget_HealthHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHealthTank(UUserWidget* Widget, AORHealthTankItem* LinkedTank);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthTankUpdated(AORHealthTankItem* Tank, float Current, float Max, float Change, bool DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthTankEmpty(AORHealthTankItem* Tank);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UUserWidget* CreateHealthTankWidget(int32 TankIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeActiveHealthTank(UUserWidget* Widget, AORHealthTankItem* ActiveTank);
    
    UFUNCTION(BlueprintCallable)
    void BindTankCallbacks();
    
};

