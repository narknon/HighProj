#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ORFurgleDebris.generated.h"

class UBoxComponent;
class AORFurglePooledGenerator;

UCLASS(Blueprintable)
class OREGON_API AORFurgleDebris : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORFurglePooledGenerator* GeneratorOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RepoolTimer;
    
public:
    AORFurgleDebris();
    UFUNCTION(BlueprintCallable)
    void SetRepoolTimer(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetPooledGenerator(AORFurglePooledGenerator* Generator);
    
    UFUNCTION(BlueprintCallable)
    void Repool();
    
    UFUNCTION(BlueprintCallable)
    AORFurglePooledGenerator* GetPooledGenerator();
    
};

