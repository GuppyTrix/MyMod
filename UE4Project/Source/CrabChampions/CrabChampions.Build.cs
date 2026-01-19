using UnrealBuildTool;

public class CrabChampions : ModuleRules {
    public CrabChampions(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "LevelSequence",
            "NavigationSystem",
            "Niagara",
            "Slate",
            "SlateCore",
            "Synthesis",
            "UMG",
        });
    }
}
