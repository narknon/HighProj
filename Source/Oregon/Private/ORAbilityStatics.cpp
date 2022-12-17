#include "ORAbilityStatics.h"

class AActor;
class UAbilitySystemComponent;

FGameplayTargetDataFilterHandle UORAbilityStatics::MakeORFilterHandle(FORGameplayTargetDataFilter Filter, AActor* FilterActor) {
    return FGameplayTargetDataFilterHandle{};
}

UAbilitySystemComponent* UORAbilityStatics::GetTargetAbilitySystem(const FGameplayEffectCustomExecutionParameters& ExecutionParams) {
    return NULL;
}

UAbilitySystemComponent* UORAbilityStatics::GetSourceAbilitySystem(const FGameplayEffectCustomExecutionParameters& ExecutionParams) {
    return NULL;
}

FHitResult UORAbilityStatics::GetHitResult(const FGameplayEffectCustomExecutionParameters& ExecutionParams) {
    return FHitResult{};
}

FGameplayEffectSpec UORAbilityStatics::GetEffectSpec(const FGameplayEffectCustomExecutionParameters& ExecutionParams) {
    return FGameplayEffectSpec{};
}

float UORAbilityStatics::GetAttributeValue(const FGameplayEffectAttributeCaptureDefinition& Attribute, const FGameplayEffectCustomExecutionParameters& ExecutionParams) {
    return 0.0f;
}

bool UORAbilityStatics::CanActivateAbilitiesMatchingTags(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayTagContainer& GameplayTagContainer) {
    return false;
}

void UORAbilityStatics::AddOutputModifier(FGameplayEffectCustomExecutionOutput& Output, const FGameplayEffectAttributeCaptureDefinition& Attribute, TEnumAsByte<EGameplayModOp::Type> ModifierType, float Value) {
}

UORAbilityStatics::UORAbilityStatics() {
}

