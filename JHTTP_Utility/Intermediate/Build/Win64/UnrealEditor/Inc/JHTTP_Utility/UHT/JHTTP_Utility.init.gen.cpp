// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJHTTP_Utility_init() {}
	JHTTP_UTILITY_API UFunction* Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature();
	JHTTP_UTILITY_API UFunction* Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_JHTTP_Utility;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_JHTTP_Utility()
	{
		if (!Z_Registration_Info_UPackage__Script_JHTTP_Utility.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_JHTTP_Utility_HttpResponseDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UJHTTP_UtilityBPLibrary_HttpResponseCallback__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/JHTTP_Utility",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x47E13D27,
				0x2A1D40C0,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_JHTTP_Utility.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_JHTTP_Utility.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_JHTTP_Utility(Z_Construct_UPackage__Script_JHTTP_Utility, TEXT("/Script/JHTTP_Utility"), Z_Registration_Info_UPackage__Script_JHTTP_Utility, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x47E13D27, 0x2A1D40C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
