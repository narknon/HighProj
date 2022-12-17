#include "ORItemAcquisitionRuleTableRow.h"

FORItemAcquisitionRuleTableRow::FORItemAcquisitionRuleTableRow() {
    this->AcquisitionType = EORItemAcquisitionType::GrantAllItemsOnAllAcquired;
    this->GrantTransactionType = EITT_Silent;
}

