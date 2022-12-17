#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORMaterialBillboard.generated.h"

class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORMaterialBillboard : public UPrimitiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSizeIsInScreenSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Tint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MyMaterial;
    
public:
    UORMaterialBillboard();
    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, const FLinearColor& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTint(const FLinearColor& InTint);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
};

