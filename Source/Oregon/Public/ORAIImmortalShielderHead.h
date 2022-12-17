#pragma once
#include "CoreMinimal.h"
#include "ORAIFlyingWeaponizedCharacter.h"
#include "UObject/NoExportTypes.h"
#include "ORSocketData.h"
#include "ORAIImmortalShielderHead.generated.h"

class AActor;
class AORAICharacter;
class UAnimMontage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class OREGON_API AORAIImmortalShielderHead : public AORAIFlyingWeaponizedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSocketData AttachSocketData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ShielderAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttachMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetedEaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherBreakDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TetherBreakTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachVertexSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachVertexVertexIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShielding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDistanceBreakTether;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLOSBreakTether;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ShielderEyesDynamicMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAICharacter* Immortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORAICharacter* ShieldTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ShielderAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
public:
    AORAIImmortalShielderHead();
    UFUNCTION(BlueprintCallable)
    void SetupBehaviorTree();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LockToShieldTargetIfInPosition();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleWasTetherBroken(bool bBroken);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTetherBreakLOS();
    
    UFUNCTION(BlueprintCallable)
    void HandleTetherBreakDistance();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShielderAttached();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool EaseTowardsTargetLocation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DoShielderAttach();
    
    UFUNCTION(BlueprintCallable)
    void DoIdle();
    
    UFUNCTION(BlueprintCallable)
    void CheckTetherBreak();
    
    UFUNCTION(BlueprintCallable)
    void BreakTether();
    
};

