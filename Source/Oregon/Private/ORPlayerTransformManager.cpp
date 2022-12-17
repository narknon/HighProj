#include "ORPlayerTransformManager.h"

class ASQInventoryItem;

void UORPlayerTransformManager::SetNewCameraRoll(float NewRoll, float ChangeTime) {
}

void UORPlayerTransformManager::ItemEventFired(ASQInventoryItem* Item, FGameplayTag Tag, FGameplayTag Mode, TEnumAsByte<EInventoryTransactionType> TransactionType) {
}

UORPlayerTransformManager::UORPlayerTransformManager() {
    this->CurrentState = ETS_Base;
    this->TransformData = NULL;
    this->EyeHeightChange = 8.00f;
    this->EyeHeightChangeMod = 1.00f;
    this->CurrentEyeHeight = 0.00f;
    this->CurrentTransformTime = 0.00f;
    this->CurrentMaxTransformTime = 0.00f;
    this->MaxTransformTime = 0.20f;
    this->PreviousMaxTransformTime = 0.00f;
    this->TransformAlphaCurve = NULL;
    this->CurrentTransformAlpha = 0.00f;
    this->CurrentCameraFOV = 0.00f;
    this->PreviousCameraFOV = 0.00f;
    this->IntendedCameraFOV = 0.00f;
    this->CurrentArmsFOV = 0.00f;
    this->PreviousArmsFOV = 0.00f;
    this->IntendedArmsFOV = 0.00f;
    this->CurrentSpread = 1.00f;
    this->ModifiedSpread = 1.00f;
    this->PreviousSpread = 1.00f;
    this->CurrentItemSpreadMod = 1.00f;
    this->bUseDirectionForce = false;
    this->MaxForcedDirectionAngle = 20.00f;
    this->ForcedRotationIndex = 0;
    this->CameraMovementRestriction = -1.00f;
    this->CameraRollChangeTime = 0.25f;
    this->SelectedCameraRollChangeTime = 0.00f;
    this->StartingCameraRoll = 0.00f;
    this->IntendedCameraRoll = 0.00f;
    this->CurrentCameraRoll = 0.00f;
    this->CameraRollAlpha = 0.00f;
}

