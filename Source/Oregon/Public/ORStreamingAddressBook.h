#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ORStreamingAddressBookInfo.h"
#include "ORStreamingAddressBookWorldInfo.h"
#include "ORStreamingAddressBook.generated.h"

class UWorld;

UCLASS(Blueprintable, DefaultConfig, NotPlaceable, Config=AddressBook)
class OREGON_API UORStreamingAddressBook : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FORStreamingAddressBookInfo> Addresses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FORStreamingAddressBookWorldInfo> Worlds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FORStreamingAddressBookWorldInfo> WarpBases;
    
    UORStreamingAddressBook();
    UFUNCTION(BlueprintCallable)
    void RebuildWorldList();
    
    UFUNCTION(BlueprintCallable)
    void RebuildAddressBookForCurrentWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void RebuildAddressBook();
    
};

