#include "ChatterCondition.h"

FChatterCondition::FChatterCondition() {
    this->LogicOperator = ChatterLogicOperator::AND;
    this->Value = 0;
    this->Comparison = 0;
}

