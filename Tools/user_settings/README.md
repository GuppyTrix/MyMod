# User Settings

These files contain machine-specific paths that you need to update to match your local setup before running the build/package scripts.

After updating the paths, run the following to prevent git from tracking your local changes:

```
git update-index --skip-worktree Tools/user_settings/editor_directory.txt
git update-index --skip-worktree Tools/user_settings/package_output.txt
git update-index --skip-worktree Tools/user_settings/game_directory.txt
```

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

## game_directory.txt

Path to your Crab Champions install folder. Used by `run_all.bat` to launch the game after packaging. If the game executable is not found at the specified path, the launch step is skipped.

Example:

```
C:\Program Files (x86)\Steam\steamapps\common\Crab Champions
```
