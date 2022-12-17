#include "OR3DMapMarkerActor.h"
#include "OR3DMapMarkerAddressBookComponent.h"

void AOR3DMapMarkerActor::SetDiscovered(bool bDiscovered) {
}

AOR3DMapMarkerActor::AOR3DMapMarkerActor() {
    this->bIsDiscoverable = false;
    this->bWasDiscovered = false;
    this->AddressBook = CreateDefaultSubobject<UOR3DMapMarkerAddressBookComponent>(TEXT("AddressBook"));
}

