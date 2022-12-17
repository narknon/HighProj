using UnrealBuildTool;

public class OregonEditorTarget : TargetRules {
	public OregonEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Oregon",
			"OregonLoadingScreen",
		});
	}
}
