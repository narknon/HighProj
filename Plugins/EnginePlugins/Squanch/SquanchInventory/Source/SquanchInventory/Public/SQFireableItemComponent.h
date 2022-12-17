#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EInventoryFireType.h"
#include "SQFireableItemComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQFireableItemComponent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInventoryFireType> FiringType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ModeType;
    
public:
    USQFireableItemComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Init(FGameplayTag ModeKey);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Destroy();
    
};

