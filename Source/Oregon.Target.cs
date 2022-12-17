using UnrealBuildTool;

public class OregonTarget : TargetRules {
	public OregonTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Oregon",
			"OregonLoadingScreen",
		});
	}
}
