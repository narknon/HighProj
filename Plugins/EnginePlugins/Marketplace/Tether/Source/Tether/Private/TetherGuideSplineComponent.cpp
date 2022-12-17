#include "TetherGuideSplineComponent.h"
#include "TetherGuideSplineMetadata.h"

UTetherGuideSplineComponent::UTetherGuideSplineComponent() {
    this->MetaData = CreateDefaultSubobject<UTetherGuideSplineMetadata>(TEXT("MetaData"));
}

