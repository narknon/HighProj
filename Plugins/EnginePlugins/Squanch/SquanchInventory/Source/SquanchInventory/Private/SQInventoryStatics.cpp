#include "SQInventoryStatics.h"
#include "Templates/SubclassOf.h"

class AActor;
class UGameplayEffect;
class USQFireableItemComponent;
class UItemImpactResult;
class ASQFireableInventoryItem;
class ASQInventoryItem;
class ACharacter;
class UCurveFloat;

FGameplayEffectSpec USQInventoryStatics::MakeNewGameplayEffectSpec(UGameplayEffect* EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel) {
    return FGameplayEffectSpec{};
}

float USQInventoryStatics::GetScalableValue(FScalableFloat Scalable, int32 Level) {
    return 0.0f;
}

void USQInventoryStatics::GetResourceInfo(ASQFireableInventoryItem* Item, FGameplayTag FireMode, float& CurrentCount, float& MaxCount) {
}

ASQInventoryItem* USQInventoryStatics::GetParentItem(USQFireableItemComponent* ItemComponent) {
    return NULL;
}

ASQFireableInventoryItem* USQInventoryStatics::GetParentFireableItem(USQFireableItemComponent* ItemComponent) {
    return NULL;
}

ACharacter* USQInventoryStatics::GetParentCharacter(USQFireableItemComponent* ItemComponent) {
    return NULL;
}

FGameplayTag USQInventoryStatics::GetModeType(USQFireableItemComponent* Component) {
    return FGameplayTag{};
}

USQFireableItemComponent* USQInventoryStatics::GetItemComponentByClass(ASQFireableInventoryItem* Item, FGameplayTag ModeKey, TSubclassOf<USQFireableItemComponent> ComponentClass) {
    return NULL;
}

FRotator USQInventoryStatics::CreateRotation90DegreesFromNormal(FVector Normal) {
    return FRotator{};
}

float USQInventoryStatics::CalculateFalloffPercent(float MinFalloff, float MaxFalloff, float Range, UCurveFloat* Curve) {
    return 0.0f;
}

void USQInventoryStatics::ApplyHitResultMultiple(AActor* SourceActor, UItemImpactResult* ImpactResult, TArray<FHitResult>& HitResults, FGameplayTag MultiplyGETag, int32 NumGEsPerHitResult, const TSubclassOf<AActor>& SingleGESupportedActor) {
}

void USQInventoryStatics::ApplyHitResult(AActor* SourceActor, UItemImpactResult* ImpactResult, const FHitResult& HitResult, bool bApplyGameplayEffects) {
}

FActiveGameplayEffectHandle USQInventoryStatics::ApplyGameplayEffectSpec(UGameplayEffect* EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle USQInventoryStatics::ApplyGameplayEffect(TSubclassOf<UGameplayEffect> EffectClass, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel) {
    return FActiveGameplayEffectHandle{};
}

FActiveGameplayEffectHandle USQInventoryStatics::ApplyFinalizedGameplayEffectSpec(const FGameplayEffectSpec& EffectSpec, const FHitResult& HitResult, AActor* Source, AActor* Target, const float EffectLevel) {
    return FActiveGameplayEffectHandle{};
}

USQInventoryStatics::USQInventoryStatics() {
}

