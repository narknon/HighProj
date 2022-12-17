#include "AttachmentData.h"

FAttachmentData::FAttachmentData() {
    this->AnimationBlueprintOverride = NULL;
    this->MinAttachments = 0;
    this->MaxAttachments = 0;
    this->bIsSkinAttachment = false;
    this->bDontConsiderForMeshMerging = false;
}

