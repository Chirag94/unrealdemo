// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "baseclassShape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebaseclassShape() {}
// Cross Module References
	BALLGAME_API UClass* Z_Construct_UClass_AbaseclassShape_NoRegister();
	BALLGAME_API UClass* Z_Construct_UClass_AbaseclassShape();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ballgame();
	BALLGAME_API UFunction* Z_Construct_UFunction_AbaseclassShape_CalculateHealth();
// End Cross Module References
	void AbaseclassShape::StaticRegisterNativesAbaseclassShape()
	{
		UClass* Class = AbaseclassShape::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateHealth", &AbaseclassShape::execCalculateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AbaseclassShape_CalculateHealth()
	{
		struct baseclassShape_eventCalculateHealth_Parms
		{
			float delta;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delta = { UE4CodeGen_Private::EPropertyClass::Float, "delta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(baseclassShape_eventCalculateHealth_Parms, delta), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_delta,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "BaseCharacter" },
				{ "ModuleRelativePath", "baseclassShape.h" },
				{ "ToolTip", "Step 5: Expose a method" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AbaseclassShape, "CalculateHealth", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(baseclassShape_eventCalculateHealth_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AbaseclassShape_NoRegister()
	{
		return AbaseclassShape::StaticClass();
	}
	UClass* Z_Construct_UClass_AbaseclassShape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ballgame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AbaseclassShape_CalculateHealth, "CalculateHealth" }, // 764524756
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "baseclassShape.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "baseclassShape.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
				{ "Category", "BaseCharacter" },
				{ "ModuleRelativePath", "baseclassShape.h" },
				{ "ToolTip", "Step 3: Expose a boolean property" },
			};
#endif
			auto NewProp_isDead_SetBit = [](void* Obj){ ((AbaseclassShape*)Obj)->isDead = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead = { UE4CodeGen_Private::EPropertyClass::Bool, "isDead", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AbaseclassShape), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isDead_SetBit)>::SetBit, METADATA_PARAMS(NewProp_isDead_MetaData, ARRAY_COUNT(NewProp_isDead_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
				{ "Category", "BaseCharacter" },
				{ "ModuleRelativePath", "baseclassShape.h" },
				{ "ToolTip", "Step 2: Expose a float property" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AbaseclassShape, Health), METADATA_PARAMS(NewProp_Health_MetaData, ARRAY_COUNT(NewProp_Health_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isDead,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Health,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AbaseclassShape>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AbaseclassShape::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AbaseclassShape, 437889409);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AbaseclassShape(Z_Construct_UClass_AbaseclassShape, &AbaseclassShape::StaticClass, TEXT("/Script/ballgame"), TEXT("AbaseclassShape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AbaseclassShape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
