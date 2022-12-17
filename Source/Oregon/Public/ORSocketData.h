#pragma once
#include "CoreMinimal.h"
#include "ORSocketData.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct OREGON_API FORSocketData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    FORSocketData();
};

