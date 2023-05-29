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
	/** 为float数组排序，bOrderFromSmall为true，则从小到大排序，为false，则从大到小排序 */
	UFUNCTION(BlueprintCallable, Category = "Firefly|Algorith")
	static TArray<float> FloatArray_Sort(TArray<float> InArray, bool bOrderFromSmall = true);

	/** 为int32数组排序，bOrderFromSmall为true，则从小到大排序，为false，则从大到小排序 */
	UFUNCTION(BlueprintCallable, Category = "Firefly|Algorith")
	static TArray<int32> IntArray_Sort(TArray<int32> InArray, bool bOrderFromSmall = true);

	/** 为Actor引用数组排序，排序以按照Actor与给定位置间的距离排列 */
	UFUNCTION(BlueprintCallable, Category = "Firefly|Algorith")
	static TArray<AActor*> ActorArray_SortByDistance(TArray<AActor*> InArray, FVector InLocation, bool bOrderFromSmall = true);

	/** 为HitResult引用数组排序，排序以按照HitResult与给定位置间的距离排列 */
	UFUNCTION(BlueprintCallable, Category = "Firefly|Algorith")
	static TArray<FHitResult> HitResultArray_SortByDistance(TArray<FHitResult> InArray, FVector InLocation, bool bOrderFromSmall = true);

#pragma endregion
	
};
