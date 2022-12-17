#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SQDetachedMemberGib.generated.h"

class USkeletalMeshComponent;
class USQDismemberComponent;
class UPoseableMeshComponent;

UCLASS(Blueprintable)
class SQUANCHDISMEMBER_API ASQDetachedMemberGib : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsSleepDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPoseableMeshComponent* PoseableMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQDismemberComponent* DismembermentComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MemberGoreCap;
    
public:
    ASQDetachedMemberGib();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMemberSpawned(AActor* MemberOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDismembered();
    
};

