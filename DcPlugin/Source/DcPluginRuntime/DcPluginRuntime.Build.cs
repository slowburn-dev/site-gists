namespace UnrealBuildTool.Rules
{
	public class DcPluginRuntime : ModuleRules
	{
		public DcPluginRuntime(ReadOnlyTargetRules Target) : base(Target)
		{
			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					// ---
					"DcPluginCore",
				});
		}
	}
}
