#include "SQTargetList_Overlap.h"

USQTargetList_Overlap::USQTargetList_Overlap() {
    this->TraceChannel = ECC_WorldStatic;
    this->OverlapShape = EOS_Box;
    this->SphereRadius = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->CapsuleHalfHeight = 0.00f;
}

