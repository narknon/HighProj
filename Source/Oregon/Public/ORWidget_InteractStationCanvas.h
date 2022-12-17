#pragma once
#include "CoreMinimal.h"
#include "ORWidget.h"
#include "InputCoreTypes.h"
#include "ORWidget_InteractStationCanvas.generated.h"

class UWidget;
class UUserWidget;
class UORAkComponent;
class AORInteractionStationManager;
class UORInteractionStationComponent;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class OREGON_API UORWidget_InteractStationCanvas : public UORWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* InteractionCanvasPanel;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AORInteractionStationManager> ParentInteractionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORInteractionStationComponent* ParentInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UIToggleFreeLookKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UIFocusPreviousKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UIFocusNextKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UIExitStationKeys;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> InteractionButtons;
    
public:
    UORWidget_InteractStationCanvas();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WidgetPushedToStack(UWidget* PushedWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void WidgetPoppedFromStack(UWidget* PoppedWidget);
    
    UFUNCTION(BlueprintCallable)
    bool IsInStation();
    
    UFUNCTION(BlueprintCallable)
    UORAkComponent* GetManagerORAkComponent();
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetLastFocusedWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FocusLost();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FocusGained();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExitedStation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnteredStationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnteredStation();
    
};

