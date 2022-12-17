#include "ORFurgleDebris.h"
#include "Components/BoxComponent.h"

class AORFurglePooledGenerator;

void AORFurgleDebris::SetRepoolTimer(float Time) {
}

void AORFurgleDebris::SetPooledGenerator(AORFurglePooledGenerator* Generator) {
}

void AORFurgleDebris::Repool() {
}

AORFurglePooledGenerator* AORFurgleDebris::GetPooledGenerator() {
    return NULL;
}

AORFurgleDebris::AORFurgleDebris() {
    this->CollisionMesh = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    this->GeneratorOwner = NULL;
}

