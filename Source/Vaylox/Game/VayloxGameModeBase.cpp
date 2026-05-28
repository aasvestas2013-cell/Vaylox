#include "Game/VayloxGameModeBase.h"

AVayloxGameModeBase::AVayloxGameModeBase()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AVayloxGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    // Setup initial zone state, find all players
}

void AVayloxGameModeBase::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    // TODO: Control shrinking safezone
    // TODO: Check for last player standing
}
