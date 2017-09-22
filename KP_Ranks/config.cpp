#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class KP_Ranks {
		name = "KP Ranks";
		author = "Wyqer";
		url = "";
 
		requiredVersion = 1.72;
		requiredAddons[] = {"A3_Modules_F","Extended_EventHandlers"};
		units[] = {"KP_forceRanks"};
	};
};

class CfgFactionClasses {
	class NO_CATEGORY;
	class KP_Ranks: NO_CATEGORY {
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

    class KP_forceRanks: Module_F {
		scope = 2;
		displayName = "Enable KP Ranks";
		icon = "\KP_Ranks\kplogo_ca.paa";
		category = "KP_Ranks";

		function = "KP_fnc_forceRanks";
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
	class KP {
		class KP_Ranks {
			file = "\KP_Ranks\functions";
			class forceRanks{};
		};
	};
};

class Extended_PostInit_EventHandlers {
    class KP_Ranks_post_init_event {
        init = "call compile preprocessFileLineNumbers '\KP_Ranks\XEH_postInit.sqf'";
    };
};

class CfgUnitInsignia {
	// MCOE
	class MCOE_0 {
		displayName = "[MCOE] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\1_Soldado.paa";
		textureVehicle = "";
	};
	class MCOE_1 {
		displayName = "[MCOE] Insignia de Cabo";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\2_Cabo.paa";
		textureVehicle = "";
	};
	class MCOE_2 {
		displayName = "[MCOE] Insignia de Sargento";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\3_Sargento.paa";
		textureVehicle = "";
	};
	class MCOE_3 {
		displayName = "[MCOE] Insignia de Alférez";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\4_Alferez.paa";
		textureVehicle = "";
	};
	class MCOE_4 {
		displayName = "[MCOE] Insignia de Teniente";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\5_Teniente.paa";
		textureVehicle = "";
	};
	class MCOE_5 {
		displayName = "[MCOE] Insignia de Capitán";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\6_Capitan.paa";
		textureVehicle = "";
	};
	class MCOE_6 {
		displayName = "BWF06 Unteroffizier";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd6_ca.paa";
		textureVehicle = "";
	};
	class MCOE_7 {
		displayName = "BWF07 Stabsunteroffizier";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd7_ca.paa";
		textureVehicle = "";
	};
	class MCOE_8 {
		displayName = "BWF08 Feldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd8_ca.paa";
		textureVehicle = "";
	};
	class MCOE_9 {
		displayName = "BWF09 Oberfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd9_ca.paa";
		textureVehicle = "";
	};
	class MCOE_10 {
		displayName = "BWF10 Hauptfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd10_ca.paa";
		textureVehicle = "";
	};
	class MCOE_11 {
		displayName = "BWF11 Stabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd11_ca.paa";
		textureVehicle = "";
	};
	class MCOE_12 {
		displayName = "BWF12 Oberstabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd12_ca.paa";
		textureVehicle = "";
	};
	class MCOE_13 {
		displayName = "BWF13 Leutenant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd13_ca.paa";
		textureVehicle = "";
	};
	class MCOE_14 {
		displayName = "BWF14 Oberleutnant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd14_ca.paa";
		textureVehicle = "";
	};
	class MCOE_15 {
		displayName = "BWF15 Hauptmann";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd15_ca.paa";
		textureVehicle = "";
	};
	class MCOE_16 {
		displayName = "BWF16 Stabshauptmann";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd16_ca.paa";
		textureVehicle = "";
	};
	class MCOE_17 {
		displayName = "BWF17 Major";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd17_ca.paa";
		textureVehicle = "";
	};
	class MCOE_18 {
		displayName = "BWF18 Oberstleutnant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd18_ca.paa";
		textureVehicle = "";
	};
	class MCOE_19 {
		displayName = "BWF19 Oberst";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\mcoe\kpd19_ca.paa";
		textureVehicle = "";
	};

/********************************************************************
*********************************************************************
********************************************************************/

	// FSG
	class FSG_0 {
		displayName = "[FG] Insignia de Soldado";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd0_ca.paa";
		textureVehicle = "";
	};
	class FSG_1 {
		displayName = "[FG] Insignia de Cabo";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd1_ca.paa";
		textureVehicle = "";
	};
	class FSG_2 {
		displayName = "[FG] Insignia de Sargento";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd2_ca.paa";
		textureVehicle = "";
	};
	class FSG_3 {
		displayName = "[FG] Insignia de Alférez";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd3_ca.paa";
		textureVehicle = "";
	};
	class FSG_4 {
		displayName = "[FG] Insignia de Teniente";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd4_ca.paa";
		textureVehicle = "";
	};
	class FSG_5 {
		displayName = "[FG] Insignia de Capitán";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd5_ca.paa";
		textureVehicle = "";
	};
	class FSG_6 {
		displayName = "BWT06 Unteroffizier";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd6_ca.paa";
		textureVehicle = "";
	};
	class FSG_7 {
		displayName = "BWT07 Stabsunteroffizier";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd7_ca.paa";
		textureVehicle = "";
	};
	class FSG_8 {
		displayName = "BWT08 Feldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd8_ca.paa";
		textureVehicle = "";
	};
	class FSG_9 {
		displayName = "BWT09 Oberfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd9_ca.paa";
		textureVehicle = "";
	};
	class FSG_10 {
		displayName = "BWT10 Hauptfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd10_ca.paa";
		textureVehicle = "";
	};
	class FSG_11 {
		displayName = "BWT11 Stabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd11_ca.paa";
		textureVehicle = "";
	};
	class FSG_12 {
		displayName = "BWT12 Oberstabsfeldwebel";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd12_ca.paa";
		textureVehicle = "";
	};
	class FSG_13 {
		displayName = "BWT13 Leutenant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd13_ca.paa";
		textureVehicle = "";
	};
	class FSG_14 {
		displayName = "BWT14 Oberleutnant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd14_ca.paa";
		textureVehicle = "";
	};
	class FSG_15 {
		displayName = "BWT15 Hauptmann";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd15_ca.paa";
		textureVehicle = "";
	};
	class FSG_16 {
		displayName = "BWT16 Stabshauptmann";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd16_ca.paa";
		textureVehicle = "";
	};
	class FSG_17 {
		displayName = "BWT17 Major";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd17_ca.paa";
		textureVehicle = "";
	};
	class FSG_18 {
		displayName = "BWT18 Oberstleutnant";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd18_ca.paa";
		textureVehicle = "";
	};
	class FSG_19 {
		displayName = "BWT19 Oberst";
		author = "[KP] Wyqer";
		texture = "\KP_Ranks\ranks\fsg\kpd19_ca.paa";
		textureVehicle = "";
	};
};
