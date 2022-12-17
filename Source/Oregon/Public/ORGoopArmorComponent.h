#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "GoopSocketInformation.h"
#include "GameplayTagContainer.h"
#include "GoopRestoredDelegateDelegate.h"
#include "GoopDestroyedDelegateDelegate.h"
#include "ORGoopArmorComponent.generated.h"

class UObject;
class USkeletalMeshComponent;
class UORDamageHandlerComponent_Character;
class AORHealthTankItem;
class UMaterialInterface;
class UTexture2D;
class UMaterialInstanceDynamic;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UORGoopArmorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGoopSocketInformation> GoopInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartWithGoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexCoordIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaselineArmorRemoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArmorRemoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmorProtectionDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArmorMaterialMaskName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GooDestructionVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WhiteMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowArmorRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OverrideArmorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverrideGooDestructionVFX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoopDestroyedDelegate OnGoopDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGoopRestoredDelegate OnGoopRestored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesWithNoArmor;
    
    UORGoopArmorComponent();
    UFUNCTION(BlueprintCallable)
    void SetDefaultMaterial();
    
    UFUNCTION(BlueprintCallable)
    void SetArmorOverrideMaterial(UMaterialInterface* InMaterial, UParticleSystem* InGooDestructionVFX);
    
    UFUNCTION(BlueprintCallable)
    void RestoreAllGoop(bool bImmediate, float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void RemoveArmorAt(const FVector& Location, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void RemoveArmor(const FHitResult& HitResult);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHealthTankEmptiedListener(UORDamageHandlerComponent_Character* DamageHandler, AORHealthTankItem* HealthTank, float DamageToTank, UObject* Damager, float BaseDamageAmt, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitGoopArmor(USkeletalMeshComponent* InMesh);
    
    UFUNCTION(BlueprintCallable)
    bool HasArmorAt(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyGoopRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledRemovalRadius();
    
    UFUNCTION(BlueprintCallable)
    void DestroyAllRemainingGoop(bool bImmediate, float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    bool ArmorAppliesToHitResult(const FHitResult& HitResult);
    
};

