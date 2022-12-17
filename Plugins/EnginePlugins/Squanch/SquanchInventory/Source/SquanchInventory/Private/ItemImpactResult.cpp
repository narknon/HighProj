#include "ItemImpactResult.h"

UItemImpactResult::UItemImpactResult() {
    this->ImpactLevel = 0.00f;
    this->ImpactExplosion = NULL;
    this->ActorSpawnedOnImpact = NULL;
    this->Loudness = 1.00f;
    this->MaxRange = 3000.00f;
    this->bAttachExplosionToImpactor = false;
    this->bOrientSpawnedActorsToHitNormal = true;
    this->ImpactAudio = NULL;
    this->ImpactAudioEvent = NULL;
    this->NiagaraImpactParticle = NULL;
    this->bNiagaraRotateSystem90DegreesFromNormal = false;
    this->bIgnoreNiagaraSpawnIfOffscreen = false;
    this->ImpactParticle = NULL;
    this->bAttachDecalToCharacters = false;
}

