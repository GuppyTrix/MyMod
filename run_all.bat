SET "ddp=%~dp0" 
SET "ddp=%ddp:~0,-1%" 
 
SET /p editorPath= < Tools\user_settings\editor_directory.txt 
 
del /S CrabChampions\*.uasset 
del /S CrabChampions\*.ubulk 
del /S CrabChampions\*.uexp 
del /S CrabChampions\*.umap 
del /S CrabChampions\*.ufont 
 
"%editorPath%\UE4Editor-Cmd.exe" "%ddp%\UE4Project\CrabChampions.uproject" -run=cook -targetplatform=WindowsNoEditor 
 
robocopy /job:Tools\configs\copy_cooked_assets 
 
robocopy /S Precooked CrabChampions 

SET /p packageOutput= < Tools\user_settings\package_output.txt 
python Tools\py\u4pak.py pack "%packageOutput%" CrabChampions -p 


start "" "D:\Games\steamapps\common\Crab Champions\CrabChampions\Binaries\Win64\CrabChampions-Win64-Shipping.exe"
exit /b 0

:error
echo Build step failed. See output above.
exit /b 1
