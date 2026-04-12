class CfgPatches
{
	class MD_TFO_FA_EMB312_Adjustments
	{
		author="Maddonut";
		url="";
		requiredaddons[]=
		{
			"FA_EMB312"
		};
		requiredversion=1;
		units[]={};
		weapons[]={};
		magazines[]={};
		skipWhenMissingDependencies=1;
	};
};
class Components;
class CfgVehicles
{
	class FA_EMB312_AT27M35_AAF;
    class FA_EMB312_AT27M35S_LDF: FA_EMB312_AT27M35_AAF
    {
		class pilotCamera
		{
			class OpticsIn
			{
				delete Medium;
				delete Narrow;
				class Wide
				{
					opticsDisplayName="UltraWide";
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov="(55.92 / 120)";
					minFov="(55.92 / 120)";
					maxFov="(55.92 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Wide2
				{
					opticsDisplayName="Wide";
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov="(24 / 120)";
					minFov="(24 / 120)";
					maxFov="(24 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_w_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium1: Wide
				{
					opticsDisplayName="Medium";
					initFov="(10 / 120)";
					minFov="(10 / 120)";
					maxFov="(10 / 120)";
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_AAA_01_m_F.p3d";
				};
				class NarrowMedium: Medium1
				{
					opticsDisplayName="NarrowMedium";
					initFov="(4 / 120)";
					minFov="(4 / 120)";
					maxFov="(4 / 120)";
				};
				class Narrow1: Medium1
				{
					opticsDisplayName="Narrow";
					initFov="(2.5 / 120)";
					minFov="(2.5 / 120)";
					maxFov="(2.5 / 120)";
				};
				class UltraNarrow: Medium1
				{
					opticsDisplayName="UltraNarrow";
					initFov="(1 / 120)";
					minFov="(1 / 120)";
					maxFov="(1 / 120)";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-180;
			maxTurn=180;
			initTurn=0;
			minElev=-20;
			maxElev=90;
			initElev=5;
			maxXRotSpeed=1;
			maxYRotSpeed=1;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\FA_EMB312\data\ui\t27_3den_ca.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"20MM_TWIN_CANNON",
							"B_BOMB_PYLON",
							"B_BOMB_GBU39",
							"B_BOMB_GBU53",
							"B_MISSILE_AGM114R"
						};
						attachment="FA_EMB312_PylonWeapon_127_Gunpod";
						priority=10;
						maxweight=800;
						UIposition[]={0.44999999,0.30000001};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.2,0.30000001};
						mirroredMissilePos=1;
					};
					class pylons3
					{
						hardpoints[]=
						{
							"B_MISSILE_PYLON",
							"20MM_TWIN_CANNON",
							"B_BOMB_PYLON"
						};
						attachment="PylonRack_7Rnd_Rocket_04_HE_F";
						priority=10;
						maxweight=230;
						UIposition[]={0.5,0.34999999};
					};
					class pylons4: pylons3
					{
						UIposition[]={0.15000001,0.34999999};
						mirroredMissilePos=3;
					};
				};
				class presets
				{
					class empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="Default";
						attachment[]=
						{
							"FA_EMB312_PylonWeapon_127_Gunpod",
							"FA_EMB312_PylonWeapon_127_Gunpod",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_7Rnd_Rocket_04_HE_F"
						};
					};
					class Multirole
					{
						displayName="Multirole";
						attachment[]=
						{
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
					class CAS
					{
						displayName="CAS";
						attachment[]=
						{
							"PylonMissile_1Rnd_Mk82_F",
							"PylonMissile_1Rnd_Mk82_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_7Rnd_Rocket_04_AP_F"
						};
					};
					class AA
					{
						displayName="AA";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_1Rnd_Missile_AA_04_F"
						};
					};
				};
			};
        };
    };
};