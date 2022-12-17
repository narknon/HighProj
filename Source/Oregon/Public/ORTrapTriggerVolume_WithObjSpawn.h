#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORTrapTriggerVolume.h"
#include "ORTrapTriggerVolume_WithObjSpawn.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AORTrapTriggerVolume_WithObjSpawn : public AORTrapTriggerVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentSpawnedObject;
    
public:
    AORTrapTriggerVolume_WithObjSpawn();
};

