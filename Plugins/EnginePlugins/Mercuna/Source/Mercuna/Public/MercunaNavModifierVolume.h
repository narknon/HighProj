#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavUsageTypes.h"
#include "MercunaNavModifierVolume.generated.h"

class AMercunaNavGraph;
class UMerVolumeComponent;
class UBrushComponent;

UCLASS(Blueprintable)
class MERCUNA_API AMercunaNavModifierVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph* NavGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMerVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaNavUsageTypes UsageTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    AMercunaNavModifierVolume();
    UFUNCTION(BlueprintCallable)
    void SetUsageTypes(const FMercunaNavUsageTypes& NewUsageTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCostMultiplier(float NewCostMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGraph();
    
    UFUNCTION(BlueprintCallable)
    void AddToGraph(AMercunaNavGraph* NewNavGraph);
    
};

