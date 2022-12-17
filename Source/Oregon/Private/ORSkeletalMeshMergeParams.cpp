#include "ORSkeletalMeshMergeParams.h"

FORSkeletalMeshMergeParams::FORSkeletalMeshMergeParams() {
    this->StripTopLODS = 0;
    this->bNeedsCpuAccess = false;
    this->bSkeletonBefore = false;
    this->Skeleton = NULL;
    this->bAsync = false;
}

