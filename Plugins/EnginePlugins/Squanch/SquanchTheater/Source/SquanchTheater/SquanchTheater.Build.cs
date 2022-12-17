using UnrealBuildTool;

public class SquanchTheater : ModuleRules {
    public SquanchTheater(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "AudioMixer",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayCameras",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "PhysicsCore",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "UMG",
        });
    }
}
