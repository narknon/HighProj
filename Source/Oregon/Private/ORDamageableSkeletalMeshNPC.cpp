#include "ORDamageableSkeletalMeshNPC.h"
#include "ORAbilitySystemComponent.h"
#include "ORDamageableAttributeSet.h"
#include "ORDamageHandlerComponent_NoHealth.h"
#include "ORTargetableComponent.h"

AORDamageableSkeletalMeshNPC::AORDamageableSkeletalMeshNPC() {
    this->AbilitySystemComponent = CreateDefaultSubobject<UORAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->AttributeType = UORDamageableAttributeSet::StaticClass();
    this->AttributeDefaults = NULL;
    this->TargetableComp = CreateDefaultSubobject<UORTargetableComponent>(TEXT("TargetableComponent"));
    this->DamageHandler = CreateDefaultSubobject<UORDamageHandlerComponent_NoHealth>(TEXT("DamageHandlerComponent"));
}

