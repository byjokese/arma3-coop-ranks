#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class FSG_Ranks {
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
	class FSG_Ranks: NO_CATEGORY {
		displayName = "FSG Ranks";
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

    class FSG_forceRanks: Module_F {
		scope = 2;
		displayName = "Enable KP Ranks";
		icon = "\FSG_Ranks\kplogo_ca.paa";
		category = "FSG_Ranks";

		function = "FSG_fnc_forceRanks";
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
	class FSG {
		class FSG_Ranks {
			file = "\FSG_Ranks\functions";
			class forceRanks{};
		};
	};
};

class Extended_PostInit_EventHandlers {
    class FSG_Ranks_post_init_event {
        init = "call compile preprocessFileLineNumbers '\FSG_Ranks\XEH_postInit.sqf'";
    };
};

class CfgUnitInsignia {
	// FSG
	class FSG_0 {
		displayName = "[FSG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_1 {
		displayName = "[FSG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\1_Soldado.paa";
		textureVehicle = "";
	};
	class FSG_2 {
		displayName = "[FSG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\1_Soldado.paa";
		textureVehicle = "";
	};
};
