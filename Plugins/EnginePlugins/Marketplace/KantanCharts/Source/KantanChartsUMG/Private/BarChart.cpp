#include "BarChart.h"

class UObject;

bool UBarChart::SetDatasource(UObject* InDatasource) {
    return false;
}

UBarChart::UBarChart() {
    this->DataSource = NULL;
}

