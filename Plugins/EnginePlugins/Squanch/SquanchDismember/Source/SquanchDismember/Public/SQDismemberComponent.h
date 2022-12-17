#pragma once
#include "CoreMinimal.h"
#include "DismemberDamageZoneData.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "SQDismemberComponent.generated.h"

class AActor;
class UPrimitiveComponent;
class ASQDetachedMemberGib;
class UPhysicalMaterial;
class UMaterialInterface;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHDISMEMBER_API USQDismemberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDismembermentEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDismemberDamageZoneData> DamageZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ImpactVelocityGibsCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> BloodDecalMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBloodDecalsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodDecalLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloodDecalFadeTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedGoreCaps;
    
public:
    USQDismemberComponent();
    UFUNCTION(BlueprintCallable)
    void RepairAll();
    
    UFUNCTION(BlueprintCallable)
    void Repair(const FName& Bone);
    
    UFUNCTION(BlueprintCallable)
    void RecacheDamageZoneNonCulledBones();
    
    UFUNCTION(BlueprintCallable)
    void OnSkelMeshCollided(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnBloodSpurtParticleCollided(FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintCallable)
    TArray<ASQDetachedMemberGib*> ExplosiveDismember(bool& bDismemberSuccess);
    
    UFUNCTION(BlueprintCallable)
    ASQDetachedMemberGib* DismemberExact(const FHitResult& HitResult, bool& bDismemberSuccess);
    
    UFUNCTION(BlueprintCallable)
    TArray<ASQDetachedMemberGib*> DismemberClosest(const FHitResult& HitResult, bool& bDismemberSuccess, float ImpactVelocity);
    
    UFUNCTION(BlueprintCallable)
    ASQDetachedMemberGib* Dismember(const FName& Bone, bool& bDismemberSuccess);
    
};

