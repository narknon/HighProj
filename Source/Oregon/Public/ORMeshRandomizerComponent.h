#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeshRandomizerData.h"
#include "MeshSpecificCombinationConfig.h"
#include "OnRandomizerSetupCompleteDelegate.h"
#include "ORMeshRandomizerComponent.generated.h"

class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORMeshRandomizerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizerEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshRandomizerData> MeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshSpecificCombinationConfig> MeshComboConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeMeshesAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeSkinColorAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeClothesColorAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldRandomizeClothesPatternAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSkinPaletteRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSkinPaletteColumns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> HyperbongPortMesh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRandomizerSetupComplete OnRandomizerSetupComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratedSkinPaletteRowIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratedSkinPaletteColumnIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratedClothesPaletteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UsedPaletteColorIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitOnNextTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelaySocketAttachmentSetup;
    
public:
    UORMeshRandomizerComponent();
    UFUNCTION(BlueprintCallable)
    void SetupRandomizedOwner();
    
    UFUNCTION(BlueprintCallable)
    void RemoveHyperbongPort();
    
    UFUNCTION(BlueprintCallable)
    void RefreshRandomizedSetup();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RefreshMeshSocketAttachments(USkeletalMesh* MergedMesh);
    
public:
    UFUNCTION(BlueprintCallable)
    void RandomizeSkinColor();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeMeshAssets();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeClothesPattern();
    
    UFUNCTION(BlueprintCallable)
    void RandomizeClothesColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuntimeRandomized();
    
    UFUNCTION(BlueprintCallable)
    void AddHyperbongPort();
    
};

