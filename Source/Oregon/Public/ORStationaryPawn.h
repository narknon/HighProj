#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystemInterface.h"
#include "ORAIPawnInterface.h"
#include "ORPossessedPawnAbilityInterface.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "ORAIControllerSetupData.h"
#include "ORAbilityUsageData.h"
#include "GameplayTagContainer.h"
#include "GenericTeamAgentInterface.h"
#include "ORStationaryPawn.generated.h"

class AActor;
class USQInputComponent;
class UORAbilitySystemComponent;
class UORDamageableAttributeSet;
class UCapsuleComponent;
class UDataTable;

UCLASS(Blueprintable)
class OREGON_API AORStationaryPawn : public APawn, public IAbilitySystemInterface, public IGenericTeamAgentInterface, public IORAIPawnInterface, public IORPossessedPawnAbilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USQInputComponent> PossessedInputComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator UnpossessedCameraRotationCache;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FORAIControllerSetupData ControllerSetupData_PROTOTYPE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePlayerHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGameplayTag> PossessedTagToActionMap;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UORDamageableAttributeSet> AttributeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttributeDefaults;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UORDamageableAttributeSet> CachedAttribs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FORAbilityUsageData> AbilitiesData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbilityBindsInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
public:
    AORStationaryPawn();
    UFUNCTION(BlueprintCallable)
    bool IsEnemyActor(AActor* OtherActor);
    
    
    // Fix for true pure virtual functions not being implemented
};

