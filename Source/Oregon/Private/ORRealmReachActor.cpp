#include "ORRealmReachActor.h"
#include "Components/StaticMeshComponent.h"

AORRealmReachActor::AORRealmReachActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
}

