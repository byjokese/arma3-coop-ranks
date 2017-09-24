if (isDedicated) then {
	// Get userconfig from dedicated server
	call compile preprocessFileLineNumbers "\MCOE_Ranks\functions\kp_ranks_loadServerconfig.sqf";
} else {
	// If local player, compile init function
	MCOE_Ranks_init = compile preprocessFileLineNumbers "\MCOE_Ranks\functions\kp_ranks_init.sqf";
	// Compile loop function
	MCOE_Ranks_loop = compile preprocessFileLineNumbers "\MCOE_Ranks\functions\kp_ranks_loop.sqf";
	if ((side player) != sideLogic) then {
		// Initialize KP Ranks
		KP_Ranks_init_done = false;
		KP_Ranks_enable = true;
		[] spawn MCOE_Ranks_init;
		// Start the loop
		[] spawn MCOE_Ranks_loop;
	};
};
