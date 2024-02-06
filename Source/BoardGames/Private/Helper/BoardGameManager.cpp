// Fill out your copyright notice in the Description page of Project Settings.


#include "Helper/BoardGameManager.h"

ABoardGameManager::ABoardGameManager()
{
	bReplicates = true;
}

void ABoardGameManager::SetBoard(AGameBaseBoard* NewBoard)
{
	Board = NewBoard;
}

AGameBaseBoard* ABoardGameManager::GetBoard()
{
	return Board;
}

void ABoardGameManager::StartGame()
{

}

void ABoardGameManager::InitializeGame()
{
	
}
