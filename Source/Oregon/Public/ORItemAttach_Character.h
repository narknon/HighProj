#pragma once
#include "CoreMinimal.h"
#include "SQItemAttachment.h"
#include "STPossessableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=STSequenceActor -FallbackName=STSequenceActor
#include "GameplayTagContainer.h"
#include "EInventoryTransactionType.h"
#include "ORItemAttach_Character.generated.h"

class ASQInventoryItem;
class USTPossessableComponent;
class USkeletalMeshComponent;
class AORCharacter;
class UORPossessableComponent;

UCLASS(Blueprintable)
class OREGON_API AORItemAttach_Character : public ASQItemAttachment/*, public ISTPossessableInterface*//*, public ISTSequenceActor*/ {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ItemMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORCharacter> CachedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPossessableComponent* ORPossessableComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EquipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnequipTime;
    
    AORItemAttach_Character();
    UFUNCTION(BlueprintCallable)
    void ParentItemEventFired(ASQInventoryItem* Item, FGameplayTag Event, FGameplayTag FireMode, EInventoryTransactionType TransactionType);
    
protected:
    UFUNCTION(BlueprintCallable)
    AORCharacter* GetOwningCharacter();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPParentItemEventFired(ASQInventoryItem* Item, FGameplayTag Event, FGameplayTag FireMode, EInventoryTransactionType TransactionType);
    
    
    // Fix for true pure virtual functions not being implemented
    /*UFUNCTION(BlueprintCallable)
    USTPossessableComponent* GetPossessableComponent() const override PURE_VIRTUAL(GetPossessableComponent, return NULL;);*/
    
};

