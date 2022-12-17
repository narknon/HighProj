#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "SuctionPointData.h"
#include "ORSuctionSubsystem.generated.h"

class AActor;
class UGameplayEffect;
class UORSuctionComponent;

UCLASS(Blueprintable)
class OREGON_API UORSuctionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UORSuctionComponent*> SuctionObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FSuctionPointData> SuctionPoints;
    
public:
    UORSuctionSubsystem();
    UFUNCTION(BlueprintCallable)
    void UpdateSuctionLocation(AActor* SuctionPoint, FVector LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSuctionForce(AActor* SuctionPoint, float ItemForce, float ProjectileForce, float SmallCharacterForce, float LargeCharacterForce, float SuctionRange, float SuctionAngle);
    
    UFUNCTION(BlueprintCallable)
    void UpdateBurstSuction(AActor* SuctionPoint, float SuctionRange, float SuctionAngle);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterSuctionPoint(AActor* SuctionPoint);
    
    UFUNCTION(BlueprintCallable)
    void UnRegisterSuctionObject(UORSuctionComponent* SuctionObject);
    
    UFUNCTION(BlueprintCallable)
    void ToggleSuctionPoint(AActor* SuctionPoint, bool IsPointActive);
    
    UFUNCTION(BlueprintCallable)
    void TickSuctionPoint(AActor* SuctionPoint);
    
    UFUNCTION(BlueprintCallable)
    void StopSuctionFromActor(AActor* SuctionPoint);
    
    UFUNCTION(BlueprintCallable)
    void StopAllSuction();
    
    UFUNCTION(BlueprintCallable)
    void RegisterSuctionPoint(AActor* SuctionPoint, FVector LocationOffset, float ItemForce, float ProjectileForce, float SmallCharacterForce, float LargeCharacterForce, float SuctionRange, float SuctionAngle, bool StopCharacterAtPoint, bool UseLOS, TSubclassOf<UGameplayEffect> StartingSuctionEffect, bool AffectCharacterMovement);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterSuctionObject(UORSuctionComponent* SuctionObject);
    
    UFUNCTION(BlueprintCallable)
    void RegisterBurstSuctionPoint(AActor* SuctionPoint, FVector LocationOffset, float SuctionRange, float SuctionAngle, bool UseLOS, float MaxBurstLevel, bool bContinuousBurst);
    
    UFUNCTION(BlueprintCallable)
    void ActivateBurstSuction(AActor* SuctionPoint, float CurrentBurstLevel, TSubclassOf<UGameplayEffect> SmallCharEffect, TSubclassOf<UGameplayEffect> LargeCharEffect, float SmallCharForce, float LargeCharForce);
    
};

