#include "ORBaseGarmantuousCharacter.h"
#include "ORGarmFlightController.h"

class UNiagaraComponent;
class USkeletalMeshComponent;
class UORAkComponent;

void AORBaseGarmantuousCharacter::UpdateLasers(USkeletalMeshComponent* Sled, const TArray<FName>& SocketNames, const TArray<UNiagaraComponent*>& LaserVFX, const TArray<UNiagaraComponent*>& LaserImpactVFX, const TArray<UNiagaraComponent*>& LaserWarningVFX, const TArray<UNiagaraComponent*>& LaserWarningImpactVFX, const TArray<UORAkComponent*> LaserAKComponents) {
}

void AORBaseGarmantuousCharacter::SetTurretState(EORGarmWeaponState InTurretState) {
}

void AORBaseGarmantuousCharacter::SetTurretDestroyed(int32 TurretIndex, bool bInDestroyed) {
}

void AORBaseGarmantuousCharacter::SetLaserState(EORBaseGarmantuousCharacterLaserState InLaserState) {
}

void AORBaseGarmantuousCharacter::SetCannonMeshes(const TArray<USkeletalMeshComponent*>& Meshes) {
}

bool AORBaseGarmantuousCharacter::IsTurretDestroyed(int32 TurretIndex) const {
    return false;
}




AORBaseGarmantuousCharacter::AORBaseGarmantuousCharacter() {
    this->FlightController = CreateDefaultSubobject<UORGarmFlightController>(TEXT("GarmFlightController"));
    this->LaserState = EORBaseGarmantuousCharacterLaserState::Inactive;
    this->LaserStartSFX = NULL;
    this->LaserWarningStartSFX = NULL;
    this->LaserLoopingSFX = NULL;
    this->LaserStopSFX = NULL;
    this->DefaultFireVFX = NULL;
    this->DefaultFireSFX = NULL;
    this->LaserMaxDistance = 10000.00f;
    this->LaserDamageCooldownDuration = 1.00f;
    this->LaserDamageGE = NULL;
}

