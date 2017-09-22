waitUntil {sleep 1; KP_Ranks_init_done};

if (isNil "KP_Ranks_enable") exitWith {KP_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};
if (!KP_Ranks_enable) exitWith {KP_Ranks_check = false; diag_log "[KP RANKS] Automatic insignia assignment not enabled";};

KP_Ranks_check = true;

private ["_rank", "_faction", "_uniform", "_insigniaClass"];

_rank = 0;
_faction = "";
_uniform = "";
_insigniaClass = "";

diag_log "[KP RANKS] Automatic insignia assignment enabled";

while {true} do {
	hint "";
	if ((player getVariable "KP_Ranks_rank") != _rank || (uniform player) != _uniform) then {
		_rank = player getVariable "KP_Ranks_rank";
		_uniform = uniform player;

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
		} forEach KP_Ranks_uniforms;
	};

	[player, _insigniaClass] call BIS_fnc_setUnitInsignia;

	waitUntil {uiSleep 5;
		(((([player] call BIS_fnc_getUnitInsignia) != _insigniaClass) || ((player getVariable "KP_Ranks_rank") != _rank)) && ((uniform player) in KP_Ranks_uniform_classnames))
	};
};

KP_Ranks_check = false;