#include "BTTask_Mercuna3D_MoveTo.h"

UBTTask_Mercuna3D_MoveTo::UBTTask_Mercuna3D_MoveTo() {
    this->Speed = 1.00f;
    this->EndDistance = 0.00f;
    this->bObserveBlackboardValue = true;
    this->bAllowPartialPath = true;
}

