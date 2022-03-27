namespace UnrealBuildTool.Rules
{
	public class DcPluginEditor : ModuleRules
	{
		public DcPluginEditor(ReadOnlyTargetRules Target) : base(Target)
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
