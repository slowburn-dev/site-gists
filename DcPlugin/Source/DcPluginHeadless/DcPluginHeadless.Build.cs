using UnrealBuildTool;
using System.IO;

public class DcPluginHeadless : ModuleRules
{
	public DcPluginHeadless(ReadOnlyTargetRules Target) : base(Target)
	{
	    bRequiresImplementModule = false;
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateDependencyModuleNames.AddRange(
			new string[] {
				"Core",
				"CoreUObject",
				"ApplicationCore",
				"Projects",
				// ---
				"DcPluginCore",
			});

		PrivateIncludePathModuleNames.AddRange(
			new string[] {
				"Launch",
			});
	}
}
