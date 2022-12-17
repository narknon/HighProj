#include "ORZiplineCannon.h"

class AActor;

void AORZiplineCannon::ZiplineFired(AActor* NewZipline) {
}

void AORZiplineCannon::ClearExistingZipline() {
}


AORZiplineCannon::AORZiplineCannon() {
    this->ZiplineExtensionSpeed = 6000.00f;
    this->MinClampDistance = 0.00f;
    this->MaxClampDistanceOffset = 0.00f;
}

