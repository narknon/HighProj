#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EActivityExecutionMode.h"
#include "ORActivityProfileComponent.generated.h"

class AActor;
class UORActivityBase;
class UORCompoundActivity;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORActivityProfileComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UORActivityBase*> Activities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityExecutionMode ExecutionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HomeBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFindHomeBounds;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORCompoundActivity* CompoundActivity;
    
public:
    UORActivityProfileComponent();
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    bool Restart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable)
    void Interrupt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetProgress() const;
    
    UFUNCTION(BlueprintCallable)
    bool Execute();
    
};

