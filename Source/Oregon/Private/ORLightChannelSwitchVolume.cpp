#include "ORLightChannelSwitchVolume.h"

AORLightChannelSwitchVolume::AORLightChannelSwitchVolume() {
    this->bAffectPlayer = false;
    this->Channel0Operation = EORLightChannelSwitchType::DontChange;
    this->Channel1Operation = EORLightChannelSwitchType::DontChange;
    this->Channel2Operation = EORLightChannelSwitchType::DontChange;
}

