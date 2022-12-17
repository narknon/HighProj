#include "SQFireLoop_Burst.h"

USQFireLoop_Burst::USQFireLoop_Burst() {
    this->CurrentFiringState = EBFS_Ready;
    this->FiresLeft = 0;
}

