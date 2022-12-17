#include "ORDummyNPC.h"
#include "Components/SceneComponent.h"
#include "ORPossessableComponent.h"
#include "ORVocalizationComponent.h"

FVector AORDummyNPC::GetAttentionLocation_Implementation() {
    return FVector{};
}

AORDummyNPC::AORDummyNPC() {
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->PossessableComponent = CreateDefaultSubobject<UORPossessableComponent>(TEXT("ORPossessableComponent"));
    this->ORVocalizationComp = CreateDefaultSubobject<UORVocalizationComponent>(TEXT("ORVocalizationComp"));
}

