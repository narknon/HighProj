#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORProjectile.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "Engine/EngineTypes.h"
#include "ORGusDiskProjectile.generated.h"

class AActor;
class UGameplayEffect;
class UItemImpactResult;
class AORGusMeleeableProjectile;

UCLASS(Blueprintable)
class OREGON_API AORGusDiskProjectile : public AORProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> StaticDiskType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AORGusMeleeableProjectile> RotatingMeleeDiskType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GravityScaleOnceBouncing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RotatingDiskSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DiskDamage;
    
    UPROPERTY(EditAnywhere)
    int64 MaxCharacterReflects;
    
    UPROPERTY(EditAnywhere)
    int64 MaxCharacterRicochets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemImpactResult* SoftWallImpactResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldSliceThroughEnemies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> FinalCharacterImpactExtraEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReflectTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RicochetTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagRequirements AIToIgnoreOnRedirectRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RicochetRedirectRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RicochetRedirectAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HiddenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> LOSCollisionChannel;
    
private:
    UPROPERTY(EditAnywhere)
    int64 CharacterReflectCount;
    
    UPROPERTY(EditAnywhere)
    TMap<uint32, TWeakObjectPtr<AActor>> LOSChecks;
    
    UPROPERTY(EditAnywhere)
    TArray<TWeakObjectPtr<AActor>> ActiveLOSToTargets;
    
    UPROPERTY(EditAnywhere)
    uint32 VisibilityTraceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnedDisk;
    
public:
    AORGusDiskProjectile();
    UFUNCTION(BlueprintCallable)
    void ResetDiskLaunch(AActor* MeleeCharacter, int64 RichochetCount, FVector LaunchOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSoftSurfaceImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnHardSurfaceImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDiscExhausted(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterReflectImpact(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCharacterKilledImpact(const FHitResult& ImpactResult);
    
};

