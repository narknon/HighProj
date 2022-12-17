#pragma once
#include "CoreMinimal.h"
#include "ORAIWeaponizedCharacter.h"
#include "GameplayTagContainer.h"
#include "ORAIFlyingWeaponizedCharacter.generated.h"

class UAkAudioEvent;
class UORAkComponent;
class UMaterialInstanceDynamic;
class UParticleSystem;

UCLASS(Blueprintable)
class OREGON_API AORAIFlyingWeaponizedCharacter : public AORAIWeaponizedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MouthAudioSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HeadshotDeathFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadshotFXAttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Death_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HeadshotDeath_AkEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* MouthAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDynamicMaterialInstances;
    
public:
    AORAIFlyingWeaponizedCharacter();
protected:
    UFUNCTION(BlueprintCallable)
    void SetupDynamicMaterialInstances();
    
    UFUNCTION(BlueprintCallable)
    void HandleHeadshotVFX(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void HandleHeadshotDeath(const FGameplayTagContainer& TagContainer);
    
    UFUNCTION(BlueprintCallable)
    void AttachMouthAkComponent();
    
};

