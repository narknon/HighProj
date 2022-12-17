#pragma once
#include "CoreMinimal.h"
#include "PhysicsEngine/PhysicalAnimationComponent.h"
#include "ORPhysicalAnimationPrototypeComponentFinishedBlendDelegate.h"
#include "ORPhysicalAnimationPrototypeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORPhysicalAnimationPrototypeComponent : public UPhysicalAnimationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpperBodyBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NoPhysicsJoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPhysicalAnimSettingsToRootBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsEnableDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpperBodyPhysicsWeight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORPhysicalAnimationPrototypeComponentFinishedBlend OnBlendFinished;
    
    UORPhysicalAnimationPrototypeComponent();
    UFUNCTION(BlueprintCallable)
    void SetUpperBodyBlendEnabled(bool bInUpperBodyBlendEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhysicsBlendingOrActive();
    
    UFUNCTION(BlueprintCallable)
    void ImmediatePhysics();
    
    UFUNCTION(BlueprintCallable)
    void HandleLivingRagdollChanged(bool bInRagdoll);
    
    UFUNCTION(BlueprintCallable)
    void HandleKnockupChanged(bool bInKnockup);
    
    UFUNCTION(BlueprintCallable)
    void BeginBlendToPhysics();
    
    UFUNCTION(BlueprintCallable)
    void BeginBlendOutOfPhysics();
    
};

