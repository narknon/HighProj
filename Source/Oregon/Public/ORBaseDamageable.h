#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "AbilitySystemInterface.h"
#include "ORDamageableInterface.h"
#include "OREffectsTargetInterface.h"
#include "ORSignificanceInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ORBaseDamageable.generated.h"

class UORAbilitySystemComponent;
class UORDamageableAttributeSet;
class UStaticMeshComponent;
class UDataTable;

UCLASS(Blueprintable)
class AORBaseDamageable : public AActor/*, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public IORDamageableInterface, public IOREffectsTargetInterface, public IORSignificanceInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORDamageableAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonPlayerDamageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMitigationFeedback;
    
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORDamageableAttributeSet> CachedAttribs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificanceManagement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SignificanceManagementTickThreshold;
    
public:
    AORBaseDamageable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SignificanceStateChanged(bool bTickEnabled, float NewSignificanceScore);
    
    
    // Fix for true pure virtual functions not being implemented
};

