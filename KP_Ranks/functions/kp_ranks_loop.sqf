waitUntil {sleep 1; KP_Ranks_init_done};

if (isNil "KP_Ranks_enable") exitWith {KP_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};
if (!KP_Ranks_enable) exitWith {KP_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};

KP_Ranks_check = true;

private ["_rank", "_faction", "_uniform", "_insigniaClass"];

_rank = 0;
_faction = "";
_uniform = "";
_insigniaClass = "MCOE_0";

diag_log "[KP RANKS] Automatic insignia assignment enabled";

while {true} do {
	hint "";
	//diag_log "[KP RANKS] While...";
	if ((player getVariable "KP_Ranks_rank") != _rank || (uniform player) != _uniform) then {
		_rank = player getVariable "KP_Ranks_rank";
		_uniform = uniform player;
	//	diag_log "[KP RANKS] if 1";
	//	diag_log format ["[KP RANKS] Uniform: %1 y Rango: %2", _uniform, _rank];
		{
			if (_uniform == (_x select 0)) exitWith {
			//	diag_log "[KP RANKS] if 2";
				switch (_x select 1) do {
					case 0: { //MCOE
					//diag_log "[KP RANKS] case 0";
						_faction = "MCOE_";
						_insigniaClass = _faction + str _rank;
					};
					case 1: { //FSG
					//diag_log "[KP RANKS] case 1";
						_faction = "FSG_";
						_insigniaClass = _faction + str _rank;
					};
					default {
						_insigniaClass = "";
					};
				};
			};
		} forEach KP_Ranks_uniforms;
	};
	//diag_log format ["[KP RANKS] Insignia: %1", _insigniaClass];
	[player, _insigniaClass] call BIS_fnc_setUnitInsignia;
	//diag_log "[KP RANKS] After Insignia";
	waitUntil {uiSleep 5;
		//diag_log format ["[KP RANKS] wait for uniform: %1", (uniform player)];
		//diag_log format ["[KP RANKS] wait for insignia: %1", [player] call BIS_fnc_getUnitInsignia];
		(((([player] call BIS_fnc_getUnitInsignia) != _insigniaClass) || ((player getVariable "KP_Ranks_rank") != _rank)) && ((uniform player) in KP_Ranks_uniform_classnames))
	};
	//diag_log "[KP RANKS] After Wait Until";
};
//diag_log "[KP RANKS] OUT Of While";

KP_Ranks_check = false;