#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttachmentData.h"
#include "MaterialParamCombo.h"
#include "FloatMaterialParamOverride.h"
#include "VectorMaterialParamOverride.h"
#include "ColorMaterialParamOverride.h"
#include "TextureMaterialParamOverride.h"
#include "BoolMaterialParamOverride.h"
#include "GameplayTagContainer.h"
#include "MeshRandomizerData.generated.h"

class UStreamableRenderAsset;
class UTexture;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct OREGON_API FMeshRandomizerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStreamableRenderAsset>, FGameplayTag> AvailableMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachmentData> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> AvailableClothingPatterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> AvailableClothingNormals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParamCombo> MaterialParamCombos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFloatMaterialParamOverride> MaterialFloatParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorMaterialParamOverride> MaterialVectorParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorMaterialParamOverride> MaterialColorParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureMaterialParamOverride> MaterialTextureParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoolMaterialParamOverride> MaterialBoolParameterOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStreamableRenderAsset> CachedMeshReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* CachedClothesPatternTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* CachedClothesNormalTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint CachedClothesPaletteCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> CachedDynamicMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStreamableRenderAsset* LoadedCachedMeshReference;
    
    FMeshRandomizerData();
};

