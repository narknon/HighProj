#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ORItemDropAttachment.generated.h"

class UObject;
class USceneComponent;
class AORCharacter;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORItemDropAttachment : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ItemStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ItemToDropClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttachSocketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AORCharacter* AttachedCharacter;
    
public:
    AORItemDropAttachment();
protected:
    UFUNCTION(BlueprintCallable)
    void OnAttachedCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachCharacterDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void DropItem();
    
};

