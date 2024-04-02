// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	

public:
	UABComboActionData();

	// Section Name
	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;

	// Combo Action Total Number
	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;

	// Set Standard Frame Rate
	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;

	// (What Frame is Combo)
	UPROPERTY(EditAnywhere, Category = ComboData)
	TArray<float> EffectiveFrameCount;
};
