#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AISquadClearedDelegateDelegate.h"
#include "ORAISquad.generated.h"

class AORAICharacter;

UCLASS(Blueprintable)
class OREGON_API UORAISquad : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISquadClearedDelegate AISquadClearedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AORAICharacter*> SquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SquadLocation;
    
public:
    UORAISquad();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetSquadMembers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AORAICharacter*> GetDamagedSquadMembers() const;
    
};

