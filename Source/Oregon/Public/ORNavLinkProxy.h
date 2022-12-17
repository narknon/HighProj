#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "ORNavLinkProxy.generated.h"

class USplineComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class OREGON_API AORNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LinkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseSplineTraversal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TraversalTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraversalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplinePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledCooldown;
    
    AORNavLinkProxy();
    UFUNCTION(BlueprintCallable)
    void SetNavigationRelevancy(bool bRelevant);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOctree();
    
    UFUNCTION(BlueprintCallable)
    void RefreshNavigationModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRelevant() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableLink(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void CopySmartLinkFromSimpleLink(const FNavigationLink& SimpleLink);
    
};

