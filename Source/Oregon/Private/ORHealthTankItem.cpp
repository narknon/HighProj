#include "ORHealthTankItem.h"

void AORHealthTankItem::SetHealthValue(float HealthValue) {
}

float AORHealthTankItem::ProcessHealing_Implementation(float Amount, const FGameplayTagContainer RelatedTags) {
    return 0.0f;
}

float AORHealthTankItem::ProcessDamage_Implementation(float Amount, const FGameplayTagContainer RelatedTags) {
    return 0.0f;
}

bool AORHealthTankItem::IsFull() {
    return false;
}

bool AORHealthTankItem::IsEmpty() {
    return false;
}

float AORHealthTankItem::GetHealthPct() const {
    return 0.0f;
}

float AORHealthTankItem::GetHealthMax() {
    return 0.0f;
}

float AORHealthTankItem::GetHealth() {
    return 0.0f;
}

float AORHealthTankItem::ApplyHealing(float Amount) {
    return 0.0f;
}

float AORHealthTankItem::ApplyDamage(float Amount) {
    return 0.0f;
}

AORHealthTankItem::AORHealthTankItem() {
    this->AttributeType = NULL;
    this->AttributeDefaults = NULL;
}

