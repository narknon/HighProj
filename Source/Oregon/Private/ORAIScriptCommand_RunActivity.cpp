#include "ORAIScriptCommand_RunActivity.h"

class UORActivityBase;

void UORAIScriptCommand_RunActivity::OnActivityEnd(UORActivityBase* EndedActivity) {
}

UORAIScriptCommand_RunActivity::UORAIScriptCommand_RunActivity() {
    this->Activity = NULL;
}

