// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FireflyAlgorithmLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FIREFLYFUNCTIONLIBRARIES_API UFireflyAlgorithmLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

#pragma region Array 数组

public:
	/** 为float数组排序，并返回排序后的数组。bOrderFromSmall为true，则从小到大排序，为false，则从大到小排序 */
	UFUNCTION(BlueprintCallable, Category = "LegendSystem|Algorith", meta = (WorldContext = "WorldContextObject"))
	static TArray<float> MakeSortedFloatArray(const UObject* WorldContextObject, TArray<float> InArray, bool bOrderFromSmall = true);

	/** 为int32数组排序，并返回排序后的数组。bOrderFromSmall为true，则从小到大排序，为false，则从大到小排序 */
	UFUNCTION(BlueprintCallable, Category = "LegendSystem|Algorith", meta = (WorldContext = "WorldContextObject"))
	static TArray<int32> MakeSortedIntArray(const UObject* WorldContextObject, TArray<int32> InArray, bool bOrderFromSmall = true);

#pragma endregion
	
};
