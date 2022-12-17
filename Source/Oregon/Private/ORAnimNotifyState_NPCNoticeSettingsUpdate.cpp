#include "ORAnimNotifyState_NPCNoticeSettingsUpdate.h"

UORAnimNotifyState_NPCNoticeSettingsUpdate::UORAnimNotifyState_NPCNoticeSettingsUpdate() {
    this->bShouldNoticePlayer = false;
    this->bRandomizePlayerNotice = false;
    this->MaxNoticeRadius = 0.00f;
    this->MaxNoticeCooldownDelay = 10.00f;
    this->MaxNoticeTime = 10.00f;
}

