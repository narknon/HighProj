#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "LookAtInterface.generated.h"

class AActor;
class USceneComponent;

UINTERFACE(Blueprintable)
class LOOKATTRACK_API ULookAtInterface : public UInterface {
    GENERATED_BODY()
};

class LOOKATTRACK_API ILookAtInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop(bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveNPCTarget(AActor* Target, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveEnvironmentTarget(AActor* Target, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveAllNPCTargets(bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LookAtTarget(AActor* Target, float Duration, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LookAtScene(USceneComponent* Scene, float Duration, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void LookAtLocation(FVector Location, float Duration, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddNPCTarget(AActor* Target, int32 Priority, bool bIsEyelookat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddEnvironmentTarget(AActor* Target, int32 Priority, bool bIsEyelookat);
    
};

