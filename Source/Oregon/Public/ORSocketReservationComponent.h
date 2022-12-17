#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ORSocketReservationData.h"
#include "GameplayTagContainer.h"
#include "ORSocketData.h"
#include "ORSocketReservedDelegate.h"
#include "ORSocketReservationComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OREGON_API UORSocketReservationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORSocketReservationData> SocketReservationData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSocketReserved OnSocketReserved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORSocketReserved OnSocketFreed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORSocketData> AllAvailableSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FORSocketData> ReservedSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> MeshComps;
    
public:
    UORSocketReservationComponent();
    UFUNCTION(BlueprintCallable)
    FORSocketData ReserveFromPriorityList(const FGameplayTag SocketType);
    
    UFUNCTION(BlueprintCallable)
    FORSocketData ReserveClosest(const FVector& Point, const FGameplayTag SocketType);
    
    UFUNCTION(BlueprintCallable)
    FORSocketData ReserveAndAttachFromPriorityList(AActor* Actor, const FGameplayTag SocketType);
    
    UFUNCTION(BlueprintCallable)
    FORSocketData ReserveAndAttachClosest(const FVector& Point, AActor* Actor, const FGameplayTag SocketType);
    
    UFUNCTION(BlueprintCallable)
    bool ReserveAndAttach(const FORSocketData& SocketData, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool Reserve(const FORSocketData& SocketData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSocketReserved(const FORSocketData& SocketData) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasSocketsAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSocketsAvailableCount(const FGameplayTag SocketType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FORSocketData> GetSocketData(const FGameplayTag SocketType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSocketsCount(const FGameplayTag SocketType) const;
    
    UFUNCTION(BlueprintCallable)
    bool Free(const FORSocketData& SocketData);
    
    UFUNCTION(BlueprintCallable)
    void FireSocketReservedEvent();
    
};

