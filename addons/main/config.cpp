#include "script_component.hpp"

/*
20:32:39 Warning Message: Error: creating weapon BWA3_acc_LLMPI_laser with scope=private
20:32:39 [weapon BWA3_P12]: item[BWA3_acc_LLMPI_laser] does not match to this weapon!
20:32:42 [weapon BWA3_P12]: item[BWA3_acc_LLMPI_laser] does not match to this weapon!


20:35:59 [weapon BWA3_P8]: item[BWA3_acc_LLMPI_laser] does not match to this weapon!
20:36:08 [weapon BWA3_P8]: item[BWA3_acc_LLMPI_irlaser] does not match to this weapon!

21:50:18 [weapon BWA3_G36A3_tan]: item[BWA3_acc_VarioRay_laser_black] does not match to this weapon!
*/
/*
class BWA3_acc_VarioRay_irlaser;
class BWA3_acc_VarioRay_irlaser {
    scope = 2;
};
*/

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "bwa3_g28",
            "bwa3_g36",
            "bwa3_g38",
            "bwa3_g82",
            "bwa3_mg3",
            "bwa3_mg4",
            "bwa3_mg5",
            "bwa3_mp7",
            "bwa3_carlgustav",
            "bwa3_uniforms",
            "bwa3_vests",
            "bwa3_weapons",
            "bwa3_puma",
            "bwa3_comp_ace"
        };
        author = "johnb43";
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
