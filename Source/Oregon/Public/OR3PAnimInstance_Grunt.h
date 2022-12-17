#pragma once
#include "CoreMinimal.h"
#include "OR3PAnimInstance_Henchman.h"
#include "UObject/NoExportTypes.h"
#include "OR3PAnimInstance_Grunt.generated.h"

UCLASS(Blueprintable, NonTransient)
class OREGON_API UOR3PAnimInstance_Grunt : public UOR3PAnimInstance_Henchman {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLookAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadLookAtRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtStartSocket;
    
public:
    UOR3PAnimInstance_Grunt();
};

