#include "LevelPlannerEntry.h"

FLevelPlannerEntry::FLevelPlannerEntry() {
    this->Progress = ELevelPlannerProgress::None;
    this->RegenState = ELevelPlannerRegen::None;
    this->Tagging = ELevelPlannerTagging::None;
    this->IsImplemented = false;
    this->bIsBeat = false;
}

