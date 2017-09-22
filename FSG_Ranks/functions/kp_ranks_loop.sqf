waitUntil {sleep 1; FSG_Ranks_init_done};

if (isNil "FSG_Ranks_enable") exitWith {FSG_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};
if (!FSG_Ranks_enable) exitWith {FSG_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};

FSG_Ranks_check = true;

private ["_rank", "_faction", "_uniform", "_insigniaClass"];

_rank = 0;
_faction = "";
_uniform = "";
_insigniaClass = "";

diag_log "[KP RANKS] Automatic insignia assignment enabled";

while {true} do {
	hint "";
	if ((player getVariable "FSG_Ranks_rank") != _rank || (uniform player) != _uniform) then {
		_rank = player getVariable "FSG_Ranks_rank";
		_uniform = uniform player;
	diag_log format ["[DEBUG KP]Uniforme: %1", _uniform];
	diag_log format ["[DEBUG KP]Rango: %1", _rank];
		{
			if (_uniform == (_x select 0)) exitWith {
				switch (_x select 1) do {
					case 0: { //MCOE
						_faction = "MCOE_";
						_insigniaClass = _faction + str _rank;
					};
					case 1: { //FSG
						_faction = "FSG_";
						_insigniaClass = _faction + str _rank;
					};
					default {
						_insigniaClass = "";
					};
				};
			};
		} forEach FSG_Ranks_uniforms;
	};
	diag_log format ["Insignia a poner: %1", _insigniaClass];
	[player, _insigniaClass] call BIS_fnc_setUnitInsignia;

	waitUntil {uiSleep 5;
		(((([player] call BIS_fnc_getUnitInsignia) != _insigniaClass) || ((player getVariable "FSG_Ranks_rank") != _rank)) && ((uniform player) in FSG_Ranks_uniform_classnames))
	};
};

FSG_Ranks_check = false;