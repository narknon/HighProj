#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "Styling/SlateColor.h"
#include "EPromptWidgetState.h"
#include "EPromptWidgetDirection.h"
#include "EPromptWidgetType.h"
#include "ORWidget_HUDPrompt.generated.h"

class UActorComponent;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_HUDPrompt : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPromptWidgetType> WidgetType;
    
protected:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UActorComponent> CachedSceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPromptWidgetState> CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPromptWidgetState> IntendedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPromptWidgetDirection PromptDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenXPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenYPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DefaultColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor OverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideTint;
    
public:
    UORWidget_HUDPrompt();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTint();
    
    UFUNCTION(BlueprintCallable)
    void SetState(TEnumAsByte<EPromptWidgetState> NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideTint(FSlateColor NewOverrideColor);
    
    UFUNCTION(BlueprintCallable)
    void Init(UActorComponent* LinkedSceneComponent);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPromptWidgetState> GetState();
    
    UFUNCTION(BlueprintCallable)
    void EnableOverrideTint(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StateChanged(TEnumAsByte<EPromptWidgetState> NewState, TEnumAsByte<EPromptWidgetState> OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Init();
    
};

