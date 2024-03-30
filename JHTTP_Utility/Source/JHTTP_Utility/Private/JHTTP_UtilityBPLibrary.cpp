// Copyright Epic Games, Inc. All Rights Reserved.

#include "JHTTP_UtilityBPLibrary.h"
#include "JHTTP_Utility.h"

UJHTTP_UtilityBPLibrary::UJHTTP_UtilityBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

UJHTTP_UtilityBPLibrary* UJHTTP_UtilityBPLibrary::HttpRequest(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const FMapHeader Header, const FMapQuery Query, const FString& Body)
{
	UJHTTP_UtilityBPLibrary* NewRequest = NewObject<UJHTTP_UtilityBPLibrary>();
	NewRequest->SendRequest(URL, Method, ContentType, Header.Header, Query.Query, Body);
	return NewRequest;
}

void UJHTTP_UtilityBPLibrary::HttpRequestEvent(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const FMapHeader Header, const FMapQuery Query, const FString& Body, FHttpResponseCallback Success, FHttpResponseCallback Failure)
{
	UJHTTP_UtilityBPLibrary* NewRequest = NewObject<UJHTTP_UtilityBPLibrary>();
	NewRequest->OnSuccess = Success;
	NewRequest->OnFailure = Failure;
	NewRequest->SendRequest(URL, Method, ContentType, Header.Header, Query.Query, Body);
}

FString UJHTTP_UtilityBPLibrary::GetMethod(const JHTTPMethod Method)
{
	switch (Method)
	{
	case JHTTPMethod::Get:
		return TEXT("GET");
	case JHTTPMethod::Post:
		return TEXT("POST");
	case JHTTPMethod::Put:
		return TEXT("PUT");
	case JHTTPMethod::Delete:
		return TEXT("DELETE");
	default:
		return TEXT("GET");
	}
}

FString UJHTTP_UtilityBPLibrary::GetContentType(const JHTTPContentType ContentType)
{
	switch (ContentType)
	{
	case JHTTPContentType::None:
		return TEXT("");
	case JHTTPContentType::Form_URLEncoded:
		return TEXT("Application/x-www-form-urlencoded");
	case JHTTPContentType::Application_Json:
		return TEXT("Application/JSON");
	case JHTTPContentType::Application_XML:
		return TEXT("Application/XML");
	case JHTTPContentType::Application_JS:
		return TEXT("Application/JavaScript");
	case JHTTPContentType::Text_Plain:
		return TEXT("Text/Plain");
	case JHTTPContentType::Text_Html:
		return TEXT("Text/Html");
	default:
		return TEXT("");
	}
}

void UJHTTP_UtilityBPLibrary::SendRequest(const FString& URL, const JHTTPMethod Method, const JHTTPContentType ContentType, const TMap<FString, FString>& Header, const TMap<FString, FString>& Query, const FString& Body)
{
	AddToRoot();

	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

	//TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();


	FString RequestURL = URL;

	FString Parameter;

	if (Query.Num() > 0)
	{
		while (!RequestURL.IsEmpty())
		{
			FString Right = RequestURL.Right(1);
			if (Right == TEXT("?"))
			{
				RequestURL.RemoveAt(RequestURL.Len() - 1);
			}
			else
			{
				break;
			}
		}

		RequestURL += TEXT("?");
		
		for (auto& KeyValuePair : Query)
		{
			Parameter += KeyValuePair.Key;
			Parameter += TEXT("=");
			Parameter += KeyValuePair.Value;
			Parameter += TEXT("&");
		}
		
		Parameter.RemoveAt(Parameter.Len() - 1);
		RequestURL += Parameter;
	}

	Request->SetURL(RequestURL);

	FString sContentType = GetContentType(ContentType);

	if (!sContentType.IsEmpty())
	{
		Request->SetHeader(TEXT("Content-Type"), sContentType);
	}

	Request->SetVerb(GetMethod(Method));
	
	for (auto& KeyValuePair : Header)
	{
		Request->SetHeader(KeyValuePair.Key, KeyValuePair.Value);
	}

	if (ContentType == JHTTPContentType::Form_URLEncoded && Body.IsEmpty())
	{
		Request->SetContentAsString(Parameter);
	}
	else
	{
		Request->SetContentAsString(Body);
	}

	Request->OnProcessRequestComplete().BindUObject(this, &UJHTTP_UtilityBPLibrary::OnHTTPResponse);
	Request->ProcessRequest();
}

void UJHTTP_UtilityBPLibrary::OnHTTPResponse(FHttpRequestPtr RequestPtr, FHttpResponsePtr ResponsePtr, bool bConnectedSuccessfully)
{
	if (bConnectedSuccessfully && ResponsePtr.IsValid())
	{
		int code = ResponsePtr->GetResponseCode();
		FString data = ResponsePtr->GetContentAsString();
		
		if (Success.IsBound())
		{
			Success.Broadcast(code, data);
		}
		if (OnSuccess.IsBound())
		{
			OnSuccess.Execute(code, data);
		}
	}
	else
	{
		if (Failure.IsBound())
		{
			Failure.Broadcast(404, TEXT(""));
		}
		if (OnFailure.IsBound())
		{
			OnFailure.Execute(404, TEXT(""));
		}
	}

	RemoveFromRoot();
}

FMapHeader UJHTTP_UtilityBPLibrary::MakeHeader(const TMap<FString, FString>& Header)
{
	FMapHeader THeader;

	for (auto& KeyValuePair : Header)
	{
		if (!KeyValuePair.Key.IsEmpty() && !KeyValuePair.Value.IsEmpty())
		{
			THeader.Header.Add(KeyValuePair.Key, KeyValuePair.Value);
		}
	}
	return THeader;
}

FMapQuery UJHTTP_UtilityBPLibrary::MakeQuery(const TMap<FString, FString>& Query)
{
	FMapQuery TQuery;

	for (auto& KeyValuePair : Query)
	{
		if (!KeyValuePair.Key.IsEmpty() && !KeyValuePair.Value.IsEmpty())
		{
			TQuery.Query.Add(KeyValuePair.Key, KeyValuePair.Value);
		}
	}
	return TQuery;
}
