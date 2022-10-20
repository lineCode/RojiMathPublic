// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FColor;
class USplineComponent;
struct FRandomStream;
#ifdef ROJIMATHUTILITIES_RojiMathUtilitiesBPLibrary_generated_h
#error "RojiMathUtilitiesBPLibrary.generated.h already included, missing '#pragma once' in RojiMathUtilitiesBPLibrary.h"
#endif
#define ROJIMATHUTILITIES_RojiMathUtilitiesBPLibrary_generated_h

#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_SPARSE_DATA
#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDrawBoundingBox); \
	DECLARE_FUNCTION(execDrawLayer); \
	DECLARE_FUNCTION(execDrawPolygon); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawMarkers); \
	DECLARE_FUNCTION(execCreateUinformPointsOnSpline); \
	DECLARE_FUNCTION(execCreateCCircles); \
	DECLARE_FUNCTION(execCreateSpiral3D); \
	DECLARE_FUNCTION(execCreateSpiral); \
	DECLARE_FUNCTION(execCreateCCirclesInCPolygon); \
	DECLARE_FUNCTION(execCreateSpiralInCPolygon); \
	DECLARE_FUNCTION(execCreateGridInLayer); \
	DECLARE_FUNCTION(execCreatePolygon); \
	DECLARE_FUNCTION(execCreateOpenPolygon); \
	DECLARE_FUNCTION(execCreateUniformPointsOnSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsOnSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsInSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsInCPolygon); \
	DECLARE_FUNCTION(execCreateRandomPointsInSquare); \
	DECLARE_FUNCTION(execGetRandomPointInTriangle); \
	DECLARE_FUNCTION(execGetRandomPointInTriangle3D); \
	DECLARE_FUNCTION(execCreateTrianglesFromPolygon); \
	DECLARE_FUNCTION(execCreateTrianglesFromCPolygon); \
	DECLARE_FUNCTION(execAddPolygonToTriangles); \
	DECLARE_FUNCTION(execAddTriangles); \
	DECLARE_FUNCTION(execIsPointInLayer); \
	DECLARE_FUNCTION(execIsPointInTriangle); \
	DECLARE_FUNCTION(execGetBoundsOfLayer); \
	DECLARE_FUNCTION(execGetDistanceToFarCorner); \
	DECLARE_FUNCTION(execGetAreaOfCPolygon); \
	DECLARE_FUNCTION(execGetAreaOfTriangle);


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDrawBoundingBox); \
	DECLARE_FUNCTION(execDrawLayer); \
	DECLARE_FUNCTION(execDrawPolygon); \
	DECLARE_FUNCTION(execDrawLines); \
	DECLARE_FUNCTION(execDrawMarkers); \
	DECLARE_FUNCTION(execCreateUinformPointsOnSpline); \
	DECLARE_FUNCTION(execCreateCCircles); \
	DECLARE_FUNCTION(execCreateSpiral3D); \
	DECLARE_FUNCTION(execCreateSpiral); \
	DECLARE_FUNCTION(execCreateCCirclesInCPolygon); \
	DECLARE_FUNCTION(execCreateSpiralInCPolygon); \
	DECLARE_FUNCTION(execCreateGridInLayer); \
	DECLARE_FUNCTION(execCreatePolygon); \
	DECLARE_FUNCTION(execCreateOpenPolygon); \
	DECLARE_FUNCTION(execCreateUniformPointsOnSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsOnSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsInSphere); \
	DECLARE_FUNCTION(execCreateRandomPointsInCPolygon); \
	DECLARE_FUNCTION(execCreateRandomPointsInSquare); \
	DECLARE_FUNCTION(execGetRandomPointInTriangle); \
	DECLARE_FUNCTION(execGetRandomPointInTriangle3D); \
	DECLARE_FUNCTION(execCreateTrianglesFromPolygon); \
	DECLARE_FUNCTION(execCreateTrianglesFromCPolygon); \
	DECLARE_FUNCTION(execAddPolygonToTriangles); \
	DECLARE_FUNCTION(execAddTriangles); \
	DECLARE_FUNCTION(execIsPointInLayer); \
	DECLARE_FUNCTION(execIsPointInTriangle); \
	DECLARE_FUNCTION(execGetBoundsOfLayer); \
	DECLARE_FUNCTION(execGetDistanceToFarCorner); \
	DECLARE_FUNCTION(execGetAreaOfCPolygon); \
	DECLARE_FUNCTION(execGetAreaOfTriangle);


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURojiMathUtilitiesBPLibrary(); \
	friend struct Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URojiMathUtilitiesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RojiMathUtilities"), NO_API) \
	DECLARE_SERIALIZER(URojiMathUtilitiesBPLibrary)


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesURojiMathUtilitiesBPLibrary(); \
	friend struct Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(URojiMathUtilitiesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RojiMathUtilities"), NO_API) \
	DECLARE_SERIALIZER(URojiMathUtilitiesBPLibrary)


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URojiMathUtilitiesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URojiMathUtilitiesBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URojiMathUtilitiesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URojiMathUtilitiesBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URojiMathUtilitiesBPLibrary(URojiMathUtilitiesBPLibrary&&); \
	NO_API URojiMathUtilitiesBPLibrary(const URojiMathUtilitiesBPLibrary&); \
public:


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URojiMathUtilitiesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URojiMathUtilitiesBPLibrary(URojiMathUtilitiesBPLibrary&&); \
	NO_API URojiMathUtilitiesBPLibrary(const URojiMathUtilitiesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URojiMathUtilitiesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URojiMathUtilitiesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URojiMathUtilitiesBPLibrary)


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_29_PROLOG
#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_SPARSE_DATA \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_RPC_WRAPPERS \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_INCLASS \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_SPARSE_DATA \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
	FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RojiMathUtilitiesBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROJIMATHUTILITIES_API UClass* StaticClass<class URojiMathUtilitiesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
