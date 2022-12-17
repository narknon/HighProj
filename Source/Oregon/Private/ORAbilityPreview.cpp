#include "ORAbilityPreview.h"
#include "Templates/SubclassOf.h"

class AActor;

void UORAbilityPreview::UpdatePreview() {
}

void UORAbilityPreview::EnablePreview() {
}

void UORAbilityPreview::DisablePreview() {
}

void UORAbilityPreview::ChangePreviewActorClass(const TSubclassOf<AActor> NewPreviewActorClass) {
}

UORAbilityPreview::UORAbilityPreview() {
    this->OwningCharacter = NULL;
    this->PreviewActorClass = NULL;
    this->PreviewActor = NULL;
    this->bIsPreviewEnabled = false;
}

