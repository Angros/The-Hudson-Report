// © 2017 Angel Rosario. All Rights Reserved to their respective owners.

using UnrealBuildTool;
using System.Collections.Generic;

public class TheHudsonReportTarget : TargetRules
{
	public TheHudsonReportTarget(TargetInfo Target)
	{
		Type = TargetType.Game;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "TheHudsonReport" } );
	}
}
