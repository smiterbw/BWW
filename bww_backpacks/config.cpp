class CfgPatches
{
    class bww_backpacks
    {
        units[] = {};
		weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Weapons_F"};
    };
};

class CfgVehicles
{
	// SNOW PACKS
	class B_AssaultPack_rgr;
    class bww_snow_assault: B_AssaultPack_rgr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWW] Assault pack (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        picture = "\bww_backpacks\ui\snow_assault_icon.paa";
		hiddenSelectionsTextures[]={"\bww_backpacks\data\snow_assault.paa"};
	};
	class B_Kitbag_rgr;
    class bww_snow_kitbag: B_Kitbag_rgr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWW] Kitbag (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        picture = "\bww_backpacks\ui\snow_kitbag_icon.paa";
		hiddenSelectionsTextures[]={"\bww_backpacks\data\snow_kitbag.paa"};
	};
	class B_Carryall_cbr;
    class bww_snow_carryall: B_Carryall_cbr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWW] Carryall (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila.p3d";
        picture = "\bww_backpacks\ui\snow_carryall_icon.paa";
		hiddenSelectionsTextures[]={"\bww_backpacks\data\snow_carryall.paa"};
	};
	class B_ViperHarness_blk_F;
    class bww_snow_viper: B_ViperHarness_blk_F
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWW] Viper pack (snow)";
		model = "\A3\Supplies_F_Exp\Bags\B_ViperHarness_F.p3d";
        picture = "\bww_backpacks\ui\snow_viper_icon.paa";
		hiddenSelectionsTextures[]={"\bww_backpacks\data\snow_viper.paa"};
	};
};
