# UE4SS Stuff

This folder contains files related to UE4SS-based reverse engineering and reference generation for Crab Champions.

## What Is In This Folder

- `Itemiser/Scripts/` and `Testing/Scripts/` contain scripts intended to be run with UE4SS.
- `Itemiser/` was taken from: <https://github.com/SaturnRoccat/Crab-Champions-Mods>
- `CrabChampions.hpp` is a generated C++ stub header that represents a broad structure map of Crab Champions types (classes, structs, enums, and related declarations).

## How To Use The Scripts

These scripts are for use in a UE4SS environment. In short:

1. Install and configure UE4SS for Crab Champions.
2. Place or reference these scripts in your UE4SS scripts workflow.
3. Run them through UE4SS to inspect, test, or extract game-related behavior.

## About `CrabChampions.hpp`

`CrabChampions.hpp` is a C++ reference stub, not full game source code. It is mainly useful as a type and structure reference when building tools, scripts, or modding workflows that need to align with game internals.

## Maintenance Status

This folder is mostly archival/reference material. It will most likely not be actively worked on, except for occasional fixes or updates when needed.
