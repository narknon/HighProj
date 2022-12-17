#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "OR3DMapMarkerActor.generated.h"

class UOR3DMapMarkerAddressBookComponent;

UCLASS(Blueprintable)
class OREGON_API AOR3DMapMarkerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MarkerTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDiscoverable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasDiscovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOR3DMapMarkerAddressBookComponent* AddressBook;
    
public:
    AOR3DMapMarkerActor();
    UFUNCTION(BlueprintCallable)
    void SetDiscovered(bool bDiscovered);
    
};

