#pragma once
#include "CoreMinimal.h"
#include "ECrabFormationType.generated.h"

UENUM(BlueprintType)
enum class ECrabFormationType : uint8 {
    Single,
    Double,
    Triple,
    Quad,
    SmallCluster,
    MediumCluster,
    LargeCluster,
    SmallArc,
    SmallArcTightSpread,
    LargeArc,
    LargeArcTightSpread,
    TripleArc,
    Box,
    Triangle,
    X,
    Square,
    LargeSquare,
    Circle,
    LargeCircle,
    Line,
    Cross,
    Ring,
    MediumRing,
    LargeRing,
    Random,
};

