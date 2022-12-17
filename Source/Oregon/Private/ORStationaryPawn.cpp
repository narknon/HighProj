#include "ORStationaryPawn.h"
#include "ORAbilitySystemComponent.h"
#include "Components/CapsuleComponent.h"

class AActor;

bool AORStationaryPawn::IsEnemyActor(AActor* OtherActor) {
    return false;
}

AORStationaryPawn::AORStationaryPawn() {
    this->PossessedInputComponentClass = NULL;
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("StationaryPawnCapsule"));
    this->bHidePlayerHUD = false;
    this->AbilitySystem = CreateDefaultSubobject<UORAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->AttributeType = NULL;
    this->AttributeDefaults = NULL;
    this->bAbilityBindsInitialized = false;
}

