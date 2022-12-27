#pragma once
#include "CoreMinimal.h"
#include "Mercuna3DMovementInterface.h"
#include "ORAICharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "Mercuna3DMovementProperties.h"
#include "ORAIFlyingCharacterMovementComponent.generated.h"

class UMercuna3DNavigationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORAIFlyingCharacterMovementComponent : public UORAICharacterMovementComponent, public IMercuna3DMovementInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavCorrectionMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercuna3DMovementProperties MovementProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPositionCorrected: 1;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector AngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMercuna3DNavigationComponent* MercunaNavComponent;
    
public:
    UORAIFlyingCharacterMovementComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void SetVelocity(FVector NewVelocity);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNewMovementProperties(const FMercuna3DMovementProperties& NewMovementProperties);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAngularVelocity(FVector NewAngVel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalVelocity() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

