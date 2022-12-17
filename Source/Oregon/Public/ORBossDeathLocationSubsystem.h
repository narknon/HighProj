#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "ORBossDeathLocationSubsystem.generated.h"

class AActor;
class AORBossDeathMarkers;

UCLASS(Blueprintable)
class OREGON_API UORBossDeathLocationSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AORBossDeathMarkers*> DeathLocations;
    
public:
    UORBossDeathLocationSubsystem();
    UFUNCTION(BlueprintCallable)
    void UpdatedCurrentBoss(AActor* Boss);
    
    UFUNCTION(BlueprintCallable)
    void StopLOSChecksFromDeathPoints();
    
    UFUNCTION(BlueprintCallable)
    void StartLOSChecksFromDeathPoints();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentBoss();
    
    UFUNCTION(BlueprintCallable)
    FVector FindBestDeathLocation();
    
};

