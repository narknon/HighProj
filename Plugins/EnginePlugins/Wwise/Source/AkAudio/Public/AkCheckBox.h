#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Components/ContentWidget.h"
#include "UObject/NoExportTypes.h"
#include "OnBoolPropertyDropDetectedDelegate.h"
#include "OnWwiseItemDropDetectedDelegate.h"
#include "AkOnCheckBoxComponentStateChangedDelegate.h"
#include "Components/Widget.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "AkWwiseItemToControl.h"
#include "AkBoolPropertyToControl.h"
#include "AkCheckBox.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class AKAUDIO_API UAkCheckBox : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECheckBoxState CheckedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetCheckBoxState CheckedStateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheckBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkBoolPropertyToControl ThePropertyToControl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkWwiseItemToControl ItemToControl;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkOnCheckBoxComponentStateChanged AkOnCheckStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWwiseItemDropDetected OnItemDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBoolPropertyDropDetected OnPropertyDropped;
    
    UAkCheckBox();
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool InIsChecked);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckedState(ECheckBoxState InCheckedState);
    
    UFUNCTION(BlueprintCallable)
    void SetAkItemId(const FGuid& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetAkBoolProperty(const FString& ItemProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECheckBoxState GetCheckedState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAkProperty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetAkItemId() const;
    
};
