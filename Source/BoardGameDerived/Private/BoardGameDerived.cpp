#include "BoardGameDerived.h"

DEFINE_LOG_CATEGORY(BoardGameDerived);

#define LOCTEXT_NAMESPACE "FDerived"

void FBoardGameDerived::StartupModule()
{
	UE_LOG(BoardGameDerived, Warning, TEXT("Derived module has been loaded"));
}

void FBoardGameDerived::ShutdownModule()
{
	UE_LOG(BoardGameDerived, Warning, TEXT("Derived module has been unloaded"));
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBoardGameDerived, BoardGameDerived)