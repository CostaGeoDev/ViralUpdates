class CfgPatches
{
	class ViralHatchet
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ZenVirus",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Blade"
		};
	};
};
class CfgVehicles
{
	class Hatchet;
	class ViralHatchet: Hatchet
	{
		scope=2;
		displayName="Viral Hatchet";
		descriptionShort="A hatchet that has the Zen Virus poured over it. This is a dangerous item to have; cut yourself, and you're screwed!";
		repairableWithKits[]={4};
		weight=1000;
		itemSize[]={2,4};
		fragility=0.0099999998;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ViralUpdates\Data\Hatchet\viralhatchet_co.paa"
		};
		openItemSpillRange[]={20,40};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\melee\blade\data\hatchet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\melee\blade\data\hatchet_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
