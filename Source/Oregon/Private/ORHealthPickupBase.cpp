#include "ORHealthPickupBase.h"
#include "ORBlinkAndShrinkComponent.h"
#include "Components/PointLightComponent.h"
#include "ORSuctionObjectComponent.h"

void AORHealthPickupBase::BlinkAndShrinkCompleted() {
}

AORHealthPickupBase::AORHealthPickupBase() {
    this->BlinkAndShrinkComp = CreateDefaultSubobject<UORBlinkAndShrinkComponent>(TEXT("BlinkAndShrink"));
    this->PointLightComp = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLight"));
    this->SuctionComp = CreateDefaultSubobject<UORSuctionObjectComponent>(TEXT("SuctionObjectComp"));
}

