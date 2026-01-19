#pragma once
#include "CoreMinimal.h"
#include "ECrabChallengeModifier.generated.h"

UENUM(BlueprintType)
enum class ECrabChallengeModifier : uint8 {
    None,
    OneHit,
    NoHealing,
    MirroredProjectiles,
    Shrapnel,
    HomingThorns,
    HomingBarrels,
    ElementalExplosions,
    EnergyRings,
    SpikeStrikes,
    TwinnedEnemies,
    ThickSkin,
    SpeedyEnemies,
    JumpyEnemies,
    IcyEnemies,
    FieryEnemies,
    PoisonousEnemies,
    ExplosiveEnemies,
    StarfishParty,
    BarrelRain,
    LandmineRain,
    MeteorShower,
    FreezingGround,
    BurningGround,
    HeavyCrab,
    Last,
};

