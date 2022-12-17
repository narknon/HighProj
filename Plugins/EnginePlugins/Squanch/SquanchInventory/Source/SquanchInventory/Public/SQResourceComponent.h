#pragma once
#include "CoreMinimal.h"
#include "SQFireableItemComponent.h"
#include "SQResourceComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API USQResourceComponent : public USQFireableItemComponent {
    GENERATED_BODY()
public:
    USQResourceComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UseResource(int32 Stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshResource(int32 Stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasResourceAvailable(int32 Stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetResourceAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxResourceAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DepleteResource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanRefreshResource();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddResourceIndividual(int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddResource(int32 Stacks);
    
};

