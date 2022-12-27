// Fill out your copyright notice in the Description page of Project Settings.


#include "FireflyAlgorithmLibrary.h"

TArray<float> UFireflyAlgorithmLibrary::MakeSortedFloatArray(const UObject* WorldContextObject,
	TArray<float> InArray, bool bOrderFromSmall)
{
	TArray<float> OutArray;
	Algo::Sort(OutArray);

	if (!bOrderFromSmall)
	{
		Algo::Reverse(OutArray);
	}

	return OutArray;
}

TArray<int32> UFireflyAlgorithmLibrary::MakeSortedIntArray(const UObject* WorldContextObject,
	TArray<int32> InArray, bool bOrderFromSmall)
{
	TArray<int32> OutArray;
	Algo::Sort(OutArray);

	if (!bOrderFromSmall)
	{
		Algo::Reverse(OutArray);
	}

	return OutArray;
}