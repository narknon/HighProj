#pragma once
#include "CoreMinimal.h"
#include "ORAICharacter.h"
#include "GameplayTagContainer.h"
#include "EBossHealthBarType.h"
#include "OnBossCharacterHealthTankEmptiedDelegate.h"
#include "ORAIBossCharacter.generated.h"

class UAkStateValue;
class UORAkComponent;
class AORHealthTankItem;
class UORWidget_BossHealthBar;

UCLASS(Blueprintable)
class OREGON_API AORAIBossCharacter : public AORAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBossCharacterHealthTankEmptied OnBossCharacterHealthTankEmptied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* ORAk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORWidget_BossHealthBar* BossHealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowHealthBarOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBossHealthBarType HealthBarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BossStartFightTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* BossCharacterMusicStateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BossName;
    
    AORAIBossCharacter();
    UFUNCTION(BlueprintCallable)
    bool SetBossFightPhase(int32 PhaseNumber, bool bDoTransitionToPhase, bool bIsRestart);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBossRestartAtPhase(int32 PhaseNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBossHealthTankUpdated(float Current, float Max, float Change, bool DamageEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBossHealthTankEmptied();
    
    UFUNCTION(BlueprintCallable)
    bool IsLastPhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HealthTankUpdated(AORHealthTankItem* Tank, float Current, float Max, float Change, bool DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void HealthTankEmptied(AORHealthTankItem* Tank);
    
public:
    UFUNCTION(BlueprintCallable)
    bool HasFightEnded();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCurrentPhaseNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossFightStarted_BP();
    
    UFUNCTION(BlueprintCallable)
    void BossFightStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BossDeathAbilityComplete();
    
};

