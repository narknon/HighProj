#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORCharacterRagdollGEDef.h"
#include "ORCharacterRagdollActiveGEDef.h"
#include "Engine/EngineTypes.h"
#include "ORAICharacterRagdollToStandCompleteSignatureDelegate.h"
#include "ORAICharacterLivingRagdollSignatureDelegate.h"
#include "ORCharacterRagdollComponent.generated.h"

class AORCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORCharacterRagdollComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterLivingRagdollSignature OnAICharacterLivingRagdollEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAICharacterRagdollToStandCompleteSignature OnAICharacterRagdollToStandCompleteEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AORCharacter* MyCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedMeshRelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector KnockupRagdollLandingNudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnterRagdollEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInLivingRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInGetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPersistentLivingRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPawnFollowMeshDuringLivingRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestingSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestingRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFloorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavWalkingCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshPelvisBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> RagdollPositionTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORCharacterRagdollGEDef> EffectsToApplyOnStartLivingRagdoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORCharacterRagdollActiveGEDef> ActiveEffectSpecHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeEnteredRagdoll;
    
public:
    UORCharacterRagdollComponent();
    UFUNCTION(BlueprintCallable)
    void StopLivingRagdollPersistent();
    
    UFUNCTION(BlueprintCallable)
    void StopLivingRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void StartLivingRagdollPersistent();
    
    UFUNCTION(BlueprintCallable)
    void StartLivingRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RagdollToStandComplete();
    
    UFUNCTION(BlueprintCallable)
    void RagdollSnapshotPose();
    
    UFUNCTION(BlueprintCallable)
    void RagdollGetUp();
    
    UFUNCTION(BlueprintCallable)
    void OrientActorRotationToMesh(const bool bIsFacingUp);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStopLivingRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLivingRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void ImmediateStopLivingRagdoll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsMeshFacingUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcNewActorLocationFromMeshPelvis(const FName PelvisBoneName, const float DeltaTime, const float InterpSpeed) const;
    
};

