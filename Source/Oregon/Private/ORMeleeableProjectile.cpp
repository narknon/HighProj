#include "ORMeleeableProjectile.h"
#include "ORAbilitySystemComponent.h"
#include "ORDamageableAttributeSet.h"
#include "ORAkComponent.h"
#include "ORDamageHandlerComponent_NoHealth.h"

class AActor;

void AORMeleeableProjectile::ResetProjectileAfterImpact() {
}

void AORMeleeableProjectile::OnProjectileHit_BP_Implementation(const FHitResult& ImpactResult) {
}

void AORMeleeableProjectile::OnProjectileHit(AActor* Player, const FHitResult& Hit) {
}

bool AORMeleeableProjectile::HasAnyDeflectTags(const FGameplayTagContainer& TagContainer) {
    return false;
}

AORMeleeableProjectile::AORMeleeableProjectile() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UORAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->DeflectORAkComp = CreateDefaultSubobject<UORAkComponent>(TEXT("DeflectORAkComp"));
    this->AttributeType = UORDamageableAttributeSet::StaticClass();
    this->AttributeDefaults = NULL;
    this->DamageHandler = CreateDefaultSubobject<UORDamageHandlerComponent_NoHealth>(TEXT("DamageHandlerComponent"));
    this->DeflectAkEvent = NULL;
}

