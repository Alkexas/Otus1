// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otus_Project/Public/My_BTDecorator_Random.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_BTDecorator_Random() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
OTUS_PROJECT_API UClass* Z_Construct_UClass_UMy_BTDecorator_Random();
OTUS_PROJECT_API UClass* Z_Construct_UClass_UMy_BTDecorator_Random_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otus_Project();
// End Cross Module References

// Begin Class UMy_BTDecorator_Random
void UMy_BTDecorator_Random::StaticRegisterNativesUMy_BTDecorator_Random()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMy_BTDecorator_Random);
UClass* Z_Construct_UClass_UMy_BTDecorator_Random_NoRegister()
{
	return UMy_BTDecorator_Random::StaticClass();
}
struct Z_Construct_UClass_UMy_BTDecorator_Random_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "My_BTDecorator_Random.h" },
		{ "ModuleRelativePath", "Public/My_BTDecorator_Random.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoopsMin_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ClampMax", "255" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** number of executions */" },
#endif
		{ "ModuleRelativePath", "Public/My_BTDecorator_Random.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "number of executions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLoopsMax_MetaData[] = {
		{ "Category", "Decorator" },
		{ "ClampMax", "255" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/My_BTDecorator_Random.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsMin;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMy_BTDecorator_Random>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMy_BTDecorator_Random_Statics::NewProp_NumLoopsMin = { "NumLoopsMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMy_BTDecorator_Random, NumLoopsMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoopsMin_MetaData), NewProp_NumLoopsMin_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMy_BTDecorator_Random_Statics::NewProp_NumLoopsMax = { "NumLoopsMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMy_BTDecorator_Random, NumLoopsMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLoopsMax_MetaData), NewProp_NumLoopsMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMy_BTDecorator_Random_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMy_BTDecorator_Random_Statics::NewProp_NumLoopsMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMy_BTDecorator_Random_Statics::NewProp_NumLoopsMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMy_BTDecorator_Random_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMy_BTDecorator_Random_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_Otus_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMy_BTDecorator_Random_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMy_BTDecorator_Random_Statics::ClassParams = {
	&UMy_BTDecorator_Random::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMy_BTDecorator_Random_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMy_BTDecorator_Random_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMy_BTDecorator_Random_Statics::Class_MetaDataParams), Z_Construct_UClass_UMy_BTDecorator_Random_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMy_BTDecorator_Random()
{
	if (!Z_Registration_Info_UClass_UMy_BTDecorator_Random.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMy_BTDecorator_Random.OuterSingleton, Z_Construct_UClass_UMy_BTDecorator_Random_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMy_BTDecorator_Random.OuterSingleton;
}
template<> OTUS_PROJECT_API UClass* StaticClass<UMy_BTDecorator_Random>()
{
	return UMy_BTDecorator_Random::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMy_BTDecorator_Random);
UMy_BTDecorator_Random::~UMy_BTDecorator_Random() {}
// End Class UMy_BTDecorator_Random

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_My_BTDecorator_Random_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMy_BTDecorator_Random, UMy_BTDecorator_Random::StaticClass, TEXT("UMy_BTDecorator_Random"), &Z_Registration_Info_UClass_UMy_BTDecorator_Random, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMy_BTDecorator_Random), 2768634557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_My_BTDecorator_Random_h_358797501(TEXT("/Script/Otus_Project"),
	Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_My_BTDecorator_Random_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_My_BTDecorator_Random_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
