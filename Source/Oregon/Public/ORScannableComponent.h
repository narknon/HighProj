#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPromptWidgetState.h"
#include "ORScannableEnabledChangedSignatureDelegate.h"
#include "InPlayerRangeSignatureDelegate.h"
#include "EndFocusSignatureDelegate.h"
#include "BeginFocusSignatureDelegate.h"
#include "DisableHighlightSignatureDelegate.h"
#include "EnableHighlightSignatureDelegate.h"
#include "ORScannableComponent.generated.h"

class UORWidget_InfoPanel;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORScannableComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORScannableEnabledChangedSignature OnScannableEnableChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnableHighlightSignature OnEnableHighlight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisableHighlightSignature OnDisableHighlight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginFocusSignature OnBeginFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndFocusSignature OnEndFocus;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInPlayerRangeSignature OnInPlayerRange;
    
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UORWidget_InfoPanel> CachedInfoPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPromptWidgetState>, FVector> WidgetOffsetByState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ScannableGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseInfoPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoPanelNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoPanelDescriptionText;
    
public:
    UORScannableComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool NewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PingScannable(const float PingTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCombatStateChanged(const bool bInCombat);
    
    UFUNCTION(BlueprintCallable)
    void MinimizeInfoPanel();
    
    UFUNCTION(BlueprintCallable)
    void MaximizeInfoPanel();
    
public:
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetScannableGameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetScannableActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInfoPanelWidgetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EndFocus();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateScannable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivateInfoPanelWidget();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateHighlight();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginFocus();
    
    UFUNCTION(BlueprintCallable)
    void ActivateScannable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateInfoPanelWidget();
    
    UFUNCTION(BlueprintCallable)
    void ActivateHighlight();
    
};

