#pragma once
#include "CoreMinimal.h"
#include "MercunaNavigationComponent.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Mercuna3DNavigationConfiguration.h"
#include "MercunaPawnUsageFlags.h"
#include "Mercuna3DNavigationComponent.generated.h"

class UObject;
class AActor;
class AMercunaNavOctree;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercuna3DNavigationComponent : public UMercunaNavigationComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercuna3DNavigationConfiguration Configuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMercunaNavOctree* NavOctree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Pathfinding;
    
public:
    UMercuna3DNavigationComponent();
    UFUNCTION(BlueprintCallable)
    void TrackActor(AActor* Actor, float Distance, float Speed, FVector Offset);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetUsageFlags(FMercunaPawnUsageFlags& NewUsageFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetNavOctree(AMercunaNavOctree* NewNavOctree);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceAgainst(AActor* Actor, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void ResumeNavigation();
    
    UFUNCTION(BlueprintCallable)
    void PauseNavigation();
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocations(const TArray<FVector>& Destinations, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(const FVector& Destination, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void MoveToActor(AActor* Actor, float EndDistance, float Speed, bool UsePartialPath);
    
    UFUNCTION(BlueprintCallable)
    void LookInDirection(FVector Direction, float MaxPitch);
    
    UFUNCTION(BlueprintCallable)
    void LookAt(AActor* Actor, float MaxPitch);
    
    UFUNCTION(BlueprintCallable)
    void LookAlongAcceleration(float MaxPitch);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void IsReachable(FVector Point, bool& Success, UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void GetPathInfo(bool& Valid, float& DistanceToEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMercunaNavOctree* GetNavOctree() const;
    
    UFUNCTION(BlueprintCallable)
    void ConfigureMovement(bool bUsePathfinding, bool bUseDynamicAvoidance);
    
    UFUNCTION(BlueprintCallable)
    void Configure(const FMercuna3DNavigationConfiguration& NewConfiguration);
    
    UFUNCTION(BlueprintCallable)
    void ClearAvoidanceExclusions();
    
    UFUNCTION(BlueprintCallable)
    void CancelMovement();
    
    UFUNCTION(BlueprintCallable)
    void CancelLookAt();
    
    UFUNCTION(BlueprintCallable)
    void AddDestinationLocation(FVector NextDestination);
    
};

