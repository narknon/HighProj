#pragma once
#include "CoreMinimal.h"
#include "ORDummyNPC.h"
#include "KnifeyBecomeInvisibleDelegate.h"
#include "KnifeyBecomeVisibleDelegate.h"
#include "ORKnifeyDummyNPC.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class OREGON_API AORKnifeyDummyNPC : public AORDummyNPC {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnifeyBecomeVisible KnifeyBecomeVisibleEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKnifeyBecomeInvisible KnifeyBecomeInvisibleEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibilityCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* KnifeyMesh;
    
public:
    AORKnifeyDummyNPC();
    UFUNCTION(BlueprintCallable)
    void RemoveVisibilityCounters(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    int32 GetVisibilityCount();
    
    UFUNCTION(BlueprintCallable)
    void AddVisibilityCounters(int32 Count);
    
};

