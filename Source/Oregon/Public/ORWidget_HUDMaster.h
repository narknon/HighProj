#pragma once
#include "CoreMinimal.h"
#include "UIManagerWidget.h"
#include "EPromptWidgetType.h"
#include "EHUDState.h"
#include "EBossHealthBarType.h"
#include "ORWidget_HUDPrompt.h"
#include "ORWidget_InfoPanel.h"
#include "ORWidget_HUDMaster.generated.h"

class UHUDHelpTextWidget;
class UORWidget_BossHealthBar;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_HUDMaster : public UUIManagerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHUDHelpTextWidget* HUD_HelpText_Widget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HUDPromptPrecacheCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InfoPanelPrecacheCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORWidget_HUDPrompt*> HUDPromptWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORWidget_HUDPrompt*> ActiveHUDPromptWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORWidget_InfoPanel*> InfoPanelWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORWidget_InfoPanel*> ActiveInfoPanelWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TMap<EBossHealthBarType, UORWidget_BossHealthBar*> BossHealthBars;
    
public:
    UORWidget_HUDMaster();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEquipmentWheel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHUDVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDState(EHUDState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHUDPromptVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCrosshairVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SendWidgetToPool(UORWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHUDStateChanged(EHUDState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHUDState GetHUDState();
    
    UFUNCTION(BlueprintCallable)
    UORWidget_BossHealthBar* GetBossHealthBar(EBossHealthBarType HealthBarType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UORWidget_InfoPanel* CreateInfoPanelWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UORWidget_HUDPrompt* CreateHUDPromptWidget(EPromptWidgetType WidgetType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseEquipmentWheel();
    
public:
    UFUNCTION(BlueprintCallable)
    UORWidget_HUDPrompt* CacheAndCreateHUDPromptWidget(EPromptWidgetType WidgetType);
    
};

