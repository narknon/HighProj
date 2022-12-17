#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STPossessableInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LevelSequence -ObjectName=STSequenceActor -FallbackName=STSequenceActor
#include "UObject/NoExportTypes.h"
#include "ORDummyNPC.generated.h"

class USceneComponent;
class USTPossessableComponent;
class UORPossessableComponent;
class UORVocalizationComponent;

UCLASS(Blueprintable)
class AORDummyNPC : public AActor, public ISTPossessableInterface, public ISTSequenceActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORPossessableComponent* PossessableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORVocalizationComponent* ORVocalizationComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttentionOffset;
    
    AORDummyNPC();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAttentionLocation();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    USTPossessableComponent* GetPossessableComponent() const override PURE_VIRTUAL(GetPossessableComponent, return NULL;);
    
};

