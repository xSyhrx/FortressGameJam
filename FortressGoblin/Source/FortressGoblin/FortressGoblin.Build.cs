// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FortressGoblin : ModuleRules
{
	public FortressGoblin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
