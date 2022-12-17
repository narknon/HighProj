#include "ORWarpBaseSlot.h"
#include "Components/ArrowComponent.h"

void AORWarpBaseSlot::WarpLevelFromTicket(const FString& PackageName, const FString& LevelPath, FName LevelName) {
}

AORWarpBaseSlot::AORWarpBaseSlot() {
    this->SlotRadius = 50.00f;
    this->DirectionArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("DirectionArrow"));
}

