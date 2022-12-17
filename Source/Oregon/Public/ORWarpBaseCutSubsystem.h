#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ORWarpBaseCutSubsystem.generated.h"

class UObject;
class AActor;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class OREGON_API UORWarpBaseCutSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, float> ActiveCuts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* ParameterCollection;
    
public:
    UORWarpBaseCutSubsystem();
    UFUNCTION(BlueprintCallable)
    void UpdateWarpBaseCut(AActor* CutActor, float Radius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnregisterWarpBaseCut(UObject* WorldContextObject, AActor* CutActor);
    
    UFUNCTION(BlueprintCallable)
    void RegisterWarpBaseCut(AActor* CutActor, float Radius);
    
};

