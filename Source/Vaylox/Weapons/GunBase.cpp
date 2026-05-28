#include "Weapons/GunBase.h"

AGunBase::AGunBase()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AGunBase::BeginPlay()
{
    Super::BeginPlay();
}

void AGunBase::Fire()
{
    // Implement firing logic here, spawn projectiles or traces
    // Play sound, animation, effects
}
