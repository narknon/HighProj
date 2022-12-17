#pragma once
#include "CoreMinimal.h"
#include "ORItemAttach_Character.h"
#include "UObject/NoExportTypes.h"
#include "StateInfo.h"
#include "ETransformState.h"
#include "ORItemAttach_Player.generated.h"

class AActor;
class UAkComponent;
class USkeletalMeshComponent;
class UORAttentionComponent;
class UORTriggerVolumeComponent;
class UMaterialInterface;

UCLASS(Blueprintable)
class OREGON_API AORItemAttach_Player : public AORItemAttach_Character {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* LookAtTriggerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemUnequipOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PocketPortalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ETransformState>, FStateInfo> TransformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAssistTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AttachmentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachmentOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AttachIgnoreScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMasterPoseAttach;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAttentionComponent* AttentionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OriginalWeaponMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> CurrentModWeaponMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UAkComponent*, FName> AkComponents;
    
public:
    AORItemAttach_Player();
    UFUNCTION(BlueprintCallable)
    void RefreshAttachment();
    
private:
    UFUNCTION(BlueprintCallable)
    void LookAtOverlapEnd(AActor* OtherActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void LookAtOverlapBegin(AActor* OtherActor, int32 VolumeIndex);
    
};

