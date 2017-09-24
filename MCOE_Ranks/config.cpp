#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class MCOE_Ranks {
		name = "FSG Ranks";
		author = "Wyqer";
		url = "";

		requiredVersion = 1.72;
		requiredAddons[] = {"A3_Modules_F","Extended_EventHandlers"};
		units[] = {"KP_forceRanks"};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class MCOE_Ranks: NO_CATEGORY {
		displayName = "MCOE Ranks";
	};
};

class CfgVehicles {
	class Logic;
	class Module_F: Logic {
		class AttributesBase {
			class Default;
			class ModuleDescription;
		};
		class ModuleDescription {
			class AnyBrain;
		};
	};

    class MCOE_forceRanks: Module_F {
		scope = 2;
		displayName = "Enable KP Ranks";
		icon = "\MCOE_Ranks\kplogo_ca.paa";
		category = "MCOE_Ranks";

		function = "MCOE_fnc_forceRanks";
		functionPriority = 1;
		isGlobal = 1;
		isTriggerActivated = 0;
		isDisposable = 0;
		is3DEN = 0;

		class Attributes: AttributesBase {
			class ModuleDescription: ModuleDescription{};
		};

		class ModuleDescription: ModuleDescription {
			description = "Force usage and activate the KP Ranks automatic insignia assignment function";
			sync[] = {"AnyPlayer"};
			position = 0;
			direction = 0;
			optional = 1;
			duplicate = 0;
		};
    };
};

class CfgFunctions {
	class MCOE {
		class MCOE_Ranks {
			file = "\MCOE_Ranks\functions";
			class forceRanks{};
		};
	};
};

class Extended_PostInit_EventHandlers {
    class MCOE_Ranks_post_init_event {
        init = "call compile preprocessFileLineNumbers '\MCOE_Ranks\XEH_postInit.sqf'";
    };
};

class CfgUnitInsignia {
	// MCOE
	class MCOE_0 {
		displayName = "[FSG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class MCOE_1 {
		displayName = "[FSG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\mcoe\1_Soldado.paa";
		textureVehicle = "";
	};
};
