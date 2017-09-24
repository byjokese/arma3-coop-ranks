if (isDedicated) then {
	// Get userconfig from dedicated server
	call compile preprocessFileLineNumbers "\FSG_Ranks\functions\kp_ranks_loadServerconfig.sqf";
} else {
	// If local player, compile init function
	FSG_Ranks_init = compile preprocessFileLineNumbers "\FSG_Ranks\functions\kp_ranks_init.sqf";
	// Compile loop function
	FSG_Ranks_loop = compile preprocessFileLineNumbers "\FSG_Ranks\functions\kp_ranks_loop.sqf";
	if ((side player) != sideLogic) then {
		// Initialize KP Ranks
		KP_Ranks_init_done = false;
		KP_Ranks_enable = true;
		[] spawn FSG_Ranks_init;
		// Start the loop
		[] spawn FSG_Ranks_loop;
	};
};
