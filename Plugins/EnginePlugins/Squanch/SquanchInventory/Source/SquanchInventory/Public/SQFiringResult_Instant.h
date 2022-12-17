#pragma once
#include "CoreMinimal.h"
#include "SQFiringResultComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "SQFiringResult_Instant.generated.h"

class USQTargetListComponent;
class UNiagaraSystem;
class UParticleSystem;

UCLASS(Blueprintable)
class SQUANCHINVENTORY_API USQFiringResult_Instant : public USQFiringResultComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQTargetListComponent* TargetingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MultiplyGETag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumGEApplicationsPerHitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepHitNormalsInFrontOfPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnFakeProjectileFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* CascadeFakeProjectileFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraFakeProjectileFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FakeProjectileFiringSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeProjectileFiringSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShotsToFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FireSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterFiringResultTag;
    
public:
    USQFiringResult_Instant();
    UFUNCTION(BlueprintCallable)
    TArray<FHitResult> GetHitResults_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAimEnd(UPARAM(Ref) FVector& AimStart, UPARAM(Ref) FVector& LookDirection, bool bUseAimCorrections);
    
};

