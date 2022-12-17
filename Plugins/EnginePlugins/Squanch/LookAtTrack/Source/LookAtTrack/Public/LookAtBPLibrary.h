#pragma once
#include "CoreMinimal.h"
#include "LookAtStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LookAtBPLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class LOOKATTRACK_API ULookAtBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULookAtBPLibrary();
    UFUNCTION(BlueprintCallable)
    static void Update(UPARAM(Ref) FLookAtStruct& LookAt, UPARAM(Ref) FTransform& Transform, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void Stop(UPARAM(Ref) FLookAtStruct& LookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector SolveLookAtTarget(const FVector& InSource, const FVector& InTarget, const FVector& AimVector, const float AimClamp);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveNPCTarget(UPARAM(Ref) FLookAtStruct& LookAt, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveEnvironmentTarget(UPARAM(Ref) FLookAtStruct& LookAt, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllNPCTargets(UPARAM(Ref) FLookAtStruct& LookAt);
    
    UFUNCTION(BlueprintCallable)
    static void LookAtTarget(UPARAM(Ref) FLookAtStruct& LookAt, AActor* Target, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void LookAtScene(UPARAM(Ref) FLookAtStruct& LookAt, USceneComponent* Scene, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void LookAtLocation(UPARAM(Ref) FLookAtStruct& LookAt, FVector Location, float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasLookAtLocation(FLookAtStruct LookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetLookAtLocation(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTargetFaceLocation(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetNPCTarget(UPARAM(Ref) FLookAtStruct& LookAt, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLookAtTargetLocation(FLookAtStruct LookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetLookAtTarget(FLookAtStruct LookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLookAtLocation(FLookAtStruct LookAt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetEnvironmentTarget(UPARAM(Ref) FLookAtStruct& LookAt, FVector Location);
    
    UFUNCTION(BlueprintCallable)
    static void AddNPCTarget(UPARAM(Ref) FLookAtStruct& LookAt, AActor* Target, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void AddEnvironmentTarget(UPARAM(Ref) FLookAtStruct& LookAt, AActor* Target, int32 Priority);
    
};

