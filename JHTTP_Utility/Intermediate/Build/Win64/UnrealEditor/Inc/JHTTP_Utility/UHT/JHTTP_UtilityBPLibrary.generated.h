// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JHTTP_UtilityBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UJHTTP_UtilityBPLibrary;
enum class JHTTPContentType : uint8;
enum class JHTTPMethod : uint8;
struct FMapHeader;
struct FMapQuery;
#ifdef JHTTP_UTILITY_JHTTP_UtilityBPLibrary_generated_h
#error "JHTTP_UtilityBPLibrary.generated.h already included, missing '#pragma once' in JHTTP_UtilityBPLibrary.h"
#endif
#define JHTTP_UTILITY_JHTTP_UtilityBPLibrary_generated_h

#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapHeader_Statics; \
	JHTTP_UTILITY_API static class UScriptStruct* StaticStruct();


template<> JHTTP_UTILITY_API UScriptStruct* StaticStruct<struct FMapHeader>();

#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapQuery_Statics; \
	JHTTP_UTILITY_API static class UScriptStruct* StaticStruct();


template<> JHTTP_UTILITY_API UScriptStruct* StaticStruct<struct FMapQuery>();

#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_50_DELEGATE \
JHTTP_UTILITY_API void FHttpResponseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpResponseDelegate, const int32 Code, const FString& Data);


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_58_DELEGATE \
static JHTTP_UTILITY_API void FHttpResponseCallback_DelegateWrapper(const FScriptDelegate& HttpResponseCallback, const int32 Code, const FString& Data);


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_SPARSE_DATA
#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMakeQuery); \
	DECLARE_FUNCTION(execMakeHeader); \
	DECLARE_FUNCTION(execHttpRequestEvent); \
	DECLARE_FUNCTION(execHttpRequest);


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMakeQuery); \
	DECLARE_FUNCTION(execMakeHeader); \
	DECLARE_FUNCTION(execHttpRequestEvent); \
	DECLARE_FUNCTION(execHttpRequest);


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_ACCESSORS
#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJHTTP_UtilityBPLibrary(); \
	friend struct Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJHTTP_UtilityBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JHTTP_Utility"), NO_API) \
	DECLARE_SERIALIZER(UJHTTP_UtilityBPLibrary)


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUJHTTP_UtilityBPLibrary(); \
	friend struct Z_Construct_UClass_UJHTTP_UtilityBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UJHTTP_UtilityBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JHTTP_Utility"), NO_API) \
	DECLARE_SERIALIZER(UJHTTP_UtilityBPLibrary)


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJHTTP_UtilityBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJHTTP_UtilityBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJHTTP_UtilityBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJHTTP_UtilityBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJHTTP_UtilityBPLibrary(UJHTTP_UtilityBPLibrary&&); \
	NO_API UJHTTP_UtilityBPLibrary(const UJHTTP_UtilityBPLibrary&); \
public: \
	NO_API virtual ~UJHTTP_UtilityBPLibrary();


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJHTTP_UtilityBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UJHTTP_UtilityBPLibrary(UJHTTP_UtilityBPLibrary&&); \
	NO_API UJHTTP_UtilityBPLibrary(const UJHTTP_UtilityBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJHTTP_UtilityBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJHTTP_UtilityBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJHTTP_UtilityBPLibrary) \
	NO_API virtual ~UJHTTP_UtilityBPLibrary();


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_52_PROLOG
#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_SPARSE_DATA \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_RPC_WRAPPERS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_ACCESSORS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_INCLASS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_SPARSE_DATA \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_ACCESSORS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_INCLASS_NO_PURE_DECLS \
	FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class JHTTP_UtilityBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JHTTP_UTILITY_API UClass* StaticClass<class UJHTTP_UtilityBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_The_Vault_Plugins_JHTTP_Utility_Source_JHTTP_Utility_Public_JHTTP_UtilityBPLibrary_h


#define FOREACH_ENUM_JHTTPMETHOD(op) \
	op(JHTTPMethod::Get) \
	op(JHTTPMethod::Post) \
	op(JHTTPMethod::Put) \
	op(JHTTPMethod::Delete) 

enum class JHTTPMethod : uint8;
template<> struct TIsUEnumClass<JHTTPMethod> { enum { Value = true }; };
template<> JHTTP_UTILITY_API UEnum* StaticEnum<JHTTPMethod>();

#define FOREACH_ENUM_JHTTPCONTENTTYPE(op) \
	op(JHTTPContentType::None) \
	op(JHTTPContentType::Form_URLEncoded) \
	op(JHTTPContentType::Application_Json) \
	op(JHTTPContentType::Application_XML) \
	op(JHTTPContentType::Application_JS) \
	op(JHTTPContentType::Text_Plain) \
	op(JHTTPContentType::Text_Html) 

enum class JHTTPContentType : uint8;
template<> struct TIsUEnumClass<JHTTPContentType> { enum { Value = true }; };
template<> JHTTP_UTILITY_API UEnum* StaticEnum<JHTTPContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
