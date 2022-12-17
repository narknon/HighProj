#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AbilitySystemInterface.h"
#include "ORProjectile.h"
#include "ORDamageableInterface.h"
#include "GenericTeamAgentInterface.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "ORMeleeableProjectile.generated.h"

class AActor;
class UAkAudioEvent;
class UORAbilitySystemComponent;
class UORDamageableAttributeSet;
class UORAkComponent;
class UORDamageHandlerComponent_NoHealth;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AORMeleeableProjectile : public AORProjectile, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public IORDamageableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAkComponent* DeflectORAkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORDamageableAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORDamageableAttributeSet> CachedAttribs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORDamageHandlerComponent_NoHealth* DamageHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DeflectableTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeflectAkEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
public:
    AORMeleeableProjectile();
    UFUNCTION(BlueprintCallable)
    void ResetProjectileAfterImpact();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProjectileHit_BP(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileHit(AActor* Player, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyDeflectTags(const FGameplayTagContainer& TagContainer);
    
    
    // Fix for true pure virtual functions not being implemented
};

