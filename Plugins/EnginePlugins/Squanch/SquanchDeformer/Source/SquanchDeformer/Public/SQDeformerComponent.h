#pragma once
#include "CoreMinimal.h"
#include "DeformationAssetInfluenceData.h"
#include "Components/ActorComponent.h"
#include "SQOnMovementSpeedScaledSignatureDelegate.h"
#include "SQDeformerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SQUANCHDEFORMER_API USQDeformerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeformationAssetInfluenceData> ConfigurableSkeletalDeformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeformationAssetInfluenceData> RandomizedSkeletalDeformations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomizedDeformationsInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizedAssetsBlendingAtRuntime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAdjustMeshFeetToCapsuleFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFootToFloorAdjustmentOnStartup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootToFloorAdjustmentInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FootToFloorAdjustmentIterations;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQOnMovementSpeedScaledSignature OnMovementSpeedScaled;
    
    USQDeformerComponent();
    UFUNCTION(BlueprintCallable)
    void TryFootToFloorAdjustments();
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeSkeletalDeformations(const TArray<FDeformationAssetInfluenceData>& Deformations);
    
    UFUNCTION(BlueprintCallable)
    void RandomizeAssetsBlending();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDeformationAssetInfluenceData> GetRuntimeSkeletalDeformations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyHeightAndSpeedInfluences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyBoundsScaling() const;
    
};

