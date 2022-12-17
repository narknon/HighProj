#include "ORAIScriptCommand_MoveToSpline.h"

UORAIScriptCommand_MoveToSpline::UORAIScriptCommand_MoveToSpline() {
    this->NavMeshWaitTime = 3.00f;
    this->TargetActor = NULL;
    this->TargetSplineComponent = NULL;
    this->SplineMoveSpeed = -1.00f;
    this->ReverseSplineDirection = false;
    this->ForceSplineRotation = false;
    this->ProjectSplineToMesh = true;
    this->MoveTask = NULL;
}

