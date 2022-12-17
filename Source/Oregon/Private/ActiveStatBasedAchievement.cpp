#include "ActiveStatBasedAchievement.h"

FActiveStatBasedAchievement::FActiveStatBasedAchievement() {
    this->CallbackId = 0;
    this->CurrentValue = 0;
    this->MaxValue = 0;
    this->bTrackingEnabled = false;
}

