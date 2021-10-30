#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "bwa3_loadorder",
            "bwa3_comp_ace"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-BW";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - BWMod";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - BWMod";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-BW";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_bw\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_bw\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_bw\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

class BettIR_Config {
    class CompatibleAttachments {
        class bwa3_acc_varioray_irlaser_black {
            offset[] = {0.15, 0.22, 0.25};
        };
        class bwa3_acc_varioray_irlaser {
            offset[] = {0.15, 0.22, 0.25};
        };

        class bwa3_acc_llm01_irlaser {
            offset[] = {0.15, 0.22, 0.25};
        };
        class bwa3_acc_llm01_irlaser_green {
            offset[] = {0.15, 0.22, 0.25};
        };
        class bwa3_acc_llm01_irlaser_tan {
            offset[] = {0.15, 0.22, 0.25};
        };
    };
};
