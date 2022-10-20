// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RojiMathUtilities/Public/RojiMathUtilitiesBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRojiMathUtilitiesBPLibrary() {}
// Cross Module References
	ROJIMATHUTILITIES_API UClass* Z_Construct_UClass_URojiMathUtilitiesBPLibrary_NoRegister();
	ROJIMATHUTILITIES_API UClass* Z_Construct_UClass_URojiMathUtilitiesBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RojiMathUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execDrawBoundingBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ZOffset);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Duration);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::DrawBoundingBox(Z_Param_WorldContextObject,Z_Param_Out_Transform,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_ZOffset,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execDrawLayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ZOffset);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Duration);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::DrawLayer(Z_Param_WorldContextObject,Z_Param_Out_Transform,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_ZOffset,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execDrawPolygon)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ZOffset);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Duration);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::DrawPolygon(Z_Param_WorldContextObject,Z_Param_Out_Transform,Z_Param_Out_InPoints,Z_Param_ZOffset,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execDrawLines)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Duration);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::DrawLines(Z_Param_WorldContextObject,Z_Param_Out_Transform,Z_Param_Out_InPoints,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execDrawMarkers)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_Color);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Duration);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Thickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::DrawMarkers(Z_Param_WorldContextObject,Z_Param_Out_Transform,Z_Param_Out_InPoints,Z_Param_radius,Z_Param_Out_Color,Z_Param_Duration,Z_Param_Thickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateUinformPointsOnSpline)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_PointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutScales);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateUinformPointsOnSpline(Z_Param_Out_InPoints,Z_Param_Spline,Z_Param_PointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators,Z_Param_Out_OutScales);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateCCircles)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_maxRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_deltaRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_pointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateCCircles(Z_Param_Out_InPoints,Z_Param_maxRadius,Z_Param_deltaRadius,Z_Param_pointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateSpiral3D)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_maxRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_deltaRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Depth);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_pointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateSpiral3D(Z_Param_Out_InPoints,Z_Param_maxRadius,Z_Param_deltaRadius,Z_Param_Depth,Z_Param_pointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateSpiral)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_maxRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_deltaRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_pointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateSpiral(Z_Param_Out_InPoints,Z_Param_maxRadius,Z_Param_deltaRadius,Z_Param_pointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateCCirclesInCPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_deltaRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_pointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateCCirclesInCPolygon(Z_Param_Out_InPoints,Z_Param_Out_Polygon,Z_Param_Out_Center,Z_Param_deltaRadius,Z_Param_pointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateSpiralInCPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_deltaRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_pointSpacing);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_GET_TARRAY_REF(FRotator,Z_Param_Out_OutRotators);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateSpiralInCPolygon(Z_Param_Out_InPoints,Z_Param_Out_Polygon,Z_Param_Out_Center,Z_Param_deltaRadius,Z_Param_pointSpacing,Z_Param_Out_OutPoints,Z_Param_Out_OutRotators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateGridInLayer)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Spacing);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Depth);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateGridInLayer(Z_Param_Out_InPoints,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_Out_Spacing,Z_Param_Depth,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreatePolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Sides);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreatePolygon(Z_Param_Out_InPoints,Z_Param_Radius,Z_Param_Sides,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateOpenPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InnerRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_OuterRadius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_StopAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_Sides);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateOpenPolygon(Z_Param_Out_InPoints,Z_Param_InnerRadius,Z_Param_OuterRadius,Z_Param_StartAngle,Z_Param_StopAngle,Z_Param_Sides,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateUniformPointsOnSphere)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateUniformPointsOnSphere(Z_Param_Out_InPoints,Z_Param_points,Z_Param_radius,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateRandomPointsOnSphere)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateRandomPointsOnSphere(Z_Param_Out_Stream,Z_Param_Out_InPoints,Z_Param_points,Z_Param_radius,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateRandomPointsInSphere)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateRandomPointsInSphere(Z_Param_Out_Stream,Z_Param_Out_InPoints,Z_Param_points,Z_Param_radius,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateRandomPointsInCPolygon)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_GET_PROPERTY(FIntProperty,Z_Param_Points);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Depth);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateRandomPointsInCPolygon(Z_Param_Out_Stream,Z_Param_Out_InPoints,Z_Param_Out_Polygon,Z_Param_Points,Z_Param_Depth,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateRandomPointsInSquare)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPoints);
		P_GET_PROPERTY(FIntProperty,Z_Param_points);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_radius);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_depth);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::CreateRandomPointsInSquare(Z_Param_Out_Stream,Z_Param_Out_InPoints,Z_Param_points,Z_Param_radius,Z_Param_depth,Z_Param_Out_OutPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetRandomPointInTriangle)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=URojiMathUtilitiesBPLibrary::GetRandomPointInTriangle(Z_Param_Out_Stream,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetRandomPointInTriangle3D)
	{
		P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_Stream);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=URojiMathUtilitiesBPLibrary::GetRandomPointInTriangle3D(Z_Param_Out_Stream,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateTrianglesFromPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URojiMathUtilitiesBPLibrary::CreateTrianglesFromPolygon(Z_Param_Out_Polygon,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execCreateTrianglesFromCPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URojiMathUtilitiesBPLibrary::CreateTrianglesFromCPolygon(Z_Param_Out_Polygon,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execAddPolygonToTriangles)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InPolygon);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InA);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InB);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InC);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutA);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutB);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutC);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::AddPolygonToTriangles(Z_Param_Out_InPolygon,Z_Param_Out_InA,Z_Param_Out_InB,Z_Param_Out_InC,Z_Param_Out_OutA,Z_Param_Out_OutB,Z_Param_Out_OutC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execAddTriangles)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InA0);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InB0);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InC0);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InA1);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InB1);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_InC1);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutA);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutB);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutC);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::AddTriangles(Z_Param_Out_InA0,Z_Param_Out_InB0,Z_Param_Out_InC0,Z_Param_Out_InA1,Z_Param_Out_InB1,Z_Param_Out_InC1,Z_Param_Out_OutA,Z_Param_Out_OutB,Z_Param_Out_OutC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execIsPointInLayer)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URojiMathUtilitiesBPLibrary::IsPointInLayer(Z_Param_Out_Point,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execIsPointInTriangle)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URojiMathUtilitiesBPLibrary::IsPointInTriangle(Z_Param_Out_Point,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetBoundsOfLayer)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_A);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_B);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_C);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		URojiMathUtilitiesBPLibrary::GetBoundsOfLayer(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C,Z_Param_Out_BoxOrigin,Z_Param_Out_BoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetDistanceToFarCorner)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=URojiMathUtilitiesBPLibrary::GetDistanceToFarCorner(Z_Param_Out_Point,Z_Param_Out_BoxOrigin,Z_Param_Out_BoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetAreaOfCPolygon)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Polygon);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=URojiMathUtilitiesBPLibrary::GetAreaOfCPolygon(Z_Param_Out_Polygon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URojiMathUtilitiesBPLibrary::execGetAreaOfTriangle)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_C);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=URojiMathUtilitiesBPLibrary::GetAreaOfTriangle(Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_C);
		P_NATIVE_END;
	}
	void URojiMathUtilitiesBPLibrary::StaticRegisterNativesURojiMathUtilitiesBPLibrary()
	{
		UClass* Class = URojiMathUtilitiesBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPolygonToTriangles", &URojiMathUtilitiesBPLibrary::execAddPolygonToTriangles },
			{ "AddTriangles", &URojiMathUtilitiesBPLibrary::execAddTriangles },
			{ "CreateCCircles", &URojiMathUtilitiesBPLibrary::execCreateCCircles },
			{ "CreateCCirclesInCPolygon", &URojiMathUtilitiesBPLibrary::execCreateCCirclesInCPolygon },
			{ "CreateGridInLayer", &URojiMathUtilitiesBPLibrary::execCreateGridInLayer },
			{ "CreateOpenPolygon", &URojiMathUtilitiesBPLibrary::execCreateOpenPolygon },
			{ "CreatePolygon", &URojiMathUtilitiesBPLibrary::execCreatePolygon },
			{ "CreateRandomPointsInCPolygon", &URojiMathUtilitiesBPLibrary::execCreateRandomPointsInCPolygon },
			{ "CreateRandomPointsInSphere", &URojiMathUtilitiesBPLibrary::execCreateRandomPointsInSphere },
			{ "CreateRandomPointsInSquare", &URojiMathUtilitiesBPLibrary::execCreateRandomPointsInSquare },
			{ "CreateRandomPointsOnSphere", &URojiMathUtilitiesBPLibrary::execCreateRandomPointsOnSphere },
			{ "CreateSpiral", &URojiMathUtilitiesBPLibrary::execCreateSpiral },
			{ "CreateSpiral3D", &URojiMathUtilitiesBPLibrary::execCreateSpiral3D },
			{ "CreateSpiralInCPolygon", &URojiMathUtilitiesBPLibrary::execCreateSpiralInCPolygon },
			{ "CreateTrianglesFromCPolygon", &URojiMathUtilitiesBPLibrary::execCreateTrianglesFromCPolygon },
			{ "CreateTrianglesFromPolygon", &URojiMathUtilitiesBPLibrary::execCreateTrianglesFromPolygon },
			{ "CreateUinformPointsOnSpline", &URojiMathUtilitiesBPLibrary::execCreateUinformPointsOnSpline },
			{ "CreateUniformPointsOnSphere", &URojiMathUtilitiesBPLibrary::execCreateUniformPointsOnSphere },
			{ "DrawBoundingBox", &URojiMathUtilitiesBPLibrary::execDrawBoundingBox },
			{ "DrawLayer", &URojiMathUtilitiesBPLibrary::execDrawLayer },
			{ "DrawLines", &URojiMathUtilitiesBPLibrary::execDrawLines },
			{ "DrawMarkers", &URojiMathUtilitiesBPLibrary::execDrawMarkers },
			{ "DrawPolygon", &URojiMathUtilitiesBPLibrary::execDrawPolygon },
			{ "GetAreaOfCPolygon", &URojiMathUtilitiesBPLibrary::execGetAreaOfCPolygon },
			{ "GetAreaOfTriangle", &URojiMathUtilitiesBPLibrary::execGetAreaOfTriangle },
			{ "GetBoundsOfLayer", &URojiMathUtilitiesBPLibrary::execGetBoundsOfLayer },
			{ "GetDistanceToFarCorner", &URojiMathUtilitiesBPLibrary::execGetDistanceToFarCorner },
			{ "GetRandomPointInTriangle", &URojiMathUtilitiesBPLibrary::execGetRandomPointInTriangle },
			{ "GetRandomPointInTriangle3D", &URojiMathUtilitiesBPLibrary::execGetRandomPointInTriangle3D },
			{ "IsPointInLayer", &URojiMathUtilitiesBPLibrary::execIsPointInLayer },
			{ "IsPointInTriangle", &URojiMathUtilitiesBPLibrary::execIsPointInTriangle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms
		{
			TArray<FVector> InPolygon;
			TArray<FVector> InA;
			TArray<FVector> InB;
			TArray<FVector> InC;
			TArray<FVector> OutA;
			TArray<FVector> OutB;
			TArray<FVector> OutC;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPolygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPolygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPolygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InA_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InC_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InC_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InC;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutA_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutB_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutC_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon_Inner = { "InPolygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon = { "InPolygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, InPolygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA_Inner = { "InA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA = { "InA", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, InA), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB_Inner = { "InB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB = { "InB", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, InB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC_Inner = { "InC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC = { "InC", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, InC), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutA_Inner = { "OutA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutA = { "OutA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, OutA), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutB_Inner = { "OutB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutB = { "OutB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, OutB), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutC_Inner = { "OutC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutC = { "OutC", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms, OutC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InPolygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_InC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutC_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::NewProp_OutC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "AddPolygonToTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::RojiMathUtilitiesBPLibrary_eventAddPolygonToTriangles_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms
		{
			TArray<FVector> InA0;
			TArray<FVector> InB0;
			TArray<FVector> InC0;
			TArray<FVector> InA1;
			TArray<FVector> InB1;
			TArray<FVector> InC1;
			TArray<FVector> OutA;
			TArray<FVector> OutB;
			TArray<FVector> OutC;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InA0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InA0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InB0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InB0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InC0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InC0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InC0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InA1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InA1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InA1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InB1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InB1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InB1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InC1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InC1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InC1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutA_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutB_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutC_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0_Inner = { "InA0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0 = { "InA0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InA0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0_Inner = { "InB0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0 = { "InB0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InB0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0_Inner = { "InC0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0 = { "InC0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InC0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1_Inner = { "InA1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1 = { "InA1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InA1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1_Inner = { "InB1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1 = { "InB1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InB1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1_Inner = { "InC1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1 = { "InC1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, InC1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutA_Inner = { "OutA", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutA = { "OutA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, OutA), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutB_Inner = { "OutB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutB = { "OutB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, OutB), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutC_Inner = { "OutC", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutC = { "OutC", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms, OutC), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InA1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InB1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_InC1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutA_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutC_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::NewProp_OutC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "AddTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::RojiMathUtilitiesBPLibrary_eventAddTriangles_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms
		{
			TArray<FVector> InPoints;
			double maxRadius;
			double deltaRadius;
			double pointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_maxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_deltaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_pointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_maxRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_maxRadius = { "maxRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, maxRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_maxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_maxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_deltaRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_deltaRadius = { "deltaRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, deltaRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_deltaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_deltaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_pointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_pointSpacing = { "pointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, pointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_pointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_pointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_maxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_deltaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_pointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::NewProp_OutRotators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateCCircles", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::RojiMathUtilitiesBPLibrary_eventCreateCCircles_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms
		{
			TArray<FVector> InPoints;
			TArray<FVector> Polygon;
			FVector Center;
			double deltaRadius;
			double pointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_deltaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_pointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_deltaRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_deltaRadius = { "deltaRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, deltaRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_deltaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_deltaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_pointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_pointSpacing = { "pointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, pointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_pointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_pointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_deltaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_pointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::NewProp_OutRotators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateCCirclesInCPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateCCirclesInCPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms
		{
			TArray<FVector> InPoints;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			FVector Spacing;
			double Depth;
			TArray<FVector> OutPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Spacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, Spacing), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Spacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, Depth), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateGridInLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::RojiMathUtilitiesBPLibrary_eventCreateGridInLayer_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms
		{
			TArray<FVector> InPoints;
			double InnerRadius;
			double OuterRadius;
			double StartAngle;
			double StopAngle;
			int32 Sides;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAngle_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StopAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Sides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, InnerRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, OuterRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StartAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, StartAngle), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StartAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StartAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StopAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StopAngle = { "StopAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, StopAngle), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StopAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StopAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_Sides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, Sides), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_Sides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_Sides_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_StopAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_Sides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::NewProp_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateOpenPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateOpenPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms
		{
			TArray<FVector> InPoints;
			double Radius;
			int32 Sides;
			TArray<FVector> OutPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sides_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Sides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Sides_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Sides = { "Sides", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms, Sides), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Sides_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Sides_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_Sides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreatePolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreatePolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms
		{
			FRandomStream Stream;
			TArray<FVector> InPoints;
			TArray<FVector> Polygon;
			int32 Points;
			double Depth;
			TArray<FVector> OutPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Stream_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, Points), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, Depth), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Depth_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateRandomPointsInCPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInCPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms
		{
			FRandomStream Stream;
			TArray<FVector> InPoints;
			int32 points;
			double radius;
			TArray<FVector> OutPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_Stream_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms, points), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_radius_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateRandomPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSphere_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms
		{
			FRandomStream Stream;
			TArray<FVector> InPoints;
			int32 points;
			double radius;
			double depth;
			TArray<FVector> OutPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_depth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_depth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_Stream_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, points), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_depth = { "depth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, depth), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_depth_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateRandomPointsInSquare", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::RojiMathUtilitiesBPLibrary_eventCreateRandomPointsInSquare_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms
		{
			FRandomStream Stream;
			TArray<FVector> InPoints;
			int32 points;
			double radius;
			TArray<FVector> OutPoints;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_Stream_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms, points), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_radius_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateRandomPointsOnSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::RojiMathUtilitiesBPLibrary_eventCreateRandomPointsOnSphere_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms
		{
			TArray<FVector> InPoints;
			double maxRadius;
			double deltaRadius;
			double pointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_maxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_deltaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_pointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_maxRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_maxRadius = { "maxRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, maxRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_maxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_maxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_deltaRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_deltaRadius = { "deltaRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, deltaRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_deltaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_deltaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_pointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_pointSpacing = { "pointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, pointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_pointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_pointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_maxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_deltaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_pointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::NewProp_OutRotators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateSpiral", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::RojiMathUtilitiesBPLibrary_eventCreateSpiral_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms
		{
			TArray<FVector> InPoints;
			double maxRadius;
			double deltaRadius;
			double Depth;
			double pointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_maxRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_deltaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_pointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_maxRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_maxRadius = { "maxRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, maxRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_maxRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_maxRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_deltaRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_deltaRadius = { "deltaRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, deltaRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_deltaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_deltaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_Depth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, Depth), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_pointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_pointSpacing = { "pointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, pointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_pointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_pointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_maxRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_deltaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_Depth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_pointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::NewProp_OutRotators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateSpiral3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::RojiMathUtilitiesBPLibrary_eventCreateSpiral3D_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms
		{
			TArray<FVector> InPoints;
			TArray<FVector> Polygon;
			FVector Center;
			double deltaRadius;
			double pointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_deltaRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_pointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_deltaRadius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_deltaRadius = { "deltaRadius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, deltaRadius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_deltaRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_deltaRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_pointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_pointSpacing = { "pointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, pointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_pointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_pointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_deltaRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_pointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::NewProp_OutRotators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateSpiralInCPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateSpiralInCPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms
		{
			TArray<FVector> Polygon;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateTrianglesFromCPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromCPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms
		{
			TArray<FVector> Polygon;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateTrianglesFromPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::RojiMathUtilitiesBPLibrary_eventCreateTrianglesFromPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms
		{
			TArray<FVector> InPoints;
			const USplineComponent* Spline;
			double PointSpacing;
			TArray<FVector> OutPoints;
			TArray<FRotator> OutRotators;
			TArray<FVector> OutScales;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PointSpacing;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotators_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutRotators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScales_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutScales;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_PointSpacing_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_PointSpacing = { "PointSpacing", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, PointSpacing), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_PointSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_PointSpacing_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutRotators_Inner = { "OutRotators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutRotators = { "OutRotators", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, OutRotators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutScales_Inner = { "OutScales", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutScales = { "OutScales", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms, OutScales), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_PointSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutRotators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutRotators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutScales_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::NewProp_OutScales,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateUinformPointsOnSpline", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::RojiMathUtilitiesBPLibrary_eventCreateUinformPointsOnSpline_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms
		{
			TArray<FVector> InPoints;
			int32 points;
			double radius;
			TArray<FVector> OutPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_points_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_points = { "points", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms, points), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_radius_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_OutPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::NewProp_OutPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|PointGenerator" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "CreateUniformPointsOnSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::RojiMathUtilitiesBPLibrary_eventCreateUniformPointsOnSphere_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms
		{
			UObject* WorldContextObject;
			FTransform Transform;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			double ZOffset;
			FColor Color;
			double Duration;
			double Thickness;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_ZOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, ZOffset), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Roji|Math|Debug" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "DrawBoundingBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::RojiMathUtilitiesBPLibrary_eventDrawBoundingBox_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms
		{
			UObject* WorldContextObject;
			FTransform Transform;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			double ZOffset;
			FColor Color;
			double Duration;
			double Thickness;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_ZOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, ZOffset), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Roji|Math|Debug" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "DrawLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::RojiMathUtilitiesBPLibrary_eventDrawLayer_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventDrawLines_Parms
		{
			UObject* WorldContextObject;
			FTransform Transform;
			TArray<FVector> InPoints;
			FColor Color;
			double Duration;
			double Thickness;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawLines_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Roji|Math|Debug" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "DrawLines", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::RojiMathUtilitiesBPLibrary_eventDrawLines_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms
		{
			UObject* WorldContextObject;
			FTransform Transform;
			TArray<FVector> InPoints;
			double radius;
			FColor Color;
			double Duration;
			double Thickness;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, radius), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Roji|Math|Debug" },
		{ "Comment", "// Debug Functions\n" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "ToolTip", "Debug Functions" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "DrawMarkers", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::RojiMathUtilitiesBPLibrary_eventDrawMarkers_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms
		{
			UObject* WorldContextObject;
			FTransform Transform;
			TArray<FVector> InPoints;
			double ZOffset;
			FColor Color;
			double Duration;
			double Thickness;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Thickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints_Inner = { "InPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints = { "InPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, InPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_ZOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, ZOffset), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_ZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms, Thickness), METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Thickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_InPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_ZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::NewProp_Thickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Roji|Math|Debug" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "DrawPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::RojiMathUtilitiesBPLibrary_eventDrawPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetAreaOfCPolygon_Parms
		{
			TArray<FVector> Polygon;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfCPolygon_Parms, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfCPolygon_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetAreaOfCPolygon", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::RojiMathUtilitiesBPLibrary_eventGetAreaOfCPolygon_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms
		{
			FVector A;
			FVector B;
			FVector C;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetAreaOfTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::RojiMathUtilitiesBPLibrary_eventGetAreaOfTriangle_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms
		{
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			FVector BoxOrigin;
			FVector BoxExtent;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_BoxOrigin = { "BoxOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_BoxOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::NewProp_BoxExtent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetBoundsOfLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::RojiMathUtilitiesBPLibrary_eventGetBoundsOfLayer_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms
		{
			FVector Point;
			FVector BoxOrigin;
			FVector BoxExtent;
			double ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxOrigin = { "BoxOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms, BoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxExtent_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_BoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "Comment", "// Point Functions\n" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "ToolTip", "Point Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetDistanceToFarCorner", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::RojiMathUtilitiesBPLibrary_eventGetDistanceToFarCorner_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms
		{
			FRandomStream Stream;
			FVector A;
			FVector B;
			FVector C;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_Stream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetRandomPointInTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms
		{
			FRandomStream Stream;
			FVector A;
			FVector B;
			FVector C;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stream_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_Stream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_Stream = { "Stream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms, Stream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_Stream_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_Stream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_C_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_Stream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "Comment", "// Point Generator Functions\n" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "ToolTip", "Point Generator Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "GetRandomPointInTriangle3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::RojiMathUtilitiesBPLibrary_eventGetRandomPointInTriangle3D_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms
		{
			FVector Point;
			TArray<FVector> A;
			TArray<FVector> B;
			TArray<FVector> C;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FStructPropertyParams NewProp_A_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_B;
		static const UECodeGen_Private::FStructPropertyParams NewProp_C_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_Point_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A_Inner = { "A", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms, A), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B_Inner = { "B", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms, B), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C_Inner = { "C", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms, C), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C_MetaData)) };
	void Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms), &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "IsPointInLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::RojiMathUtilitiesBPLibrary_eventIsPointInLayer_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics
	{
		struct RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms
		{
			FVector Point;
			FVector A;
			FVector B;
			FVector C;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms, A), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms, B), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_C_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms, C), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_C_MetaData)) };
	void Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms), &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Roji|Math|Utilities" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URojiMathUtilitiesBPLibrary, nullptr, "IsPointInTriangle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::RojiMathUtilitiesBPLibrary_eventIsPointInTriangle_Parms), Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URojiMathUtilitiesBPLibrary);
	UClass* Z_Construct_UClass_URojiMathUtilitiesBPLibrary_NoRegister()
	{
		return URojiMathUtilitiesBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RojiMathUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddPolygonToTriangles, "AddPolygonToTriangles" }, // 3739545404
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_AddTriangles, "AddTriangles" }, // 3021633334
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCircles, "CreateCCircles" }, // 158765723
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateCCirclesInCPolygon, "CreateCCirclesInCPolygon" }, // 114217555
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateGridInLayer, "CreateGridInLayer" }, // 2529901666
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateOpenPolygon, "CreateOpenPolygon" }, // 4017656382
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreatePolygon, "CreatePolygon" }, // 4822888
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInCPolygon, "CreateRandomPointsInCPolygon" }, // 3886249604
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSphere, "CreateRandomPointsInSphere" }, // 2506597635
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsInSquare, "CreateRandomPointsInSquare" }, // 3623911000
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateRandomPointsOnSphere, "CreateRandomPointsOnSphere" }, // 1138663660
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral, "CreateSpiral" }, // 3762281766
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiral3D, "CreateSpiral3D" }, // 3838216178
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateSpiralInCPolygon, "CreateSpiralInCPolygon" }, // 700476614
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromCPolygon, "CreateTrianglesFromCPolygon" }, // 895191644
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateTrianglesFromPolygon, "CreateTrianglesFromPolygon" }, // 538993060
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUinformPointsOnSpline, "CreateUinformPointsOnSpline" }, // 2874000839
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_CreateUniformPointsOnSphere, "CreateUniformPointsOnSphere" }, // 4111078698
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawBoundingBox, "DrawBoundingBox" }, // 2190516230
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLayer, "DrawLayer" }, // 514585269
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawLines, "DrawLines" }, // 1397700671
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawMarkers, "DrawMarkers" }, // 3327467518
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_DrawPolygon, "DrawPolygon" }, // 1373321085
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfCPolygon, "GetAreaOfCPolygon" }, // 2430775053
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetAreaOfTriangle, "GetAreaOfTriangle" }, // 2386370478
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetBoundsOfLayer, "GetBoundsOfLayer" }, // 1689130488
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetDistanceToFarCorner, "GetDistanceToFarCorner" }, // 1722709983
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle, "GetRandomPointInTriangle" }, // 3416601884
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_GetRandomPointInTriangle3D, "GetRandomPointInTriangle3D" }, // 1168422788
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInLayer, "IsPointInLayer" }, // 3002681951
		{ &Z_Construct_UFunction_URojiMathUtilitiesBPLibrary_IsPointInTriangle, "IsPointInTriangle" }, // 351816873
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "RojiMathUtilitiesBPLibrary.h" },
		{ "ModuleRelativePath", "Public/RojiMathUtilitiesBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URojiMathUtilitiesBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::ClassParams = {
		&URojiMathUtilitiesBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URojiMathUtilitiesBPLibrary()
	{
		if (!Z_Registration_Info_UClass_URojiMathUtilitiesBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URojiMathUtilitiesBPLibrary.OuterSingleton, Z_Construct_UClass_URojiMathUtilitiesBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URojiMathUtilitiesBPLibrary.OuterSingleton;
	}
	template<> ROJIMATHUTILITIES_API UClass* StaticClass<URojiMathUtilitiesBPLibrary>()
	{
		return URojiMathUtilitiesBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URojiMathUtilitiesBPLibrary);
	struct Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URojiMathUtilitiesBPLibrary, URojiMathUtilitiesBPLibrary::StaticClass, TEXT("URojiMathUtilitiesBPLibrary"), &Z_Registration_Info_UClass_URojiMathUtilitiesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URojiMathUtilitiesBPLibrary), 3243139850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_3499321737(TEXT("/Script/RojiMathUtilities"),
		Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RojiMath_Plugins_RojiMathUtilities_Source_RojiMathUtilities_Public_RojiMathUtilitiesBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
