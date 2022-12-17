#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LowEntryByteDataReader.generated.h"

class ULowEntryLong;
class ULowEntryDouble;
class ULowEntryByteDataReader;

UCLASS(Blueprintable)
class LOWENTRYEXTENDEDSTANDARDLIBRARY_API ULowEntryByteDataReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Position;
    
    ULowEntryByteDataReader();
    UFUNCTION(BlueprintCallable)
    void SetPosition(const int32 Position_);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Remaining();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetStringUtf8Array();
    
    UFUNCTION(BlueprintCallable)
    FString GetStringUtf8();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger3Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger3();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger2Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger2();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetPositiveInteger1Array();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPositiveInteger1();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPosition();
    
    UFUNCTION(BlueprintCallable)
    TArray<ULowEntryLong*> GetLongBytesArray();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryLong* GetLongBytes();
    
    UFUNCTION(BlueprintCallable)
    TArray<int32> GetIntegerArray();
    
    UFUNCTION(BlueprintCallable)
    int32 GetInteger();
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetFloatArray();
    
    UFUNCTION(BlueprintCallable)
    float GetFloat();
    
    UFUNCTION(BlueprintCallable)
    TArray<ULowEntryDouble*> GetDoubleBytesArray();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryDouble* GetDoubleBytes();
    
    UFUNCTION(BlueprintCallable)
    ULowEntryByteDataReader* GetClone();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetByteArray();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetByte();
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetBooleanArray();
    
    UFUNCTION(BlueprintCallable)
    bool GetBoolean();
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
};

