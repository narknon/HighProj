#include "SQDeformerComponent.h"

void USQDeformerComponent::TryFootToFloorAdjustments() {
}

void USQDeformerComponent::SetRuntimeSkeletalDeformations(const TArray<FDeformationAssetInfluenceData>& Deformations) {
}

void USQDeformerComponent::RandomizeAssetsBlending() {
}

TArray<FDeformationAssetInfluenceData> USQDeformerComponent::GetRuntimeSkeletalDeformations() const {
    return TArray<FDeformationAssetInfluenceData>();
}

void USQDeformerComponent::ApplyHeightAndSpeedInfluences() const {
}

void USQDeformerComponent::ApplyBoundsScaling() const {
}

USQDeformerComponent::USQDeformerComponent() {
    this->RandomizedDeformationsInfluence = 0.00f;
    this->bRandomizedAssetsBlendingAtRuntime = false;
    this->bShouldAdjustMeshFeetToCapsuleFloor = false;
    this->FootSocket = TEXT("toe_r_JNT");
    this->MeshComponent = TEXT("Mesh");
    this->bAutoFootToFloorAdjustmentOnStartup = false;
    this->FootToFloorAdjustmentInterval = 0.00f;
    this->FootToFloorAdjustmentIterations = 1;
}

