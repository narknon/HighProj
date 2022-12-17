#include "DismemberDamageZoneData.h"

FDismemberDamageZoneData::FDismemberDamageZoneData() {
    this->OverrideDamageImpulse = 0.00f;
    this->bSpawnDetachedMember = false;
    this->SpawnedMemberPhysicsSleepDelay = 0.00f;
    this->MemberGibClass = NULL;
    this->MinAdditionalGibs = 0;
    this->MaxAdditionalGibs = 0;
    this->GoreCap = NULL;
    this->DismemberSprayVFX = NULL;
    this->DetachedMemberSkeletalMeshOverride = NULL;
    this->bDisableHiddenBodies = false;
    this->bIsDismembered = false;
    this->bIsAttachedMember = false;
    this->DismemberSprayVFXComp = NULL;
    this->DetachedMemberGib = NULL;
}

