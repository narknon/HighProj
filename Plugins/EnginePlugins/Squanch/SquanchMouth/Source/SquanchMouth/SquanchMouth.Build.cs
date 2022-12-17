using UnrealBuildTool;

public class SquanchMouth : ModuleRules {
    public SquanchMouth(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "EmotionSystem",
            "Engine",
            "MovieScene",
        });
    }
}
