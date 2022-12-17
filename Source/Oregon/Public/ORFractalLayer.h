#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ORFractalLayer.generated.h"

class USceneComponent;
class AORFractalManager;
class AORFractalLayer;

UCLASS(Blueprintable)
class OREGON_API AORFractalLayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> EditorAttachedActors;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORFractalManager> CachedParentManager;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORFractalLayer> CachedInnerLayer;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AORFractalLayer> CachedOuterLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> AttachedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PendingShiftAttachedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> PendingShiftAttachedComponents;
    
    AORFractalLayer();
    UFUNCTION(BlueprintCallable)
    void SetLayerActive(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void PrepareForShift(bool bShiftToOuter);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLayerIndex();
    
    UFUNCTION(BlueprintCallable)
    bool GetLayerActive();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteShift(bool bShiftToOuter);
    
};

