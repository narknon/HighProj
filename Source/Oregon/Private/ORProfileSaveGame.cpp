#include "ORProfileSaveGame.h"

UORProfileSaveGame::UORProfileSaveGame() {
    this->MouseADSSensitivity = 1.00f;
    this->GamepadADSSensitivity = 1.00f;
    this->bToggleAltFire = false;
    this->bToggleSprint = true;
    this->bToggleDodge = false;
    this->bTogglePowerSlide = true;
    this->bToggleJetpackHover = true;
    this->bToggleJetpackRise = false;
    this->bToggleInfoScan = false;
    this->bToggleBigEyeMode = false;
    this->bToggleMultigunMode = false;
    this->ChromaticAberration = true;
    this->GunChatterRate = 1.00f;
    this->EnemyChatterRate = 1.00f;
}

