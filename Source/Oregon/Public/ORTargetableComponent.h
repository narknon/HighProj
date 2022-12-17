#pragma once
#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORTargetableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORTargetableComponent : public UCapsuleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAimAdhesion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAimFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeFiredAt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TargetableGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    UORTargetableComponent();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bInEnabled);
    
    UFUNCTION(BlueprintCallable)
    void Reinitialize();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEnableTargetablesWithTag(const FGameplayTag TargetableTag);
    
    UFUNCTION(BlueprintCallable)
    void OnDisableTargetablesWithTag(const FGameplayTag TargetableTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FVector> GetTargetVisibilityPoints();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetCenter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetTargetBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetTargetableGameplayTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetMeleeTargetLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeFiredAt();
    
};

