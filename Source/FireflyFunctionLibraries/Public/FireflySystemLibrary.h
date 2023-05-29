// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FireflySystemLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FIREFLYFUNCTIONLIBRARIES_API UFireflySystemLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** 为float数组排序，bOrderFromSmall为true，则从小到大排序，为false，则从大到小排序 */
	UFUNCTION(BlueprintCallable, Category = "Firefly|Collision", Meta = (WorldContext = "WorldContextObject", AutoCreateRefTerm = "ActorsToIgnore"))
	static bool SphereTraceMultiForObjects(const UObject* WorldContextObject, const AActor* Actor, float Angle, float Range
		, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, TArray<FHitResult>& OutHits);
	
};
