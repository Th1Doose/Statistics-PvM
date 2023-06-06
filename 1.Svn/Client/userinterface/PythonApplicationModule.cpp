//Search for:
#ifdef ENABLE_COSTUME_SYSTEM
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	1);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_COSTUME_SYSTEM",	0);
#endif

//Add after:
#ifdef __STATISTICS__
	PyModule_AddIntConstant(poModule, "__STATISTICS__", 1);
#else
	PyModule_AddIntConstant(poModule, "__STATISTICS__", 0);
#endif