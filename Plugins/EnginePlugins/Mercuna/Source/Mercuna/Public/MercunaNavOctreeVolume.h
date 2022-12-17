#pragma once
#include "CoreMinimal.h"
#include "MercunaNavVolume.h"
#include "MercunaNavOctreeVolume.generated.h"

class AMercunaNavOctree;

UCLASS(Blueprintable)
class MERCUNA_API AMercunaNavOctreeVolume : public AMercunaNavVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavOctree* NavOctree;
    
public:
    AMercunaNavOctreeVolume();
    UFUNCTION(BlueprintCallable)
    void RemoveFromOctree();
    
    UFUNCTION(BlueprintCallable)
    void AddToOctree(AMercunaNavOctree* NewNavOctree);
    
};

