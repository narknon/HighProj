#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ORSocketReservationData.generated.h"

USTRUCT(BlueprintType)
struct OREGON_API FORSocketReservationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SocketTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Sockets;
    
    FORSocketReservationData();
};

