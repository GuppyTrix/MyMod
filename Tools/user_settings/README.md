# User Settings

These files contain machine-specific paths that you need to update to match your local setup before running the build/package scripts.

## editor_directory.txt

Path to your UE4 Editor binaries folder. Used by the cook/build scripts to locate `UE4Editor-Cmd.exe`.

Example:

```
C:\Program Files\Epic Games\UE_4.27\Engine\Binaries\Win64
```

## package_output.txt

Full path to where the final `.pak` file should be output. This should point to your Crab Champions mods folder.

Example:

```
C:\Program Files (x86)\Steam\steamapps\common\Crab Champions\CrabChampions\Content\Paks\~mods\YourMod_P.pak
```
