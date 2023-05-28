// Fill out your copyright notice in the Description page of Project Settings.


#include "FireflyAlgorithmLibrary.h"

struct FFireflySortByDistance
{
    explicit FFireflySortByDistance(const FVector& InSourceLocation)
        : SourceLocation(InSourceLocation)
    {
    }

    /* The Location to use in our Sort comparison. */
    FVector SourceLocation;

    bool operator()(const AActor* A, const AActor* B) const
    {
        float DistanceA = FVector::DistSquared(SourceLocation, A->GetActorLocation());
        float DistanceB = FVector::DistSquared(SourceLocation, B->GetActorLocation());

        return DistanceA < DistanceB;
    }

    bool operator()(const FHitResult& A, const FHitResult& B) const
    {
        float DistanceA = FVector::DistSquared(SourceLocation, A.GetActor()->GetActorLocation());
        float DistanceB = FVector::DistSquared(SourceLocation, B.GetActor()->GetActorLocation());

        return DistanceA < DistanceB;
    }
};

TArray<float> UFireflyAlgorithmLibrary::FloatArray_Sort(TArray<float> InArray, bool bOrderFromSmall)
{
	Algo::Sort(InArray);

	if (!bOrderFromSmall)
	{
		Algo::Reverse(InArray);
	}

    return InArray;
}

TArray<int32> UFireflyAlgorithmLibrary::IntArray_Sort(TArray<int32> InArray, bool bOrderFromSmall)
{
	Algo::Sort(InArray);

	if (!bOrderFromSmall)
	{
		Algo::Reverse(InArray);
	}

    return InArray;
}

TArray<AActor*> UFireflyAlgorithmLibrary::ActorArray_SortByDistance(TArray<AActor*> InArray, 
	FVector InLocation, bool bOrderFromSmall)
{
	Algo::Sort(InArray, FFireflySortByDistance(InLocation));

    if (!bOrderFromSmall)
	{
		Algo::Reverse(InArray);
	}

    return InArray;
}

TArray<FHitResult> UFireflyAlgorithmLibrary::HitResultArray_SortByDistance(TArray<FHitResult> InArray, 
	FVector InLocation, bool bOrderFromSmall)
{
    Algo::Sort(InArray, FFireflySortByDistance(InLocation));

    if (!bOrderFromSmall)
	{
		Algo::Reverse(InArray);
	}

    return InArray;
}
