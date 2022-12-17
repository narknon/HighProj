#include "MercunaNavTestingActor.h"
#include "Components/SphereComponent.h"

void AMercunaNavTestingActor::OnPathUpdate(TEnumAsByte<EMercunaPathEvent::Type> PathEvent) {
}

void AMercunaNavTestingActor::OnNavGraphBuildComplete(bool Success) {
}

AMercunaNavTestingActor::AMercunaNavTestingActor() {
    this->bSearchStart = false;
    this->MaxPathLength = 0.00f;
    this->bContinuouslyRepath = false;
    this->bPathExist = false;
    this->bPathIsPartial = false;
    this->bPathIsOutOfNodes = false;
    this->PathLength = 0.00f;
    this->PathSections = 0;
    this->PathFindTime = 0.00f;
    this->PathNodesUsed = 0;
    this->PathFindRepeats = 1;
    this->bDisplayAverageTime = false;
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->Path = NULL;
    this->NavGraph = NULL;
}

