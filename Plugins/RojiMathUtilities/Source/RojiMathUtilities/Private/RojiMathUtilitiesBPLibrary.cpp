// Copyright Epic Games, Inc. All Rights Reserved.

#include "RojiMathUtilitiesBPLibrary.h"
#include "RojiMathUtilities.h"
#include "Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Engine/Public/DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY(LogRojiMathUtilities);

#define VALUE_OF_PI						3.14159265358979
#define MAX_POINTS						50000000
#define MAX_TRANSFORMS					20000000
#define MAX_POINTS_TO_SHOW_AS_MARKERS	10000
#define FUNCTION_NAME					__FUNCTION__
#define PLUGIN_NAME						"URojiMathUtilitiesBPLibrary"

//const FString Module(FUNCTION_NAME);
//const FString Plugin(PLUGIN_NAME);


URojiMathUtilitiesBPLibrary::URojiMathUtilitiesBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

// LoadFile: loads an array of strings from a text file 
// Inputs:
//			Module - The name of the calling module 
//			Path - The relative or full path and filename
// Outputs:
//			OutStrings - An array of strings read from the file
//			Result - true if successful, otherwise false
void URojiMathUtilitiesBPLibrary::LoadFile(const FString& Module, const FString& Path, TArray<FString>& OutStrings, bool& Result)
{
	const FString ThisModule(FUNCTION_NAME);
	FFileHelper FileHelper;
	IFileManager& FileManager = IFileManager::Get();
	Result = FileHelper.LoadANSITextFileToStrings(*Path, &FileManager, OutStrings);
	if (!Result)
	{
		UE_LOG(LogRojiMathUtilities, Error, TEXT("%s(%s) - Error loading file. Path: %s"), *ThisModule, *Module, *Path);
	}
	return;
}

// not implemented
void URojiMathUtilitiesBPLibrary::ParseFile(const TArray<FString>& InStrings, TArray<TArray<FString>>& OutParsed, bool& Result)
{
	Result = false;
}


// CreateTrianglesFromCPolygon: creates an array of triangles (A,B,C) from a concave polygon
// Inputs:
//			Polygon: Array of polygon points (should not connect - last point is assumed to connect to first point)
// Outputs:
//			A,B,C: Arrays of corner points of the triangles
int URojiMathUtilitiesBPLibrary::CreateTrianglesFromCPolygon(const TArray<FVector>& Polygon, TArray<FVector>& A, TArray<FVector>& B, TArray<FVector>& C)
{
	if (Polygon.Num() < 3)
	{
		return 0;
	}

	// Simple split for closed concave polygon (# of sides - 2)
	for (int i = 1; i < Polygon.Num() - 1; ++i)
	{
		A.Emplace(Polygon[0]);
		B.Emplace(Polygon[i]);
		C.Emplace(Polygon[i + 1]);
	}
	return A.Num();
}

// GetOrientation: Helper function for IsPointOnSegment (not called directly)
// Inputs:
//			P: The point
//			Q,R: The segment end points
// Outputs:
//			return value: 0, 1, 2
int URojiMathUtilitiesBPLibrary::GetOrientation(FVector P, FVector Q, FVector R) 
{
	int delta = (Q.Y - P.Y) * (R.X - Q.X) -
		(Q.X - P.X) * (R.Y - Q.Y);

	if (delta == 0)
		return 0;

	return (delta > 0) ? 1 : 2;
}

// IsPointOnSegment: Helper function for SegemntsIntersect (not called directly)
// If R lies on line p-q, then the x-coordinate of R should be between the x-coordinates of
// P and Q and the y-coordinate of R should be between the y-coordinates of P and Q.
// Inputs:
//			P, Q: the segment end points
//			R: the point
// Outputs:
//			return value: true if point is on segment, otherwise false
bool URojiMathUtilitiesBPLibrary::IsPointOnSegment(FVector P, FVector Q, FVector R) 
{

	if (R.X <= std::max(P.X, Q.X) && R.X >= std::min(P.X, Q.X) &&
		R.Y <= std::max(P.Y, Q.Y) && R.Y >= std::min(P.Y, Q.Y)) {
		return true;
	}
	return false;
}

// SegmentsIntersect: Check if two line segments intersect
// Inputs:
//			P1, Q1: the endpoints of the first line segment
//			P2, Q2: the endpoints of the second line segment
//			IgnoreEndPoints: whether to treat intersections at end points as intersections (default is true)
// Outputs:
//			return value: true if segments p1-q1 intersect p2-q2, otherwise false
bool URojiMathUtilitiesBPLibrary::SegmentsIntersect(FVector P1, FVector Q1, FVector P2, FVector Q2, bool IgnoreEndPoints)
{
	// connected end points are not intersecting segments (by default)
	if (IgnoreEndPoints && (P1 == P2 || P1 == Q2 || Q1 == P2 || Q1 == Q2))
	{
		return false;
	}

	int Orientation1 = GetOrientation(P1, Q1, P2);
	int Orientation2 = GetOrientation(P1, Q1, Q2);
	int Orientation3 = GetOrientation(P2, Q2, P1);
	int Orientation4 = GetOrientation(P2, Q2, Q1);

	// General case : Points are non-collinear.
	if (Orientation1 != Orientation2 && Orientation3 != Orientation4)
	{
		return true;
	}

	// Special case : Points are collinear.

	// If points p1, q1 and p2 are collinear, check if point p2 lies on segment p1-q1
	if (Orientation1 == 0 && IsPointOnSegment(P1, Q1, P2))
	{
		return true;
	}

	// If points p1, q1 and q2 are collinear, check if point q2 lies on segment p1_q1
	if (Orientation2 == 0 && IsPointOnSegment(P1, Q1, Q2))
	{
		return true;
	}

	// If points p2, q2 and p1 are collinear, check if point p1 lies on segment p2_q2
	if (Orientation3 == 0 && IsPointOnSegment(P2, Q2, P1))
	{
		return true;
	}

	// If points p2, q2 and q1 are collinear, check if point q1 lies on segment p2_q2
	if (Orientation4 == 0 && IsPointOnSegment(P2, Q2, Q1))
	{
		return true;
	}
	return false;
}

// GetSegementsIntersection: Get the intersection point of two line segments (not working)
// Inputs:
//			P1, Q1: the endpoints of the first line segment
//			P2, Q2: the endpoints of the second line segment
// Outputs:
//			OutIntersection: the point of intersection
//			return value: true if intersection found, otherwise false
bool URojiMathUtilitiesBPLibrary::GetSegementsIntersection(const FVector& P1, const FVector& Q1, const FVector& P2, const FVector& Q2, FVector& OutIntersection)
{

	FVector r = Q1 - P1;
	FVector s = Q2 - P2;
	double rxs = CrossProduct(r, s);

	if (rxs == 0)
		return false;

	double qpxr = CrossProduct(P2 - P1, r);
	double t = CrossProduct(P2 - P1, s) / rxs;
	double u = CrossProduct(P2 - P1, r) / rxs;

	// 4. If r x s != 0 and 0 <= t <= 1 and 0 <= u <= 1
	// the two line segments meet at the point P1 + t r = P2 + u s.
	if ((0 <= t && t <= 1) && (0 <= u && u <= 1))
	{
		// We can calculate the intersection point using either t or u.
		OutIntersection = P1 + t * r;

		// An intersection was found.
		return true;
	}

	return false;
}

// CrossProduct: Find the cross products of points A, B
// Inputs:
//			A,B: the points
// Outputs:
//			return value: the cross product of A,B
double URojiMathUtilitiesBPLibrary::CrossProduct(const FVector& A, const FVector& B)
{
	return A.X * B.Y - A.Y * B.X;
}

// CreateTrianglesFromPolygon: given a polygon with no crossing lines, break it up into triangles.
// This routine uses ear trimming from both ends of the polygon and will reverse the array if necessary (e.g. counterclockwise instead of clockwise processing)
// Inputs:
//			Polygon: Array of polygon points (should not connect - last point is assumed to connect to first point)
// Outputs:
//			A,B,C: Arrays of corner points of the triangles
//			return value: the number of triangles produced or 0 if failure
int URojiMathUtilitiesBPLibrary::CreateTrianglesFromPolygon(const TArray<FVector>& Polygon, TArray<FVector>& A, TArray<FVector>& B, TArray<FVector>& C)
{
	if (Polygon.Num() < 3)
	{
		return 0;
	}
	TArray<FVector>Copy;

	// see if the array should be reversed (not a guarantee but a better chance)
	bool Found = false;
	for (int i = 0; i < Polygon.Num(); i++)
	{
		FVector aa, bb, cc;
		aa = Polygon[i];
		if (!i)
			bb = Polygon[Polygon.Num() - 1];
		else
			bb = Polygon[i - 1];
		if (i == Polygon.Num() - 1)
			cc = Polygon[0];
		else
			cc = Polygon[i + 1];
		if (CrossProduct(bb - aa, cc - aa) > 0.0f)
		{
			Found = true;
			break;
		}
	}
	for (int i = 0; i < Polygon.Num(); i++)
	{
		if (!Found)
		{
			Copy.EmplaceAt(i, Polygon[Polygon.Num() - 1 - i]);
		}
		else
		{
			Copy.EmplaceAt(i, Polygon[i]);
		}
	}

	// make sure that we received a simple polygon
	bool complex = false;
	for (int i = 0; i < Copy.Num() - 1; i++)
	{
		if (i < (Copy.Num() - 2)) {
			for (int j = i + 1; j < Copy.Num() - 1; j++)
			{
				complex = SegmentsIntersect(Copy[i], Copy[i + 1], Copy[j], Copy[j + 1]);
				if (complex)
				{
					//can't be processed
					return 0;
				}
			}
		}
	}

	// unwind the polygon from both ends
	int triangleIndex = 0, passes = 0;
	bool TriedReverse = false;
	while (Copy.Num() > 3)
	{
		passes++;
		bool didSomething = false;
		for (int i = 0; i < Copy.Num()-2; i++)
		{
			FVector aa, bb, cc;
			int aIndex, bIndex, cIndex;

			//trim from both ends
			if (passes % 2)
			{
				aIndex = i;
			}
			else
			{
				aIndex = Copy.Num() - 1 - i;
			}
			aa = Copy[aIndex];
			if (aIndex == 0)
			{
				bIndex = Copy.Num() - 1;
			}
			else
			{
				bIndex = aIndex - 1;
			}
			bb = Copy[bIndex];
			if (aIndex == (Copy.Num() - 1))
			{
				cIndex = 0;
			}
			else
			{
				cIndex = aIndex + 1;
			}
			cc = Copy[cIndex];

			//make sure that the cross product is positive
			if (CrossProduct(bb - aa, cc - aa) < 0.0f)
			{
				continue;
			}

			// check remaining points to make sure they are not in the triangle
			bool found = false;
			for (int j = 0; j < Copy.Num(); j++)
			{
				if (j == aIndex || j == bIndex || j == cIndex)
				{
					continue;
				}
				found = IsPointInTriangle(Copy[j], aa, bb, cc);
				if (found)
				{
					break;
				}
			}
			if (found)
			{
				continue;
			}

			//the triangle is safe to clip
			Copy.RemoveAt(aIndex, 1, true);
			didSomething = true;
			A.EmplaceAt(triangleIndex, aa);
			B.EmplaceAt(triangleIndex, bb);
			C.EmplaceAt(triangleIndex, cc);
			triangleIndex++;
			break;
		}

		//break if infinite loop
		if (!didSomething)
		{
			if (TriedReverse)
			{
				break;
			}
			TriedReverse = true;
			// reverse array and try again
			Copy.Empty();
			A.Empty();
			B.Empty();
			C.Empty();
			for (int k = Polygon.Num() - 1; k >= 0; k--)
			{
				Copy.Emplace(Polygon[k]);
			}
			continue;
		}
	}
	A.EmplaceAt(triangleIndex, Copy[0]);
	B.EmplaceAt(triangleIndex, Copy[1]);
	C.EmplaceAt(triangleIndex, Copy[2]);
	triangleIndex++;

	return triangleIndex;
}

// GetDistanceToFarCorner: find the distance to the corner of the box farthest away from the point
// Inputs:
//			Point: the point
//			BoxOrigin: the origin of the box
//			BoxExtent: the size (extent) of the box
// Outputs:
//			return value: the distance to the farthest corner
double URojiMathUtilitiesBPLibrary::GetDistanceToFarCorner(const FVector& Point, const FVector& BoxOrigin, const FVector& BoxExtent)
{
	double d;

	d = sqrt(pow(Point.X - BoxOrigin.X, 2) + pow(Point.Y - BoxOrigin.Y, 2));
	d = std::max(d, double(sqrt(pow(Point.X - (BoxOrigin.X + BoxExtent.X), 2) + pow(Point.Y - BoxOrigin.Y, 2))));
	d = std::max(d, double(sqrt(pow(Point.X - (BoxOrigin.X + BoxExtent.X), 2) + pow(Point.Y - (BoxOrigin.Y + BoxExtent.Y), 2))));
	d = std::max(d, double(sqrt(pow(Point.X - BoxOrigin.X, 2) + pow(Point.Y - (BoxOrigin.Y + BoxExtent.Y), 2))));
	return d;
}

// GetBoundsOfLayer: given triangles, find a box that encloses them all
// Inputs:
//			A,B,C: the corners of the triangles
// Outputs:
//			BoxOrigin: the corner of the bounding box
//			BxoExtent: the size (extent) of the bounding box
void URojiMathUtilitiesBPLibrary::GetBoundsOfLayer(const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C, FVector& BoxOrigin, FVector& BoxExtent)
{
	if (A.Num() == 0 || A.Num() != B.Num() || B.Num() != C.Num()) {
		BoxOrigin.X = BoxOrigin.Y = BoxOrigin.Z = BoxExtent.X = BoxExtent.Y = BoxExtent.Z = 0;
		return;
	}
	BoxOrigin = BoxExtent = A[0];
	for (int i = 0; i < A.Num(); i++)
	{
		BoxOrigin.X = std::min(BoxOrigin.X, A[i].X);
		BoxOrigin.X = std::min(BoxOrigin.X, B[i].X);
		BoxOrigin.X = std::min(BoxOrigin.X, C[i].X);
		BoxOrigin.Y = std::min(BoxOrigin.Y, A[i].Y);
		BoxOrigin.Y = std::min(BoxOrigin.Y, B[i].Y);
		BoxOrigin.Y = std::min(BoxOrigin.Y, C[i].Y);
		BoxOrigin.Z = std::min(BoxOrigin.Z, A[i].Z);
		BoxOrigin.Z = std::min(BoxOrigin.Z, B[i].Z);
		BoxOrigin.Z = std::min(BoxOrigin.Z, C[i].Z);
		BoxExtent.X = std::max(BoxExtent.X, A[i].X);
		BoxExtent.X = std::max(BoxExtent.X, B[i].X);
		BoxExtent.X = std::max(BoxExtent.X, C[i].X);
		BoxExtent.Y = std::max(BoxExtent.Y, A[i].Y);
		BoxExtent.Y = std::max(BoxExtent.Y, B[i].Y);
		BoxExtent.Y = std::max(BoxExtent.Y, C[i].Y);
		BoxExtent.Z = std::max(BoxExtent.Z, A[i].Z);
		BoxExtent.Z = std::max(BoxExtent.Z, B[i].Z);
		BoxExtent.Z = std::max(BoxExtent.Z, C[i].Z);
	}
	BoxExtent -= BoxOrigin;
}

// GetAreaOfTriangle:
// Inputs:
//			A,B,C: the corners of the triangle
// Outputs:
//			the area of the triangle ABC
double URojiMathUtilitiesBPLibrary::GetAreaOfTriangle(const FVector& A, const FVector& B, const FVector& C)
{
	//  A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2 
	//  A = abs( (A.X(B.Y - C.Y) + B.X(C.Y - A.Y) + C.X(A.Y - B.Y))/2 )
	return abs((A.X * (B.Y - C.Y) + B.X * (C.Y - A.Y) + C.X * (A.Y - B.Y)) / 2.0);
}

// GetAreaOfCPolygon: find the area of a polygon by breaking it into triangles
// Inputs:
//			Polygon: the points of the polygon (should not connect - the last point is assumed to connect to the first point)
// Outputs:
//			return value: the area of the polygon or 0 if unable to parse polygon
double URojiMathUtilitiesBPLibrary::GetAreaOfCPolygon(const TArray<FVector>& Polygon)
{
	TArray<FVector> A, B, C;
	double area = 0;

	if (Polygon.Num() < 3)
	{
		return 0.0;
	}
	if (!CreateTrianglesFromPolygon(Polygon, A, B, C))
	{
		CreateTrianglesFromCPolygon(Polygon, A, B, C);
	}
	if (A.Num() < 1)
	{
		return 0.0;
	}
	for (int i = 0; i < A.Num(); ++i)
	{
		area += GetAreaOfTriangle(A[i], B[i], C[i]);
	}
	return area;
}

// IsPointInTriangle: check if point P is in the triangle ABC
// Inputs:
//			p: the point
//			a,b,c: the corners of the triangle
// Outputs:
//			return value: true if point is within triangle ABC, otherwise false
bool URojiMathUtilitiesBPLibrary::IsPointInTriangle(const FVector& p, const FVector& a, const FVector& b, const FVector& c)
{
	double A0 = GetAreaOfTriangle(a, b, c);
	double A1 = GetAreaOfTriangle(p, a, b);
	double A2 = GetAreaOfTriangle(p, c, b);
	double A3 = GetAreaOfTriangle(p, a, c);

	double d = abs(A0 - A1 - A2 - A3);
	if (d < .1f) // tolerance for rounding errors
	{
		return true;
	}
	return false;
}

// IsPointInLayer: check if point is in any triangle
// Inputs:
//			p: the point
//			A,B,C: array of triangles ABC
// Outputs:
//			return value: true if point is is any of the triangles, otherwise false
bool URojiMathUtilitiesBPLibrary::IsPointInLayer(const FVector& p, const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C)
{
	if (A.Num() == 0 || A.Num() != B.Num() || B.Num() != C.Num())
	{
		return false;
	}
	for (int i = 0; i < A.Num(); i++)
	{
		if (IsPointInTriangle(p, A[i], B[i], C[i]))
		{
			return true;
		}
	}
	return false;
}

// AddTriangles: concatenate two arrays of triangles ABC and return the result
// Inputs:
//			InA0,InB0,InC0: the first array of triangles ABC
//			InA,InB,InC: the second array of triangles ABC
// Outputs:
//			OutA,OutB,OutC: the array of concatenated triangles ABC (or undefined if input is invalid)
void URojiMathUtilitiesBPLibrary::AddTriangles(const TArray<FVector>& InA0, const TArray<FVector>& InB0, const TArray<FVector>& InC0, 
	const TArray<FVector>& InA, const TArray<FVector>& InB, const TArray<FVector>& InC,
	TArray<FVector>& OutA, TArray<FVector>& OutB, TArray<FVector>& OutC)

{
	TArray<FVector> a, b, c;
	OutA = InA;
	OutB = InB;
	OutC = InC;

	if (InA0.IsEmpty() || InA0.Num() != InB0.Num() || InB0.Num() != InC0.Num())
	{
		return;
	}
	for (int i = 0; i < InA0.Num(); i++)
	{
		OutA.Emplace(InA0[i]);
		OutB.Emplace(InB0[i]);
		OutC.Emplace(InC0[i]);
	}
	return;
}

// AddPolygonToTriangles: add the polygon to the array of triangles by breaking the polygon into triangles
// Inputs:
//			InPolygon: the polygon to break into triangles and add to the arrays
//			InA,InB,InC: the array of triangles to add the polygon into
// Outputs:
//			OutA,OutB,OutC: the array of triangles with the polygon broken into triangles (or the original array if the polygon is invalid)
 void URojiMathUtilitiesBPLibrary::AddPolygonToTriangles(const TArray<FVector>& InPolygon, const TArray<FVector>& InA, const TArray<FVector>& InB, const TArray<FVector>& InC,
	TArray<FVector>& OutA, TArray<FVector>& OutB, TArray<FVector>& OutC)

{
	TArray<FVector> a, b, c;
	OutA = InA;
	OutB = InB;
	OutC = InC;

	if (InPolygon.Num() < 3)
	{
		return;
	}
	if (CreateTrianglesFromPolygon(InPolygon, a, b, c) == 0)
	{
		CreateTrianglesFromCPolygon(InPolygon, a, b, c);
	}
	for (int i = 0; i < a.Num(); i++)
	{
		OutA.Emplace(a[i]);
		OutB.Emplace(b[i]);
		OutC.Emplace(c[i]);
	}
	return;
}

 // CreateGridInLayer: creates a grid that is uniformly spaced across all triangles 
 // Inputs:
 //			InPoints: usually a single point (0,0,0)
 //			A,B,C: array of triangles ABC
 //			gSpacing: grid spacing in 2D or 3D if Z is non zero
 //			depth: used to determine depth if gSpacing.Z is non zero
 // Outputs:
 //			OutPoints: the array of points for the grid id 2D or 3D (or InPoints if input parameters are invalid)
void URojiMathUtilitiesBPLibrary::CreateGridInLayer(const TArray<FVector>& InPoints, const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C, 
	const FVector& gSpacing, const double depth, TArray<FVector>& OutPoints)
{
	FVector origin, extent, p;
	GetBoundsOfLayer(A, B, C, origin, extent);
	int xSteps, ySteps, zSteps = 0, counter = 0;

	// XY spacing must be non-zero and must have at least one triangle
	if (!gSpacing.X  || !gSpacing.Y || A.Num() == 0 || !extent.X || !extent.Y)
	{
		OutPoints = InPoints;
		return;
	}

	// if depth specified, Z spacing must be non-zero
	if (depth != 0 && gSpacing.Z == 0)
	{
		OutPoints = InPoints;
		return;
	}
	else if (depth)
	{
		zSteps = abs(depth / gSpacing.Z) + 1; // edges are in so add 1
	}

	xSteps = extent.X / gSpacing.X + 1; // edges are in so add 1
	ySteps = extent.Y / gSpacing.Y + 1; // edges are in so add 1

	//for (int i = 0; i < InPoints.Num(); i++)
	{
		for (int x = 0; x < xSteps; x++)
		{
			p.X = origin.X + x * gSpacing.X;
			for (int y = 0; y < ySteps; y++)
			{
				p.Y = origin.Y + y * gSpacing.Y;
				p.Z = origin.Z;
				if (IsPointInLayer(p, A, B, C))
				{
					//p += InPoints[i];
					if (!zSteps)
					{
						OutPoints.Emplace(p);
						if (++counter >= MAX_POINTS)
						{
							// this is approaching an error so bail out
							return;
						}
					}
					else
					{
						for (int z = 0; z < zSteps; z++)
						{
							p.Z = origin.Z + gSpacing.Z * z / zSteps - depth / 2.0f;
							//p.Z += InPoints[i].Z;
							OutPoints.Emplace(p);
							if (++counter >= MAX_POINTS)
							{
								// this is approaching an error so bail out
								return;
							}

						}
					}
				}
			}
		}
	}
}

// CreateSpiralInCPolygon: create a spiral bound by a polygon at each point in InPoints
// Inputs:
//			InPoints: the origin(s) for the polygons - must contain at least one point - usually (0,0,0) to create around world origin
//			Polygon: the points of the bounding polygon with an open end - the last point is assumed to be connected to the first point
//			Center: the location of the center of the spiral (does not have to be inside of the bounding polygon)
//			deltaRadius: the radius shift for each ring of the spiral
//			pointSpacing: the spacing between points
// Outputs:
//			OutPoints: the points of the spiral(s) that fit inside the polygon (including edges)
//			OutRotators: the rotation of each point towards the origin specified by Center
void URojiMathUtilitiesBPLibrary::CreateSpiralInCPolygon(const TArray<FVector>& InPoints, const TArray<FVector>& Polygon, const FVector& Center, const double deltaRadius,
	const double pointSpacing, TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators)
{
	FVector origin, extent;
	int counter = 0;
	double maxRadius, radius, angle = 0.0f;
	TArray<FVector> A, B, C;

	// minimal bounds checking
	if (deltaRadius <= 0 || pointSpacing <= 0 || Polygon.Num() < 3)
	{
		OutPoints = InPoints;
		return;
	}

	//get triangles once for efficiency
	if (!CreateTrianglesFromPolygon(Polygon, A, B, C))
	{
		CreateTrianglesFromCPolygon(Polygon, A, B, C);
	}

	// get bounding box
	GetBoundsOfLayer(A, B, C, origin, extent);

	// determine the maximum possible radius
	maxRadius = GetDistanceToFarCorner(Center, origin, extent);

	for (int j = 0; j < InPoints.Num(); j++)
	{
		radius = deltaRadius; // start away from the center - can not be zero!
		while (radius <= maxRadius)
		{
			FVector P = Center;
			double circ = UKismetMathLibrary::MultiplyByPi(2.0f * radius);

			angle += UKismetMathLibrary::MultiplyByPi(2.0f * (pointSpacing / circ));  // maintain consistent spacing between points on spiral
			P.X += radius * cos(angle);
			P.Y += radius * sin(angle);

			for (int i = 0; i < A.Num(); i++)
			{
				if (IsPointInTriangle(P, A[i], B[i], C[i]))
				{
					OutRotators.Emplace(UKismetMathLibrary::FindLookAtRotation(P, Center));
					OutPoints.Emplace(P + InPoints[j]);
					if (++counter >= MAX_POINTS)
					{
						// this is approaching an error so bail out
						return;
					}
					break;
				}
			}
			radius += deltaRadius * pointSpacing / circ; // maintain consistent spacing between rings of spiral
		}
	}
}

// CreateCCirclesInCPolygon: create concentric circles of points around Center bound by Polygon
// Inputs:
//			InPoints: the origin(s) for the polygons - must contain at least one point - usually (0,0,0) to create around world origin
//			Polygon: the points of the bounding polygon with an open end - the last point is assumed to be connected to the first point
//			Center: the location of the center of the spiral (does not have to be inside of the bounding polygon)
//			deltaRadius: the radius shift for each ring
//			pointSpacing: the spacing between points of the ring
// Outputs:
//			OutPoints: the points of the circles(s) that fit inside the polygon (including edges)
//			OutRotators: the rotation of each point towards the origin specified by Center
void URojiMathUtilitiesBPLibrary::CreateCCirclesInCPolygon(const TArray<FVector>& InPoints, const TArray<FVector>& Polygon, const FVector& Center, const double deltaRadius,
	const double pointSpacing, TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators)
{
	FVector origin, extent;
	int counter = 0;
	double maxRadius, angle = 0.0f;
	TArray<FVector> A, B, C;

	// minimal bounds checking
	if (deltaRadius <= 0 || pointSpacing <= 0 || Polygon.Num() < 3)
	{
		OutPoints = InPoints;
		return;
	}

	//get triangles once for efficiency
	if (!CreateTrianglesFromPolygon(Polygon, A, B, C))
	{
		CreateTrianglesFromCPolygon(Polygon, A, B, C);
	}

	// get bounding box
	GetBoundsOfLayer(A, B, C, origin, extent);

	// determine the maximum possible radius
	maxRadius = GetDistanceToFarCorner(Center, origin, extent);
	int steps = round(maxRadius / deltaRadius) + 1;  // the fence is in bounds

	//loop through the InPoints
	for (int m = 0; m < InPoints.Num(); m++)  // do the Points one iteration at a time (slower) so that the order of the points makes sense
	{
		// loop through the # of rings to the edge
		for (int j = 1; j < steps; j++)
		{
			double circ = UKismetMathLibrary::MultiplyByPi(2.0f * double(j) * deltaRadius);
			int points = round(circ / pointSpacing);
			// loop through the points on this ring
			for (int k = 0; k < points; k++)
			{
				FVector P = Center;
				angle = UKismetMathLibrary::MultiplyByPi(2.0f) * (double(k) + 0.5f) / double(points); // shift angle off of zero degrees at start
				P.X += j * deltaRadius * cos(angle);
				P.Y += j * deltaRadius * sin(angle);
				//make sure the point is inside of the polygon
				for (int i = 0; i < A.Num(); i++)
				{
					if (IsPointInTriangle(P, A[i], B[i], C[i]))
					{
						OutRotators.Emplace(UKismetMathLibrary::FindLookAtRotation(P, Center));
						OutPoints.Emplace(P + InPoints[m]);
						if (++counter >= MAX_POINTS)
						{
							// this is approaching an error so bail out
							return;
						}
						break;
					}
				}
			}
		}
	}
}

// CreateSpiral: create a 2D spiral around the center out to MaxRadius
// Inputs:
//			InPoints: where to create each spiral - must contain at least one point - usually (0,0,0)
//			maxRadius: the maximum radius of the spiral		
//			deltaRadius: the radius shift for each ring
//			pointSpacing: the spacing between points of the ring
// Outputs:
//			OutPoints: the points of the spiral(s) that fit inside the polygon (including edges)
//			OutRotators: the rotation of each point towards the origin specified by Center
void URojiMathUtilitiesBPLibrary::CreateSpiral(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double pointSpacing,
	TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators)
{
	FVector origin, extent;
	int counter = 0;
	double radius, angle = 0.0f;

	// minimal bounds checking
	if (deltaRadius <= 0 || pointSpacing <= 0 || maxRadius < deltaRadius)
	{
		OutPoints = InPoints;
		return;
	}
	//loop through InPoints
	for (int j = 0; j < InPoints.Num(); j++)
	{
		radius = deltaRadius; // start away from the center - can not be zero!
		while (radius <= maxRadius)
		{
			FVector P;
			double circ = UKismetMathLibrary::MultiplyByPi(2.0f * radius);

			angle += UKismetMathLibrary::MultiplyByPi(2.0f * (pointSpacing / circ));  // maintain consistent spacing between points on spiral
			P.X = radius * cos(angle);
			P.Y = radius * sin(angle);
			OutRotators.Emplace(UKismetMathLibrary::FindLookAtRotation(P, UKismetMathLibrary::MakeVector(0, 0, 0)));
			OutPoints.Emplace(P + InPoints[j]);
			if (++counter >= MAX_POINTS)
			{
				// this is approaching an error so bail out
				return;
			}
			radius += deltaRadius * pointSpacing / circ; // maintain consistent spacing between rings of spiral
		}
	}
}

// CreateSpiral: create a 3D spiral around the center out to MaxRadius from Depth to 0 (this looks like a cone for small numbers in pointSpacing and deltaRadius)
// Inputs:
//			InPoints: where to create each spiral - must contain at least one point - usually (0,0,0)
//			maxRadius: the maximum radius of the spiral		
//			deltaRadius: the radius shift for each ring
//			Depth: the depth that points will be generated (randomly)
//			pointSpacing: the spacing between points of the ring
// Outputs:
//			OutPoints: the points of the spiral(s) that fit inside the polygon (including edges)
//			OutRotators: the rotation of each point towards the origin specified by Center
void URojiMathUtilitiesBPLibrary::CreateSpiral3D(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double Depth, const double pointSpacing,
	TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators)
{
	FVector origin, extent;
	int counter = 0;
	double radius, angle = 0.0f;

	// minimal bounds checking
	if (deltaRadius <= 0 || pointSpacing <= 0 || maxRadius < deltaRadius)
	{
		OutPoints = InPoints;
		return;
	}
	//count how many points will be generated so we can use depth
	int PointCounter = 0;
	radius = deltaRadius; // start away from the center - can not be zero!
	while (radius <= maxRadius)
	{
		FVector P;
		double circ = UKismetMathLibrary::MultiplyByPi(2.0f * radius);

		angle += UKismetMathLibrary::MultiplyByPi(2.0f * (pointSpacing / circ));  // maintain consistent spacing between points on spiral
		if (++PointCounter >= MAX_POINTS)
		{
			// this is approaching an error so bail out
			break;
		}
		radius += deltaRadius * pointSpacing / circ; // maintain consistent spacing between rings of spiral
	}

	//loop through InPoints
	for (int j = 0; j < InPoints.Num(); j++)
	{
		int ItemCounter = 0;
		radius = deltaRadius; // start away from the center - can not be zero!
		while (radius <= maxRadius)
		{
			FVector P;
			double circ = UKismetMathLibrary::MultiplyByPi(2.0f * radius);

			angle += UKismetMathLibrary::MultiplyByPi(2.0f * (pointSpacing / circ));  // maintain consistent spacing between points on spiral
			P.X = radius * cos(angle);
			P.Y = radius * sin(angle);
			P.Z = double(ItemCounter++) / double(PointCounter) * Depth;
			OutRotators.Emplace(UKismetMathLibrary::FindLookAtRotation(P, UKismetMathLibrary::MakeVector(0, 0, 0)));
			OutPoints.Emplace(P + InPoints[j]);
			if (++counter >= MAX_POINTS)
			{
				// this is approaching an error so bail out
				return;
			}
			radius += deltaRadius * pointSpacing / circ; // maintain consistent spacing between rings of spiral
		}
	}
}


// CreateCCircles: create concentric circles (CC) 2D around the center out to MaxRadius
// Inputs:
//			InPoints: where to create each CC - must contain at least one point - usually (0,0,0)
//			maxRadius: the maximum radius of the CC		
//			deltaRadius: the radius shift for each ring
//			pointSpacing: the spacing between points of the ring
// Outputs:
//			OutPoints: the points of the CC(s) that fit inside the polygon (including edges)
//			OutRotators: the rotation of each point towards the origin specified by Center
void URojiMathUtilitiesBPLibrary::CreateCCircles(const TArray<FVector>& InPoints, const double maxRadius, const double deltaRadius, const double pointSpacing,
	TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators)
{
	FVector origin, extent;
	int counter = 0;
	double angle = 0.0f;

	// minimal bounds checking
	if (deltaRadius <= 0 || pointSpacing <= 0 || maxRadius < deltaRadius)
	{
		OutPoints = InPoints;
		return;
	}

	int steps = round(maxRadius / deltaRadius) + 1;

	//loop through the InPoints
	for (int m = 0; m < InPoints.Num(); m++)  // do the Points one iteration at a time (slower) so that the order of the points makes sense
	{
		// loop through the # of rings to the edge
		for (int j = 1; j < steps; j++)
		{
			double circ = UKismetMathLibrary::MultiplyByPi(2.0f * double(j) * deltaRadius);
			int points = round(circ / pointSpacing);
			// loop through the points on this ring
			for (int k = 0; k < points; k++)
			{
				FVector P;
				angle = UKismetMathLibrary::MultiplyByPi(2.0f) * (double(k) + 0.5f) / double(points); // shift angle off of zero degrees at start
				P.X = j * deltaRadius * cos(angle);
				P.Y = j * deltaRadius * sin(angle);
				OutRotators.Emplace(UKismetMathLibrary::FindLookAtRotation(P, UKismetMathLibrary::MakeVector(0, 0, 0)));
				OutPoints.Emplace(P + InPoints[m]);
				if (++counter >= MAX_POINTS)
				{
					// this is approaching an error so bail out
					return;
				}
			}
		}
	}
}

// IsPointInCircle: check if point (PointX, PointY) exists in circle at (OriginX, OriginY) of given radius
// Inputs:
//			PointX,PointY: the point to check
//			OriginX,OriginY: the origin of the circle
//			Radius: the radius of the circle
//			TreatEdgesAsIn: whether to consider points on the edge in or not - default is true (points are in)
// Outputs:
//			return value: true if point is in circle, otherwise false
bool URojiMathUtilitiesBPLibrary::IsPointInCircle(const double PointX, const double PointY, const double OriginX, const double OriginY, const double Radius, bool TreatEdgesAsIn)
{
	double Distance = sqrt(pow(PointX - OriginX, 2) + pow(PointY - OriginY, 2));
	if (Distance < Radius)
	{
		return true;
	}
	if (TreatEdgesAsIn && Distance == Radius)
	{
		return true;
	}
	return false;
}

// HowManyCirclesContainsPoint: count how many circles a point is within
// Inputs:
//			X,Y: the point to check
//			CircleLocations: formatted P.X = X coordinate, P.Y = Y coordinate, P.Z = radius
// Outputs:
//			return value: the number of circles the point is in (can be 0)
int URojiMathUtilitiesBPLibrary::HowManyCirclesContainsPoint(const double X, const double Y, const TArray<FVector>& CircleLocations)
{
	int count = 0;
	for (int i = 0; i < CircleLocations.Num(); i++)
	{
		if (IsPointInCircle(X, Y, CircleLocations[i].X, CircleLocations[i].Y, CircleLocations[i].Z))
		{
			count++;
		}
	}
	return count;
}

// Source: https://www.xarg.org/2016/07/calculate-the-intersection-points-of-two-circles/
// GetIntersectionOfCircles: get the two points of intersection of two circles (if any) and return the angle offset of the points from the origin
// Inputs: 
//			A: the first circle format X, Y, R
//			B: the second circle format X, Y, R
// Outputs:
//			P1: the first intersection point of AB
//			P2: the second intersection point of AB
//			AngleA: angles to points for Circle A as P.X = start angle, P.Y = stop angle (not tested)
//			AngleB: angles to points for Circle B as P.X = start angle, P.Y = stop angle (not tested) 
bool URojiMathUtilitiesBPLibrary::GetIntersectionOfCircles(const FVector& A, const FVector& B, FVector& P1, FVector& P2, FVector& AngleA, FVector& AngleB)
{
	// calculate distance between centers
	double d = sqrt(pow(B.X - A.X, 2) + pow(B.Y - A.Y, 2));
	//if (abs(A.Z) + abs(B.Z) >= d || abs(B.Z - A.Z) < d)// doesn't overlap or touches at single point
	if (d >= abs(A.Z) + abs(B.Z))// doesn't overlap or touches at single point
	{
		return false;
	}
	if (A == B) // circles are the same
	{
		return false; // all points overlap
	}
	double ex = (B.X - A.X) / d;
	double ey = (B.Y - A.Y) / d;

	double x = (pow(A.Z, 2) - pow(B.Z, 2) + pow(d, 2))/(2*d);
	double y = sqrt(pow(A.Z, 2) - pow(x, 2));

	FVector PM;
	P1.X = A.X + x * ex - y * ey;
	P1.Y = A.Y + x * ey + y * ex;
	P2.X = A.X + x * ex + y * ey;
	P2.Y = A.Y + x * ey - y * ex;

	//mid point used to calculate right angle
	PM.X = P1.X + (P2.X - P1.X) / 2;
	PM.Y = P1.Y + (P2.Y - P2.Y) / 2;

	// Source: https://www.mathsisfun.com/algebra/trig-finding-angle-right-triangle.html
	double ha = sqrt(pow(A.X - P1.X, 2) + pow(A.Y - P1.Y, 2));    //Hypotenuse A
	double hb = sqrt(pow(B.X - P1.X, 2) + pow(B.Y - P1.Y, 2));    //Hypotenuse B
	double o = sqrt(pow(P1.X - PM.X, 2) + pow(P1.Y - PM.Y, 2));   //Opposite A/B
	double AngA = asin(o / ha), AngB = asin(o / hb);

	// Source: https://www.w3schools.blog/angle-between-two-points
	double AA = atan2(B.Y - A.Y, B.X - A.X);
	double BA = atan2(A.Y - B.Y, A.X - B.X);

	// set the start and stop angles of the intersection for each circle
	AngleA.X = AA - AngA;
	AngleA.Y = AA + AngA;
	AngleA.Z = AA;
	AngleB.X = BA - AngB;
	AngleB.Y = BA + AngB;
	AngleB.Z = BA;
	return true;
}

// CreateCircleOfLifeGrid: creates a circle of life with the number of circles specified and fills it with a grid of weighted points
// Inputs:
//			InPoints1: Used as return value upon error
//			InPoints2: Used as return value upon error
//			Circles: the number of circles (usually 6 or 12)
//			Segments: the number of points per circle - must be >2
//			Radius: the radius of all circles
// Outputs:
//			CircleLocations: the circles formatted X, Y, R
//			OutPoints: the points within circles formated X, Y, # of circles
void URojiMathUtilitiesBPLibrary::CreateCircleOfLifeGrid(const int Circles, const double Radius, const int XSpacing, const int YSpacing,
	TArray<FVector>& CircleLocations, TArray<FVector>& OutPoints)
{
	if (Circles < 1)
	{
		return;
	}
	OutPoints.Empty();
	for (int j = 0; j < Circles; j++)
	{
		double Angle = UKismetMathLibrary::MultiplyByPi(2.0 * j / Circles);
		FVector P;
		P.X = Radius * cos(Angle);
		P.Y = Radius * sin(Angle);
		P.Z = Radius;
		CircleLocations.EmplaceAt(j, P);
	}

	for (int x = -Radius*2; x <= Radius*2; x += XSpacing)
	{
		for (int y = -Radius*2; y <= Radius*2; y += YSpacing)
		{
			int count = HowManyCirclesContainsPoint(x, y, CircleLocations);
			if (count)
			{
				FVector P;
				P.X = x;
				P.Y = y;
				P.Z = count;
				OutPoints.Emplace(P);
			}
		}
	}
}

// CreateCircleOfLife: creates a circle of life with the number of circles specified and find the points of intersections and angles
// Inputs:
//			InPoints1: Used as return value upon error
//			InPoints2: Used as return value upon error
//			Circles: the number of circles (usually 6 or 12)
//			Segments: the number of points per circle - must be >2
//			Radius: the radius of all circles
// Outputs:
//			CircleLocations: the circles formatted X, Y, R
//			OutPoints: the points where circles intersect
//			OutAngles: formatted P.X = start angle, P.Y = end angle, P.Z = circle index (can be safely ignored)
void URojiMathUtilitiesBPLibrary::CreateCircleOfLife(const int Circles, const double Radius, TArray<FVector>& CircleLocations, TArray<FVector>& OutPoints, TArray<FVector>& OutAngles)
{
	if (Circles < 1)
	{
		return;
	}
	OutPoints.Empty();
	OutAngles.Empty();
	for (int j = 0; j < Circles; j++)
	{
		double Angle = UKismetMathLibrary::MultiplyByPi(2.0 * j / Circles);
		FVector P;
		P.X = Radius * cos(Angle);
		P.Y = Radius * sin(Angle);
		P.Z = Radius;
		CircleLocations.EmplaceAt(j, P);
	}

	for (int i = 0; i < Circles - 1; i++)
	{
		for (int j = i + 1; j < Circles; j++)
		{
			FVector P1, P2, AngleA, AngleB;
			if (GetIntersectionOfCircles(CircleLocations[i], CircleLocations[j], P1, P2, AngleA, AngleB))
			{
				OutPoints.Emplace(P1);
				OutPoints.Emplace(P2);
				AngleA.Z = i;
				AngleB.Z = j;
				OutAngles.Emplace(AngleA);
				OutAngles.Emplace(AngleB);
			}
		}
	}

}

// CreateUinformPointsOnSpline: create points at uniform distances along a spline
// Inputs:
//			InPoints: the origin(s) for the spline points - must contain at least one value - normally (0,0,0)
//			Spline: the spline
//			pointSpacing: the spacing in between points
// Outputs:
//			OutPoints: the points on the spline(s)
//			OutRotators: the rotators for each point (can be safely ignored)
//			OutScale: the scale for each point (can be safely ignored)
void URojiMathUtilitiesBPLibrary::CreateUinformPointsOnSpline(const TArray<FVector>& InPoints, const USplineComponent* Spline, const double pointSpacing,
	TArray<FVector>& OutPoints, TArray<FRotator>& OutRotators, TArray<FVector>& OutScales)
{
	if (pointSpacing <= 0)
	{
		OutPoints = InPoints;
		return;
	}
	int counter = 0;
	double length = Spline->GetSplineLength();
	int steps = length / pointSpacing + 1;
	for (int j = 0; j < InPoints.Num(); j++)
	{
		for (int i = 0; i < steps; i++) // include both start and end points
		{
			FTransform T = Spline->GetTransformAtDistanceAlongSpline(i * pointSpacing, ESplineCoordinateSpace::Local, true);
			FVector translation, scale;
			FRotator rotation;
			UKismetMathLibrary::BreakTransform(T, translation, rotation, scale);
			translation += InPoints[j];
			OutPoints.Emplace(translation);
			OutRotators.Emplace(rotation);
			OutScales.Emplace(scale);
			if (++counter >= MAX_TRANSFORMS) // if this ever occurs, it will be a very long spline or have a lot of InPoints...
			{
				// this is approaching an error so bail out
				return;
			}
		}
	}
}

// Source: https://math.stackexchange.com/questions/18686/uniform-random-point-in-triangle-in-3d
// Formula: P=(1−√r1)A+(√r1(1−r2))B+(r2√r1)C 
// GetRandomPointInTriangle3D: get a random point in a 3D triangle deterministic (slower than 2D version below)
// Inputs:
//			Stream: random stream for deterministic behavior
//			A,B.C: the corner points of the triangle in 3D
// Output:
//			return value: FVector containing the point within the triangle
FVector URojiMathUtilitiesBPLibrary::GetRandomPointInTriangle3D(const FRandomStream& Stream, const FVector& A, const FVector& B, const FVector& C)
{
	FVector p;
	double r1, r2;

	r1 = UKismetMathLibrary::RandomFloatFromStream(Stream);
	r2 = UKismetMathLibrary::RandomFloatFromStream(Stream);

	r1 = sqrt(r1);
	p = (1.0f - r1) * A + (r1 * (1.0f - r2)) * B + (r2 * r1) * C;
	return p;
}

// GetRandomPointInTriangle: get a random point in a 2D triangle deterministic (faster than 3D version above)
// Inputs:
//			Stream: random stream for deterministic behavior
//			A,B.C: the corner points of the triangle in 3D
// Output:
//			return value: FVector containing the point within the triangle
FVector URojiMathUtilitiesBPLibrary::GetRandomPointInTriangle(const FRandomStream& Stream, const FVector& A, const FVector& B, const FVector& C)
{
	FVector p;
	double r1, r2;

	r1 = UKismetMathLibrary::RandomFloatFromStream(Stream);
	r2 = UKismetMathLibrary::RandomFloatFromStream(Stream);
	if (r1 + r2 > 1)
	{
		r1 = 1 - r1;
		r2 = 1 - r2;
	}
	p.X = A.X + (B.X - A.X) * r1 + (C.X - A.X) * r2;
	p.Y = A.Y + (B.Y - A.Y) * r1 + (C.Y - A.Y) * r2;
	p.Z = A.Z;
	return p;
}

// CreateRandomPointsInSquare: get a random points within a square of dimension 2*radius X 2*radius
// Inputs:
//			Stream: random stream for deterministic behavior
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			points: the number of random points to generate in each square
//			radius: the radius of the box - the box extent is (-radius,-radius) to (radius, radius) plus the origin
//			depth: the depth to generate points (can be 0)
// Outputs:
//			OutPoints: the random points 
void URojiMathUtilitiesBPLibrary::CreateRandomPointsInSquare(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, const double radius, 
	const double depth, TArray<FVector>& OutPoints)
{
	// minimal bounds checking
	if (points < 1 || radius < 1.0f || depth < 0)
	{
		OutPoints = InPoints;
		return;
	}

	int counter = 0;
	for (int i = 0; i < InPoints.Num(); i++)
	{
		for (int j = 0; j < points; j++)
		{
			FVector P = InPoints[i];
			P.X += UKismetMathLibrary::RandomFloatInRangeFromStream(-radius, radius, Stream);
			P.Y += UKismetMathLibrary::RandomFloatInRangeFromStream(-radius, radius, Stream);
			if (depth > 0)
			{
				P.Z += UKismetMathLibrary::RandomFloatInRangeFromStream(-depth / 2.0f, depth / 2.0f, Stream);
			}
			OutPoints.Emplace(P);
			if (++counter >= MAX_POINTS)
			{
				// this is approaching an error so bail out
				return;
			}
		}
	}
}

// CreateRandomPointsInCPolygon: generate random points within a concave polygon deterministic
// Inputs:
//			Stream: random stream for deterministic behavior
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			Polygon: the points of the polygon - assumed to be open - the last point will be connected to the first point
//			points: the number of random points to generate in each polygon
//			depth: the depth to generate points (can be 0)
// Outputs:
//			OutPoints: the random points 
void URojiMathUtilitiesBPLibrary::CreateRandomPointsInCPolygon(const FRandomStream& Stream, const TArray<FVector>& InPoints, const TArray<FVector>& Polygon, 
	const int points, const double depth, TArray<FVector>& OutPoints)
{
	int counter = 0;
	double temp, totalArea = 0.0f;
	FVector p;
	TArray<FVector> A, B, C;
	TArray<double> area;
	TArray<int> count;

	if (Polygon.Num() < 3)
	{
		OutPoints = InPoints;
		return;
	}

	if (!CreateTrianglesFromPolygon(Polygon, A, B, C))
	{
		CreateTrianglesFromCPolygon(Polygon, A, B, C);
	}

	// get the area of each triangle and the total area
	for (int i = 0; i < A.Num(); i++)
	{
		temp = GetAreaOfTriangle(A[i], B[i], C[i]);
		totalArea += temp;
		area.Emplace(temp);
	}

	// get the number of points for each triangle to the whole
	for (int i = 0; i < area.Num(); i++)
	{
		count.Emplace(round((area[i] / totalArea) * points));
	}

	//loop through InPoints
	for (int k = 0; k < InPoints.Num(); k++)
	{
		//loop through the triangles
		for (int i = 0; i < A.Num(); i++)
		{
			//loop through the points
			for (int j = 0; j < count[i]; j++)
			{
				p = GetRandomPointInTriangle(Stream, A[i], B[i], C[i]);
				p += InPoints[k];
				// allow this to work for 3D triangles with no depth too
				if (depth != 0)
				{
					p.Z += UKismetMathLibrary::RandomFloatInRangeFromStream(-depth / 2.0f, depth / 2.0f, Stream);
				}
				OutPoints.Emplace(p);
				if (++counter >= MAX_POINTS)
				{
					// this is approaching an error so bail out
					return;
				}
			}
		}
	}
}

// CreateRandomPointsInSphere: generate random points within a sphere = radius deterministic
// Inputs:
//			Stream: random stream for deterministic behavior
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			points: the number of random points to generate in each sphere
//			radius: the radius of the sphere
// Outputs:
//			OutPoints: the random points 
void URojiMathUtilitiesBPLibrary::CreateRandomPointsInSphere(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, 
	const double radius, TArray<FVector>& OutPoints)
{
	int counter = 0;

	for (int i = 0; i < InPoints.Num(); i++)
	{
		for (int j = 0; j < points; j++)
		{
			double u = pow(UKismetMathLibrary::RandomFloatFromStream(Stream), 1.0f / 3.0f);
			double x = UKismetMathLibrary::RandomFloatInRangeFromStream(-1.0f, 1.0f, Stream);
			double y = UKismetMathLibrary::RandomFloatInRangeFromStream(-1.0f, 1.0f, Stream);
			double z = UKismetMathLibrary::RandomFloatInRangeFromStream(-1.0f, 1.0f, Stream);
			double m = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
			FVector P = InPoints[i];

			P.X += u * x / m * radius;
			P.Y += u * y / m * radius;
			P.Z += u * z / m * radius;
			OutPoints.Emplace(P);
			if (++counter >= MAX_POINTS)
			{
				// this is approaching an error so bail out
				return;
			}
		}
	}
}

// Source: https://www.cmu.edu/biolphys/deserno/pdf/sphere_equi.pdf
// CreateRandomPointsOnSphere: generate random points on a sphere = radius deterministic  (not completely uniform but pretty good)
// Inputs:
//			Stream: random stream for deterministic behavior
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			points: the number of random points to generate on each sphere
//			radius: the radius of the sphere
// Outputs:
//			OutPoints: the random points
void URojiMathUtilitiesBPLibrary::CreateRandomPointsOnSphere(const FRandomStream& Stream, const TArray<FVector>& InPoints, const int points, const double radius, TArray<FVector>& OutPoints)
{
	int counter = 0;
	for (int i = 0; i < InPoints.Num(); i++)
	{
		for (int j = 0; j < points; j++)
		{
			double r1 = UKismetMathLibrary::MultiplyByPi(UKismetMathLibrary::RandomFloatFromStream(Stream) * 2.0f);
			double r2 = UKismetMathLibrary::MultiplyByPi(UKismetMathLibrary::RandomFloatFromStream(Stream) * 2.0f);
			FVector P = InPoints[i];
			P.X += cos(r1) * sin(r2) * radius;
			P.Y += sin(r1) * sin(r2) * radius;
			P.Z += cos(r2) * radius;
			OutPoints.Emplace(P);
			if (++counter >= MAX_POINTS)
			{
				// this is approaching an error so bail out
				return;
			}
		}
	}
	return;
}

// Source: http://extremelearning.com.au/evenly-distributing-points-on-a-sphere/ (similar example)
// CreateUniformPointsOnSphere: create points in a Fibonacci sphere
// Inputs:
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			points: the number of random points to generate in each sphere
//			radius: the radius of the sphere
// Outputs:
//			OutPoints: the points
void URojiMathUtilitiesBPLibrary::CreateUniformPointsOnSphere(const TArray<FVector>& InPoints, const int points, const double radius, TArray<FVector>& OutPoints)
{
	int counter = 0;

	if (points < 2 || radius <= 0)
	{
		OutPoints = InPoints;
		return;
	}

	double phi = UKismetMathLibrary::MultiplyByPi(3.0f - sqrt(5.0f));
	for (int j = 0; j < InPoints.Num(); j++)
	{
		for (int i = 0; i < points; i++)
		{
			double y = 1.0f - 2.0f * double(i) / double(points - 1);
			double fradius = sqrt(1.0f - pow(y, 2));
			double theta = double(i) * phi;
			FVector p;

			p.X = InPoints[j].X + cos(theta) * fradius * radius;
			p.Y = InPoints[j].Y + y * radius;
			p.Z = InPoints[j].Z + sin(theta) * fradius * radius;
			OutPoints.Emplace(p);
			if (++counter >= MAX_POINTS)
			{
				return; // too many points bail out
			}
		}
	}
}

// CreateOpenPolygon: creates and open polygon like a letter C with an inner and outer diameter (not intended for closed circles)
// Inputs:
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			InnerRadius: the radius of the inner circle
//			OuterRadius: the radius of the outer circle
//			StartAngle: the start angle (radians)
//			StopAngle: the stop angle (radians)
//			Sides: the number of line segments between the StartAngle and StopAngle
// Output:
//			OutPoints: the points of the polygon (left open)
void URojiMathUtilitiesBPLibrary::CreateOpenPolygon(const TArray<FVector>& InPoints, const double InnerRadius, const double OuterRadius, 
	const double StartAngle, const double StopAngle, const int Sides, TArray<FVector>& OutPoints)
{
	// convert from degrees to radians
	double Start = UKismetMathLibrary::MultiplyByPi(StartAngle / 180.0f);
	double Stop = UKismetMathLibrary::MultiplyByPi(StopAngle / 180.0f);
	double Step = (Stop - Start) / double(Sides);

	for (int k = 0; k < InPoints.Num(); k++)
	{
		OutPoints.Empty();
		for (int i = 0; i <= Sides; i++)
		{
			FVector P;
			double Angle = Start + double(i) * Step;
			P.X = cos(Angle) * InnerRadius;
			P.Y = sin(Angle) * InnerRadius;
			P.Z = 0;
			OutPoints.Emplace(P + InPoints[k]);
		}
		for (int i = Sides; i >= 0; --i)
		{
			FVector P;
			double Angle = Start + double(i) * Step;
			P.X = cos(Angle) * OuterRadius;
			P.Y = sin(Angle) * OuterRadius;
			P.Z = 0;
			OutPoints.Emplace(P + InPoints[k]);
		}
	}
}

// CreateOpenPolygon: creates and open polygon like a letter C with an inner and outer diameter (not intended for closed circles)
// Inputs:
//			InPoints: the origin(s) of the square(s) - must contain at least one value - normally (0,0,0)
//			Radius: the radius of the polygon
//			Sides: the number of sides for the polygon
// Output:
//			OutPoints: the points of the polygon (left open)
void URojiMathUtilitiesBPLibrary::CreatePolygon(const TArray<FVector>& InPoints, const double Radius, const int Sides, TArray<FVector>& OutPoints)
{
	int counter = 0;

	if (Radius <= 0 || Sides < 3)
	{
		OutPoints = InPoints;
		return;
	}
	for (int i = 0; i < InPoints.Num(); i++)
	{
		for (int s = 0; s < Sides; s++)
		{
			FVector p;
			double angle = UKismetMathLibrary::MultiplyByPi(s * 2.0f / Sides); // radians
			p.X = InPoints[i].X + Radius * cos(angle);
			p.Y = InPoints[i].Y + Radius * sin(angle);
			p.Z = InPoints[i].Z;
			OutPoints.Emplace(p);
			if (++counter >= MAX_POINTS)
			{
				return; // too many points bail out
			}
		}
	}
}

// DrawMarkers: draws debug markers at the point locations specified up to MAX_POINTS_TO_SHOW_AS_MARKERS
// NOTE: this method will show representative points if MAX_POINTS_TO_SHOW_AS_MARKERS is exceeded
// Inputs:
//			WorldContextObject: populated automatically by the blueprint
//			Transform: the actor transform (all points are generated in local space)
//			InPoints: the array of points
//			Radius: the radius of the marker
//			Color: the color of the marker
//			Duration: the duration to show the marker
//			Thickness: the line thickness (should not be <=0)
void URojiMathUtilitiesBPLibrary::DrawMarkers(class UObject* WorldContextObject, const FTransform& Transform,
	const TArray<FVector>& InPoints, const double Radius, const FColor& Color, const double Duration, const double Thickness)
{
//#if ENABLE_DRAW_DEBUG
	int counter = 0, step = 1;

	if (InPoints.Num() > MAX_POINTS_TO_SHOW_AS_MARKERS)
	{
		step = InPoints.Num() / MAX_POINTS_TO_SHOW_AS_MARKERS; // get a representative sample
	}


	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// loop through the Points
		FVector v1, v2;
		for (int i = 0; i < InPoints.Num(); i += step)
		{
			v1.X = InPoints[i].X - Radius;
			v1.Y = InPoints[i].Y;
			v1.Z = InPoints[i].Z;
			v2.X = InPoints[i].X + Radius;
			v2.Y = InPoints[i].Y;
			v2.Z = InPoints[i].Z;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);

			v1.X = InPoints[i].X;
			v1.Y = InPoints[i].Y - Radius;
			v1.Z = InPoints[i].Z;
			v2.X = InPoints[i].X;
			v2.Y = InPoints[i].Y + Radius;
			v2.Z = InPoints[i].Z;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);

			v1.X = InPoints[i].X;
			v1.Y = InPoints[i].Y;
			v1.Z = InPoints[i].Z - Radius;
			v2.X = InPoints[i].X;
			v2.Y = InPoints[i].Y;
			v2.Z = InPoints[i].Z + Radius;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			if (++counter >= MAX_POINTS_TO_SHOW_AS_MARKERS)
			{
				// This will be too slow so bail
				return;
			}
		}
	}
//#endif
	return;
}

// DrawLines: draws debug line segments at the point locations specified up to MAX_POINTS_TO_SHOW_AS_MARKERS
// NOTE: this method will stop at MAX_POINTS_TO_SHOW_AS_MARKERS if exceeded
// Inputs:
//			WorldContextObject: populated automatically by the blueprint
//			Transform: the actor transform (all points are generated in local space)
//			InPoints: the array of points - each point is connected to the next
//			Color: the color of the marker
//			Duration: the duration to show the marker
//			Thickness: the line thickness (should not be <=0)
void URojiMathUtilitiesBPLibrary::DrawLines(class UObject* WorldContextObject, const FTransform& Transform,
	const TArray<FVector>& InPoints, const FColor& Color, const double Duration, const double Thickness)
{
//#if ENABLE_DRAW_DEBUG
	int stopIndex = std::min(InPoints.Num(), MAX_POINTS_TO_SHOW_AS_MARKERS);

	if (stopIndex < 2)
	{
		return;
	}
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// loop through the Points
		for (int i = 0; i < stopIndex - 1; i++)
		{
			DrawDebugLine(World, Transform.TransformPosition(InPoints[i]), Transform.TransformPosition(InPoints[i + 1]), Color, false, Duration, 0, Thickness);
		}
	}
//#endif
	return;
}

// DrawPolygon: draws a fence with base, rails and posts around a polygon of height ZOffset
// Inputs:
//			WorldContextObject: populated automatically by the blueprint
//			Transform: the actor transform (all points are generated in local space)
//			InPoints: the array of points - each point is connected to the next and the last point is connected to the first
//			ZOffset: the height of the fence
//			Color: the color of the marker
//			Duration: the duration to show the marker
//			Thickness: the line thickness (should not be <=0)
void URojiMathUtilitiesBPLibrary::DrawPolygon(class UObject* WorldContextObject, const FTransform& Transform, const TArray<FVector>& InPoints,
	const double ZOffset, const FColor& Color, const double Duration, const double Thickness)
{
	if (InPoints.Num() < 2)
	{
		return;
	}
//#if ENABLE_DRAW_DEBUG
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// loop through the Points
		FVector v1, v2;
		for (int i = 0; i < InPoints.Num() - 1; i++)
		{
			//draw fence post
			v1.X = InPoints[i].X;
			v1.Y = InPoints[i].Y;
			v1.Z = InPoints[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(InPoints[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);

			//draw railing
			v2.X = InPoints[i + 1].X;
			v2.Y = InPoints[i + 1].Y;
			v2.Z = InPoints[i + 1].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness); //rail
			DrawDebugLine(World, Transform.TransformPosition(InPoints[i]), Transform.TransformPosition(InPoints[i + 1]), Color, false, Duration, 0, Thickness); // base
		}

		// draw last point to first point railing
		v1.X = InPoints[0].X;
		v1.Y = InPoints[0].Y;
		v1.Z = InPoints[0].Z + ZOffset;
		DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness); //rail
		DrawDebugLine(World, Transform.TransformPosition(InPoints[0]), Transform.TransformPosition(InPoints[InPoints.Num() - 1]), Color, false, Duration, 0, Thickness); //base

		// draw last fence post
		v1.X = InPoints[InPoints.Num() - 1].X;
		v1.Y = InPoints[InPoints.Num() - 1].Y;
		v1.Z = InPoints[InPoints.Num() - 1].Z;
		DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
	}
//#endif
}

// DrawBoundingBox: draws a fence with rails of height ZOffset large enough to encompass all triangles
// Inputs:
//			WorldContextObject: populated automatically by the blueprint
//			Transform: the actor transform (all points are generated in local space)
//			A,B,C: the array of triangles to encompass
//			ZOffset: the height of the fence
//			Color: the color of the marker
//			Duration: the duration to show the marker
//			Thickness: the line thickness (should not be <=0)
void URojiMathUtilitiesBPLibrary::DrawBoundingBox(class UObject* WorldContextObject, const FTransform& Transform, 
	const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C,
	const double ZOffset, const FColor& Color, const double Duration, const double Thickness)
{
	FVector BoxOrigin, BoxExtent, Point;
	TArray<FVector> Points, AA, BB, CC;
	GetBoundsOfLayer(A, B, C, BoxOrigin, BoxExtent);
	Point.X = BoxOrigin.X;
	Point.Y = BoxOrigin.Y;
	Points.Emplace(Point);
	Point.X = BoxOrigin.X + BoxExtent.X;
	Point.Y = BoxOrigin.Y;
	Points.Emplace(Point);
	Point.X = BoxOrigin.X + BoxExtent.X;
	Point.Y = BoxOrigin.Y + BoxExtent.Y;
	Points.Emplace(Point);
	Point.X = BoxOrigin.X;
	Point.Y = BoxOrigin.Y + BoxExtent.Y;
	Points.Emplace(Point);
	if (!CreateTrianglesFromPolygon(Points, AA, BB, CC))
	{
		CreateTrianglesFromCPolygon(Points, AA, BB, CC);
	}

	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		// loop through the Points
		FVector v1, v2;

		// loop through the Triangles
		for (int i = 0; i < AA.Num(); ++i)
		{
			//draw fence posts
			v1.X = AA[i].X;
			v1.Y = AA[i].Y;
			v1.Z = AA[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(AA[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);
			v1.X = BB[i].X;
			v1.Y = BB[i].Y;
			v1.Z = BB[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(BB[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);
			v1.X = CC[i].X;
			v1.Y = CC[i].Y;
			v1.Z = CC[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(CC[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);

			//draw railings
			v1 = AA[i];
			v1.Z += ZOffset;
			v2 = BB[i];
			v2.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			v2 = CC[i];
			v2.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			v1 = BB[i];
			v1.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			//draw base
			DrawDebugLine(World, Transform.TransformPosition(AA[i]), Transform.TransformPosition(BB[i]), Color, false, Duration, 0, Thickness);
			DrawDebugLine(World, Transform.TransformPosition(AA[i]), Transform.TransformPosition(CC[i]), Color, false, Duration, 0, Thickness);
			DrawDebugLine(World, Transform.TransformPosition(BB[i]), Transform.TransformPosition(CC[i]), Color, false, Duration, 0, Thickness);
		}
	}
}

// DrawLayer: draws a fence with rails of height ZOffset for each triangles
// Inputs:
//			WorldContextObject: populated automatically by the blueprint
//			Transform: the actor transform (all points are generated in local space)
//			A,B,C: the array of triangles to encompass
//			ZOffset: the height of the fence
//			Color: the color of the marker
//			Duration: the duration to show the marker
//			Thickness: the line thickness (should not be <=0)

void URojiMathUtilitiesBPLibrary::DrawLayer(class UObject* WorldContextObject, const FTransform& Transform, 
	const TArray<FVector>& A, const TArray<FVector>& B, const TArray<FVector>& C,
	const double ZOffset, const FColor& Color, const double Duration, const double Thickness)
{
	if (const UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FVector v1, v2;

		// loop through the Triangles
		for (int i = 0; i < A.Num(); ++i)
		{
			//draw fence posts
			v1.X = A[i].X;
			v1.Y = A[i].Y;
			v1.Z = A[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(A[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);
			v1.X = B[i].X;
			v1.Y = B[i].Y;
			v1.Z = B[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(B[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);
			v1.X = C[i].X;
			v1.Y = C[i].Y;
			v1.Z = C[i].Z + ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(C[i]), Transform.TransformPosition(v1), Color, false, Duration, 0, Thickness);

			//draw railings
			v1 = A[i];
			v1.Z += ZOffset;
			v2 = B[i];
			v2.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			v2 = C[i];
			v2.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			v1 = B[i];
			v1.Z += ZOffset;
			DrawDebugLine(World, Transform.TransformPosition(v1), Transform.TransformPosition(v2), Color, false, Duration, 0, Thickness);
			//draw base
			DrawDebugLine(World, Transform.TransformPosition(A[i]), Transform.TransformPosition(B[i]), Color, false, Duration, 0, Thickness);
			DrawDebugLine(World, Transform.TransformPosition(A[i]), Transform.TransformPosition(C[i]), Color, false, Duration, 0, Thickness);
			DrawDebugLine(World, Transform.TransformPosition(B[i]), Transform.TransformPosition(C[i]), Color, false, Duration, 0, Thickness);
		}
	}
//#endif
}

//void URojiMathUtilitiesBPLibrary::CreateStaticMeshComponents(AActor* Actor, const TArray<UStaticMesh*> Meshes, TArray<UStaticMeshComponent*> StaticMeshComponents)
//{
//	FTransform T;
//	FVector translation = { 0, 0, 0 }, scale = { 1 ,1 ,1 };
//	FRotator rotation = { 0, 0, 0 };
//
//	T = UKismetMathLibrary::MakeTransform(translation, rotation, scale);
//	for (int i = 0; i < Meshes.Num(); i++)
//	{
//
//		FName f = "NODE_AddInstancedStaticMeshComponent-2";
//		UActorComponent* acomp = Actor->AddComponent(f, false, T, nullptr, false);  //TODO: find the right definition for COMPONENT_NAME
//		if (acomp == nullptr)
//		{
//			return;
//		}
//		UStaticMeshComponent* smcomp = CastChecked<UStaticMeshComponent>(acomp);
//		smcomp->SetStaticMesh(Meshes[i]);
//		StaticMeshComponents[i] = smcomp;
//	}
//}


