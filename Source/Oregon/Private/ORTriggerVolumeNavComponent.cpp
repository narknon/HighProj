#include "ORTriggerVolumeNavComponent.h"
#include "Templates/SubclassOf.h"
#include "NavAreas/NavArea_Null.h"

class UNavArea;

void UORTriggerVolumeNavComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

UORTriggerVolumeNavComponent::UORTriggerVolumeNavComponent() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bIncludeAgentHeight = true;
}

