// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "JHTTP_UtilityBPLibrary.generated.h"

UENUM()
enum class JHTTPMethod : uint8
{
	Get UMETA(DisplayName = "GET"),
	Post UMETA(DisplayName = "POST"),
	Put UMETA(DisplayName = "PUT"),
	Delete UMETA(DisplayName = "DELETE"),
};

UENUM()
enum class JHTTPContentType : uint8
{
	None UMETA(DisplayName = "None"),
	Form_URLEncoded UMETA(DisplayName = "Application/x-www-form-urlencoded"),
	Application_Json UMETA(DisplayName = "Application/JSON"),
	Application_XML UMETA(DisplayName = "Application/XML"),
	Application_JS UMETA(DisplayName = "Application/JavaScript"),
	Text_Plain UMETA(DisplayName = "Text/Plain"),
	Text_Html UMETA(DisplayName = "Text/Html"),
};

USTRUCT(BlueprintInternalUseOnly, meta = (HasNativeMake = "JHTTP_Utility.JHTTP_UtilityBPLibrary.MakeHeader"))
struct FMapHeader
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<FString, FString> Header;
};

USTRUCT(BlueprintInternalUseOnly, meta = (HasNativeMake = "JHTTP_Utility.JHTTP_UtilityBPLibrary.MakeQuery"))
struct FMapQuery
{
	GENERATED_BODY()

	UPROPERTY()
	TMap<FString, FString> Query;
};

// Callback
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHttpResponseDelegate, const int32, Code, const FString&, Data);

UCLASS()
class UJHTTP_UtilityBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE_TwoParams(FHttpResponseCallback, const int32, Code, const FString&, Data);

public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Http Request", BlueprintInternalUseOnly = "true"), Category = "JHTTP_Utility")
	static UJHTTP_UtilityBPLibrary* HttpRequest(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const FMapHeader Header, const FMapQuery Query, const FString& Body = TEXT(""));

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Http Request Event"), Category = "JHTTP_Utility")
	static void HttpRequestEvent(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const FMapHeader Header, const FMapQuery Query, const FString& Body, FHttpResponseCallback Success, FHttpResponseCallback Failure);

	UPROPERTY(BlueprintAssignable)
	FHttpResponseDelegate Success;

	UPROPERTY(BlueprintAssignable)
	FHttpResponseDelegate Failure;

private:
	// Callback
	FHttpResponseCallback OnSuccess;
	FHttpResponseCallback OnFailure;

private:

	FString GetMethod(const JHTTPMethod Method);

	FString GetContentType(const JHTTPContentType ContentType);

private:

	void SendRequest(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const TMap<FString, FString>& Header, const TMap<FString, FString>& Query, const FString& Body);

	void OnHTTPResponse(FHttpRequestPtr RequestPtr, FHttpResponsePtr ResponsePtr, bool bConnectedSuccessfully);

public:
	// Create header parameter
	UFUNCTION(BlueprintPure, Category = "JHTTP_Utility")
	static FMapHeader MakeHeader(const TMap<FString, FString>& Header);

	// Create query parameter
	UFUNCTION(BlueprintPure, Category = "JHTTP_Utility")
	static FMapQuery MakeQuery(const TMap<FString, FString>& Query);
};
