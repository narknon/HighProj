#include "BTComposite_Utility.h"

UBTComposite_Utility::UBTComposite_Utility() {
    this->SelectionMethod = EUtilitySelectionMethod::Priority;
    this->bShouldTryNextChildOnFailure = false;
}

