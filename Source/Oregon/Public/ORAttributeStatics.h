#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ORAttributeStatics.generated.h"

class UAbilitySystemInterface;
class IAbilitySystemInterface;
class UORDamageableAttributeSet;
class UORCharacterAttributeSet;
class UORPlayerAttributeSet;

UCLASS(Blueprintable)
class OREGON_API UORAttributeStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UORAttributeStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetWalkSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSprintSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UORPlayerAttributeSet* GetPlayerSet(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMovementSpeedMod(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UORDamageableAttributeSet* GetDamageableSet(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCrouchSpeed(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UORCharacterAttributeSet* GetCharacterSet(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCameraSpeedMod(TScriptInterface<IAbilitySystemInterface> ASCOwner);
    
};

