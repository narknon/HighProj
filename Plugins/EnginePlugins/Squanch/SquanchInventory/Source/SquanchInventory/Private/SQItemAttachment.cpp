#include "SQItemAttachment.h"

class USkeletalMeshComponent;

bool ASQItemAttachment::ShouldBlockFire_Implementation() {
    return false;
}


void ASQItemAttachment::ItemUnequipped_Implementation() {
}

void ASQItemAttachment::ItemEquipped_Implementation() {
}

USkeletalMeshComponent* ASQItemAttachment::GetSkeletalAttachment_Implementation() {
    return NULL;
}

FVector ASQItemAttachment::GetAttachmentSocketLocation_Implementation(FName SocketName) {
    return FVector{};
}

ASQItemAttachment::ASQItemAttachment() {
    this->bIsEquipped = false;
}

