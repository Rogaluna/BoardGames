using UnrealBuildTool;
 
public class BoardGameDerived : ModuleRules
{
	public BoardGameDerived(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"BoardGames",
			"Niagara",
            "IndependentActorRPCFramework",
			"Json"
        });
 
		PublicIncludePaths.AddRange(new string[] { "BoardGameDerived/Public" });
		PrivateIncludePaths.AddRange(new string[] { "BoardGameDerived/Private" });
	}
}