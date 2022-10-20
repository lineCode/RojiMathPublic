// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HAL/Runnable.h"
#include "PrimeCalculator.generated.h"

UCLASS()
class APrimeCalculator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrimeCalculator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};




class FAsychTask : public FRunnable
{
public:

	FAsychTask();
	virtual ~FAsychTask() override;
	bool Init() override;
	uint32 Run() override;
	void Stop() override;
	
	void SetString(const TArray<FString>& Strings, const int column);
	void DoWorkMain();
	TArray<TArray<FString>> StringArray;

private:
	FRunnableThread* Thread;
	bool bRunThread;

	int Count;
};
