#include "ORMeshRandomizerComponent.h"

class USkeletalMesh;

void UORMeshRandomizerComponent::SetupRandomizedOwner() {
}

void UORMeshRandomizerComponent::RemoveHyperbongPort() {
}

void UORMeshRandomizerComponent::RefreshRandomizedSetup() {
}

void UORMeshRandomizerComponent::RefreshMeshSocketAttachments(USkeletalMesh* MergedMesh) {
}

void UORMeshRandomizerComponent::RandomizeSkinColor() {
}

void UORMeshRandomizerComponent::RandomizeMeshAssets() {
}

void UORMeshRandomizerComponent::RandomizeClothesPattern() {
}

void UORMeshRandomizerComponent::RandomizeClothesColor() {
}

bool UORMeshRandomizerComponent::IsRuntimeRandomized() {
    return false;
}

void UORMeshRandomizerComponent::AddHyperbongPort() {
}

UORMeshRandomizerComponent::UORMeshRandomizerComponent() {
    this->bRandomizerEnabled = true;
    this->bShouldRandomizeMeshesAtRuntime = false;
    this->bShouldRandomizeSkinColorAtRuntime = false;
    this->bShouldRandomizeClothesColorAtRuntime = false;
    this->bShouldRandomizeClothesPatternAtRuntime = false;
    this->MaxSkinPaletteRows = 50;
    this->MaxSkinPaletteColumns = 50;
    this->GeneratedSkinPaletteRowIndex = -1;
    this->GeneratedSkinPaletteColumnIndex = -1;
    this->GeneratedClothesPaletteIndex = -1;
    this->bInitOnNextTick = false;
    this->bDelaySocketAttachmentSetup = false;
}

