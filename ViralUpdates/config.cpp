class CfgPatches
{
	class ViralUpdates
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Scripts",
			"DZ_Data",			
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
class CfgMods
{
	class ViralUpdates
	{
		dir="ViralUpdates";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Viral";
		credits="CostaGeo";
		author="";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		inputs="";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ViralUpdates/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ViralUpdates/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ViralUpdates/Scripts/5_Mission"
				};
			};
		};
	};
};

class CfgSoundShaders
{
	// You can make Music_1 Music_2 Music_3 .. etc.. for multiple imported tracks (best practice)
	class ViralLoadingScreenV2_Music_1_SoundShader
	{
		samples[] = {{"ViralUpdates\data\The_Cure",1}};  //*** Change "YourMENUtrackName"
		volume=0.786;
	};
	
	class ViralLoadingScreenV2_Music_2_SoundShader
	{
		samples[] = {{"ViralUpdates\data\The_Cure",1}};  //*** Change "YourAMBIANCEtrackName"
		volume=0.786;
	};
	
	class ViralLoadingScreenV2_Music_3_SoundShader
	{
		samples[] = {{"ViralUpdates\data\The_Cure",1}};  //*** Change "YourMILITARYtrackName"
		volume=0.786;
	};
};

class CfgSoundSets
{	
	class ViralLoadingScreenV2_Music_1_SoundSet
	{
		soundShaders[]=
		{
			"ViralLoadingScreenV2_Music_1_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
	
	class ViralLoadingScreenV2_Music_2_SoundSet
	{
		soundShaders[]=
		{
			"ViralLoadingScreenV2_Music_2_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
	
	class ViralLoadingScreenV2_Music_3_SoundSet
	{
		soundShaders[]=
		{
			"ViralLoadingScreenV2_Music_3_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
};

class cfgCharacterScenes
{
	class deerisle
	{
		class loc1
		{
			target[]={10050.547,10848.146,21.77}; //*** main menu character location xzy (note z and y are reversed!) (default deerisle location presented here)
			position[]={10051.9,10844.5,1}; //*** position of camera xzy (note z and y are reversed!) (target's y = position y 0, so position y value should sit near 1.0)
			fov=0.75;
			date[]={2020,1,15,9,0}; //*** for sunlight more than anything
			overcast=0; //*** set weather
			rain=0;
			fog=0;
			wind=0;
		};
	};
};
