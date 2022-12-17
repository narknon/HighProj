#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORCompassActorInterface.h"
#include "CompassNodeLink.h"
#include "ORPlayerCompassMarker.generated.h"

class UORPlayerCompassMarkerComponent_Standard;
class AORPlayerCompassMarker;
class UCapsuleComponent;
class UBillboardComponent;

UCLASS(Blueprintable)
class OREGON_API AORPlayerCompassMarker : public AActor, public IORCompassActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SpriteComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPlayerCompassMarkerComponent_Standard* CompassMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SkipRelevancyRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORPlayerCompassMarker*> LinkedNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompassNodeLink> NodeLinks;
    
public:
    AORPlayerCompassMarker();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled();
    
    
    // Fix for true pure virtual functions not being implemented
};

