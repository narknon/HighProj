#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputCoreTypes.h"
#include "ORGlobalEventListener.h"
#include "GameplayTagContainer.h"
#include "ORWidget_OnStateChangedDelegate.h"
#include "ORWidget.generated.h"



UCLASS(Blueprintable, EditInlineNew, Config=Input)
class OREGON_API UORWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidget_OnStateChanged OnWidgetPushed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWidget_OnStateChanged OnWidgetPopped;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UIAcceptKeys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> UICancelKeys;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FORGlobalEventListener EventPayloadListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UORWidget* CachedParent;
    
public:
    UORWidget();
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromEvent(const FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable)
    void UnsubscribeFromAllEvents();
    
    UFUNCTION(BlueprintCallable)
    void SubscribeToEvent(const FGameplayTag EventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnfocused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUICancel();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUIAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPushed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPopped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocused();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEventPayloadReceived(const UORGlobalEventPayload* Payload);
    
};

