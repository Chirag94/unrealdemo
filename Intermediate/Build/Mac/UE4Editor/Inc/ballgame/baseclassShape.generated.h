// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLGAME_baseclassShape_generated_h
#error "baseclassShape.generated.h already included, missing '#pragma once' in baseclassShape.h"
#endif
#define BALLGAME_baseclassShape_generated_h

#define ballgame_Source_ballgame_baseclassShape_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define ballgame_Source_ballgame_baseclassShape_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CalculateHealth(Z_Param_delta); \
		P_NATIVE_END; \
	}


#define ballgame_Source_ballgame_baseclassShape_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbaseclassShape(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_AbaseclassShape(); \
public: \
	DECLARE_CLASS(AbaseclassShape, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(AbaseclassShape) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ballgame_Source_ballgame_baseclassShape_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAbaseclassShape(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_AbaseclassShape(); \
public: \
	DECLARE_CLASS(AbaseclassShape, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(AbaseclassShape) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ballgame_Source_ballgame_baseclassShape_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AbaseclassShape(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AbaseclassShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbaseclassShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbaseclassShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbaseclassShape(AbaseclassShape&&); \
	NO_API AbaseclassShape(const AbaseclassShape&); \
public:


#define ballgame_Source_ballgame_baseclassShape_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AbaseclassShape(AbaseclassShape&&); \
	NO_API AbaseclassShape(const AbaseclassShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AbaseclassShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AbaseclassShape); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AbaseclassShape)


#define ballgame_Source_ballgame_baseclassShape_h_12_PRIVATE_PROPERTY_OFFSET
#define ballgame_Source_ballgame_baseclassShape_h_9_PROLOG
#define ballgame_Source_ballgame_baseclassShape_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ballgame_Source_ballgame_baseclassShape_h_12_PRIVATE_PROPERTY_OFFSET \
	ballgame_Source_ballgame_baseclassShape_h_12_RPC_WRAPPERS \
	ballgame_Source_ballgame_baseclassShape_h_12_INCLASS \
	ballgame_Source_ballgame_baseclassShape_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ballgame_Source_ballgame_baseclassShape_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ballgame_Source_ballgame_baseclassShape_h_12_PRIVATE_PROPERTY_OFFSET \
	ballgame_Source_ballgame_baseclassShape_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ballgame_Source_ballgame_baseclassShape_h_12_INCLASS_NO_PURE_DECLS \
	ballgame_Source_ballgame_baseclassShape_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ballgame_Source_ballgame_baseclassShape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
