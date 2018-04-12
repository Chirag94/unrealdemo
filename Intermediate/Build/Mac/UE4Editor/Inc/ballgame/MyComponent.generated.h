// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BALLGAME_MyComponent_generated_h
#error "MyComponent.generated.h already included, missing '#pragma once' in MyComponent.h"
#endif
#define BALLGAME_MyComponent_generated_h

#define unrealdemo_Source_ballgame_MyComponent_h_13_RPC_WRAPPERS
#define unrealdemo_Source_ballgame_MyComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define unrealdemo_Source_ballgame_MyComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyComponent(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_UMyComponent(); \
public: \
	DECLARE_CLASS(UMyComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(UMyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define unrealdemo_Source_ballgame_MyComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMyComponent(); \
	friend BALLGAME_API class UClass* Z_Construct_UClass_UMyComponent(); \
public: \
	DECLARE_CLASS(UMyComponent, UActorComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ballgame"), NO_API) \
	DECLARE_SERIALIZER(UMyComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define unrealdemo_Source_ballgame_MyComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyComponent(UMyComponent&&); \
	NO_API UMyComponent(const UMyComponent&); \
public:


#define unrealdemo_Source_ballgame_MyComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyComponent(UMyComponent&&); \
	NO_API UMyComponent(const UMyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyComponent)


#define unrealdemo_Source_ballgame_MyComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define unrealdemo_Source_ballgame_MyComponent_h_10_PROLOG
#define unrealdemo_Source_ballgame_MyComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealdemo_Source_ballgame_MyComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealdemo_Source_ballgame_MyComponent_h_13_RPC_WRAPPERS \
	unrealdemo_Source_ballgame_MyComponent_h_13_INCLASS \
	unrealdemo_Source_ballgame_MyComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealdemo_Source_ballgame_MyComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealdemo_Source_ballgame_MyComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	unrealdemo_Source_ballgame_MyComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealdemo_Source_ballgame_MyComponent_h_13_INCLASS_NO_PURE_DECLS \
	unrealdemo_Source_ballgame_MyComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealdemo_Source_ballgame_MyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
