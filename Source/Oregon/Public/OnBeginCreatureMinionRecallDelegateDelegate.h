#pragma once
#include "CoreMinimal.h"
#include "ORAICreatureMinionCharacter.h"
#include "UObject/SparseDelegate.h"
#include "OnBeginCreatureMinionRecallDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnBeginCreatureMinionRecallDelegate, AORAICreatureMinionCharacter, OnBeginCreatureMinionRecall, AORAICreatureMinionCharacter*, SummonedCreature);

