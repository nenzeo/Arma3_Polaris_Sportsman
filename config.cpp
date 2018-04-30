#define VIEW_GUNNER 1
#define VIEW_PILOT 1
#define VIEW_CARGO 1
class CfgPatches
{
	class Polaris_sportsman
	{
		addonRootClass="A3_Soft_F";
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Polaris_sportsman"
		};
		weapons[]={};
	};
};
class DefaultEventhandlers;
class ViewOptics;
class CommanderOptics;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PolarisDriver = "PolarisDriver";
		Polariscargo1 = "Polariscargo1";
		Polariscargo2 = "Polariscargo2";
		Polariscargo3 = "Polariscargo3";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		class PolarisDriver: Crew
			{
			file = "\Polaris_sportsman\data\animation\driver.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			speed = 1e+010;
			};
		class Polariscargo1: Crew
			{
			file = "\Polaris_sportsman\data\animation\cargo1.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class Polariscargo2: Crew
			{
			file = "\Polaris_sportsman\data\animation\cargo2.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class Polariscargo3: Crew
			{
			file = "\Polaris_sportsman\data\animation\cargo3.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
	};
};
class CfgVehicles
{	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
		};
		class ViewPilot;
		class EventHandlers;
		class AnimationSources;
	};
	class Polaris_sportsman_base: Car_F
	{
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 1;
			initAngleX = -40;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		author="NTF Ragnar";
		mapSize=3.5599999;
		#include "physx.hpp"
		_generalMacro="Polaris_sportsman_base";
		displayName="Polaris sportsman";
		class Library
		{
			libTextDesc="Polaris_sportsman";
		};
		model="\Polaris_sportsman\Polaris_sportsman.p3d";
		editorSubcategory="EdSubcat_Cars";
		icon="\Polaris_sportsman\data\ui\map_polaris_sportsman_ca.paa";
		picture="\Polaris_sportsman\data\ui\polaris_sportsman_ca.paa";
		armor=30;
		damageResistance=0.0091300001;
		cost=100000;
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		dustFrontLeftPos = "wheel_1_1_bound";
		dustFrontRightPos = "wheel_1_2_bound";
		dustBackLeftPos = "wheel_2_1_bound";
		dustBackRightPos = "wheel_2_2_bound";
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackMLL = "TrackMLL";
		memoryPointTrackMLR = "TrackMLR";
		memoryPointTrackMRL = "TrackMRL";
		memoryPointTrackMRR = "TrackMRR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		unitInfoType="RscUnitInfoNoWeapon";
		cargoProxyIndexes[] = {1};
		cargoAction[] = {"Polariscargo1"};
		attenuationEffectType="OpenCarAttenuation";
		driverCanSee="4+8+2+32+16";
		LODTurnedIn= "VIEW_PILOT";
        LODTurnedOut= "VIEW_PILOT";
		soundGetIn[]=
		{
			"",
			0.056234129,
			1
		};
		soundGetOut[]=
		{
			"",
			0.056234129,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
			1.1220185,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_start",
			1.1220185,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
			1.1220185,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_stop",
			1.1220185,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
			1,
			1,
			500
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
			1,
			1,
			500
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
			1,
			1,
			500
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
			1,
			1,
			500
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_1",
			1,
			1,
			500
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_2",
			1,
			1,
			500
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_3",
			1,
			1,
			500
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_wood_4",
			1,
			1,
			500
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_1",
			1,
			1,
			500
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_2",
			1,
			1,
			500
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_3",
			1,
			1,
			500
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_armor_4",
			1,
			1,
			500
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_1",
			1,
			1,
			500
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_2",
			1,
			1,
			500
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_3",
			1,
			1,
			500
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\quadbike_coll_building_4",
			1,
			1,
			500
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
					0.31622776,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
					0.3548134,
					1,
					200
				};
				frequency="0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume="engineOn*camPos*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
					0.39810717,
					1,
					200
				};
				frequency="0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume="engineOn*camPos*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
					0.44668359,
					1,
					250
				};
				frequency="0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume="engineOn*camPos*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
					0.50118721,
					1,
					250
				};
				frequency="0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume="engineOn*camPos*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
					0.56234133,
					1,
					300
				};
				frequency="0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
				volume="engineOn*camPos*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
					0.56234133,
					1,
					150
				};
				frequency=1;
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
					0.63095737,
					1,
					200
				};
				frequency="0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
					0.70794576,
					1,
					250
				};
				frequency="0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
					0.79432821,
					1,
					300
				};
				frequency="0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
					0.89125091,
					1,
					350
				};
				frequency="0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
					1,
					1,
					400
				};
				frequency="0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm1",
					0.17782794,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm2",
					0.19952622,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm3",
					0.22387211,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm4",
					0.25118864,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm5",
					0.2818383,
					1
				};
				frequency="0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-engine_rpm7",
					0.31622776,
					1
				};
				frequency="0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
				volume="engineOn*(1-camPos)*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class IdleThrust_Int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm1",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(200/	2000),(400/	2000)])	*	((rpm/	2000) factor[(750/	2000),( 600/	2000)]))";
			};
			class EngineThrust_Int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm2",
					0.44668359,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(600/	2000),(1000/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(600/	2000),(730/	2000)])	*	((rpm/	2000) factor[(1020/	2000),( 800/	2000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm3",
					0.50118721,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(800/	2000),(1300/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(780/	2000),(1000/	2000)])	*	((rpm/	2000) factor[(1300/	2000),( 1100/	2000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm4",
					0.56234133,
					1
				};
				frequency="0.9	+	((rpm/	2000) factor[(1080/	2000),(1560/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1100/	2000),(1280/	2000)])	*	((rpm/	2000) factor[(1570/	2000),( 1380/	2000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm5",
					0.63095737,
					1
				};
				frequency="0.95	+	((rpm/	2000) factor[(1380/	2000),(1860/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2000) factor[(1350/	2000),(1550/	2000)])	*	((rpm/	2000) factor[(1870/	2000),( 1630/	2000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\qb-exhaust_rpm7",
					0.70794576,
					1
				};
				frequency="0.95	+	((rpm/	2000) factor[(1630/	2000),(2000/	2000)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2000) factor[(1650/	2000),(1900/	2000)])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[0, 6])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[0, 6])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[0, 6])";
			};
			class TiresGrassOut_Lowend
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.22387211,
					1
				};
				frequency="1";
				volume="camPos*grass*(speed factor[0, 6])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[0, 6])";
			};
			class TiresMudOut_Lowend
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.3548134,
					1
				};
				frequency="1";
				volume="camPos*mud*(speed factor[0, 6])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.79432821,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[0, 6])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[0, 6])";
			};
			class TiresAsphaltOut_HighSpeed
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_Asphalt",
					0.70794576,
					1
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[7, 17])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.44668359,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 6])";
			};
			class TiresRockOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[0,-3])";
			};
			class TiresSandOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1.2589254,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[0,-3])";
			};
			class TiresGrassOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[0,-3])";
			};
			class TiresGrassOut_Lowend_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.22387211,
					1
				};
				frequency="1";
				volume="camPos*grass*(speed factor[0,-3])";
			};
			class TiresMudOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.70794576,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[0,-3])";
			};
			class TiresMudOut_lowend_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.3548134,
					1
				};
				frequency="1";
				volume="camPos*mud*(speed factor[0,-3])";
			};
			class TiresGravelOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.79432821,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[0,-3])";
			};
			class TiresAsphaltOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[0,-3])";
			};
			class NoiseOut_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.70794576,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0,-3])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.31622776,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[0, 6])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[0, 6])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.2818383,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[0, 6])";
			};
			class TiresGrassIn_Lowend
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[0, 6])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.2818383,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[0, 6])";
			};
			class TiresMudIn_Lowend
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[0, 6])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[0, 6])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.31622776,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[0,6])";
			};
			class TiresAsphaltIn_HighSpeed
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_Asphalt",
					0.31622776,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[3,17])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.19952622,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 15])*(1-camPos)";
			};
			class TiresRockIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.31622776,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[0,-3])";
			};
			class TiresSandIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[0,-3])";
			};
			class TiresGrassIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.2818383,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[0,-3])";
			};
			class TiresGrassIn_Lowend_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[0,-3])";
			};
			class TiresMudIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.2818383,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[0,-3])";
			};
			class TiresMudIn_Lowend_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[0,-3])";
			};
			class TiresGravelIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.25118864,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[0,-3])";
			};
			class TiresAsphaltIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.31622776,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[0,-3])";
			};
			class NoiseIn_Reverse
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\quadbike_noise_04",
					0.19952622,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0,-3])*(1-camPos)";
			};
			class brakes_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.3548134,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class brakes_ext_road_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking",
					0.3548134,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.3548134,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.3548134,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0, 0.1])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.3548134,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0, -0.1])";
			};
			class brakes_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0, 0.1])*(Speed Factor[0, 10])";
			};
			class turn_left_ext_dirt_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_DirtLayer",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0, 0.1])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0, -0.1])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_DirtLayer",
					1.4125376,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0, -0.1])*(Speed Factor[0, 10])";
			};
			class brakes_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class brakes_int_road_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0, 0.1])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0, -0.1])*(Speed Factor[0, 10])";
			};
			class brakes_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_15_dirt_breaking",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.0, -0.009])*(Speed Factor[5, 10])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.19952622,
					1
				};
				frequency=1;
				volume="engineOn*grass*(1-camPos)*(LongSlipDrive Factor[0.01, 0.1])*(Speed Factor[5, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0, 0.1])*(Speed Factor[0, 10])";
			};
			class turn_left_int_dirt_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_DirtLayer",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0, 0.1])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0, -0.1])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt_dirtlayer
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\Quadbike_01\Quadbike_Tires_DirtLayer",
					0.25118864,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0, -0.1])*(Speed Factor[0, 10])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.25118864,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[0, 10]) * water * camPos + (speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.17782794,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[0, 10]) * water * (1-camPos)* 0.8 + (speed factor[-0.1, -10]) * water * (1-camPos) *0.8";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		transportSoldier=1;
		turnCoef=4.5;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=1;
			turnIncreaseLinear=2;
			turnIncreaseTime=0;
			turnDecreaseConst=8;
			turnDecreaseLinear=0;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		ejectDeadCargo=1;
		ejectDeadDriver=1;
		crewCrashProtection=4.8499999;
		crewExplosionProtection=0;
		HeadAimDown=-15.2;
		damageEffect="";
		damageTexDelay=0.5;
		fuelExplosionPower=0;
		maxFordingDepth=-0.44999999;
		maximumLoad=600;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class DestructionEffects
		{
			class UAVCrashSmoke
			{
				simulation="particles";
				type="UAVCrashSmoke";
				position="[0,0,0]";
				intensity=0.15000001;
				interval=1;
				lifeTime=0.012;
			};
			class Light1
			{
				simulation="light";
				type="ObjectDestructionLightSmall";
				position="destructionEffect1";
				intensity=0.001;
				interval=1;
				lifeTime=3;
				enabled="distToWater";
			};
			class Sound
			{
				simulation="sound";
				position="destructionEffect1";
				intensity=1;
				interval=1;
				lifeTime=1;
				type="Fire";
			};
			class Fire1
			{
				simulation="particles";
				type="ObjectDestructionFire1Tiny";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Refract1
			{
				simulation="particles";
				type="SmallFireFRefract";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3;
			};
			class Smoke1
			{
				simulation="particles";
				type="SmallWreckSmoke";
				position="destructionEffect1";
				intensity=0.15000001;
				interval=1;
				lifeTime=3.5;
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class LeftGunner: MainTurret
			{
				gunnerName = "Back left";
				primaryGunner = 1;
				primaryObserver = 0;
				commanding = 2;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				proxyType = "CPCargo";
				animationSourceHatch = "";
				enabledByAnimationSource 	= "";
				proxyIndex = 2;
				memoryPointGun = "gun_muzzle";
				selectionFireAnim = "";
				memoryPointGunnerOutOptics= "";
				memoryPointGunnerOptics= "";
				LODTurnedIn=1;
				LODTurnedOut=1;
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				soundServo[]={};
				gunnerInAction = "Polariscargo2";
				gunnerAction= "Polariscargo2"
				ejectDeadGunner = false;
				canHideGunner=0;
				turretInfoType = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 1;
				gunnerOutOpticsShowCursor = false;
				gunnerOutForceOptics= false;
				viewGunnerInExternal = 1;
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
				memoryPointsGetInGunner= "pos cargo";
				memoryPointsGetInGunnerDir= "pos cargo dir";
				OutGunnerMayFire = true;
				InGunnerMayFire = true;
				isPersonTurret = 0;
				class ViewGunner: ViewGunner
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					initAngleX = 0;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
			};
			class RightGunner: LeftGunner
			{
				gunnerName = "Back right";
				proxyIndex = 3;
				primaryGunner = 0;
				primaryObserver = 1;
				commanding = 3;
				proxyType = "CPCargo";
				gunnerInAction = "Polariscargo3";
				gunnerAction= "Polariscargo3"
			};
		};
		showNVGCargo[]={1};
		soundAttenuationCargo[]={1,0};
		showNVGDriver=1;
		hideWeaponsDriver=0;
		hideWeaponsCargo=0;
		weapons[]=
		{
			"MiniCarHorn"
		};
		driverAction="PolarisDriver";
		getInAction="GetInQuadbike";
		getOutAction="GetOutQuadbike";
		cargoGetInAction[]=
		{
			"GetInQuadbike_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutQuadbike_cargo"
		};
		preciseGetInOut=1;
		driverForceOptics = 0;
		cargoPreciseGetInOut[]={1};
		extCameraPosition[]={0,1.5,-4.5};
		class ViewCargo
        {
            initAngleX=5;
            minAngleX=-60;
            maxAngleX=60;
            initAngleY=0;
            minAngleY=-100;
            maxAngleY=100;
            initFov=0.9;
            minFov=0.45;
            maxFov=0.9;
            minMoveX=0;
            maxMoveX=0;
            minMoveY=0;
            maxMoveY=0;
            minMoveZ=0;
            maxMoveZ=0;
        };
		driveropticsmodel = "";
		memoryPointDriverOptics ="driverview";		
		class ViewOptics: ViewOptics
		{
			initFov = 0.8;
			minFov = 0.8;
			maxFov = 0.8;
			initAngleX = 0;
			minAngleX = -70;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
			visionMode[] = {"Normal","NVG","Ti"};
			thermalMode[] = {0,1};
		};
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor=4;
				material=-1;
				name="motor";
				visual="motor";
				passThrough=0;
				radius=0.25;
			};
			class HitFuel
			{
				armor=2;
				material=-1;
				name="fuel";
				passThrough=0;
				radius=0.25;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.17; //0.5
				name="HitLFWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8; //1.0
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.17;
				name="HitLMWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.17;
				name="HitLBWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.17;
				name="HitRFWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.17;
				name="HitRMWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.17;
				name="HitRBWheel";
                visual="";
                passThrough=0;
				explosionShielding = 0.8;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
			
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=60;
					hardLimitEnd=120;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Right"
			}
		};
		class EventHandlers
		{
		};
	};
	class Polaris_sportsman: Polaris_sportsman_base
	{
		author="NTF Ragnar";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"glass6_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.85000002
				},
				
				{
					"wheel_2_1_damper",
					0.85000002
				},
				
				{
					"wheel_1_2_damper",
					0.85000002
				},
				
				{
					"wheel_2_2_damper",
					0.85000002
				},
				
				{
					"wheel_1_3_damper",
					0.85000002
				},
				
				{
					"wheel_2_3_damper",
					0.85000002
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.405;
			verticalOffsetWorld=-0.213;
		};
		editorPreview="\Polaris_sportsman\data\ui\preview_polaris_sportsman.jpg";
		_generalMacro="Polaris_sportsman_base";
		scope=2;
		side=1;
		transportSoldier = 1;
		cargoProxyIndexes[] = {1};
		driverCanSee = "4+8+2+32+16";
		gunnerCanSee = "4+2+8+32+16";
		faction="BLU_F";
		crew="B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};
		driverCompartments="Compartment1";
		cargoCompartments[]={"Compartment1"};
		viewDriverShadow=1;
        viewDriverShadowDiff=0.01;
        viewDriverShadowAmb=0.2;
        viewCargoShadow=1;
        viewCargoShadowDiff=0.01;
        viewCargoShadowAmb=0.2;
		class EventHandlers: DefaultEventhandlers
		{
		init = "";
		};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {};
	};
	
};
