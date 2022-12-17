#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/HUD.h"
#include "EHUDState.h"
#include "Components/SlateWrapperTypes.h"
#include "ORHUD.generated.h"

class UTexture;
class UORHudDrawSubsystem;
class UORWidget_HUDMaster;

UCLASS(Blueprintable, NonTransient)
class OREGON_API AORHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORWidget_HUDMaster> MainWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORWidget_HUDMaster* MainWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* DebugDrawTexture;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UORHudDrawSubsystem* HudDrawSystem;
    
public:
    AORHUD();
    UFUNCTION(BlueprintCallable)
    void SetHUDWidgetVisibility(bool bShowHUDWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDState(EHUDState NewHUDState);
    
    UFUNCTION(BlueprintCallable)
    ESlateVisibility GetHUDWidgetVisibility();
    
    UFUNCTION(BlueprintCallable)
    EHUDState GetHUDState();
    
};

