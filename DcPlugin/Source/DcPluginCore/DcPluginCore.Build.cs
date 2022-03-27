using UnrealBuildTool;

public class DcPluginCore : ModuleRules
{
	public DcPluginCore(ReadOnlyTargetRules Target) : base(Target)
	{
	    bRequiresImplementModule = false;

	    Type = ModuleType.CPlusPlus;
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        bEnforceIWYU = true;

        PublicDependencyModuleNames.AddRange(
			new string[] {
			"Core",
			"CoreUObject",
			});
	}
}
