using UnrealBuildTool;

public class SquanchAbilitySystem : ModuleRules {
    public SquanchAbilitySystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Chaos",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "GameplayTasks",
            "MovieScene",
            "PhysicsCore",
        });
    }
}
