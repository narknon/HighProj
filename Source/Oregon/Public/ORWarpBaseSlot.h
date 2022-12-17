#pragma once
#include "CoreMinimal.h"
#include "ORStreamingWarpBaseAnchor.h"
#include "ORWarpBaseAllEncountersCompleteDelegateDelegate.h"
#include "ORWarpBaseSlot.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class OREGON_API AORWarpBaseSlot : public AORStreamingWarpBaseAnchor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORWarpBaseAllEncountersCompleteDelegate OnAllEncountersComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlotRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* DirectionArrow;
    
    AORWarpBaseSlot();
    UFUNCTION(BlueprintCallable)
    void WarpLevelFromTicket(const FString& PackageName, const FString& LevelPath, FName LevelName);
    
};

