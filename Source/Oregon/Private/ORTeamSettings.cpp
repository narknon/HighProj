#include "ORTeamSettings.h"

class AORCharacter;

TEnumAsByte<ETeamAttitude::Type> UORTeamSettings::GetCharacterAttitude(AORCharacter* A, AORCharacter* B) {
    return ETeamAttitude::Friendly;
}

UORTeamSettings::UORTeamSettings() {
}

