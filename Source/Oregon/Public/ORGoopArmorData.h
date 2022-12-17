#pragma once
#include "CoreMinimal.h"
#include "ORGoopArmorData.generated.h"

class USkeletalMeshComponent;
class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FORGoopArmorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TexCoordIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    OREGON_API FORGoopArmorData();
};

