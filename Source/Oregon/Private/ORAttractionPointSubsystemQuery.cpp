#include "ORAttractionPointSubsystemQuery.h"

FORAttractionPointSubsystemQuery::FORAttractionPointSubsystemQuery() {
    this->PathfindingGroup = EORAttractionPointPathfindingGroup::Group1;
    this->CurrentPoint = NULL;
    this->IdealCombatDistance = 0.00f;
    this->SearchRadius = 0.00f;
    this->LowCoverPreference = 0.00f;
    this->HighCoverPreference = 0.00f;
    this->NoCoverPreference = 0.00f;
    this->InsideHomeAreaScore = 0.00f;
    this->OutsideHomeAreaScore = 0.00f;
    this->FudgeFactor = 0.00f;
    this->bAllowAttractionPointReuse = false;
}

