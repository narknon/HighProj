#include "ORBaseDamageable.h"
#include "ORAbilitySystemComponent.h"
#include "ORDamageableAttributeSet.h"
#include "Components/StaticMeshComponent.h"


AORBaseDamageable::AORBaseDamageable() {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->AbilitySystemComponent = CreateDefaultSubobject<UORAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->AttributeType = UORDamageableAttributeSet::StaticClass();
    this->AttributeDefaults = NULL;
    this->PlayerDamageModifier = 1.00f;
    this->NonPlayerDamageModifier = 1.00f;
    this->bIgnoreMitigationFeedback = true;
    this->bUseSignificanceManagement = false;
    this->SignificanceManagementTickThreshold = 25000000.00f;
}

