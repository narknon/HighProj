#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilitySystemInterface.h"
#include "ORBaseSkeletalMeshNPC.h"
#include "ORDamageableInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GenericTeamAgentInterface.h"
#include "ORDamageableSkeletalMeshNPC.generated.h"

class UORAbilitySystemComponent;
class UORDamageableAttributeSet;
class UORDamageHandlerComponent_NoHealth;
class UORTargetableComponent;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AORDamageableSkeletalMeshNPC : public AORBaseSkeletalMeshNPC/*, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public IORDamageableInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORDamageableAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
public:
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORDamageableAttributeSet> CachedAttribs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORTargetableComponent* TargetableComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORDamageHandlerComponent_NoHealth* DamageHandler;
    
    AORDamageableSkeletalMeshNPC();
    
    // Fix for true pure virtual functions not being implemented
};

