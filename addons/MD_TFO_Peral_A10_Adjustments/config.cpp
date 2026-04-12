class CfgPatches
{
	class MD_TFO_Peral_A10_Adjustments
	{
		author="Maddonut";
		url="";
		requiredaddons[]=
		{
			"Peral_A10"
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
	class Plane_CAS_01_base_F;
    class Peral_A10C: Plane_CAS_01_base_F
    {
		class pilotCamera
		{
			class OpticsIn
			{
				delete Medium;
				delete Narrow;
				delete VeryNarrow;
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
			minElev=-10;
			maxElev=90;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\Peral_A10\data\UI\A10C_LayoutUI.paa";
				class pylons
				{
					class Pylon_01
					{
						maxweight=454;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_USAF_ECM",
							"B_USAF_ECM_2",
							"B_AIM9M_LAU105",
							"B_AIM9X_LAU105",
							"B_BOMB_GBU12",
							"B_BOMB_GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_GBU39",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_MK20",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_FFAR7",
							"B_BOMB_APKWS7",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"RHS_HP_AIM9_2x",
							"RHS_HP_LGB_500",
							"RHS_HP_ECM",
							"B_ECM_PYLON"
						};
						attachment="PylonRack_1Rnd_Missile_AA_04_F";
						priority=5;
						UIposition[]={0.34999999,0};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.001";
					};
					class Pylon_02
					{
						maxweight=907;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_ANAAQ_PYLON",
							"B_USAF_ANAAQ28",
							"B_USAF_ANAAQ33",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"RHS_HP_LGB_500",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF",
							"B_ECM_PYLON"
						};
						attachment="PylonRack_A10C_anaaq28";
						priority=4;
						UIposition[]={0.345,0.050000001};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.002";
					};
					class Pylon_03
					{
						maxweight=1361;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_BOMB_GBU12",
							"B_BOMB_2GBU12",
							"B_BOMB_3GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_GBU39",
							"B_BOMB_GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_2CBU87_BRU_42",
							"B_BOMB_3CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_2CBU89_BRU_42",
							"B_BOMB_3CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_3CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_3CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_3CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_3CBU105",
							"B_BOMB_MK20",
							"B_BOMB_2MK20_BRU_42",
							"B_BOMB_3MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_3MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_3MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_MK84AIR",
							"B_MISSILE_AGM65D",
							"B_MISSILE_2AGM65D",
							"B_MISSILE_3AGM65D",
							"B_MISSILE_AGM65E",
							"B_MISSILE_2AGM65E",
							"B_MISSILE_AGM65K",
							"B_MISSILE_2AGM65K",
							"B_BOMB_FFAR7",
							"B_BOMB_FFAR21",
							"B_BOMB_APKWS7",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"itc_hp_smart",
							"itc_hp_lau117",
							"itc_hp_bru42",
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_FFAR_USAF_3x",
							"RHS_HP_HYDRA_USAF",
							"RHS_HP_HYDRA_USAF_3x",
							"RHS_HP_AGM65_3x",
							"RHS_HP_BOMB_500_3x"
						};
						attachment="PylonRack_3Rnd_Missile_AGM_02_F";
						priority=3;
						UIposition[]={0.34,0.1};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.003";
					};
					class Pylon_04
					{
						maxweight=2041;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_GBU39_PYLON",
							"B_Fuel_PYLON",
							"B_BOMB_GBU12",
							"B_BOMB_2GBU12",
							"B_BOMB_3GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_2GBU38_BRU_42",
							"B_BOMB_3GBU38",
							"B_BOMB_GBU39",
							"B_BOMB_GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_2CBU87_BRU_42",
							"B_BOMB_3CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_2CBU89_BRU_42",
							"B_BOMB_3CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_3CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_3CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_3CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_3CBU105",
							"B_BOMB_MK20",
							"B_BOMB_2MK20_BRU_42",
							"B_BOMB_3MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_3MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_3MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_MK84AIR",
							"B_BOMB_FFAR7",
							"B_BOMB_FFAR21",
							"B_BOMB_APKWS7",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"itc_hp_bru42",
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF",
							"RHS_HP_FFAR_USAF_3x",
							"RHS_HP_HYDRA_USAF_3x",
							"RHS_HP_BOMB_500_3x"
						};
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						priority=2;
						UIposition[]={0.33500001,0.18000001};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.004";
					};
					class Pylon_05
					{
						maxweight=2041;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"B_GBU39_PYLON",
							"B_BOMB_GBU12",
							"B_BOMB_GBU24",
							"B_BOMB_GBU28",
							"B_BOMB_GBU31",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_GBU39",
							"B_BOMB_GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_MK84AIR",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"itc_hp_bru42",
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF"
						};
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						priority=1;
						UIposition[]={0.33000001,0.23};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.005";
					};
					class Pylon_06
					{
						maxweight=2041;
						priority=5;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_GBU39_PYLON",
							"B_PylonRack_A10C_Empty",
							"B_Fuel_PYLON",
							"B_BOMB_GBU12",
							"B_BOMB_GBU32",
							"B_BOMB_GBU38",
							"B_BOMB_GBU39",
							"B_BOMB_GBU49",
							"B_BOMB_GBU54",
							"B_BOMB_GBU53",
							"B_BOMB_CBU87",
							"B_BOMB_CBU89",
							"B_BOMB_CBU97",
							"B_BOMB_CBU103",
							"B_BOMB_CBU104",
							"B_BOMB_CBU105",
							"B_BOMB_MK20",
							"B_BOMB_MK77",
							"B_BOMB_MK82",
							"B_BOMB_MK82SE",
							"B_BOMB_MK84",
							"B_BOMB_MK84AIR",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"itc_hp_bru42",
							"RHS_HP_LGB_500",
							"RHS_HP_LGB_1000",
							"RHS_HP_FFAR_USAF",
							"RHS_HP_HYDRA_USAF"
						};
						attachment="";
						UIposition[]={0.33000001,0.28};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.006";
					};
					class Pylon_07: Pylon_05
					{
						maxweight=2041;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						mirroredMissilePos=5;
						UIposition[]={0.33000001,0.33000001};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.007";
					};
					class Pylon_08: Pylon_04
					{
						maxweight=2041;
						attachment="PylonMissile_1Rnd_Bomb_04_F";
						mirroredMissilePos=4;
						UIposition[]={0.33500001,0.38};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.008";
					};
					class Pylon_09: Pylon_03
					{
						maxweight=1361;
						attachment="PylonRack_3Rnd_Missile_AGM_02_F";
						mirroredMissilePos=3;
						UIposition[]={0.34,0.44999999};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.009";
					};
					class Pylon_10: Pylon_02
					{
						maxweight=907;
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_MISSILE_PYLON",
							"itc_hp_smart",
							"itc_hp_dumb",
							"itc_hp_dumb_rocket",
							"B_ECM_PYLON"
						};
						attachment="PylonRack_7Rnd_Rocket_04_AP_F";
						UIposition[]={0.345,0.5};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.010";
					};
					class Pylon_11: Pylon_01
					{
						maxweight=454;
						attachment="PylonRack_1Rnd_Missile_AA_04_F";
						mirroredMissilePos=1;
						UIposition[]={0.34999999,0.55000001};
						memPoint="proxy:\a3\weapons_f\dynamicloadout\pylonpod_3x_missile_agm_02_f.011";
					};
					class CM
					{
						maxweight=500;
						hardpoints[]=
						{
							"B_240Rnd_CM",
							"B_120Rnd_CM",
							"RHSUSF_cm_ANALE40_x2",
							"RHSUSF_cm_ANALE40_x4",
							"RHSUSF_cm_ANALE40_x8",
							"RHSUSF_cm_ANALE40_x16"
						};
						attachment="240Rnd_Peral_A10C_CM_Chaffflare_M";
						priority=1;
						UIposition[]={0.039999999,0.55000001};
						memPoint="CM_point";
					};
				};
				class presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class CAS
					{
						displayName="$STR_A3_CAS_PRESET_DISPLAYNAME";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_A10C_anaaq28",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_A10C_GBU39_x4",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_AP_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"240Rnd_Peral_A10C_CM_Chaffflare_M"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_A10C_anaaq28",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_A10C_GBU39_x4",
							"PylonMissile_1Rnd_Bomb_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_3Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AGM_02_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"240Rnd_Peral_A10C_CM_Chaffflare_M"
						};
					};
					class AA
					{
						displayName="$STR_A3_cfgmagazines_titan_aa_dns";
						attachment[]=
						{
							"PylonRack_1Rnd_Missile_AA_04_F",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_1Rnd_AAA_missiles",
							"PylonRack_7Rnd_Rocket_04_HE_F",
							"PylonRack_1Rnd_Missile_AA_04_F",
							"240Rnd_Peral_A10C_CM_Chaffflare_M"
						};
					};
				};
			};
        };
    };
};