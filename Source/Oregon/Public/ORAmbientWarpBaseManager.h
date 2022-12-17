#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ORAmbientWarpBaseManager.generated.h"

class AORStreamingWarpBaseAnchor;
class UORStreamingSubsystem;

UCLASS(Blueprintable)
class OREGON_API UORAmbientWarpBaseManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UORStreamingSubsystem* CachedStreamingSubsystem;
    
public:
    UORAmbientWarpBaseManager();
    UFUNCTION(BlueprintCallable)
    void UnregisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAmbientWarpBase(TSoftObjectPtr<AORStreamingWarpBaseAnchor> ambientBase);
    
    UFUNCTION(BlueprintCallable)
    void DismissAllAmbientBases();
    
};

