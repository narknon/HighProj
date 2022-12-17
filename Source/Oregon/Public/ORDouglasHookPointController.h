#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ORDouglasHookPointController.generated.h"

class AORDouglasHookPoint;

UCLASS(Blueprintable)
class OREGON_API AORDouglasHookPointController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORDouglasHookPoint*> HookPoints;
    
public:
    AORDouglasHookPointController();
    UFUNCTION(BlueprintCallable)
    AActor* GetCurrentHookPoint();
    
    UFUNCTION(BlueprintCallable)
    FVector FindNextJumpPoint();
    
    UFUNCTION(BlueprintCallable)
    FVector FindInitialJumpPoint(FVector CurrentDouglasLocation, FVector CurrentDouglasForward);
    
};

