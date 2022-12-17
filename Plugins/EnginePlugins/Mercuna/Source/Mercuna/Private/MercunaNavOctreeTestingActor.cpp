#include "MercunaNavOctreeTestingActor.h"

AMercunaNavOctreeTestingActor::AMercunaNavOctreeTestingActor() {
    this->OtherActor = NULL;
    this->Radius = 100.00f;
    this->HeightChangePenalty = 0.00f;
    this->MaxSpeed = 300.00f;
    this->MaxAcceleration = 100.00f;
}

