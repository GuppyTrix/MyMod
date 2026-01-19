using UnrealBuildTool;

public class CrabChampionsGameTarget : TargetRules {
	public CrabChampionsGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"CrabChampions",
		});
	}
}
