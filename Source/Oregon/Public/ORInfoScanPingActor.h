#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORInfoScanPingActor.generated.h"

class UStaticMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class OREGON_API AORInfoScanPingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PingMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* PingMeshMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnitsPerMeshScale;
    
public:
    AORInfoScanPingActor();
protected:
    UFUNCTION(BlueprintCallable)
    void DeactivatePing();
    
};

