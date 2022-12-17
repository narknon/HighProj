#include "ORFireLoop_LezduitPrimary.h"

UORFireLoop_LezduitPrimary::UORFireLoop_LezduitPrimary() {
    this->CurrentFiringState = ELFS_Ready;
    this->CurrentFiringTimer = 0.00f;
}

