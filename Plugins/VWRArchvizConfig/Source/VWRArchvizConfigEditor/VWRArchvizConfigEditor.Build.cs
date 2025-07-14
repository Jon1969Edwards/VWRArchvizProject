using UnrealBuildTool;

public class VWRArchvizConfigEditor : ModuleRules
{
    public VWRArchvizConfigEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",       // needed for editor extensions
            "VWRArchvizConfig"// your runtime module
        });

        PrivateDependencyModuleNames.AddRange(new[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "Settings",
            "Slate",
            "SlateCore",
            "PropertyEditor",
            "EditorStyle"
        });
    }
}
