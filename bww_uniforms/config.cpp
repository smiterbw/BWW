class CfgPatches
{
    class bww_uniforms
    {
        units[] = {
			"bww_special_snow",
			"bww_stealth_snow",
			"bww_combat_digital_snow",
			"bww_combat_digital_rolled_snow"
			};
        weapons[] = {
			"bww_special_snow_u",
			"bww_stealth_snow_u",
			"bww_combat_digital_snow_u",
			"bww_combat_digital_rolled_snow_u"
			};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_Characters_F_Exp"};
    };
};

class CfgVehicles
{
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
};

class cfgWeapons
{
	class UniformItem;
	// OPFOR
	class U_O_V_Soldier_Viper_F;
	class bww_special_snow_u: U_O_V_Soldier_Viper_F
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
	class bww_stealth_snow_u: U_B_CTRG_Soldier_F
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
	class bww_combat_digital_snow_u: U_I_CombatUniform
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
	class bww_combat_digital_rolled_snow_u: U_I_CombatUniform_shortsleeve
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
};