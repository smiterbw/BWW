class CfgPatches
{
	class bw_vehicles
	{
	units[] = {};
	vehicles[] = {
		"bww_badger_snow",
		"bww_marid_snow"
		};
	requiredVersion = 0.1;
	requiredAddons[] = {"A3_armor_F_Beta"};
	};
};
class cfgVehicles
{
	// Blufor
	class B_APC_Wheeled_01_cannon_F;
	class bww_badger_snow : B_APC_Wheeled_01_cannon_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWW] Badger (Snow)";
	hiddenSelectionsTextures[]= {"\bww_vehicles\data\badger_snow.paa","\bww_vehicles\data\badger_under_snow.paa","\bww_vehicles\data\badger_turret_snow.paa"};
	};
	// Opfor
	class O_APC_Wheeled_02_rcws_v2_F;
	class bww_marid_snow : O_APC_Wheeled_02_rcws_v2_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWW] Marid (Snow)";
	hiddenSelectionsTextures[]= {"\bww_vehicles\data\marid_snow.paa","\bww_vehicles\data\marid_under_snow.paa","\bww_vehicles\data\marid_turret_snow.paa"};
	};
};