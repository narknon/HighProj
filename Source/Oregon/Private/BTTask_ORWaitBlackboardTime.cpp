#include "BTTask_ORWaitBlackboardTime.h"

UBTTask_ORWaitBlackboardTime::UBTTask_ORWaitBlackboardTime() {
    this->bClearBlackboardKeyOnWaitStart = false;
    this->bClearBlackboardKeyOnWaitFinish = false;
    this->bClearBlackboardKeyOnWaitAbort = false;
    this->bRestartOnBlackboardKeyChanged = false;
}

