#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class FSG_Ranks {
		name = "FSG Ranks";
		author = "Wyqer";
		url = "";

		requiredVersion = 1.72;
		requiredAddons[] = {"A3_Modules_F","Extended_EventHandlers"};
		units[] = {"FSG_forceRanks"};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class FSG_Ranks: NO_CATEGORY {
		displayName = "KP Ranks";
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
		texture = "\FSG_Ranks\ranks\fsg\1_soldado.paa";
		textureVehicle = "";
	};
	class FSG_1 {
		displayName = "[FSG] Insignia de Cabo";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\kpd1_ca.paa";
		textureVehicle = "";
	};
	class FSG_2 {
		displayName = "[FSG] Insignia de Sargento";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\kpd2_ca.paa";
		textureVehicle = "";
	};
	class FSG_3 {
		displayName = "[FSG] Insignia de Alférez";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\kpd3_ca.paa";
		textureVehicle = "";
	};
	class FSG_4 {
		displayName = "[FSG] Insignia de Teniente";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\kpd4_ca.paa";
		textureVehicle = "";
	};
	class FSG_5 {
		displayName = "[FSG] Insignia de Capitán";
		author = "[KP] Wyqer";
		texture = "\FSG_Ranks\ranks\fsg\kpd5_ca.paa";
		textureVehicle = "";
	};
	class FSG_6 {
		displayName = "BWT06 Unteroffizier";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_7 {
		displayName = "BWT07 Stabsunteroffizier";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_8 {
		displayName = "BWT08 Feldwebel";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_9 {
		displayName = "BWT09 Oberfeldwebel";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_10 {
		displayName = "BWT10 Hauptfeldwebel";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_11 {
		displayName = "BWT11 Stabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_12 {
		displayName = "BWT12 Oberstabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_13 {
		displayName = "BWT13 Leutenant";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_14 {
		displayName = "BWT14 Oberleutnant";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_15 {
		displayName = "BWT15 Hauptmann";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_16 {
		displayName = "BWT16 Stabshauptmann";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_17 {
		displayName = "BWT17 Major";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_18 {
		displayName = "BWT18 Oberstleutnant";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
	class FSG_19 {
		displayName = "BWT19 Oberst";
		author = "[KP] Wyqer";
		texture = "";
		textureVehicle = "";
	};
};
