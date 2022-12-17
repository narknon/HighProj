#pragma once
#include "CoreMinimal.h"
#include "ORCharacterInventory.h"
#include "EquippableItemData.h"
#include "ORNPCInventory.generated.h"

class AORHealthTankItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORNPCInventory : public UORCharacterInventory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEquippableItemData> TaskItems;
    
public:
    UORNPCInventory();
    UFUNCTION(BlueprintCallable)
    void RemoveHealthTank(AORHealthTankItem* HealthTank);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveTaskItem();
    
};

