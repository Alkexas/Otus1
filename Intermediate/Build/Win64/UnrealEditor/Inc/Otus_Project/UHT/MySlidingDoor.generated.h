// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MySlidingDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OTUS_PROJECT_MySlidingDoor_generated_h
#error "MySlidingDoor.generated.h already included, missing '#pragma once' in MySlidingDoor.h"
#endif
#define OTUS_PROJECT_MySlidingDoor_generated_h

#define FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMySlidingDoor(); \
	friend struct Z_Construct_UClass_AMySlidingDoor_Statics; \
public: \
	DECLARE_CLASS(AMySlidingDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Otus_Project"), NO_API) \
	DECLARE_SERIALIZER(AMySlidingDoor)


#define FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMySlidingDoor(AMySlidingDoor&&); \
	AMySlidingDoor(const AMySlidingDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMySlidingDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMySlidingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMySlidingDoor) \
	NO_API virtual ~AMySlidingDoor();


#define FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_8_PROLOG
#define FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_INCLASS_NO_PURE_DECLS \
	FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OTUS_PROJECT_API UClass* StaticClass<class AMySlidingDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Otus_Source_Otus_Project_Public_MySlidingDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
