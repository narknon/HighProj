#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ORDynamicTexture.h"
#include "UObject/NoExportTypes.h"
#include "ORAcidPool.generated.h"

class AActor;
class APawn;
class UGameplayEffect;
class UORTriggerVolumeComponent;

UCLASS(Blueprintable)
class AORAcidPool : public AORDynamicTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTriggerVolumeComponent* TriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrackedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AcidGameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcidApplicationInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultProjectileRemoveRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* InitialInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CircularMaskCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircularMaskRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AcidApplicationTimer;
    
    AORAcidPool();
    UFUNCTION(BlueprintCallable)
    void RemoveCircleAcid(const FVector& CenterLocation, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcidAtLocation(const FVector& Location) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLeft(AActor* SourceActor, int32 VolumeIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleEntered(AActor* SourceActor, int32 VolumeIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void DecayAcid(float Value);
    
    UFUNCTION(BlueprintCallable)
    void AddRingAcid(const FVector& CenterLocation, float innerRadius, float Radius, APawn* AcidInstigator);
    
    UFUNCTION(BlueprintCallable)
    void AddCircleAcid(const FVector& CenterLocation, float Radius, APawn* AcidInstigator);
    
};

