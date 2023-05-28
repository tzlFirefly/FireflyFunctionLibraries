// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FireflyMathLibrary.generated.h"

/**
 * 游戏性数学相关的函数库
 */
UCLASS()
class FIREFLYFUNCTIONLIBRARIES_API UFireflyMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** 获取一个百分比概率触发的结果 */
	UFUNCTION(BlueprintPure, Category = "Math|FireflyRandom")
	static bool GetPercentageProbability(float InPercent);
	
};
