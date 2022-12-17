#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "MercunaNavExclusionVolume.generated.h"

class AMercunaNavGraph;
class UMerVolumeComponent;
class UBrushComponent;

UCLASS(Blueprintable)
class MERCUNA_API AMercunaNavExclusionVolume : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMerVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyToAllNavGraphs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavGraph* NavGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    AMercunaNavExclusionVolume();
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFromGraphs();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSize() const;
    
    UFUNCTION(BlueprintCallable)
    void AddToGraph(AMercunaNavGraph* NewNavGraph);
    
    UFUNCTION(BlueprintCallable)
    void AddToAllGraphs();
    
};

