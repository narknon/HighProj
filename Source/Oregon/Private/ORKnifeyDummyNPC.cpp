#include "ORKnifeyDummyNPC.h"

void AORKnifeyDummyNPC::RemoveVisibilityCounters(int32 Count) {
}

int32 AORKnifeyDummyNPC::GetVisibilityCount() {
    return 0;
}

void AORKnifeyDummyNPC::AddVisibilityCounters(int32 Count) {
}

AORKnifeyDummyNPC::AORKnifeyDummyNPC() {
    this->VisibilityCounters = 0;
    this->KnifeyMesh = NULL;
}

