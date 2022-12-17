#include "SQAbilitySystemBPLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayEffect;
class UGameplayAbility;

void USQAbilitySystemBPLibrary::UnBlockAbilitiesWithTags(AActor* Target, const FGameplayTagContainer& Tags) {
}

bool USQAbilitySystemBPLibrary::TryActivateAbilityByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass) {
    return false;
}

bool USQAbilitySystemBPLibrary::SetFloatAttribute(AActor* Target, FGameplayAttribute Attribute, float NewValue) {
    return false;
}

void USQAbilitySystemBPLibrary::RemoveGameplayEffectsArray(AActor* Target, TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassArray) {
}

int32 USQAbilitySystemBPLibrary::RemoveGameplayEffects(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, int32 StacksToRemove) {
    return 0;
}

bool USQAbilitySystemBPLibrary::IsAbilityActiveForActor(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass) {
    return false;
}

bool USQAbilitySystemBPLibrary::HasActiveAbilityWithTag(AActor* Target, const FGameplayTag& GameplayTag, bool bMatchExact, TSubclassOf<UGameplayAbility> AbilityToExclude) {
    return false;
}

bool USQAbilitySystemBPLibrary::GetAbilitySpecHandleByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass, FGameplayAbilitySpecHandle& AbilityHandle) {
    return false;
}

bool USQAbilitySystemBPLibrary::DoesAbilityHaveTag(UGameplayAbility* Ability, const FGameplayTag& GameplayTag, bool bMatchExact) {
    return false;
}

void USQAbilitySystemBPLibrary::CancelAbilityByHandle(AActor* Target, const FGameplayAbilitySpecHandle& AbilityHandle) {
}

void USQAbilitySystemBPLibrary::CancelAbilityByClass(AActor* Target, TSubclassOf<UGameplayAbility> AbilityClass) {
}

void USQAbilitySystemBPLibrary::BlockAbilitiesWithTags(AActor* Target, const FGameplayTagContainer& Tags) {
}

bool USQAbilitySystemBPLibrary::BindToAbilityEndedByAbilityComponent(UAbilitySystemComponent* TargetAbilityComp, FGameplayAbilitySpecHandle AbilityHandle, FSGOnGameplayAbilityEnded Callback) {
    return false;
}

bool USQAbilitySystemBPLibrary::BindToAbilityEnded(AActor* Target, FGameplayAbilitySpecHandle AbilityHandle, FSGOnGameplayAbilityEnded Callback) {
    return false;
}

FActiveGameplayEffectHandle USQAbilitySystemBPLibrary::ApplyGameplayEffectWithHit(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, AActor* Instigator, AActor* EffectCauser, const FHitResult& HitResult) {
    return FActiveGameplayEffectHandle{};
}

TArray<FActiveGameplayEffectHandle> USQAbilitySystemBPLibrary::ApplyGameplayEffectArray(AActor* Target, TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClassArray, float Level, AActor* Instigator, AActor* EffectCauser) {
    return TArray<FActiveGameplayEffectHandle>();
}

FActiveGameplayEffectHandle USQAbilitySystemBPLibrary::ApplyGameplayEffect(AActor* Target, TSubclassOf<UGameplayEffect> GameplayEffectClass, float Level, AActor* Instigator, AActor* EffectCauser) {
    return FActiveGameplayEffectHandle{};
}

FGameplayAbilitySpecHandle USQAbilitySystemBPLibrary::ActivateAbility(AActor* Target, TSubclassOf<UGameplayAbility> Ability) {
    return FGameplayAbilitySpecHandle{};
}

USQAbilitySystemBPLibrary::USQAbilitySystemBPLibrary() {
}

