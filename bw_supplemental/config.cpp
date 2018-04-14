class CfgPatches
{
    class bw_supplemental
    {
        units[] = {
			"bww_special_snow",
			"bww_stealth_snow",
			"bww_combat_digital_snow",
			"bww_combat_digital_rolled_snow"
			};
		weapons[] = {
			"bww_special_u_snow",
			"bww_stealth_u_snow",
			"bww_combat_digital_u_snow",
			"bww_combat_digital_rolled_u_snow",
			"bww_viper_helmet_snow",
			"bww_stealth_helmet_snow",
			"bww_beanie_snow",
			"bww_combat_helmet_snow",
			"bww_carrier_snow",
			"bww_carrier_gl_snow",
			"bww_carrier_spec_snow",
			"bww_ga_carrier_snow",
			"bww_ga_carrier_lite_snow"
			};
		vehicles[] = {
			"bww_badger_snow",
			"bww_marid_snow"
			};
        requiredVersion = 0.1;
    };
};

class CfgVehicles
{
	// backpacks
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
	
	// soldierbases
	class B_Soldier_base_F;
	// OPFOR
    class bww_special_snow: B_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWW] Special Suit Snow Soldier";
		model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
		picture = "\bww_uniforms\ui\viper_suit_snow_icon.paa";
		uniformClass = "bww_special_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bww_uniforms\data\viper_suit_snow.paa"};
	};
	// BLUFOR
	class O_Soldier_base_F;
    class bww_stealth_snow: O_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWW] Stealth Uniform Snow Soldier";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\bww_uniforms\ui\stealth_uniform_snow_icon.paa";
		uniformClass = "bww_stealth_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bww_uniforms\data\stealth_uniform_snow.paa"};
	};
	// INDFOR
	class I_Soldier_base_F;
    class bww_combat_digital_snow: I_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWW] Combat Uniform Snow Soldier";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		picture = "\bww_uniforms\ui\combat_digital_snow_icon.paa";
		uniformClass = "bww_combat_digital_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bww_uniforms\data\combat_digital_snow.paa"};
	};
    class bww_combat_digital_rolled_snow: I_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWW] Combat Uniform Rolled Snow Soldier";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		picture = "\bww_uniforms\ui\combat_digital_rolled_snow_icon.paa";
		uniformClass = "bww_combat_digital_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bww_uniforms\data\combat_digital_snow.paa"};
	};
	
	// vehicles
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


class cfgWeapons
{
	// uniforms
	class UniformItem;
	// OPFOR
	class U_O_V_Soldier_Viper_F;
	class bww_special_u_snow: U_O_V_Soldier_Viper_F
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Special Suit (Snow)";
		picture = "\bww_uniforms\ui\viper_suit_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bww_uniforms\data\viper_suit_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bww_special_snow";
			containerClass = Supply20;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 120;
		};
	};
	// BLUFOR
	class U_B_CTRG_Soldier_F;
	class bww_stealth_u_snow: U_B_CTRG_Soldier_F
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Stealth Uniform (Snow)";
		picture = "\bww_uniforms\ui\stealth_uniform_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bww_uniforms\data\stealth_uniform_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bww_stealth_snow";
			containerClass = Supply40;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 40;
		};
	};
	// INDFOR
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class bww_combat_digital_u_snow: U_I_CombatUniform
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Combat Uniform (Snow)";
		picture = "\bww_uniforms\ui\combat_digital_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bww_uniforms\data\combat_digital_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bww_combat_digital_snow";
			containerClass = Supply40;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 40;
		};
	};
	class bww_combat_digital_rolled_u_snow: U_I_CombatUniform_shortsleeve
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWW] Combat Uniform Rolled (Snow)";
		picture = "\bww_uniforms\ui\combat_digital_rolled_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bww_uniforms\data\combat_digital_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bww_combat_digital_rolled_snow";
			containerClass = Supply40;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 40;
		};
	};
	
	// helmets
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
	
	// vests
	// CARRIER
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
	// SPECIAL
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