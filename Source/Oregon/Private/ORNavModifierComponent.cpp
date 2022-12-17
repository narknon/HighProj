#include "ORNavModifierComponent.h"
#include "Templates/SubclassOf.h"
#include "NavAreas/NavArea_Null.h"

class UNavArea;

void UORNavModifierComponent::UpdateNavigationData(bool bRefreshBounds) {
}

void UORNavModifierComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}

UORNavModifierComponent::UORNavModifierComponent() {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bIncludeAgentHeight = true;
    this->bOffsetByAgentHeight = false;
    this->bCollisionMustBeEnabled = true;
    this->bMonitorComponentTransforms = false;
}

