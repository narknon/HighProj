#pragma once
#include "CoreMinimal.h"
#include "ORAIBossCharacter.h"
#include "UObject/NoExportTypes.h"
#include "ORBaseSkrendelCharacter.generated.h"

class AActor;

UCLASS(Blueprintable)
class OREGON_API AORBaseSkrendelCharacter : public AORAIBossCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> StuffPiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> JumpPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> JumpPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopropeHoverTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBrotronFight;
    
    AORBaseSkrendelCharacter();
    UFUNCTION(BlueprintCallable)
    void SetHoleJumpPattern();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReform(FVector ReformLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBreak(FVector SpawnLocation, int32 LivingBroCount);
    
};

