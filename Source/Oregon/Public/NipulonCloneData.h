#pragma once
#include "CoreMinimal.h"
#include "NipulonCloneData.generated.h"

class AActor;
class USceneComponent;
class USkeletalMeshComponent;
class UORAkComponent;
class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FNipulonCloneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CloneMeshSceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CloneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CloneMeshSmudge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* CloneGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CloneLaserBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* CloneAkComponent;
    
    OREGON_API FNipulonCloneData();
};

