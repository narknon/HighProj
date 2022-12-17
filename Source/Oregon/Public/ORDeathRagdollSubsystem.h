#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "RagdollData.h"
#include "ORDeathRagdollSubsystem.generated.h"

class AActor;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class UORCharacterRagdollComponent;

UCLASS(Blueprintable)
class OREGON_API UORDeathRagdollSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UORCharacterRagdollComponent*> RegisteredLivingRagdolls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRagdollData> PendingRagdollComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> ActiveStaticRagdolls;
    
public:
    UORDeathRagdollSubsystem();
    UFUNCTION(BlueprintCallable)
    void UntrackRagdoll(USkeletalMeshComponent* RagdollMeshComp);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterLivingRagdoll(UORCharacterRagdollComponent* LivingRagdollComp);
    
    UFUNCTION(BlueprintCallable)
    void TrackNewRagdoll(USkeletalMeshComponent* RagdollMeshComp, float SleepDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollWake(USkeletalMeshComponent* RagdollMesh, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void SetRagdollSleep(USkeletalMeshComponent* RagdollMesh);
    
    UFUNCTION(BlueprintCallable)
    void RegisterLivingRagdoll(UORCharacterRagdollComponent* LivingRagdollComp);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRagdollHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnRagdollComponentSleep(UPrimitiveComponent* SleepingComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRagdollTracked(USkeletalMeshComponent* RagdollMeshComp);
    
};

