// Fill out your copyright notice in the Description page of Project Settings.


#include "PrimeCalculator.h"
#include <Runtime/Core/Public/Logging/LogMacros.h>

// Sets default values
APrimeCalculator::APrimeCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrimeCalculator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrimeCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//**********************************************************************************************
//**********************************************************************************************
//**********************************************************************************************

#pragma region Main Thread Code
FAsychTask::FAsychTask()
{
	Thread = FRunnableThread::Create(this, TEXT("MathThread"));
}

FAsychTask::~FAsychTask()
{
	if (Thread)
	{
		// Kill() is a blocking call, it waits for the thread to finish.
		// Hopefully that doesn't take too long
		Thread->Kill();
		delete Thread;
	}
}
#pragma endregion

void FAsychTask::SetString(const TArray<FString>& Strings, const int Column)
{
	for (int i = 0; i < Strings.Num(); i++)
	{
		StringArray[Column].Emplace(Strings[i]);
	}
}

void FAsychTask::DoWorkMain()
{
}

bool FAsychTask::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("My custom thread has been initialized"))

	// Return false if you want to abort the thread
	return true;
}

uint32 FAsychTask::Run()
{
	// Peform your processor intensive task here. In this example, a neverending
	// task is created, which will only end when Stop is called.
	while (bRunThread)
	{
		UE_LOG(LogTemp, Warning, TEXT("My custom thread is running!"));
		FPlatformProcess::Sleep(1.0f);
	}

	return 0;
}


// This function is NOT run on the new thread!
void FAsychTask::Stop()
{
	// Clean up memory usage here, and make sure the Run() function stops soon
	// The main thread will be stopped until this finishes!

	// For this example, we just need to terminate the while loop
	// It will finish in <= 1 sec, due to the Sleep()
	bRunThread = false;
}
