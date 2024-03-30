// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JHTTP_Utility/Public/JHTTP_UtilityBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJHTTP_UtilityBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	JHTTP_UTILITY_API UClass* Z_Construct_UClass_UJHTTP_UtilityBPLibrary();
	JHTTP_UTILITY_API UClass* Z_Construct_UClass_UJHTTP_UtilityBPLibrary_NoRegister();
	JHTTP_UTILITY_API UEnum* Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType();
	JHTTP_UTILITY_API UEnum* Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod();
	JHTTP_UTILITY_API UFunction* Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature();
	JHTTP_UTILITY_API UFunction* Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature();
	JHTTP_UTILITY_API UScriptStruct* Z_Construct_UScriptStruct_FMapHeader();
	JHTTP_UTILITY_API UScriptStruct* Z_Construct_UScriptStruct_FMapQuery();
	UPackage* Z_Construct_UPackage__Script_JHTTP_Utility();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_JHTTPMethod;
	static UEnum* JHTTPMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_JHTTPMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_JHTTPMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod, (UObject*)Z_Construct_UPackage__Script_JHTTP_Utility(), TEXT("JHTTPMethod"));
		}
		return Z_Registration_Info_UEnum_JHTTPMethod.OuterSingleton;
	}
	template<> JHTTP_UTILITY_API UEnum* StaticEnum<JHTTPMethod>()
	{
		return JHTTPMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enumerators[] = {
		{ "JHTTPMethod::Get", (int64)JHTTPMethod::Get },
		{ "JHTTPMethod::Post", (int64)JHTTPMethod::Post },
		{ "JHTTPMethod::Put", (int64)JHTTPMethod::Put },
		{ "JHTTPMethod::Delete", (int64)JHTTPMethod::Delete },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enum_MetaDataParams[] = {
		{ "Delete.DisplayName", "DELETE" },
		{ "Delete.Name", "JHTTPMethod::Delete" },
		{ "Get.DisplayName", "GET" },
		{ "Get.Name", "JHTTPMethod::Get" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
		{ "Post.DisplayName", "POST" },
		{ "Post.Name", "JHTTPMethod::Post" },
		{ "Put.DisplayName", "PUT" },
		{ "Put.Name", "JHTTPMethod::Put" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JHTTP_Utility,
		nullptr,
		"JHTTPMethod",
		"JHTTPMethod",
		Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod()
	{
		if (!Z_Registration_Info_UEnum_JHTTPMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_JHTTPMethod.InnerSingleton, Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_JHTTPMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_JHTTPContentType;
	static UEnum* JHTTPContentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_JHTTPContentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_JHTTPContentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType, (UObject*)Z_Construct_UPackage__Script_JHTTP_Utility(), TEXT("JHTTPContentType"));
		}
		return Z_Registration_Info_UEnum_JHTTPContentType.OuterSingleton;
	}
	template<> JHTTP_UTILITY_API UEnum* StaticEnum<JHTTPContentType>()
	{
		return JHTTPContentType_StaticEnum();
	}
	struct Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enumerators[] = {
		{ "JHTTPContentType::None", (int64)JHTTPContentType::None },
		{ "JHTTPContentType::Form_URLEncoded", (int64)JHTTPContentType::Form_URLEncoded },
		{ "JHTTPContentType::Application_Json", (int64)JHTTPContentType::Application_Json },
		{ "JHTTPContentType::Application_XML", (int64)JHTTPContentType::Application_XML },
		{ "JHTTPContentType::Application_JS", (int64)JHTTPContentType::Application_JS },
		{ "JHTTPContentType::Text_Plain", (int64)JHTTPContentType::Text_Plain },
		{ "JHTTPContentType::Text_Html", (int64)JHTTPContentType::Text_Html },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enum_MetaDataParams[] = {
		{ "Application_JS.DisplayName", "Application/JavaScript" },
		{ "Application_JS.Name", "JHTTPContentType::Application_JS" },
		{ "Application_Json.DisplayName", "Application/JSON" },
		{ "Application_Json.Name", "JHTTPContentType::Application_Json" },
		{ "Application_XML.DisplayName", "Application/XML" },
		{ "Application_XML.Name", "JHTTPContentType::Application_XML" },
		{ "Form_URLEncoded.DisplayName", "Application/x-www-form-urlencoded" },
		{ "Form_URLEncoded.Name", "JHTTPContentType::Form_URLEncoded" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "JHTTPContentType::None" },
		{ "Text_Html.DisplayName", "Text/Html" },
		{ "Text_Html.Name", "JHTTPContentType::Text_Html" },
		{ "Text_Plain.DisplayName", "Text/Plain" },
		{ "Text_Plain.Name", "JHTTPContentType::Text_Plain" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_JHTTP_Utility,
		nullptr,
		"JHTTPContentType",
		"JHTTPContentType",
		Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType()
	{
		if (!Z_Registration_Info_UEnum_JHTTPContentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_JHTTPContentType.InnerSingleton, Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_JHTTPContentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapHeader;
class UScriptStruct* FMapHeader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapHeader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapHeader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapHeader, (UObject*)Z_Construct_UPackage__Script_JHTTP_Utility(), TEXT("MapHeader"));
	}
	return Z_Registration_Info_UScriptStruct_MapHeader.OuterSingleton;
}
template<> JHTTP_UTILITY_API UScriptStruct* StaticStruct<FMapHeader>()
{
	return FMapHeader::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapHeader_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Header;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapHeader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "JHTTP_Utility.JHTTP_UtilityBPLibrary.MakeHeader" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapHeader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapHeader>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_MetaData[] = {
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapHeader, Header), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapHeader_Statics::NewProp_Header,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapHeader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JHTTP_Utility,
		nullptr,
		&NewStructOps,
		"MapHeader",
		sizeof(FMapHeader),
		alignof(FMapHeader),
		Z_Construct_UScriptStruct_FMapHeader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHeader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapHeader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapHeader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapHeader()
	{
		if (!Z_Registration_Info_UScriptStruct_MapHeader.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapHeader.InnerSingleton, Z_Construct_UScriptStruct_FMapHeader_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapHeader.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapQuery;
class UScriptStruct* FMapQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapQuery, (UObject*)Z_Construct_UPackage__Script_JHTTP_Utility(), TEXT("MapQuery"));
	}
	return Z_Registration_Info_UScriptStruct_MapQuery.OuterSingleton;
}
template<> JHTTP_UTILITY_API UScriptStruct* StaticStruct<FMapQuery>()
{
	return FMapQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMapQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Query;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "JHTTP_Utility.JHTTP_UtilityBPLibrary.MakeQuery" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapQuery>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_ValueProp = { "Query", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_Key_KeyProp = { "Query_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_MetaData[] = {
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMapQuery, Query), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapQuery_Statics::NewProp_Query,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JHTTP_Utility,
		nullptr,
		&NewStructOps,
		"MapQuery",
		sizeof(FMapQuery),
		alignof(FMapQuery),
		Z_Construct_UScriptStruct_FMapQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_MapQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapQuery.InnerSingleton, Z_Construct_UScriptStruct_FMapQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MapQuery.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_JHTTP_Utility_eventHttpResponseDelegate_Parms
		{
			int32 Code;
			FString Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JHTTP_Utility_eventHttpResponseDelegate_Parms, Code), METADATA_PARAMS(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_JHTTP_Utility_eventHttpResponseDelegate_Parms, Data), METADATA_PARAMS(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Callback\n" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
		{ "ToolTip", "Callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_JHTTP_Utility, nullptr, "HttpResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::_Script_JHTTP_Utility_eventHttpResponseDelegate_Parms), Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FHttpResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpResponseDelegate, const int32 Code, const FString& Data)
{
	struct _Script_JHTTP_Utility_eventHttpResponseDelegate_Parms
	{
		int32 Code;
		FString Data;
	};
	_Script_JHTTP_Utility_eventHttpResponseDelegate_Parms Parms;
	Parms.Code=Code;
	Parms.Data=Data;
	HttpResponseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics
	{
		struct JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms
		{
			int32 Code;
			FString Data;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms, Code), METADATA_PARAMS(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms, Data), METADATA_PARAMS(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJHTTP_UtilityBPLibrary, nullptr, "HttpResponseCallback__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms), Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UJHTTP_UtilityBPLibrary::FHttpResponseCallback_DelegateWrapper(const FScriptDelegate& HttpResponseCallback, const int32 Code, const FString& Data)
{
	struct JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms
	{
		int32 Code;
		FString Data;
	};
	JHTTP_UtilityBPLibrary_eventHttpResponseCallback_Parms Parms;
	Parms.Code=Code;
	Parms.Data=Data;
	HttpResponseCallback.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UJHTTP_UtilityBPLibrary::execMakeQuery)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Query);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMapQuery*)Z_Param__Result=UJHTTP_UtilityBPLibrary::MakeQuery(Z_Param_Out_Query);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJHTTP_UtilityBPLibrary::execMakeHeader)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_Header);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMapHeader*)Z_Param__Result=UJHTTP_UtilityBPLibrary::MakeHeader(Z_Param_Out_Header);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJHTTP_UtilityBPLibrary::execHttpRequestEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(JHTTPMethod,Z_Param_Method);
		P_GET_ENUM(JHTTPContentType,Z_Param_ContentType);
		P_GET_STRUCT(FMapHeader,Z_Param_Header);
		P_GET_STRUCT(FMapQuery,Z_Param_Query);
		P_GET_PROPERTY(FStrProperty,Z_Param_Body);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Success);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Failure);
		P_FINISH;
		P_NATIVE_BEGIN;
		UJHTTP_UtilityBPLibrary::HttpRequestEvent(Z_Param_URL,JHTTPMethod(Z_Param_Method),JHTTPContentType(Z_Param_ContentType),Z_Param_Header,Z_Param_Query,Z_Param_Body,FHttpResponseCallback(Z_Param_Success),FHttpResponseCallback(Z_Param_Failure));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJHTTP_UtilityBPLibrary::execHttpRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_ENUM(JHTTPMethod,Z_Param_Method);
		P_GET_ENUM(JHTTPContentType,Z_Param_ContentType);
		P_GET_STRUCT(FMapHeader,Z_Param_Header);
		P_GET_STRUCT(FMapQuery,Z_Param_Query);
		P_GET_PROPERTY(FStrProperty,Z_Param_Body);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UJHTTP_UtilityBPLibrary**)Z_Param__Result=UJHTTP_UtilityBPLibrary::HttpRequest(Z_Param_URL,JHTTPMethod(Z_Param_Method),JHTTPContentType(Z_Param_ContentType),Z_Param_Header,Z_Param_Query,Z_Param_Body);
		P_NATIVE_END;
	}
	void UJHTTP_UtilityBPLibrary::StaticRegisterNativesUJHTTP_UtilityBPLibrary()
	{
		UClass* Class = UJHTTP_UtilityBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HttpRequest", &UJHTTP_UtilityBPLibrary::execHttpRequest },
			{ "HttpRequestEvent", &UJHTTP_UtilityBPLibrary::execHttpRequestEvent },
			{ "MakeHeader", &UJHTTP_UtilityBPLibrary::execMakeHeader },
			{ "MakeQuery", &UJHTTP_UtilityBPLibrary::execMakeQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics
	{
		struct JHTTP_UtilityBPLibrary_eventHttpRequest_Parms
		{
			FString URL;
			JHTTPMethod Method;
			JHTTPContentType ContentType;
			FMapHeader Header;
			FMapQuery Query;
			FString Body;
			UJHTTP_UtilityBPLibrary* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, Method), Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method_MetaData)) }; // 1958584608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, ContentType), Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType_MetaData)) }; // 737231449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, Header), Z_Construct_UScriptStruct_FMapHeader, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Header_MetaData)) }; // 3719068357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, Query), Z_Construct_UScriptStruct_FMapQuery, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Query_MetaData)) }; // 1151782150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Body_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequest_Parms, ReturnValue), Z_Construct_UClass_UJHTTP_UtilityBPLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "JHTTP_Utility" },
		{ "CPP_Default_Body", "" },
		{ "DisplayName", "Http Request" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJHTTP_UtilityBPLibrary, nullptr, "HttpRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::JHTTP_UtilityBPLibrary_eventHttpRequest_Parms), Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics
	{
		struct JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms
		{
			FString URL;
			JHTTPMethod Method;
			JHTTPContentType ContentType;
			FMapHeader Header;
			FMapQuery Query;
			FString Body;
			FScriptDelegate Success;
			FScriptDelegate Failure;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Header;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Query;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Body;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Success;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Failure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Method), Z_Construct_UEnum_JHTTP_Utility_JHTTPMethod, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method_MetaData)) }; // 1958584608
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, ContentType), Z_Construct_UEnum_JHTTP_Utility_JHTTPContentType, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType_MetaData)) }; // 737231449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Header), Z_Construct_UScriptStruct_FMapHeader, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Header_MetaData)) }; // 3719068357
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Query), Z_Construct_UScriptStruct_FMapQuery, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Query_MetaData)) }; // 1151782150
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Body_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Body), METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Body_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Body_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Success), Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3677706251
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms, Failure), Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3677706251
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_ContentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Body,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::NewProp_Failure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "JHTTP_Utility" },
		{ "DisplayName", "Http Request Event" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJHTTP_UtilityBPLibrary, nullptr, "HttpRequestEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::JHTTP_UtilityBPLibrary_eventHttpRequestEvent_Parms), Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics
	{
		struct JHTTP_UtilityBPLibrary_eventMakeHeader_Parms
		{
			TMap<FString,FString> Header;
			FMapHeader ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Header_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Header;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_ValueProp = { "Header", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_Key_KeyProp = { "Header_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header = { "Header", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventMakeHeader_Parms, Header), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventMakeHeader_Parms, ReturnValue), Z_Construct_UScriptStruct_FMapHeader, METADATA_PARAMS(nullptr, 0) }; // 3719068357
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_Header,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "JHTTP_Utility" },
		{ "Comment", "// Create header parameter\n" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
		{ "ToolTip", "Create header parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJHTTP_UtilityBPLibrary, nullptr, "MakeHeader", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::JHTTP_UtilityBPLibrary_eventMakeHeader_Parms), Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics
	{
		struct JHTTP_UtilityBPLibrary_eventMakeQuery_Parms
		{
			TMap<FString,FString> Query;
			FMapQuery ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Query_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Query_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Query;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_ValueProp = { "Query", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_Key_KeyProp = { "Query_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventMakeQuery_Parms, Query), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JHTTP_UtilityBPLibrary_eventMakeQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FMapQuery, METADATA_PARAMS(nullptr, 0) }; // 1151782150
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_Query,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "JHTTP_Utility" },
		{ "Comment", "// Create query parameter\n" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
		{ "ToolTip", "Create query parameter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJHTTP_UtilityBPLibrary, nullptr, "MakeQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::JHTTP_UtilityBPLibrary_eventMakeQuery_Parms), Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJHTTP_UtilityBPLibrary);
	UClass* Z_Construct_UClass_UJHTTP_UtilityBPLibrary_NoRegister()
	{
		return UJHTTP_UtilityBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_JHTTP_Utility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequest, "HttpRequest" }, // 278854083
		{ &Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_HttpRequestEvent, "HttpRequestEvent" }, // 3398745271
		{ &Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature, "HttpResponseCallback__DelegateSignature" }, // 3677706251
		{ &Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeHeader, "MakeHeader" }, // 4054034966
		{ &Z_Construct_UFunction_UJHTTP_UtilityBPLibrary_MakeQuery, "MakeQuery" }, // 3476300842
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JHTTP_UtilityBPLibrary.h" },
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJHTTP_UtilityBPLibrary, Success), Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Success_MetaData)) }; // 257640355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Failure_MetaData[] = {
		{ "ModuleRelativePath", "Public/JHTTP_UtilityBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Failure = { "Failure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJHTTP_UtilityBPLibrary, Failure), Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Failure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Failure_MetaData)) }; // 257640355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::NewProp_Failure,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJHTTP_UtilityBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::ClassParams = {
		&UJHTTP_UtilityBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJHTTP_UtilityBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UJHTTP_UtilityBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJHTTP_UtilityBPLibrary.OuterSingleton, Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJHTTP_UtilityBPLibrary.OuterSingleton;
	}
	template<> JHTTP_UTILITY_API UClass* StaticClass<UJHTTP_UtilityBPLibrary>()
	{
		return UJHTTP_UtilityBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJHTTP_UtilityBPLibrary);
	UJHTTP_UtilityBPLibrary::~UJHTTP_UtilityBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::EnumInfo[] = {
		{ JHTTPMethod_StaticEnum, TEXT("JHTTPMethod"), &Z_Registration_Info_UEnum_JHTTPMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1958584608U) },
		{ JHTTPContentType_StaticEnum, TEXT("JHTTPContentType"), &Z_Registration_Info_UEnum_JHTTPContentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 737231449U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMapHeader::StaticStruct, Z_Construct_UScriptStruct_FMapHeader_Statics::NewStructOps, TEXT("MapHeader"), &Z_Registration_Info_UScriptStruct_MapHeader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapHeader), 3719068357U) },
		{ FMapQuery::StaticStruct, Z_Construct_UScriptStruct_FMapQuery_Statics::NewStructOps, TEXT("MapQuery"), &Z_Registration_Info_UScriptStruct_MapQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapQuery), 1151782150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJHTTP_UtilityBPLibrary, UJHTTP_UtilityBPLibrary::StaticClass, TEXT("UJHTTP_UtilityBPLibrary"), &Z_Registration_Info_UClass_UJHTTP_UtilityBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJHTTP_UtilityBPLibrary), 2120357255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_3974596683(TEXT("/Script/JHTTP_Utility"),
		Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
