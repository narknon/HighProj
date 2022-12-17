#pragma once
#include "CoreMinimal.h"
#include "ORSpawner.h"
#include "GameplayTagContainer.h"
#include "ORStreamingWarpBaseAnchorReadyDelegateDelegate.h"
#include "ORStreamingWarpBaseAnchor.generated.h"

class USceneComponent;
class UWorld;
class AOREncounterManager;
class UORStreamingAddressBookAnchorComponent;

UCLASS(Blueprintable)
class OREGON_API AORStreamingWarpBaseAnchor : public AORSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORStreamingWarpBaseAnchorReadyDelegate OnWarpBaseGameplayReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORStreamingAddressBookAnchorComponent* AddressBookComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    FName AnchorAddressBookID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadingReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AOREncounterManager*> LoadedEncounterManagers;
    
    AORStreamingWarpBaseAnchor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedUnloadingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishedLoadingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginUnloadingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginLoadingLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGetCurrentlyLoadedWarpBaseLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetInitialLevelPath();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UWorld> GetCurrentlyLoadedWarpBaseLevel() const;
    
};

