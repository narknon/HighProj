#include "CartesianPlot.h"

class UObject;

bool UCartesianPlot::SetDatasource(UObject* InDatasource) {
    return false;
}

UCartesianPlot::UCartesianPlot() {
    this->DataSource = NULL;
}

