#include "ORBaseSkelMeshCustomizableNPC.h"
#include "SQDeformerComponent.h"
#include "ORMeshRandomizerComponent.h"

AORBaseSkelMeshCustomizableNPC::AORBaseSkelMeshCustomizableNPC() {
    this->MeshRandomizerComponent = CreateDefaultSubobject<UORMeshRandomizerComponent>(TEXT("ORMeshRandomizer"));
    this->DeformerComponent = CreateDefaultSubobject<USQDeformerComponent>(TEXT("SQDeformer"));
}

