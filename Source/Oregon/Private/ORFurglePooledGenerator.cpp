#include "ORFurglePooledGenerator.h"
#include "Components/ArrowComponent.h"

class AActor;

void AORFurglePooledGenerator::StopGenerating() {
}

void AORFurglePooledGenerator::StartGenerating() {
}

void AORFurglePooledGenerator::SpawnFurgle() {
}

void AORFurglePooledGenerator::ReturnFurgleToPool(AActor* Furgle) {
}

void AORFurglePooledGenerator::GenerateFurgle() {
}

void AORFurglePooledGenerator::Cleanup() {
}

AORFurglePooledGenerator::AORFurglePooledGenerator() {
    this->FurglePoolCount = 5;
    this->FurgleClass = NULL;
    this->MinSpawnTime = 1.00f;
    this->MaxSpawnTime = 2.00f;
    this->bGenerateOnBegin = false;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

