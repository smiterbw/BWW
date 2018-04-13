class CfgPatches
{
	class bww_helmets
	{
		units[] = {};
		weapons[] = {
			"bww_viper_helmet_snow",
			"bww_stealth_helmet_snow",
			"bww_beanie_snow",
			"bww_combat_helmet_snow",
			};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Exp"};
		author = "smiter";
	};
};


class cfgWeapons
{
	// VIPER
    class H_HelmetO_ViperSP_ghex_F;
    class bww_viper_helmet_snow : H_HelmetO_ViperSP_ghex_F
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Viper Helmet (Snow)";
        picture = "\bww_helmets\ui\viper_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bww_helmets\data\viper_helmet_snow.paa"};
    };
	// STEALTH
	class H_HelmetB_TI_tna_F;
    class bww_stealth_helmet_snow : H_HelmetB_TI_tna_F
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Stealth Helmet (Snow)";
        picture = "\bww_helmets\ui\stealth_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bww_helmets\data\stealth_helmet_snow.paa"};
    };
	// BEANIE
	class H_Watchcap_blk;
	class bww_beanie_snow : H_Watchcap_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Beanie (snow)";
        picture = "\bww_helmets\ui\beanie_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bww_helmets\data\beanie_snow.paa"};
    };
	// COMBAT HELMET
	class H_HelmetB_plain_blk;
	class bww_combat_helmet_snow : H_HelmetB_plain_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Combat Helmet (snow)";
        picture = "\bww_helmets\ui\combat_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bww_helmets\data\combat_helmet_snow.paa"};
    };
};