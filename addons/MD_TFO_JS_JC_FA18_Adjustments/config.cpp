class CfgPatches
{
	class MD_TFO_JS_JC_FA18_Adjustments
	{
		author="Maddonut";
		url="";
		requiredaddons[]=
		{
			"JS_JC_FA18"
		};
		requiredversion=1;
		units[]={};
		weapons[]={};
		magazines[]={};
		skipWhenMissingDependencies=1;
	};
};
class CfgVehicles
{
	class Plane_Base_F;
    class JS_JC_FA18E: Plane_Base_F
    {
		class pilotCamera
		{
			class OpticsIn
			{
				delete Narrow;
				delete SuperNarrow;
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
			minElev=-150;
			maxElev=150;
			initElev=0;
			maxXRotSpeed=0.3;
			maxYRotSpeed=0.3;
			maxMouseXRotSpeed=0.5;
			maxMouseYRotSpeed=0.5;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
    };
};