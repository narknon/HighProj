#include "ORCharacterRagdollGEDef.h"

FORCharacterRagdollGEDef::FORCharacterRagdollGEDef() {
    this->GameplayEffect = NULL;
    this->AddPolicty = EORCharacterRagdollGEAddlPolicy::OnStart;
    this->AutoRemovalPolicy = EORCharacterRagdollGEAutoRemovalPolicy::Never;
}

