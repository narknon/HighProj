#include "ORNPCCustomizableCharacter.h"
#include "SQDeformerComponent.h"
#include "ORMeshRandomizerComponent.h"

AORNPCCustomizableCharacter::AORNPCCustomizableCharacter() {
    this->MeshRandomizerComponent = CreateDefaultSubobject<UORMeshRandomizerComponent>(TEXT("ORMeshRandomizer"));
    this->DeformerComponent = CreateDefaultSubobject<USQDeformerComponent>(TEXT("SQDeformer"));
    this->bIsAFuckingZombieThatDoesntBlink = false;
    this->BlinkDelay = 4.00f;
    this->BlinkDelayDeviation = 4.00f;
    this->bCanDivertGaze = false;
    this->DivertFrequency = 2.00f;
    this->MaxDivertAngle = 25.00f;
    this->DivertFrequencyDeviation = 2.00f;
}

