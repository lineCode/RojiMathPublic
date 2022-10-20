// Copyright Michael G. Lustig (c) 2022 All Rights Reserved.
// 露地 - Roji 

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "RojiMathUtilitiesBPLibrary.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRojiMathUtilities, Log, All);



/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class URojiMathUtilitiesBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	// not blueprint accessible 
	static int GetOrientation(FVector P, FVector Q, FVector R);
	static double CrossProduct(const FVector& A, const FVector& B);
	static bool IsPointOnSegment(FVector P, FVector Q, FVector R);
	static bool SegmentsIntersect(FVector P1, FVector Q1, FVector P2, FVector Q2, bool IgnoreEndPoints=true);
	static bool GetSegementsIntersection(const FVector& p, const FVector& p2, const FVector& q, const FVector& q2, FVector& OutIntersection);
	static bool IsPointInCircle(const double PointX, const double PointY, const double OriginX, const double OriginY, const double Radius, bool TreatEdgesAsIn = true);
	static int HowManyCirclesContainsPoint(const double X, const double Y, const TArray<FVector>& CircleLocations);
	static bool GetIntersectionOfCircles(const FVector& CircleA, const FVector& CircleB, FVector& Point1, FVector& Point2, FVector& AngleA, FVector& AngleB);


	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static void LoadFile(const FString& Module, const FString& Path, TArray<FString>& OutStrings, bool& Result);
	
	static void ParseFile(const TArray<FString>& InStrings, TArray<TArray<FString>>& OutParsed, bool& Result);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static double GetAreaOfTriangle(const FVector& A, const FVector& B, const FVector& C);
	
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static double GetAreaOfCPolygon(const TArray<FVector>& Polygon);

	// Point Functions
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static double GetDistanceToFarCorner(const FVector& Point, const FVector& BoxOrigin, const FVector& BoxExtent);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static void GetBoundsOfLayer(const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C, FVector& BoxOrigin, FVector& BoxExtent);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static bool IsPointInTriangle(const FVector& Point, const FVector& A, const FVector& B, const FVector& C);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static bool IsPointInLayer(const FVector& Point, const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static void AddTriangles(const TArray<FVector>& InA0, const TArray<FVector>& InB0, const TArray<FVector>& InC0, const TArray<FVector>& InA1, 
		const TArray<FVector>& InB1, const TArray<FVector>& InC1, TArray<FVector>& OutA, TArray<FVector>& OutB, TArray<FVector>& OutC);
	
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static void AddPolygonToTriangles(const TArray<FVector>& InPolygon, const TArray<FVector>& InA, const TArray<FVector>& InB, const TArray<FVector>& InC,
		TArray<FVector>& OutA, TArray<FVector>& OutB, TArray<FVector>& OutC);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static int CreateTrianglesFromCPolygon(const TArray<FVector>& Polygon, TArray<FVector>& A, TArray<FVector>& B, TArray<FVector>& C);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static int CreateTrianglesFromPolygon(const TArray<FVector>& Polygon, TArray<FVector>& A, TArray<FVector>& B, TArray<FVector>& C);

	// Point Generator Functions
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static FVector GetRandomPointInTriangle3D(const FRandomStream& Stream, const FVector& A, const FVector& B, const FVector& C);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|Utilities")
	static FVector GetRandomPointInTriangle(const FRandomStream& Stream, const FVector& A, const FVector& B, const FVector& C);
	
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateRandomPointsInSquare(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, const double radius,
		const double depth, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateRandomPointsInCPolygon(const FRandomStream& Stream, const TArray<FVector>& InPoints, const TArray<FVector>& Polygon,
		const int Points, const double Depth, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateRandomPointsInSphere(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, const double radius,
		TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateRandomPointsOnSphere(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, const double radius,
		TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateUniformPointsOnSphere(const TArray<FVector>& InPoints, const int points, const double radius, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateOpenPolygon(const TArray<FVector>& InPoints, const double InnerRadius, const double OuterRadius, const double StartAngle, 
		const double StopAngle, const int Sides, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreatePolygon(const TArray<FVector>& InPoints, const double Radius, const int Sides, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateGridInLayer(const TArray<FVector>& InPoints, const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C, 
		const FVector& Spacing, const double Depth, TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateSpiralInCPolygon(const TArray<FVector>& InPoints, const TArray<FVector>& Polygon, const FVector& Center, const double deltaRadius,
		const double pointSpacing, TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateCCirclesInCPolygon(const TArray<FVector>& InPoints, const TArray<FVector>& Polygon, const FVector& Center, const double deltaRadius,
		const double pointSpacing, TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateSpiral(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double pointSpacing,
		TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateSpiral3D(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double Depth, 
		const double pointSpacing, TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateCCircles(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double pointSpacing,
		TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateCircleOfLifeGrid(const int Circles, const double Radius, const int XSpacing, const int YSpacing, TArray<FVector>& CircleLocations, 
		TArray<FVector>& OutPoints);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateCircleOfLife(const int Circles, const double Radius, TArray<FVector>& CircleLocations, TArray<FVector>& OutPoints, TArray<FVector>& OutAngles);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateUinformPointsOnSpline(const TArray<FVector>& InPoints, const USplineComponent* Spline, const double PointSpacing,
			TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators, TArray<FVector>& OutScales);

	// Debug Functions
	UFUNCTION(BlueprintCallable, Category = "Roji|Math|Debug", meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void DrawMarkers(UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& InPoints,
		const double radius, const FColor& Color, const double Duration, const double Thickness);

	UFUNCTION(BlueprintCallable, Category = "Roji|Math|Debug", meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void DrawLines(UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& InPoints, const FColor& Color,
		const double Duration, const double Thickness);

	UFUNCTION(BlueprintCallable, Category = "Roji|Math|Debug", meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void DrawPolygon(UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& InPoints, const double ZOffset,
		const FColor& Color, const double Duration, const double Thickness);

	UFUNCTION(BlueprintCallable, Category = "Roji|Math|Debug", meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void DrawLayer(UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& A, const TArray<FVector>& B, 
		const TArray<FVector>& C, const double ZOffset, const FColor& Color, const double Duration, const double Thickness);

	UFUNCTION(BlueprintCallable, Category = "Roji|Math|Debug", meta = (WorldContext = "WorldContextObject", CallableWithoutWorldContext))
	static void DrawBoundingBox(class UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& A, const TArray<FVector>& B, 
		const TArray<FVector>& C, const double ZOffset, const FColor& Color, const double Duration, const double Thickness);


	//// Mesh Functions
	//UFUNCTION(BluePrintCallable, Category = "Roji|Math|Meshes")
	//static void CreateStaticMeshComponents(AActor* Actor, const TArray<UStaticMesh*> Meshes, TArray<UStaticMeshComponent*> StaticMeshComponents);

	/*
	// Movement Generator Functions
	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateRandomPointsInCPolygonT(const FRandomStream& Stream, const TArray<FTransform>& InTransforms,
		const TArray<FVector>& Polygon, const int Points, const double Depth,
		const ERotationType::Type& RotationType, const FVector& LookAtLocation, const FRotator& Rotator,
		TArray<FTransform>& OutTransforms);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreatePolygonT(const TArray<FTransform>& InTransforms, const double Radius, const int Sides,
		const ERotationType::Type& RotationType, const FVector& LookAtLocation, const FRotator& Rotator,
		TArray<FTransform>& OutTransforms);

	UFUNCTION(BluePrintCallable, Category = "Roji|Math|PointGenerator")
	static void CreateGridInCPolygonT(const TArray<FTransform>& InTransforms, const TArray<FVector>& Polygon, const FVector& Spacing, const double Depth,
		const ERotationType::Type& RotationType, const FVector& LookAtLocation, const FRotator& Rotator,
		TArray<FTransform>& OutTransforms);
	*/

};
