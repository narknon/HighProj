#include "ORMaterialBillboard.h"

void UORMaterialBillboard::SetVectorParameterValue(FName ParameterName, const FLinearColor& Value) {
}

void UORMaterialBillboard::SetTint(const FLinearColor& InTint) {
}

void UORMaterialBillboard::SetScalarParameterValue(FName ParameterName, float Value) {
}

UORMaterialBillboard::UORMaterialBillboard() {
    this->Material = NULL;
    this->bSizeIsInScreenSpace = false;
    this->BaseSize = 0.10f;
    this->BaseAspect = 1.00f;
    this->MyMaterial = NULL;
}

