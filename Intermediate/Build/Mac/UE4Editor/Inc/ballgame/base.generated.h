// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLGAME_base_generated_h
#error "base.generated.h already included, missing '#pragma once' in base.h"
#endif
#define BALLGAME_base_generated_h

#define ballgame_Source_ballgame_base_h_12_RPC_WRAPPERS
#define ballgame_Source_ballgame_base_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ballgame_Source_ballgame_base_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAbase(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_Abase(); \
public: \
	DECLARE_CLASS(Abase, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(Abase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ballgame_Source_ballgame_base_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAbase(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_Abase(); \
public: \
	DECLARE_CLASS(Abase, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(Abase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ballgame_Source_ballgame_base_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Abase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Abase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Abase(Abase&&); \
	NO_API Abase(const Abase&); \
public:


#define ballgame_Source_ballgame_base_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Abase(Abase&&); \
	NO_API Abase(const Abase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Abase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Abase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Abase)


#define ballgame_Source_ballgame_base_h_12_PRIVATE_PROPERTY_OFFSET
#define ballgame_Source_ballgame_base_h_9_PROLOG
#define ballgame_Source_ballgame_base_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ballgame_Source_ballgame_base_h_12_PRIVATE_PROPERTY_OFFSET \
	ballgame_Source_ballgame_base_h_12_RPC_WRAPPERS \
	ballgame_Source_ballgame_base_h_12_INCLASS \
	ballgame_Source_ballgame_base_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ballgame_Source_ballgame_base_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ballgame_Source_ballgame_base_h_12_PRIVATE_PROPERTY_OFFSET \
	ballgame_Source_ballgame_base_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ballgame_Source_ballgame_base_h_12_INCLASS_NO_PURE_DECLS \
	ballgame_Source_ballgame_base_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ballgame_Source_ballgame_base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
