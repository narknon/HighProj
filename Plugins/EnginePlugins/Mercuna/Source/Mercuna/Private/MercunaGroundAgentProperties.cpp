#include "MercunaGroundAgentProperties.h"

FMercunaGroundAgentProperties::FMercunaGroundAgentProperties() {
    this->Category = EMercunaGroundAgentCategory::Character;
    this->Shape = EMercunaGroundAgentShape::Rectangle;
    this->PawnWidth = 0.00f;
    this->PawnLength = 0.00f;
    this->StepHeight = 0.00f;
    this->HeightClearance = 0.00f;
    this->MaxSlopeAngle = 0.00f;
    this->MaxAngleChange = 0.00f;
}

