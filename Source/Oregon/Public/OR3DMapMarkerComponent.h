#pragma once
#include "CoreMinimal.h"
#include "ORStreamingAddressBookComponentBase.h"
#include "GameplayTagContainer.h"
#include "OR3DMapMarkerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UOR3DMapMarkerComponent : public UORStreamingAddressBookComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDiscoverable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MarkerTypeTag;
    
    UOR3DMapMarkerComponent();
    UFUNCTION(BlueprintCallable)
    void SetDiscovered(bool bDiscovered);
    
};

