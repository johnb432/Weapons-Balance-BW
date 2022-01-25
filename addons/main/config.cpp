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
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-BW";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
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
