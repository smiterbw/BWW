class CfgPatches
{
	class bww_vests
	{
		units[] = {};
		weapons[] = {
			"bww_carrier_snow",
			"bww_carrier_gl_snow",
			"bww_carrier_spec_snow",
			"bww_ga_carrier_snow",
			"bww_ga_carrier_lite_snow"
			};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Beta"};
		author = "smiter";
	};
};

class cfgWeapons
{
	// CAMO CARRIER
	class V_PlateCarrier2_blk;
    class bww_carrier_snow: V_PlateCarrier2_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWW] Carrier lite (Snow)";
        picture = "\bww_vests\ui\carrier_snow_icon.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
        hiddenSelectionsTextures[] = {"\bww_vests\data\carrier_snow.paa"};
    };
	// GL
	class V_PlateCarrierGL_rgr;
    class bww_carrier_gl_snow: V_PlateCarrierGL_rgr
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWW] Carrier GL (snow)";
        picture = "\bww_vests\ui\carrier_gl_snow_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
        hiddenSelectionsTextures[] = {"\bww_vests\data\carrier_spec_snow.paa"};
	};
	// SPEC
	class V_PlateCarrierSpec_rgr;
    class bww_carrier_spec_snow: V_PlateCarrierSpec_rgr
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWW] Carrier Special (snow)";
        picture = "\bww_vests\ui\carrier_spec_snow_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
        hiddenSelectionsTextures[] = {"\bww_vests\data\carrier_spec_snow.paa"};
	};
	// GA
	class V_PlateCarrierIA1_dgtl;
	class bww_ga_carrier_lite_snow: V_PlateCarrierIA1_dgtl
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] GA Carrier Lite (Snow)";
		picture = "\bww_vests\ui\ga_carrier_snow_lite_icon.paa";
		model = "\A3\Characters_F_beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelectionsTextures[] = {"\bww_vests\data\ga_carrier_snow.paa"};
	};
	class V_PlateCarrierIA2_dgtl;
	class bww_ga_carrier_snow: V_PlateCarrierIA2_dgtl
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] GA Carrier (Snow)";
		picture = "\bww_vests\ui\ga_carrier_snow_icon.paa";
		model = "\A3\Characters_F_beta\INDEP\equip_ia_vest02.p3d";
		hiddenSelectionsTextures[] = {"\bww_vests\data\ga_carrier_snow.paa"};
	};
};