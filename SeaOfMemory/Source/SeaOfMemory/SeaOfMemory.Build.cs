// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class SeaOfMemory : ModuleRules
{
	public SeaOfMemory(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore","EnhancedInput", 
			"AnimGraphRuntime", 
			"MassEntity", "MassCommon", "MassCrowd" ,"MassMovement", "MassSpawner", "StructUtils",
            "HTTP", "JsonUtilities", "Json" ,
            "UMG", "WebBrowser",
            "CinematicCamera",
            "ImageWrapper",
            "MassRepresentation"
        });

        PublicDependencyModuleNames.AddRange(new string[] { "Niagara", "NiagaraCore", "NiagaraShader" });

        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        //string ThirdPartyPath = Path.Combine(ModuleDirectory, "ThirdParty/");
        //string LibraryPath = Path.Combine(ThirdPartyPath, "liboauthcpp");

        //// ���̺귯�� ����
        //PublicIncludePaths.Add(Path.Combine(LibraryPath, "include"));

        //// ���̺귯�� ���� ��ũ
        //PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "lib", "oauthcpp.lib"));

        //LibraryPath = Path.Combine(ThirdPartyPath, "Python");
        //PublicIncludePaths.Add(Path.Combine(LibraryPath, "include"));

        //PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, "lib", "python39.lib"));



        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true

    }
    //private string ModulePath
    //{
    //    get { return ModuleDirectory; }
    //}
    //private string ThirdPartyPath
    //{
    //    get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty")); }
    //}
    //private bool Load_Test(TargetInfo Target)
    //{
    //    bool isLibrarySupported = false;

    //    if((Target.Platform == UnrealTargetPlatform.Win64))
    //    {
    //        isLibrarySupported = true;

    //        string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "x64" : "x86";
    //        string LibrariesPath = Path.Combine(ThirdPartyPath, "liboauthcpp", "lib", PlatformString);

    //        PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "oauthcpp.lib"));
    //    }

    //    if(isLibrarySupported)
    //    {
    //        PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "liboauthcpp", "header"));
    //    }

    //    //Definitions.Add(string.Format("WITH_TEST_BINDING={0}", isLibrarySupported ? 1 : 0));

    //    return isLibrarySupported;
    //}
}
