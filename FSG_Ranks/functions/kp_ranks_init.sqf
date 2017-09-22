waitUntil {!isNull player};
waitUntil {sleep 1; alive player};

diag_log "[KP RANKS] Initialising...";

// If unit not listed on the server or has no init entry, set it to lowest rank
if ((player getVariable ["FSG_Ranks_rank", 0]) == 0) then {
	player setVariable ["FSG_Ranks_rank", 0];
};

if (!isNil "FSG_Ranks_list") then {
	diag_log "[KP RANKS] Server ranks list found";
	{
		if ( (getPlayerUID player) isEqualTo (_x select 0) ) then {
			player setVariable ["FSG_Ranks_rank", (_x select 1)];
		};
	} forEach FSG_Ranks_list;
} else {
	diag_log "[KP RANKS] No server ranks list found";
};

// If no serverconfig available for the uniforms, use the standard list
if (isNil "FSG_Ranks_uniforms") then {
	diag_log "[KP RANKS] No server uniform list found";
	FSG_Ranks_uniforms = [
		//Lista de uniformes, si no está la BD
	]
} else {
	diag_log "[KP RANKS] Server uniform list found";
};

FSG_Ranks_uniform_classnames = [];
{
	FSG_Ranks_uniform_classnames pushBack (_x select 0);
} forEach FSG_Ranks_uniforms;


diag_log "[KP RANKS] Initialising done";
FSG_Ranks_init_done = true;
