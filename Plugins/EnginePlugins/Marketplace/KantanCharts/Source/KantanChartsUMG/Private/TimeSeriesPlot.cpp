#include "TimeSeriesPlot.h"

class UObject;

bool UTimeSeriesPlot::SetDatasource(UObject* InDatasource) {
    return false;
}

UTimeSeriesPlot::UTimeSeriesPlot() {
    this->DataSource = NULL;
}

