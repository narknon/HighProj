#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORLootLibrarySubsystem.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API UORLootLibrarySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LootItemData;
    
public:
    UORLootLibrarySubsystem();
    UFUNCTION(BlueprintCallable)
    void SetLootGlobalDropModifier(FName Item, float GlobalModifier);
    
    UFUNCTION(BlueprintCallable)
    void IncrementLootGlobalDropModifier(FName Item, float ModifierIncrement);
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AActor> GetLootItem(FName Item);
    
    UFUNCTION(BlueprintCallable)
    float GetLootGlobalDropModifier(FName Item);
    
};

