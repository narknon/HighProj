#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORRealmReachActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORRealmReachActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HLODProxyKey;
    
public:
    AORRealmReachActor();
};

