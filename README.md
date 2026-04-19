# Better Descriptions - Crab Champions Mod

A mod for [Crab Champions](https://store.steampowered.com/app/774801/Crab_Champions/) that shows more information about items before pickup, making it easier to make good decisions without having to memorise the values for every pickup in the game.

> **Note:** This is my first mod ever and my first time working with Unreal Engine, so the project is very much a work in progress and a bit messy. I intend to clean things up and improve it over time.

- [Better Descriptions - Crab Champions Mod](#better-descriptions---crab-champions-mod)
  - [Features](#features)
  - [Requirements](#requirements)
  - [Building the Mod](#building-the-mod)
    - [`run_all.bat`](#run_allbat)
  - [Game Reference Files](#game-reference-files)
  - [Future Works](#future-works)
    - [General](#general)
    - [Pickup Information](#pickup-information)
    - [Pickup-Specific](#pickup-specific)
  - [Known Issues (as of 18/04/2026)](#known-issues-as-of-18042026)
  - [License](#license)

## Features

- **Toggle Keybind** - Press **P** to enable/disable the rich text info blocks
- When looking at a pickup, additional information is displayed:
  - Current and next **% Damage** increase
  - Current and next **Flat Damage** increase (scales based on weapon damage)
  - Current and next **% Chance**
  - Current and next **Debuff value** (e.g. enemy Health +50%)

## Requirements

This mod requires **Dolton's BPLoader** to function. You can download it from Nexus Mods:

- [BPLoader on Nexus Mods](https://www.nexusmods.com/crabchampions/mods/2)

## Building the Mod

The build pipeline uses batch scripts from [Dolton's CrabChampions-Modkit](https://github.com/Dolton20/CrabChampions-Modkit).

Before building, configure the paths in `Tools/user_settings/`:

- `editor_directory.txt` - path to your UE4 editor installation
- `game_directory.txt` - path to your Crab Champions game installation
- `package_output.txt` - output path for the packaged `.pak` file

### `run_all.bat`

This is the main build script. It runs the full build pipeline in one go by combining the individual steps from the modkit:

1. **Cleans** old cooked assets from the `CrabChampions/` output folder
2. **Cooks** the UE4 project using `UE4Editor-Cmd.exe`
3. **Copies** the cooked assets to the `CrabChampions/` folder (via robocopy)
4. **Copies** any pre-cooked assets from `Precooked/` into `CrabChampions/`
5. **Packages** everything into a `.pak` file using `u4pak.py`
6. **Launches** the game automatically (if a valid game path is configured)

You can also run the individual steps separately using `cook_assets.bat` and `package.bat`.

## Game Reference Files

The C++ stub headers used to reference the game's objects and classes in this project were generated usin[CrabChampions-ExampleProject](<https://gg> [UE4SS](https://github.com/UE4SS-RE/RE-UE4SS) and [UE4GameProjectGenerator](https://github.com/Jeongmin94/UE4GameProjectGenerator). These files are up to date as of **18/04/2026** and are based on the **main branch** of Crab Champions (not the beta branch).

An example project containing these generated reference files can be found here: **ithub.com/GuppyTrix/CrabChampions-ExampleProject.git)**

## Future Works

There are a lot of things I think could be improved about letting the user know the effect of the pickups, as well as other things I want to add. This is not an exhaustive list.

### General

- Move to event-based logic to improve performance
- Build a proper mod interface to make debugging easier when a game update is released
- Add an in-game location for documenting strange interactions and additional information that doesn't fit in the small interact window when looking at a pickup
- Add a proper settings/options menu for the mod
- Add auto-sprint while holding Shift
- Add a keybind that toggles additional information that would be "too much" if shown all the time - for the most part you only need to know the damage and chance

### Pickup Information

- Relics are a bit unsupported at the moment - I want their effects to be explained in more detail
- Show cooldowns for the perks/mods that have cooldowns
- Explain the exact effect of some in-game terms (e.g. Ice Strength)
- Show the base cooldown of the player's ability and melee, and their values accounting for pickups that affect them
- Show damage duration for most DoT mods/perks, and possibly for less explicit cases (e.g. items that have been enhanced with DoT)
- Show the accumulated buff of an item (e.g. Collector, Vitality, etc.) and indicate that the buff is lost if the item is dropped for certain items (e.g. Ring of Wisdom)
- Add "MAXED" next to the names of maxed perks
- Give more detailed information on the effects of enhancements (e.g. lifetime)
- Add an option that scales the damage of all pickups to account for global, weapon, ability, and melee damage %
- Make it more obvious which perks are additive vs multiplicative

### Pickup-Specific

- Reword the descriptions of: Slugger, Mega Crit, Heavy Shot, Arcane Blast, and Tasty Orange
- Add colour tags for static values on: Arcane Blast, Big Shot, Big Ability, and Fireball Shot
- Spore Shot - show the number of poison stacks it applies
- Landmine Shot - explain that damage scales with distance from the enemy
- Hard Target and Ring of Defence - explain that damage reduction has a global cap, so damage taken can't go below a set limit
- Equaliser - add a way to see whether the perk is currently active or if it will deactivate with the next perk pickup
- Ring of Luck - show the amount the ring accounts for
- Magnify - show the amount and what it affects
- Tony's Black Card - show the maximum discount it can give
- Show bullet spread information (e.g. Double Shot, X Shot, etc.), the effect Blind Fire and Grip Tape have on spread, and show when Grip Tape is essentially maxed (spread can't go below 0)

## Known Issues (as of 18/04/2026)

These are the issues I've found from my own testing - there may be others I haven't encountered yet.

- The current beta version of the game breaks a lot of the mod's logic, so many features don't work on that branch
- Many features are still broken or incomplete
- Multiplayer is untested - it might work, it might not
- The duration for Beam Shot is broken
- The rich text box doesn't always show, sometimes leaving colour tags exposed in the UI
- Chances that are capped at 100% can display past 100% - no gameplay effect, purely visual. This applies to items you can still pick up when the chance is maxed but the damage is not
- Slippery Slope crystal gain doesn't display properly
- Rich text block colour tags show in the UI that appears after picking up an item

## License

This project is licensed under the [Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)](https://creativecommons.org/licenses/by-nc/4.0/) license.
