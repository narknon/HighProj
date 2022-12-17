#pragma once
#include "CoreMinimal.h"
#include "ORFiringResult_Projectile.h"
#include "UObject/NoExportTypes.h"
#include "ORFiringResult_EnemyMortarProj.generated.h"

class AActor;
class AORCharacter;

UCLASS(Abstract, Blueprintable)
class OREGON_API UORFiringResult_EnemyMortarProj : public UORFiringResult_Projectile {
    GENERATED_BODY()
public:
    UORFiringResult_EnemyMortarProj();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAIControllerTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool FiringAnglePitchCalculation(const float Distance2D, const float HeightDifference, const float GravitySpeed, const float ProjectileSpeed, float& OutHighAngleDeg, float& OutLowAngleDeg) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalculateTargetPosition(const AORCharacter* TargetCharacter, const bool bLeadTarget, const float LeadTime, const float FudgeDistance) const;
    
};

