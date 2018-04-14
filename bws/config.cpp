class CfgPatches
{
    class bws
    {
        units[] = {
			"bws_special_snow",
			"bws_stealth_snow",
			"bws_combat_digital_snow",
			"bws_combat_digital_rolled_snow"
			};
		weapons[] = {
			"bws_special_u_snow",
			"bws_stealth_u_snow",
			"bws_combat_digital_u_snow",
			"bws_combat_digital_rolled_u_snow",
			"bws_viper_helmet_snow",
			"bws_stealth_helmet_snow",
			"bws_beanie_snow",
			"bws_combat_helmet_snow",
			"bws_carrier_snow",
			"bws_carrier_gl_snow",
			"bws_carrier_spec_snow",
			"bws_ga_carrier_snow",
			"bws_ga_carrier_lite_snow"
			};
		vehicles[] = {
			"bws_badger_snow",
			"bws_marid_snow",
			"bws_marid_grey",
			"bws_marid_digi",
			"bws_kuma_grey"
			};
        requiredVersion = 0.1;
    };
};

class CfgVehicles
{
	// backpacks
	class B_AssaultPack_rgr;
    class bws_snow_assault: B_AssaultPack_rgr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWS] Assault pack (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact.p3d";
        picture = "\bws\ui\snow_assault_icon.paa";
		hiddenSelectionsTextures[]={"\bws\data\snow_assault.paa"};
	};
	class B_Kitbag_rgr;
    class bws_snow_kitbag: B_Kitbag_rgr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWS] Kitbag (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast.p3d";
        picture = "\bws\ui\snow_kitbag_icon.paa";
		hiddenSelectionsTextures[]={"\bws\data\snow_kitbag.paa"};
	};
	class B_Carryall_cbr;
    class bws_snow_carryall: B_Carryall_cbr
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWS] Carryall (snow)";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila.p3d";
        picture = "\bws\ui\snow_carryall_icon.paa";
		hiddenSelectionsTextures[]={"\bws\data\snow_carryall.paa"};
	};
	class B_ViperHarness_blk_F;
    class bws_snow_viper: B_ViperHarness_blk_F
	{
		author = "smiter";
		scope = 2;
		displayName  = "[BWS] Viper pack (snow)";
		model = "\A3\Supplies_F_Exp\Bags\B_ViperHarness_F.p3d";
        picture = "\bws\ui\snow_viper_icon.paa";
		hiddenSelectionsTextures[]={"\bws\data\snow_viper.paa"};
	};
	
	// soldierbases
	class B_Soldier_base_F;
	// OPFOR
    class bws_special_snow: B_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWS] Special Suit Snow Soldier";
		model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";
		picture = "\bws\ui\viper_suit_snow_icon.paa";
		uniformClass = "bws_special_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bws\data\viper_suit_snow.paa"};
	};
	// BLUFOR
	class O_Soldier_base_F;
    class bws_stealth_snow: O_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWS] Stealth Uniform Snow Soldier";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\bws\ui\stealth_uniform_snow_icon.paa";
		uniformClass = "bws_stealth_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bws\data\stealth_uniform_snow.paa"};
	};
	// INDFOR
	class I_Soldier_base_F;
    class bws_combat_digital_snow: I_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWS] Combat Uniform Snow Soldier";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		picture = "\bws\ui\combat_digital_snow_icon.paa";
		uniformClass = "bws_combat_digital_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bws\data\combat_digital_snow.paa"};
	};
    class bws_combat_digital_rolled_snow: I_Soldier_base_F
	{
		author = "smiter";
		scope = 1;
		displayName  = "[BWS] Combat Uniform Rolled Snow Soldier";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		picture = "\bws\ui\combat_digital_rolled_snow_icon.paa";
		uniformClass = "bws_combat_digital_snow_u";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\bws\data\combat_digital_snow.paa"};
	};
	
	// vehicles
	// Blufor
	class B_APC_Wheeled_01_cannon_F;
	class bws_badger_snow : B_APC_Wheeled_01_cannon_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWS] Badger (Snow)";
	hiddenSelectionsTextures[]= {"\bws\data\badger_snow.paa","\bws\data\badger_under_snow.paa","\bws\data\badger_turret_snow.paa"};
	};
	// Opfor
	class O_APC_Wheeled_02_rcws_v2_F;
	class bws_marid_snow : O_APC_Wheeled_02_rcws_v2_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWS] Marid (Snow)";
	hiddenSelectionsTextures[]= {"\bws\data\marid_snow.paa","\bws\data\marid_under_snow.paa","\bws\data\marid_turret_snow.paa"};
	};
	class bws_marid_grey : O_APC_Wheeled_02_rcws_v2_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWS] Marid (Grey)";
	hiddenSelectionsTextures[]= {"\bws\data\marid_grey.paa","\bws\data\marid_under_grey.paa","\bws\data\marid_turret_grey.paa"};
	};
	class bws_marid_digi : O_APC_Wheeled_02_rcws_v2_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWS] Marid (Digital)";
	hiddenSelectionsTextures[]= {"\bws\data\marid_digi.paa","\bws\data\marid_under_digi.paa","\bws\data\marid_turret_digi.paa"};
	};
	class I_MBT_03_cannon_F;
	class bws_kuma_grey : I_MBT_03_cannon_F
	{
	author = "QT";
	scope = 2;
	scopeArsenal= 2;
	displayName ="[BWS] Kuma (Grey)";
	hiddenSelectionsTextures[]= {"\bws\data\kuma_grey.paa","\bws\data\kuma_under_grey.paa","\bws\data\kuma_turret_grey.paa"};
	};
};


class cfgWeapons
{
	// uniforms
	class UniformItem;
	// BLUFOR
	class U_B_CTRG_Soldier_F;
	class bws_stealth_u_snow: U_B_CTRG_Soldier_F
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Stealth Uniform (Snow)";
		picture = "\bws\ui\stealth_uniform_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bws\data\stealth_uniform_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bws_stealth_snow";
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
	class bws_combat_digital_u_snow: U_I_CombatUniform
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Combat Uniform (Snow)";
		picture = "\bws\ui\combat_digital_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bws\data\combat_digital_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bws_combat_digital_snow";
			containerClass = Supply40;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 40;
		};
	};
	class bws_combat_digital_rolled_u_snow: U_I_CombatUniform_shortsleeve
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Combat Uniform Rolled (Snow)";
		picture = "\bws\ui\combat_digital_rolled_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bws\data\combat_digital_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bws_combat_digital_rolled_snow";
			containerClass = Supply40;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 40;
		};
	};
	// OPFOR
	class U_O_V_Soldier_Viper_F;
	class bws_special_u_snow: U_O_V_Soldier_Viper_F
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Special Suit (Snow)";
		picture = "\bws\ui\viper_suit_snow_icon.paa";
		hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {"\bws\data\viper_suit_snow.paa"};
		class ItemInfo: UniformItem
		{
			uniformClass = "bws_special_snow";
			containerClass = Supply20;
			uniformModel = "-";
			scope = 0;
			type = 801;
			mass = 120;
		};
	};
	
	// helmets
	// VIPER
    class H_HelmetO_ViperSP_ghex_F;
    class bws_viper_helmet_snow : H_HelmetO_ViperSP_ghex_F
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Viper Helmet (Snow)";
        picture = "\bws\ui\viper_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bws\data\viper_helmet_snow.paa"};
    };
	// STEALTH
	class H_HelmetB_TI_tna_F;
    class bws_stealth_helmet_snow : H_HelmetB_TI_tna_F
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Stealth Helmet (Snow)";
        picture = "\bws\ui\stealth_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bws\data\stealth_helmet_snow.paa"};
    };
	// BEANIE
	class H_Watchcap_blk;
	class bws_beanie_snow : H_Watchcap_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Beanie (snow)";
        picture = "\bws\ui\beanie_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bws\data\beanie_snow.paa"};
    };
	// COMBAT HELMET
	class H_HelmetB_plain_blk;
	class bws_combat_helmet_snow : H_HelmetB_plain_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] Combat Helmet (snow)";
        picture = "\bws\ui\combat_helmet_snow_icon.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\bws\data\combat_helmet_snow.paa"};
    };
	
	// vests
	// CARRIER
	class V_PlateCarrier2_blk;
    class bws_carrier_snow: V_PlateCarrier2_blk
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWS] Carrier lite (Snow)";
        picture = "\bws\ui\carrier_snow_icon.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
        hiddenSelectionsTextures[] = {"\bws\data\carrier_snow.paa"};
    };
	// GL
	class V_PlateCarrierGL_rgr;
    class bws_carrier_gl_snow: V_PlateCarrierGL_rgr
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWS] Carrier GL (snow)";
        picture = "\bws\ui\carrier_gl_snow_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
        hiddenSelectionsTextures[] = {"\bws\data\carrier_spec_snow.paa"};
	};
	// SPECIAL
	class V_PlateCarrierSpec_rgr;
    class bws_carrier_spec_snow: V_PlateCarrierSpec_rgr
    {
        author = "smiter";
        scope = 2;
		scopeArsenal = 2;
        displayName = "[BWS] Carrier Special (snow)";
        picture = "\bws\ui\carrier_spec_snow_icon.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
        hiddenSelectionsTextures[] = {"\bws\data\carrier_spec_snow.paa"};
	};
	// GA
	class V_PlateCarrierIA1_dgtl;
	class bws_ga_carrier_lite_snow: V_PlateCarrierIA1_dgtl
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] GA Carrier Lite (Snow)";
		picture = "\bws\ui\ga_carrier_snow_lite_icon.paa";
		model = "\A3\Characters_F_beta\INDEP\equip_ia_vest01.p3d";
		hiddenSelectionsTextures[] = {"\bws\data\ga_carrier_snow.paa"};
	};
	class V_PlateCarrierIA2_dgtl;
	class bws_ga_carrier_snow: V_PlateCarrierIA2_dgtl
	{
		author = "smiter";
		scope = 2;
		scopeArsenal = 2;
		displayName = "[BWS] GA Carrier (Snow)";
		picture = "\bws\ui\ga_carrier_snow_icon.paa";
		model = "\A3\Characters_F_beta\INDEP\equip_ia_vest02.p3d";
		hiddenSelectionsTextures[] = {"\bws\data\ga_carrier_snow.paa"};
	};
};