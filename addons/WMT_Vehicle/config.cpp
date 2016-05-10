#include "resource\CfgFunctions.h"

class CfgPatches
{
	class wmt_vehicle
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F_OPFOR","A3_Characters_F_Gamma","A3_Characters_F_INDEP","A3_Characters_F_Civil"};
		authorUrl = "https://github.com/iEzhuk/WMT_MapTools";
		author[]= {"Zealot, Ezhuk"};
		version = 1.4.4;
		versionStr = "1.4.4";
		versionAr[] = {1,4,4};
	};
};

class RscTitles
{
	#include "resource\RscWMTProgressBar.h"
//	#include "resource\RscWMTVehicleCrew.h"
};

