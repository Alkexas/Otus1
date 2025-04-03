// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Otus_Project/Public/MySlidingDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySlidingDoor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
OTUS_PROJECT_API UClass* Z_Construct_UClass_AMySlidingDoor();
OTUS_PROJECT_API UClass* Z_Construct_UClass_AMySlidingDoor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Otus_Project();
// End Cross Module References

// Begin Class AMySlidingDoor Function CloseDoor
struct Z_Construct_UFunction_AMySlidingDoor_CloseDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySlidingDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySlidingDoor, nullptr, "CloseDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMySlidingDoor_CloseDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMySlidingDoor_CloseDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMySlidingDoor_CloseDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySlidingDoor_CloseDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMySlidingDoor::execCloseDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDoor();
	P_NATIVE_END;
}
// End Class AMySlidingDoor Function CloseDoor

// Begin Class AMySlidingDoor Function OpenDoor
struct Z_Construct_UFunction_AMySlidingDoor_OpenDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMySlidingDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMySlidingDoor, nullptr, "OpenDoor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMySlidingDoor_OpenDoor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMySlidingDoor_OpenDoor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMySlidingDoor_OpenDoor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMySlidingDoor_OpenDoor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMySlidingDoor::execOpenDoor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenDoor();
	P_NATIVE_END;
}
// End Class AMySlidingDoor Function OpenDoor

// Begin Class AMySlidingDoor
void AMySlidingDoor::StaticRegisterNativesAMySlidingDoor()
{
	UClass* Class = AMySlidingDoor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CloseDoor", &AMySlidingDoor::execCloseDoor },
		{ "OpenDoor", &AMySlidingDoor::execOpenDoor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySlidingDoor);
UClass* Z_Construct_UClass_AMySlidingDoor_NoRegister()
{
	return AMySlidingDoor::StaticClass();
}
struct Z_Construct_UClass_AMySlidingDoor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MySlidingDoor.h" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneComponent_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenPosition_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosedPosition_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorSpeed_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorDistance_MetaData[] = {
		{ "Category", "MySlidingDoor" },
		{ "ModuleRelativePath", "Public/MySlidingDoor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpenPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClosedPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DoorDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMySlidingDoor_CloseDoor, "CloseDoor" }, // 1001572494
		{ &Z_Construct_UFunction_AMySlidingDoor_OpenDoor, "OpenDoor" }, // 2942868448
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySlidingDoor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DefaultSceneComponent = { "DefaultSceneComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, DefaultSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneComponent_MetaData), NewProp_DefaultSceneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMesh_MetaData), NewProp_DoorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_OpenPosition = { "OpenPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, OpenPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenPosition_MetaData), NewProp_OpenPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_ClosedPosition = { "ClosedPosition", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, ClosedPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosedPosition_MetaData), NewProp_ClosedPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorSpeed = { "DoorSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, DoorSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorSpeed_MetaData), NewProp_DoorSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorDistance = { "DoorDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySlidingDoor, DoorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorDistance_MetaData), NewProp_DoorDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMySlidingDoor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DefaultSceneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_BoxCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_OpenPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_ClosedPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySlidingDoor_Statics::NewProp_DoorDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySlidingDoor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMySlidingDoor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Otus_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySlidingDoor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySlidingDoor_Statics::ClassParams = {
	&AMySlidingDoor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMySlidingDoor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMySlidingDoor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySlidingDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySlidingDoor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMySlidingDoor()
{
	if (!Z_Registration_Info_UClass_AMySlidingDoor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySlidingDoor.OuterSingleton, Z_Construct_UClass_AMySlidingDoor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMySlidingDoor.OuterSingleton;
}
template<> OTUS_PROJECT_API UClass* StaticClass<AMySlidingDoor>()
{
	return AMySlidingDoor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMySlidingDoor);
AMySlidingDoor::~AMySlidingDoor() {}
// End Class AMySlidingDoor

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMySlidingDoor, AMySlidingDoor::StaticClass, TEXT("AMySlidingDoor"), &Z_Registration_Info_UClass_AMySlidingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySlidingDoor), 3591840327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_1416832146(TEXT("/Script/Otus_Project"),
	Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
