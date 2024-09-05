#pragma hemtt flag pe23_ignore_has_include

class CfgMagazines {
    class CA_Magazine;
    class 150Rnd_762x51_Box;
    class 20Rnd_762x51_Mag;
    class BWA3_20Rnd_762x51_G28: 20Rnd_762x51_Mag {
        mass = 16.24;
    };

    class BWA3_40Rnd_46x30_MP7: CA_Magazine {
        mass = 8.8;
    };
    class BWA3_20Rnd_46x30_MP7: BWA3_40Rnd_46x30_MP7 {
        mass = 5.5;
    };

    class BWA3_40Rnd_46x30_MP7_SD;
    class BWA3_20Rnd_46x30_MP7_SD: BWA3_40Rnd_46x30_MP7_SD {
        mass = 5.5;
    };

    class BWA3_1200Rnd_762x51: 150Rnd_762x51_Box {
        mass = 341.5;
        scope = 2;
        scopeArsenal = 2;
        model = "\bwa3_mg5\bwa3_ammo_box_mg5.p3d";

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
            modelSpecialIsProxy = 1;
        #endif
    };

    class BWA3_10Rnd_127x99_G82: CA_Magazine {
        mass = 28;
    };

    class BWA3_200Rnd_556x45: CA_Magazine {
        mass = 51.65;

        #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
            modelSpecialIsProxy = 1;
            reloadAction = "rhs_GestureReloadM249";
        #endif
    };


    class BWA3_30Rnd_556x45_G36: CA_Magazine {
        mass = 9.35;

        #if __has_include("\hlc_wp_g36\config.bin")
            model = "\hlc_wp_g36\mesh\magazine\magazine_556.p3d";
            modelSpecial = "\hlc_wp_g36\mesh\magazine\proxy\30rnd_556NATO_G36.p3d";
            modelSpecialIsProxy = 1;
        #else
            #if __has_include("\rhssaf\addons\rhssaf_main\loadorder\config.bin")
                model = "\rhssaf\addons\rhssaf_m_weapon_g36\magazine\magazine_556.p3d";
                modelSpecial = "rhssaf\addons\rhssaf_m_weapon_g36\mag_proxies\rhs_mag_556x45_G36_30rnd";
                modelSpecialIsProxy = 1;
            #endif
        #endif
    };

    #if __has_include("\rhsusf\addons\rhsusf_main\loadorder\config.bin")
        class BWA3_120Rnd_762x51: CA_Magazine {
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
            modelSpecialIsProxy = 1;
        };
        class BWA3_120Rnd_762x51_soft: CA_Magazine {
            modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_762x51_m240_pouch_100rnd";
            modelSpecialIsProxy = 1;
        };
    #else
        #if __has_include("\hlc_wp_m60E4\config.bin")
            class BWA3_120Rnd_762x51: CA_Magazine {
                modelSpecial = "\hlc_core\mesh\magazines\proxies\50Rnd_762NATO_M60";
                modelSpecialIsProxy = 1;
            };
            class BWA3_120Rnd_762x51_soft: CA_Magazine {
                modelSpecial = "\hlc_core\mesh\magazines\proxies\50Rnd_762NATO_M60";
                modelSpecialIsProxy = 1;
            };
        #endif
    #endif
};
