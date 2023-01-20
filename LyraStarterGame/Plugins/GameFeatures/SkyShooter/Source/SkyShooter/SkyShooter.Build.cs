using UnrealBuildTool;

public class SkyShooter : ModuleRules
{
    public SkyShooter(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "LyraGame",
                "ModularGameplay",
                "CommonGame",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "GameplayTags",
                "GameplayTasks",
                "GameplayAbilities",
                "GameplayMessageRuntime",
                "CommonUI",
                "UMG",
                "DataRegistry",
                "AsyncMixin",
                "EnhancedInput",
                "GameSubtitles",
                "DeveloperSettings",
                "AIModule"
            }
        );
    }
}