using UnrealBuildTool;

public class SubtitleTrack : ModuleRules {
    public SubtitleTrack(ReadOnlyTargetRules Target) : base(Target) {
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
            "SquanchTheater",
            "TemplateSequence",
            "UMG",
        });
    }
}
