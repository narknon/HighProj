using UnrealBuildTool;

public class SquanchInventory : ModuleRules {
    public SquanchInventory(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "SquanchAbilitySystem",
            "TemplateSequence",
            "UMG",
        });
    }
}
