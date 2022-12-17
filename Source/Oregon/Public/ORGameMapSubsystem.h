#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ORGameMapSubsystem.generated.h"

UCLASS(Blueprintable)
class OREGON_API UORGameMapSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDiscoverabilityEnabled;
    
public:
    UORGameMapSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetMapRegionDiscoverabilityEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMapRegionDiscoverabilityEnabled() const;
    
};

