#include "ORItemDropAttachment.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

class UObject;
class AActor;
class AORCharacter;

void AORItemDropAttachment::OnAttachedCharacterDied(UObject* Killer, AORCharacter* Killed, const FHitResult& HitResult, const FGameplayTagContainer& DamageTags) {
}

void AORItemDropAttachment::OnAttachCharacterDestroyed(AActor* DestroyedActor) {
}

void AORItemDropAttachment::DropItem() {
}

AORItemDropAttachment::AORItemDropAttachment() {
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->ItemStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemStaticMesh"));
    this->ItemToDropClass = NULL;
    this->AttachedCharacter = NULL;
}

