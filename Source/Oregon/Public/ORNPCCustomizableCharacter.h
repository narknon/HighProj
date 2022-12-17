#pragma once
#include "CoreMinimal.h"
#include "ORNPCCharacter.h"
#include "Engine/EngineTypes.h"
#include "CustomizableCharacterEyesDivertDelegateDelegate.h"
#include "CustomizableCharacterEyesBlinkedDelegateDelegate.h"
#include "ORNPCCustomizableCharacter.generated.h"

class USQDeformerComponent;
class UORMeshRandomizerComponent;

UCLASS(Blueprintable)
class AORNPCCustomizableCharacter : public AORNPCCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UORMeshRandomizerComponent* MeshRandomizerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQDeformerComponent* DeformerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAFuckingZombieThatDoesntBlink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlinkDelayDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDivertGaze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivertFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDivertAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DivertFrequencyDeviation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizableCharacterEyesBlinkedDelegate EyesBlinkedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizableCharacterEyesDivertDelegate EyesDivertedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle BlinkTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle EyeDivertTimer;
    
public:
    AORNPCCustomizableCharacter();
};

