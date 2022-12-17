#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SQItemAttachment.generated.h"

class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class SQUANCHINVENTORY_API ASQItemAttachment : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEquipped;
    
    ASQItemAttachment();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBlockFire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ItemEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USkeletalMeshComponent* GetSkeletalAttachment();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetAttachmentSocketLocation(FName SocketName);
    
};

