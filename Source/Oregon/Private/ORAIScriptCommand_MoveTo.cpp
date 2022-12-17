#include "ORAIScriptCommand_MoveTo.h"

UORAIScriptCommand_MoveTo::UORAIScriptCommand_MoveTo() {
    this->TargetActor = NULL;
    this->AcceptanceRadius = -1.00f;
    this->bAllowPartialPathing = false;
    this->NavMeshWaitTime = 3.00f;
    this->MoveTask = NULL;
}

