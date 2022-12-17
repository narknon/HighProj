#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EActorIKTraceType.h"
#include "ORIKUpdateSubsystem.generated.h"

class AActor;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class UORIKUpdateSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UORIKUpdateSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnsetDirectIKRotation(USkeletalMeshComponent* Skelmesh, EActorIKTraceType IKType);
    
    UFUNCTION(BlueprintCallable)
    void UnsetDirectIKLocation(USkeletalMeshComponent* Skelmesh, EActorIKTraceType IKType);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterIKDataProvider(AActor* Object);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectIKRotation(USkeletalMeshComponent* Skelmesh, const FRotator& NewRotation, EActorIKTraceType IKType, bool bInWorldSpace);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectIKLocation(USkeletalMeshComponent* Skelmesh, const FVector& NewLocation, EActorIKTraceType IKType, bool bInWorldSpace);
    
    UFUNCTION(BlueprintCallable)
    void RegisterIKDataProvider(AActor* Object);
    
};

