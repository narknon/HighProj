#include "ProfileSaveGame.h"

UProfileSaveGame::UProfileSaveGame() {
    this->EnableControllerVibration = true;
    this->ShowSubtitles = false;
    this->ShowSpeakingIndicator = false;
    this->ColorCorrection = EColorVisionDeficiency::NormalVision;
    this->ColorCorrectionSeverity = 1.00f;
    this->MasterVolume = 0.85f;
    this->MusicVolume = 0.70f;
    this->DialogueVolume = 1.00f;
    this->SoundFXVolume = 0.70f;
    this->MouseSensitivity = 1.00f;
    this->GamepadSensitivity = 1.00f;
    this->bInvertYMouse = false;
    this->bInvertYGamepad = false;
    this->WindowMode = EWindowMode::WindowedFullscreen;
    this->ScreenResolutionX = 1280;
    this->ScreenResolutionY = 720;
    this->RefreshRate = 30;
    this->VSyncEnabled = false;
    this->GraphicsQuality = EGraphicsQuality::Epic;
    this->FOV = 90.00f;
    this->MotionBlur = true;
    this->Gamma = 2.20f;
    this->DepthOfField = true;
}

