// Fill out your copyright notice in the Description page of Project Settings.


#include "FireflyMathLibrary.h"

#include "Kismet/KismetMathLibrary.h"

bool UFireflyMathLibrary::GetPercentageProbability(float InPercent)
{
	if (InPercent >= 1.f)
	{
		return true;
	}

	if (InPercent <= 0.f)
	{
		return false;
	}

	if (UKismetMathLibrary::RandomFloatInRange(0.f, 1.f) <= InPercent)
	{
		return true;
	}

	return false;
}
