#include "ORDifficultySubsystem.h"

void UORDifficultySubsystem::SetDifficulty(ESQDifficultySetting Setting) {
}

bool UORDifficultySubsystem::IsNotNormalDifficulty() {
    return false;
}

bool UORDifficultySubsystem::IsNotHardDifficulty() {
    return false;
}

bool UORDifficultySubsystem::IsNotEasyDifficulty() {
    return false;
}

bool UORDifficultySubsystem::IsNormalDifficulty() {
    return false;
}

bool UORDifficultySubsystem::IsHardDifficulty() {
    return false;
}

bool UORDifficultySubsystem::IsEasyDifficulty() {
    return false;
}

int32 UORDifficultySubsystem::GetDifficultyInt(const FDifficultyInt& Value) {
    return 0;
}

float UORDifficultySubsystem::GetDifficultyFloat(const FDifficultyFloat& Value) {
    return 0.0f;
}

ESQDifficultySetting UORDifficultySubsystem::GetDifficulty() {
    return ESQDifficultySetting::Easy;
}

void UORDifficultySubsystem::DebugChangeDifficulty(ESQDifficultySetting Setting) {
}

bool UORDifficultySubsystem::CheckDifficulty(ESQDifficultyComparisionOperation CompareOperation, ESQDifficultySetting CompareSetting) {
    return false;
}

UORDifficultySubsystem::UORDifficultySubsystem() {
}

