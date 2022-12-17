#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMercunaLevelOfDetail.h"
#include "MercunaNavVolume.generated.h"

class UMerVolumeComponent;
class UBrushComponent;

UCLASS(Abstract, Blueprintable)
class MERCUNA_API AMercunaNavVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMerVolumeComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PreciseBoundaries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaLevelOfDetail LOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FullDetailBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrushComponent* BrushComponent;
    
public:
    AMercunaNavVolume();
    UFUNCTION(BlueprintCallable)
    void SetSize(FVector Size);
    
    UFUNCTION(BlueprintCallable)
    void SetNavigationRotation(const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSize() const;
    
};

