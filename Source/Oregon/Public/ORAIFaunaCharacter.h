#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORAICharacter.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayEffectTypes.h"
#include "ORAIFaunaCharacter.generated.h"

class UGameplayEffect;
class UAkAudioEvent;
class UAnimMontage;
class UParticleSystem;

UCLASS(Blueprintable)
class OREGON_API AORAIFaunaCharacter : public AORAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeathFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* RemoveFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FActiveGameplayEffectHandle CombatSpeedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Armored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Death_AkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> CombatSpeedUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AmIControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideForwardSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ManholeUpMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HorizontalLeapSpeed;
    
    AORAIFaunaCharacter();
    UFUNCTION(BlueprintCallable)
    void LeapAtLocation(FVector LeapLocation);
    
};

