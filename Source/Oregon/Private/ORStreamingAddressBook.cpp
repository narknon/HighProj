#include "ORStreamingAddressBook.h"

class UWorld;

void UORStreamingAddressBook::RebuildWorldList() {
}

void UORStreamingAddressBook::RebuildAddressBookForCurrentWorld(UWorld* World) {
}

void UORStreamingAddressBook::RebuildAddressBook() {
}

UORStreamingAddressBook::UORStreamingAddressBook() {
    this->Addresses.AddDefaulted(1334);
    this->Worlds.AddDefaulted(18);
    this->WarpBases.AddDefaulted(49);
}

