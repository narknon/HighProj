#include "MercunaNavGraph.h"

void AMercunaNavGraph::SaveToFile(const FString& Filename) const {
}

AMercunaNavGraph::AMercunaNavGraph() {
    this->CellSize = 0.00f;
    this->GeometryCollisionChannel = ECC_Pawn;
    this->bNeverSave = false;
    this->bBuildAsSublevel = false;
    this->bNeedsRebuild = false;
    this->MerNavGraphRenderingComponent = NULL;
}

