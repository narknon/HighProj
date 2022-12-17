#include "FrameInputInfo.h"

FFrameInputInfo::FFrameInputInfo() {
    this->TimeDelta = 0.00f;
    this->FrameTime = 0.00f;
    this->MouseTurn = 0.00f;
    this->MousePitch = 0.00f;
    this->GamepadTurn = 0.00f;
    this->GamepadPitch = 0.00f;
    this->MovementX = 0.00f;
    this->MovementKeyboardY = 0.00f;
    this->MovementGamepadY = 0.00f;
    this->MovementZ = 0.00f;
    this->bInteractTriggered = false;
}

