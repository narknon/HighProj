#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "ORFurglePooledGenerator.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class OREGON_API AORFurglePooledGenerator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FurglePoolCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FurgleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnBegin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PooledFurgles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailableFurgles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle InitializeTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    AORFurglePooledGenerator();
    UFUNCTION(BlueprintCallable)
    void StopGenerating();
    
    UFUNCTION(BlueprintCallable)
    void StartGenerating();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnFurgle();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReturnFurgleToPool(AActor* Furgle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void GenerateFurgle();
    
public:
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
};

