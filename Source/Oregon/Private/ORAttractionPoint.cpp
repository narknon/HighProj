#include "ORAttractionPoint.h"
#include "ORAttractionPointComponent.h"

AORAttractionPoint::AORAttractionPoint() {
    this->AttractionPointComponent = CreateDefaultSubobject<UORAttractionPointComponent>(TEXT("AttractionPointComp"));
}

