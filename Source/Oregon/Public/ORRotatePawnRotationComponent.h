#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORRotatePawnRotationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORRotatePawnRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UORRotatePawnRotationComponent();
    UFUNCTION(BlueprintCallable)
    void SetAllowTick(const bool bAllowTick);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAllowTick() const;
    
};

