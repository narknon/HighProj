#include "SQInventoryItem_WarpTicket.h"

ASQInventoryItem_WarpTicket::ASQInventoryItem_WarpTicket() {
    this->WarpBase_DisplayName = TEXT("Base Warp Ticket, add a name");
    this->WarpBase_DisplayDescription = TEXT("This is the default warp base, update the info with a better description");
    this->bIsReusable = false;
    this->bCanBeDismissed = true;
    this->bIsAmbient = false;
    this->WarpBase_SlotSize = Small;
    this->OverrideWarpParticleScale = -1.00f;
}

