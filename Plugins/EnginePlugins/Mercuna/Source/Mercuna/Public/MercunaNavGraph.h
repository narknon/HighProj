#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "MercunaNavGraph.generated.h"

class UMerNavGraphRenderingComponent;

UCLASS(Abstract, Blueprintable)
class MERCUNA_API AMercunaNavGraph : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaRebuildComplete, AActor*, Volume, bool, Success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMercunaBuildComplete, bool, Success);
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> GeometryCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeverSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildAsSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsRebuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMerNavGraphRenderingComponent* MerNavGraphRenderingComponent;
    
public:
    AMercunaNavGraph();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveToFile(const FString& Filename) const;
    
};

