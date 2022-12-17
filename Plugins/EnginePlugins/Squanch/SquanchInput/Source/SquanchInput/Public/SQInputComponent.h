#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "KeyCombo.h"
#include "GameFramework/PlayerInput.h"
#include "Components/InputComponent.h"
#include "ActionBindUpdatedDelegateDelegate.h"
#include "SQInputComponent.generated.h"

class USQBindManager;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class SQUANCHINPUT_API USQInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionBindUpdatedDelegate OnActionBindingUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USQBindManager> BindManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQBindManager* BindManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActiveBinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActiveAxes;
    
public:
    USQInputComponent();
    UFUNCTION(BlueprintCallable)
    void SetNewActionBind_BP(FName ActionName, FKeyCombo NewKeyCombo);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllKeybinds_BP(TArray<FName> ActionsToReset);
    
    UFUNCTION(BlueprintCallable)
    TArray<FInputAxisKeyMapping> GetKeysFromAxis(FName AxisName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FKeyCombo> GetKeyCombosFromAction(FName ActionName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllActionBindNames();
    
    UFUNCTION(BlueprintCallable)
    bool ComboContainsMatchingKey(FKeyCombo Combo, FKeyCombo OtherCombo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateAction(FName Action, FKeyCombo Combo);
    
};

