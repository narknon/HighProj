#include "STCondition.h"

class USTCondition;

bool USTCondition::RemoveEventBindings_Implementation() {
    return false;
}

bool USTCondition::GetState_Implementation() {
    return false;
}

FName USTCondition::GetName_Implementation() {
    return NAME_None;
}

void USTCondition::Event_OnStateUpdated(USTCondition* Condition, bool Value) {
}

USTCondition::USTCondition() {
}

