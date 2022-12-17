#include "BTService_ORScopedBlackboardBool.h"

UBTService_ORScopedBlackboardBool::UBTService_ORScopedBlackboardBool() {
    this->EnterAction = EORServiceScopeChangeAction::None;
    this->ExitAction = EORServiceScopeChangeAction::None;
}

