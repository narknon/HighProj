#include "LookAtBPLibrary.h"

class AActor;
class USceneComponent;

void ULookAtBPLibrary::Update(FLookAtStruct& LookAt, FTransform& Transform, float DeltaTime) {
}

void ULookAtBPLibrary::Stop(FLookAtStruct& LookAt) {
}

FVector ULookAtBPLibrary::SolveLookAtTarget(const FVector& InSource, const FVector& InTarget, const FVector& AimVector, const float AimClamp) {
    return FVector{};
}

void ULookAtBPLibrary::RemoveNPCTarget(FLookAtStruct& LookAt, AActor* Target) {
}

void ULookAtBPLibrary::RemoveEnvironmentTarget(FLookAtStruct& LookAt, AActor* Target) {
}

void ULookAtBPLibrary::RemoveAllNPCTargets(FLookAtStruct& LookAt) {
}

void ULookAtBPLibrary::LookAtTarget(FLookAtStruct& LookAt, AActor* Target, float Duration) {
}

void ULookAtBPLibrary::LookAtScene(FLookAtStruct& LookAt, USceneComponent* Scene, float Duration) {
}

void ULookAtBPLibrary::LookAtLocation(FLookAtStruct& LookAt, FVector Location, float Duration) {
}

bool ULookAtBPLibrary::HasLookAtLocation(FLookAtStruct LookAt) {
    return false;
}

FVector ULookAtBPLibrary::GetTargetLookAtLocation(AActor* Actor) {
    return FVector{};
}

FVector ULookAtBPLibrary::GetTargetFaceLocation(AActor* Actor) {
    return FVector{};
}

AActor* ULookAtBPLibrary::GetNPCTarget(FLookAtStruct& LookAt, FVector Location) {
    return NULL;
}

FVector ULookAtBPLibrary::GetLookAtTargetLocation(FLookAtStruct LookAt) {
    return FVector{};
}

USceneComponent* ULookAtBPLibrary::GetLookAtTarget(FLookAtStruct LookAt) {
    return NULL;
}

FVector ULookAtBPLibrary::GetLookAtLocation(FLookAtStruct LookAt) {
    return FVector{};
}

AActor* ULookAtBPLibrary::GetEnvironmentTarget(FLookAtStruct& LookAt, FVector Location) {
    return NULL;
}

void ULookAtBPLibrary::AddNPCTarget(FLookAtStruct& LookAt, AActor* Target, int32 Priority) {
}

void ULookAtBPLibrary::AddEnvironmentTarget(FLookAtStruct& LookAt, AActor* Target, int32 Priority) {
}

ULookAtBPLibrary::ULookAtBPLibrary() {
}

