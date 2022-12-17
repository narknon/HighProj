#pragma once
#include "CoreMinimal.h"
#include "ORWorldSubsystem.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ORAcidPoolSubsystem.generated.h"

class AActor;
class APawn;
class ASQExplosionActor;
class UItemImpactResult;

UCLASS(Blueprintable)
class OREGON_API UORAcidPoolSubsystem : public UORWorldSubsystem {
    GENERATED_BODY()
public:
    UORAcidPoolSubsystem();
    UFUNCTION(BlueprintCallable)
    void RemoveAcidAtLocation(const FVector& Location, float Radius);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleProjectileImpact(AActor* SourceActor, UItemImpactResult* ImpactResult, const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleExplosionImpact(ASQExplosionActor* Explosion);
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateAcidRingAtLocation(const FVector& Location, float innerRadius, float Radius, APawn* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void CreateAcidAtLocation(const FVector& Location, float Radius, APawn* Instigator);
    
};

