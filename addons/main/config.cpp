#pragma hemtt flag pe23_ignore_has_include

#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "bwa3_loadorder",
            #if __has_include("\z\ace\addons\main\script_component.hpp")
                "bwa3_comp_ace"
            #endif
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
        class __base_rightSiderailPointer;
        class BWA3_acc_VarioRay_irlaser_black: __base_rightSiderailPointer {};
        class BWA3_acc_VarioRay_irlaser: __base_rightSiderailPointer {};

        class BWA3_acc_LLM01_irlaser: __base_rightSiderailPointer {};
        class BWA3_acc_LLM01_irlaser_green: __base_rightSiderailPointer {};
        class BWA3_acc_LLM01_irlaser_tan: __base_rightSiderailPointer {};
    };
};
