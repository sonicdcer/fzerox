#include "global.h"
#include "ovl_i5.h"
#include "assets/segment_2B9EA0.h"

/* potentially in a shared data file */
Vp D_i5_80118FF0[2][6] = { 0 };
s32 D_i5_801190B0 = 0;
s32 D_i5_801190B4 = 0;
s32 D_i5_801190B8 = 0;
UNUSED s32 D_i5_801190BC = 0;

s32 D_i5_801190C0 = 0;
UNUSED s32 D_i5_801190C4 = 0;
s8 D_i5_801190C8 = 0;
s8 D_i5_801190CC = 0;
s8 D_i5_801190D0 = 0;
s8 D_i5_801190D4 = 0;
s8 D_i5_801190D8 = 1;
s8 D_i5_801190DC = 0;
UNUSED s32 D_i5_801190E0 = 64;
UNUSED s32 D_i5_801190E4 = 0;
UNUSED s32 D_i5_801190E8 = 60;
UNUSED s32 D_i5_801190EC = 40;
UNUSED s32 D_i5_801190F0 = 70;

unk_80077D50 D_i5_801190F4[] = { { 17, D_F1355B4, 64, 96, 0x6DF }, { 0 } };
unk_80077D50 D_i5_80119114[] = { { 17, D_F135C98, 64, 96, 0x72D }, { 0 } };
unk_80077D50 D_i5_80119134[] = { { 17, D_F1363CC, 64, 96, 0x738 }, { 0 } };
unk_80077D50 D_i5_80119154[] = { { 17, D_F136B08, 64, 96, 0x6D4 }, { 0 } };
unk_80077D50 D_i5_80119174[] = { { 17, D_F137668, 64, 96, 0x6C5 }, { 0 } };
unk_80077D50 D_i5_80119194[] = { { 17, D_F1371E0, 64, 64, 0x483 }, { 0 } };
unk_80077D50 D_i5_801191B4[] = { { 17, D_F137D34, 64, 96, 0x7CE }, { 0 } };

unk_80077D50* D_i5_801191D4[] = {
    D_i5_801190F4, D_i5_80119114, D_i5_80119134, D_i5_80119154, D_i5_80119174, D_i5_80119194, D_i5_801191B4,
};

unk_80077D50 D_i5_801191F0[] = { { 4, D_F139830, 160, 24, 0 }, { 0 } };
unk_80077D50 D_i5_80119210[] = { { 4, D_F138510, 96, 24, 0 }, { 0 } };
unk_80077D50 D_i5_80119230[] = { { 17, D_F139710, 32, 16, 0x112 }, { 0 } };
unk_80077D50 D_i5_80119250[] = { { 17, D_F138994, 32, 32, 0x120 }, { 0 } };
unk_80077D50 D_i5_80119270[] = { { 17, D_F138AB8, 64, 64, 0x9E8 }, { 0 } };

unk_80077D50 D_i5_80119290[] = { { 17, D_F000004, 304, 240, 0x14A5D }, { 0 } };
unk_80077D50 D_i5_801192B0[] = { { 17, D_F014A68, 320, 240, 0x118DB }, { 0 } };
unk_80077D50 D_i5_801192D0[] = { { 17, D_F026348, 320, 240, 0x9E0A }, { 0 } };

unk_80077D50* D_i5_801192F0[] = {
    D_i5_80119290,
    D_i5_801192B0,
    D_i5_801192D0,
};

unk_80077D50 D_i5_801192FC[] = { { 17, D_F1394A4, 16, 16, 0x75 }, { 0 } };
unk_80077D50 D_i5_8011931C[] = { { 17, D_F139520, 16, 16, 0x75 }, { 0 } };
unk_80077D50 D_i5_8011933C[] = { { 17, D_F13959C, 16, 16, 0x76 }, { 0 } };
unk_80077D50 D_i5_8011935C[] = { { 17, D_F139618, 16, 16, 0x75 }, { 0 } };

unk_80077D50* D_i5_8011937C[] = {
    D_i5_801192FC,
    D_i5_8011931C,
    D_i5_8011933C,
    D_i5_8011935C,
};

unk_80077D50 D_i5_8011938C[] = { { 4, D_F13A9E0, 32, 16, 0 }, { 0 } };
unk_80077D50 D_i5_801193AC[] = { { 17, D_F139694, 16, 16, 0x75 }, { 0 } };

unk_80077D50 D_i5_801193CC[] = { { 4, D_F139FB8, 64, 16, 0 }, { 0 } };
unk_80077D50 D_i5_801193EC[] = { { 4, D_F13A1C0, 64, 16, 0 }, { 0 } };
unk_80077D50 D_i5_8011940C[] = { { 4, D_F13A3C8, 64, 16, 0 }, { 0 } };
unk_80077D50 D_i5_8011942C[] = { { 4, D_F13A5D0, 64, 16, 0 }, { 0 } };
unk_80077D50 D_i5_8011944C[] = { { 4, D_F13A7D8, 64, 16, 0 }, { 0 } };

unk_80077D50* D_i5_8011946C[] = {
    D_i5_801193CC, D_i5_801193EC, D_i5_8011940C, D_i5_8011942C, D_i5_8011944C,
};

// clang-format off
s32 D_i5_80119480[] = {
    192, 64,  64,
    100, 150, 255,
    255, 255, 100,
    0,   255, 0,
    200, 90,  255,
    200, 90,  255
};
// clang-format on

const char* D_i5_801194C8[] = {
    "FIGURE EIGHT",
    "HIGH SPEED",
    "PIPE",
    "CORKSCREW",
    "CYLINDER",
    "HIGH JUMP",
    "INVERTED LOOP",
    "MULTI JUMP",
    "UP AND DOWN",
    "TECHNIQUE",
    "QUICK TURN",
    "DANGEROUS STEPS",
    "ZIG-ZAG JUMP",
    "WAVY ROAD",
    "DOUBLE SOMERSAULT",
    "SLIM LINE",
    "HALF PIPE",
    "JUMPS OF DOOM",
    "PSYCHEDELIC EXPERIENCE",
    "MIRROR ROAD",
    "CYLINDER & HIGH JUMP",
    "WAVE PANIC",
    "SNAKE ROAD",
    "DEADLY CURVES",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
};

s8 D_i5_80119544[] = { 1, 0, 2, 3, 4 };

s32 D_i5_801197E0;
s32 D_i5_801197E4;

extern s32 D_800F8514;

void func_i5_80116830(void) {
    unk_80141C88 sp28;
    s32 pad;

    if (D_i5_801197E4 != D_800F8514) {
        D_i5_801190DC = 0;
        if (func_i2_801037CC(&sp28, D_800F8514) != 0) {
            D_i5_801190D8 = 1;
        } else {
            if (D_802A6B40[D_800F8514].unk_20[0] < ((sp28.unk_08 * 115) / 100)) {
                D_i5_801190D8 = 2;
            } else {
                D_i5_801190D8 = 1;
            }
            if (D_802A6B40[D_800F8514].unk_20[0] < sp28.unk_08) {
                D_i5_801190DC = 1;
            }
        }
        D_i5_801197E4 = D_800F8514;
    }
}

extern char* D_800E4178;
extern char* D_800E4180[];

void func_i5_80116910(void) {
    D_800E4178 = D_800E4180[D_800F8514];
}

extern s16 D_800CCFE8;
extern s32 D_800CD380;
extern s32 D_800CD3B8;
extern s32 D_800CD3BC;
extern s8 D_800CD3C0;
extern s8 D_800CD3C8;
extern s32 D_800CD3CC;
extern s32 D_800DCE44;

void func_i5_80116934(void) {
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v1;

    D_800CCFE8 = 3;
    D_i5_801190D4 = D_i5_80119544[D_800CD3CC];
    D_i5_801197E4 = -1;
    if (D_800DCE44 == 0x800A) {
        var_v0 = D_800CD3B8;
    } else {
        var_v0 = D_800CD3BC;
    }
    if (var_v0 >= 48) {
        D_i5_801190C8 = 4;
        D_i5_801190CC = 0;
        D_800F8514 = 48;
    } else {
        D_i5_801190CC = var_v0 % 6;
        if (var_v0 >= 24) {
            D_i5_801190C8 = 10;
        } else {
            D_i5_801190C8 = var_v0 / 6;
        }
        D_800F8514 = var_v0;
    }
    func_i5_80116830();
    var_v1 = D_800CD3C0;
    if ((var_v1 >= 3) || (D_800CD3C8 != 0)) {
        var_v1 = 2;
    }

    if (var_v1 + 2 < D_i5_801190C8) {
        D_i5_801190C8 = var_v1 + 2;
    }
    if ((D_i5_801190C8 == 4) && ((D_800DCE44 == 0x8013) || (D_800CD380 == 1))) {
        D_i5_801190C8 = 3;
    }
    if (D_i5_801190C8 >= 0xA) {
        D_i5_801197E0 = 4;
    } else if (D_i5_801190C8 == 4) {
        D_i5_801197E0 = 5;
    } else {
        D_i5_801197E0 = D_i5_801190C8;
    }

    func_80085610();
    func_800794B0(5, 0, 0, 1);
    func_800794B0(120, 0, 0, 2);
    if (D_800DCE44 != 0x8013) {
        var_a1 = 80;
        var_a2 = 17;
    } else {
        var_a1 = 112;
        var_a2 = 21;
    }
    func_800794B0(0x83, var_a1, var_a2, 4);
    func_800794B0(0x80, 0, 0, 10);
    func_800794B0(0x79, 0, 0, 8);
    if (((D_800CD3C8 != 0) || (D_800CD3C0 >= 2)) && (D_800DCE44 != 0x8013) && (D_800CD380 != 1)) {
        func_800794B0(0x7E, 0, -100, 6);
    }
    if ((D_800CD3C0 > 0) || (D_800CD3C8 != 0)) {
        func_800794B0(0x7D, 0, -100, 6);
    }
    func_800794B0(0x7C, 0, -100, 6);
    func_800794B0(0x7B, 0, -100, 6);
    func_800794B0(0x7A, 0, -100, 6);
    if (D_800CD380 != 0) {
        func_800794B0(0x81, 0, 0, 8);
    }
    func_800794B0(0x82, 0, 0, 8);
    switch (D_800CD380) {
        case 1:
            if (D_800DCE44 != 0x8013) {
                func_800794B0(0x85, 0, 0, 10);
            }
            /* fallthrough */
        case 2:
            func_800794B0(0x84, 190, 160, 10);
            break;
    }
}

void func_i5_80116D00(void) {
    D_800CCFE8 = 3;
    D_i5_801190C0 = 10;
    if (D_800F8514 >= 48) {
        D_i5_801190C8 = 4;
        D_i5_801190CC = D_800F8514 % 6;
    } else {
        D_i5_801190CC = D_800F8514 % 6;
        if (D_800F8514 >= 24) {
            D_i5_801190C8 = 10;
        } else {
            D_i5_801190C8 = D_800F8514 / 6;
        }
    }
    func_i5_80116910();
    if (D_i5_801190C8 >= 10) {
        D_i5_801197E0 = 4;
    } else if (D_i5_801190C8 == 4) {
        D_i5_801197E0 = 5;
    } else {
        D_i5_801197E0 = D_i5_801190C8;
    }
    func_80085610();
    func_800794B0(5, 0, 0, 1);
    func_800794B0(0x78, 0, 0, 2);
    func_800794B0(0x79, 0, 0, 8);
    if (D_i5_801190C8 >= 10) {
        func_800794B0(0x7F, 0, -100, 6);
    } else {
        func_800794B0(D_i5_801190C8 + 0x7A, 0, -100, 6);
    }
    func_800794B0(0x82, 0, 0, 8);
}

void func_i5_80116658(s32 arg0);

extern s32 D_800CD004;
extern s16 D_800CD044;
extern s16 D_800CD048;
extern Controller D_800DD180;
extern u16 D_800E416C;
extern u16 D_800E416E;
extern unk_struct_1DC D_800E5220[];
extern s32 D_i2_80106DA4;

s32 func_i5_80116EEC(void) {
    s32 pad[2];
    s32 temp_v0;
    s8 temp_a2;
    s32 temp_v1;
    s32 var_v1;
    unk_800E3A28* temp_v0_2;

    func_8008675C();
    if (D_i2_80106DA4 != 0) {
        return D_800DCE44;
    }
    if ((D_800CD380 == 1) && (D_800DCE44 != 0x8013)) {
        func_i5_80116830();
    }
    func_8007DABC(&D_800DD180);
    switch (D_i5_801190C0) {
        case 0:
            D_i5_801190D0 = 1;
            temp_v0 = D_i5_801190C8;
            if (D_i5_801190C8 < 10) {
                if ((D_800E416C & BTN_LEFT) && (D_i5_801190C8 > 0)) {
                    D_i5_801190C8--;
                }
                if ((D_800E416C & BTN_RIGHT) && (D_i5_801190C8 < 4)) {
                    D_i5_801190C8++;
                }
                var_v1 = D_800CD3C0;
                if ((var_v1 >= 3) || (D_800CD3C8 != 0)) {
                    var_v1 = 2;
                }

                if (var_v1 + 2 < D_i5_801190C8) {
                    D_i5_801190C8 = var_v1 + 2;
                }
                if ((D_i5_801190C8 == 4) && ((D_800DCE44 == 0x8013) || (D_800CD380 == 1))) {
                    D_i5_801190C8 = 3;
                }
            }
            if (D_i5_801190C8 >= 10) {
                D_i5_801197E0 = 4;
            } else if (D_i5_801190C8 == 4) {
                D_i5_801197E0 = 5;
            } else {
                D_i5_801197E0 = D_i5_801190C8;
            }
            if (temp_v0 != D_i5_801190C8) {
                D_i5_801190CC = 0;
                if (D_i5_801197E0 < 5) {
                    func_i5_80116658(D_i5_801197E0);
                }
                func_800BA8D8(30);
            }
            if (D_i5_801190C8 < 10) {
                D_800CD004 = D_i5_801190C8;
            } else {
                D_800CD004 = 5;
            }
            if (D_i5_801190C8 >= 10) {
                D_800F8514 = D_i5_801190CC + 24;
            } else if (D_i5_801190C8 == 4) {
                D_800F8514 = 48;
            } else {
                D_800F8514 = (D_i5_801190C8 * 6) + D_i5_801190CC;
            }
            if (D_800E416E & BTN_B) {
                func_800BA8D8(0x10);
                if (D_800DCE44 == 0x800A) {
                    D_800CD3B8 = D_800F8514;
                    D_i5_801190C0 = 5;
                } else {
                    D_800CD3BC = D_800F8514;
                    D_i5_801190C0 = 1;
                    D_800CD048 = 10;
                }
            } else if (D_800E416E & (BTN_A | BTN_START)) {
                func_800BA8D8(0x21);
                if (D_i5_801190C8 == 4) {
                    D_i5_801190CC = 0;
                    D_i5_801190C0 = 3;
                } else if (D_800CD380 == 0) {
                    if (D_i5_801190C8 >= 10) {
                        D_800F8514 = 0x18;
                    } else {
                        D_800F8514 = D_i5_801190C8 * 6;
                    }
                    D_i5_801190CC = 0;
                    D_i5_801190C0 = 3;
                } else {
                    D_i5_801190C0 = 2;
                }
                func_80079E88(0x79)->unk_0C = 0x190 - (D_i5_801190CC * 0x500);
            }
            break;
        case 2:
            D_i5_801190D0 = 1;
            if ((D_800CD380 == 1) && (D_800DCE44 != 0x8013)) {
                temp_v1 = D_i5_801190D8;
                temp_a2 = D_i5_801190D4;
                if ((D_800E416C & BTN_UP) && (D_i5_801190D4 > 0)) {
                    D_i5_801190D4--;
                }
                if ((D_800E416C & BTN_DOWN) && (D_i5_801190D4 < temp_v1)) {
                    D_i5_801190D4++;
                }
                if (temp_a2 != D_i5_801190D4) {
                    func_800BA8D8(30);
                }
                if (temp_v1 < D_i5_801190D4) {
                    D_i5_801190D4 = 0;
                }
                D_800CD3CC = D_i5_80119544[D_i5_801190D4];
            }

            if ((D_800E416C & BTN_LEFT) && (D_i5_801190CC > 0)) {
                D_i5_801190CC--;
                D_800E5220[0].unk_18 = 1;
                temp_v0_2 = func_80079E88(0x81);
                temp_v0_2->unk_04 += 0x200;
                func_800BA8D8(30);
            }

            if ((D_800E416C & BTN_RIGHT) && (D_i5_801190CC < 5)) {
                D_i5_801190CC++;
                D_800E5220[0].unk_18 = 1;
                temp_v0_2 = func_80079E88(0x81);
                temp_v0_2->unk_08 += 0x200;
                func_800BA8D8(30);
            }
            if (D_i5_801190C8 >= 10) {
                D_800F8514 = D_i5_801190CC + 0x18;
            } else {
                D_800F8514 = (D_i5_801190C8 * 6) + D_i5_801190CC;
            }
            if (D_800E416E & BTN_B) {
                D_i5_801190C0 = 0;
                func_800BA8D8(0x10);
            } else if (D_800E416E & (BTN_A | BTN_START)) {
                func_800BA8D8(0x21);
                D_i5_801190C0 = 3;
                D_i5_801190D0 = 0;
            }
            break;
        case 3:
            if (D_800E416E & BTN_B) {
                if ((D_800CD380 == 0) || (D_i5_801190C8 == 4)) {
                    D_i5_801190C0 = 0;
                } else {
                    D_i5_801190C0 = 2;
                }
                func_800BA8D8(0x10);
            } else if (D_800E416E & (BTN_A | BTN_START)) {
                func_800BA8D8(0x3E);
                D_i5_801190C0 = 4;
                if (D_800DCE44 == 0x800A) {
                    D_800CD3B8 = D_800F8514;
                    return 0x8008;
                }
                D_800CD3BC = D_800F8514;
                return 6;
            }
            break;
        case 5:
            if (D_800E416E & (BTN_A | BTN_START)) {
                func_800BA8D8(0x21);
                D_i5_801190C0 = 0;
            }
            break;
        case 6:
            if (D_800CD044 == 0) {
                D_800CD048 = 0xC;
            }
            break;
        default:
            break;
    }

    func_i5_80116910();
    return D_800DCE44;
}

s32 func_i5_801175D0(void) {
    func_8008675C();
    func_8007DABC(&D_800DD180);
    D_i5_801190D0 = 1;
    switch (D_i5_801190C0) {
        case 10:
            if (D_800E416E & (BTN_A | BTN_START)) {
                D_i5_801190C0 = 0xB;
                func_800BA8D8(0x3E);
                return 0x4012;
            }
            break;
        case 11:
        default:
            break;
    }
    return D_800DCE44;
}

Gfx* func_i5_80117664(Gfx* gfx) {
    return func_80079BC8(gfx);
}

extern s8 D_800CD3C4;

void func_i5_80117684(unk_800E3A28* arg0) {
    size_t var_a1;
    unk_80077D50* sp20;

    arg0->unk_04 = D_800CD3C4;
    sp20 = D_i5_801192F0[arg0->unk_04];
    func_80077D50(sp20, 0);

    if (arg0->unk_04 == 0) {
        arg0->unk_0C = 8;
    }
    if (D_800DCE44 == 0x8013) {
        func_80077D50(D_i5_80119270, 0);
        if (arg0->unk_04 == 0) {
            var_a1 = 0x23A00;
        } else {
            var_a1 = 0x25800;
        }

        func_8007A828(func_800783AC(sp20->unk_04), var_a1, 135, 135, 255);
    }
}

void func_i5_80117758(void) {
    s32 i;

    func_i5_80115DF0();
    if (D_i5_801197E0 < 5) {
        func_i5_80116658(D_i5_801197E0);
        D_i5_801190B4 -= 2;

        for (i = 0; i < 6; i++) {
            func_i5_80116678(D_i5_801190B0);
            D_i5_801190B4--;
        }
    }
}

void func_i5_801177EC(unk_800E3A28* arg0) {
    s32 var_v1;
    s32 var_v0;
    s32 i;

    var_v1 = arg0->unk_00 - 0x7A;
    if (var_v1 == 3 || var_v1 == 4) {
        var_v0 = D_800CD3C0;
        if ((var_v0 >= 3) || (D_800CD3C8 != 0)) {
            var_v0 = 2;
        }
        if (var_v0 < (var_v1 - 2)) {
            var_v1 = 6;
        }
    }
    func_80077D50(D_i5_801191D4[var_v1], 0);

    for (i = 0; i < 4; i++) {
        func_80077D50(D_i5_8011937C[i], 0);
    }

    if (D_800CD044 == 0x21) {
        arg0->unk_1C = 0xC;
    }
    arg0->unk_0C = 0x80;
    arg0->unk_10 = 0x55;
}

void func_i5_801178D8(unk_800E3A28* arg0) {
    if (D_800DCE44 != 0x8013) {
        func_80077D50(D_i5_801191F0, 0);
        arg0->unk_1C = 0xC;
    } else {
        func_80077D50(D_i5_80119210, 0);
    }
}

void func_i5_80117934(unk_800E3A28* arg0) {
    func_80077D50(D_i5_80119230, 0);
    arg0->unk_0C = 50;
}

void func_i5_8011796C(unk_800E3A28* arg0) {
    func_80077D50(D_i5_80119250, 0);
    arg0->unk_04 = 0x80;
    arg0->unk_08 = 0x80;
}

void func_i5_801179A8(unk_800E3A28* arg0) {
    unk_80141C88 sp20;
    s32 pad;

    if (func_i2_801014D4(&sp20) != 0) {
        arg0->unk_00 = 0;
    }
    if (sp20.unk_04 == 0) {
        arg0->unk_00 = 0;
    }
    arg0->unk_0C += (sp20.unk_00 % 6) * 320;
    arg0->unk_04 = sp20.unk_00;
    func_80077D50(D_i5_8011938C, 0);
}

void func_i5_80117A2C(unk_800E3A28* arg0) {
    s32 i;

    func_80077D50(D_i5_801193AC, 0);

    for (i = 0; i < 5; i++) {
        func_80077D50(D_i5_8011946C[i], 0);
    }

    arg0->unk_0C = 150;
}

Gfx* func_i5_80117A98(Gfx* gfx, unk_800E3A28* arg1) {

    if (D_800DCE44 != 0x8013) {
        gDPSetPrimColor(gfx++, 0, 0, 75, 75, 75, 180);
        gfx = func_80078EA0(gfx, D_i5_801192F0[arg1->unk_04], arg1->unk_0C, arg1->unk_10, 1, 0, 0, 1.0f, 1.0f);
    } else {
        gfx = func_80078EA0(gfx, D_i5_801192F0[arg1->unk_04], arg1->unk_0C, arg1->unk_10, 0, 0, 0, 1.0f, 1.0f);
        gfx = func_80078EA0(gfx, D_i5_80119270, 0x35, 4, 2, 1, 0, 1.0f, 1.0f);
        gfx = func_80078EA0(gfx, D_i5_80119270, 0xCB, 4, 0, 0, 0, 1.0f, 1.0f);
    }
    return gfx;
}

Gfx* func_i5_80117BE0(Gfx* gfx, unk_800E3A28* arg1) {

    switch (D_i5_801190C0) {
        case 2:
        case 3:
        case 4:
        case 10:
        case 11:
            if (D_i5_801197E0 < 5) {
                gfx = func_i5_80115E64(gfx);
            }
            break;
        case 0:
        default:
            break;
    }
    return gfx;
}

extern s32 gGameFrameCount;
extern s8 D_800E4174[];

Gfx* func_i5_80117C48(Gfx* gfx, unk_800E3A28* arg1) {
    s32 i;
    s32 alpha;
    s32 var_t0;
    s32 var_s1;
    s32 var_v0;
    s32 sp80;
    s32 var_v1;

    i = arg1->unk_00 - 0x7A;
    if (D_i5_801190C8 >= 10) {
        var_s1 = 5;
    } else {
        var_s1 = D_i5_801190C8;
    }
    if (var_s1 == i) {
        if ((D_i5_801190C0 == 0) || (D_i5_801190C0 == 1)) {
            var_v1 = gGameFrameCount;
            var_v1 %= 30U;
            if (var_v1 >= 15) {
                var_v1 = 30 - var_v1;
            }
            gDPSetPrimColor(gfx++, 0, 0, 255 - (var_v1 * 5), 255 - (var_v1 * 5), 255 - (var_v1 * 5), 255);
        } else {
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
        }
    } else {
        gDPSetPrimColor(gfx++, 0, 0, 100, 100, 100, 255);
    }

    switch (D_i5_801190C0) {
        case 5:
        case 6:
            arg1->unk_1C++;
            if (arg1->unk_1C > 12) {
                D_i5_801190C0 = 6;
                arg1->unk_1C = 12;
            }
            break;
        default:
            if (arg1->unk_1C > 0) {
                arg1->unk_1C--;
            }
            break;
    }

    if (arg1->unk_1C < 0) {
        arg1->unk_1C = 0;
    }

    var_t0 = D_800E4174[i];
    sp80 = (SQ(arg1->unk_1C) * 3) / 2;

    switch (i) {
        case 3:
        case 4:
            var_v0 = D_800CD3C0;
            if ((var_v0 >= 3) || (D_800CD3C8 != 0)) {
                var_v0 = 2;
            }
            if (var_v0 < (i - 2)) {
                i = 6;
            }
            break;
    }

    gfx = func_80078EA0(gfx, D_i5_801191D4[i], arg1->unk_0C, arg1->unk_10 + sp80, 1, 0, 0, 1.0f, 1.0f);

    if ((D_800CD380 == 0) && (i < 4)) {
        alpha = ((arg1->unk_10 - 49) * 255) / 36;
        if (var_s1 == i) {
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
        } else {
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, alpha);
        }

        for (i = 0; i < var_t0; i++) {
            gfx = func_80078EA0(gfx, D_i5_8011937C[i], arg1->unk_0C + (i * 16) + ((12 - i * 8) / 2),
                                (arg1->unk_10 + sp80) - 12, 1, 0, 0, 1.0f, 1.0f);
        }
    }
    return gfx;
}

Gfx* func_i5_80117FB4(Gfx* gfx, unk_800E3A28* arg1) {
    s32 temp_v1;

    gDPSetPrimColor(gfx++, 0, 0, 250, 250, 0, 255);

    if (D_800DCE44 != 0x8013) {
        switch (D_i5_801190C0) {
            case 5:
            case 6:
                arg1->unk_1C++;
                if (arg1->unk_1C > 12) {
                    D_i5_801190C0 = 6;
                    arg1->unk_1C = 12;
                }
                break;
            default:
                if (arg1->unk_1C > 0) {
                    arg1->unk_1C--;
                }
                break;
        }
        if (arg1->unk_1C < 0) {
            arg1->unk_1C = 0;
        }
        temp_v1 = (SQ(arg1->unk_1C) * 3) / 2;

        gfx = func_80078EA0(gfx, D_i5_801191F0, arg1->unk_0C, arg1->unk_10 + temp_v1, 0, 0, 0, 1.0f, 1.0f);
    } else {
        gfx = func_80078EA0(gfx, D_i5_80119210, arg1->unk_0C, arg1->unk_10, 0, 0, 0, 1.0f, 1.0f);
    }
    return gfx;
}

Gfx* func_i5_80118100(Gfx* gfx, unk_800E3A28* arg1) {
    gfx = func_8007DB28(gfx, 0);
    return func_80078EA0(gfx, D_i5_80119230, arg1->unk_0C + 0x10B, arg1->unk_10 + 0xD0, 1, 0, 0, 1.0f, 1.0f);
}

extern f32 D_800DD230[];

Gfx* func_i5_80118168(Gfx* gfx, unk_800E3A28* arg1) {
    f32 temp_fv0 = (D_800DD230[arg1->unk_1C & 0xFFF] + 1.0) / 2;
    f32 temp_fa1 = (D_800DD230[arg1->unk_20 & 0xFFF] + 1.0) / 2;

    gfx = func_80078EA0(gfx, D_i5_80119250, arg1->unk_0C + 0x2B, (((1.0 - temp_fv0) * 16.0) + 112.0), 3, 0, 0, 1.0f,
                        temp_fv0);
    return func_80078EA0(gfx, D_i5_80119250, arg1->unk_10 + 0xF5, (((1.0 - temp_fa1) * 16.0) + 112.0), 5, 0, 0, 1.0f,
                         temp_fa1);
}

Gfx* func_i5_801182DC(Gfx* gfx) {
    char sp4C[4];
    s32 sp48;
    s32 sp44;
    s32* temp_v1;

    switch (D_i5_801190C0) {
        case 0:
        default:
            break;
        case 2:
        case 3:
        case 4:
        case 10:
        case 11:
            func_i2_80105DB0(D_i5_801190CC + 1, sp4C);
            sp4C[1] = ':';
            sp4C[2] = ' ';
            sp4C[3] = '\0';
            sp48 = func_i2_801062E4(sp4C, 3, 0);
            if (D_i5_801197E0 == 5) {
                sp44 = func_i2_801062E4(D_800E4178, 3, 0);
                gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
                gfx =
                    func_i2_80106450(gfx, (-(sp44 / 2) - (func_i2_801062E4(sp4C, 3, 0) / 2)) + 160, 200, sp4C, 0, 3, 0);
                gfx = func_i2_80106450(gfx, ((sp48 / 2) - (func_i2_801062E4(D_800E4178, 3, 0) / 2)) + 160, 200,
                                       D_800E4178, 0, 3, 0);
            } else {
                sp44 = func_i2_801062E4(D_800E4178, 3, 0);
                temp_v1 = &D_i5_80119480[D_i5_801197E0 * 3];
                gDPSetPrimColor(gfx++, 0, 0, temp_v1[0], temp_v1[1], temp_v1[2], 255);
                gfx =
                    func_i2_80106450(gfx, (-(sp44 / 2) - (func_i2_801062E4(sp4C, 3, 0) / 2)) + 160, 200, sp4C, 0, 3, 0);
                gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
                gfx = func_i2_80106450(gfx, ((sp48 / 2) - (func_i2_801062E4(D_800E4178, 3, 0) / 2)) + 160, 200,
                                       D_800E4178, 0, 3, 0);
                gfx = func_i2_80106450(
                    gfx, 160 - (func_i2_801062E4(D_i5_801194C8[D_i5_801197E0 * 6 + D_i5_801190CC], 4, 0) / 2), 210,
                    D_i5_801194C8[D_i5_801197E0 * 6 + D_i5_801190CC], 0, 4, 0);
            }
            break;
    }
    return gfx;
}

Gfx* func_i5_80118674(Gfx* gfx, unk_800E3A28* arg1) {

    if ((arg1->unk_04 / 6) != (D_800F8514 / 6)) {
        return gfx;
    }

    switch (D_i5_801190C0) {
        case 0:
        case 1:
        case 5:
        case 6:
            break;
        case 2:
        case 3:
        case 4:
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
            gfx = func_80078EA0(gfx, D_i5_8011938C, arg1->unk_0C + arg1->unk_1C, arg1->unk_10, 0, 0, 0, 1.0f, 1.0f);
            break;
    }

    return gfx;
}

Gfx* func_i5_80118790(Gfx* gfx, unk_800E3A28* arg1) {
    s32 i;
    s32 temp_s6 = D_i5_801190D8 + 1;

    for (i = 0; i < temp_s6; i++) {
        if (i == D_i5_801190D4) {
            switch (D_i5_801190C0) {
                case 3:
                case 4:
                    gDPSetPrimColor(gfx++, 0, 0, 0, 255, 0, 255);
                    break;
                default:
                    gfx = func_8007DB28(gfx, 0);
                    break;
            }
        } else {
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
        }
        gfx = func_80078EA0(gfx, D_i5_8011946C[i], arg1->unk_0C + 0xC3, i * 20 + 0x2D, 0, 0, 0, 1.0f, 1.0f);

        if ((i == 2) && (D_i5_801190DC != 0)) {
            gfx = func_80078EA0(gfx, &D_i5_801193AC, arg1->unk_0C + 0x109, i * 20 + 0x2D, 0, 0, 0, 1.0f, 1.0f);
        }
    }
    return gfx;
}

void func_i5_80118928(unk_800E3A28* arg0) {
    s32 temp_a1;

    if (((D_i5_801190C0 != 0) && (D_i5_801190C0 != 1)) || (D_i5_801190C8 < 4)) {
        func_i5_80115E10();
    }
    temp_a1 = -(D_i5_801190CC * 0x500);
    if (D_800DCE44 == 0x800F) {
        arg0->unk_0C = temp_a1;
    } else {
        func_8007A0A0(arg0, temp_a1, 0xC0);
    }
    func_i5_801164A8(arg0->unk_0C);
}

void func_i5_801189C4(unk_800E3A28* arg0) {
    s32 var_v1;
    s32 var_a1;
    s32 var_v0;

    if (D_800DCE44 == 0x800F) {
        arg0->unk_0C = 0x80;
        arg0->unk_10 = 0x31;
        return;
    }

    var_v1 = arg0->unk_00 - 0x7A;
    switch (arg0->unk_04) {
        case 0:
            if (var_v1 != 5) {
                if (arg0->unk_10 < 0x55) {
                    func_80079FFC(arg0, 0x55);
                } else {
                    arg0->unk_04 = 1;
                }
            } else if (arg0->unk_10 >= 0xAB) {
                func_80079FFC(arg0, 0xAA);
            } else {
                arg0->unk_04 = 1;
            }
            if ((D_i5_801190C0 != 0) && (D_i5_801190C0 != 1)) {
                arg0->unk_04 = 1;
            }
            break;
        case 1:
        case 2:
        case 3:
            if ((var_v1 == D_i5_801190C8) || ((D_i5_801190C8 >= 0xA) && (var_v1 == 5))) {
                arg0->unk_14 = 7;
            } else {
                arg0->unk_14 = 6;
            }

            switch (D_i5_801190C0) {
                case 0:
                case 1:
                case 5:
                case 6:
                    if (var_v1 != 5) {
                        var_a1 = 0x55;
                    } else {
                        var_a1 = 0xAA;
                    }
                    func_80079FFC(arg0, var_a1);

                    if (arg0->unk_04 == 2) {
                        arg0->unk_04 = 3;
                    }
                    break;
                case 2:
                case 3:
                case 4:
                default:
                    if (D_800CD380 == 0) {
                        func_80079FFC(arg0, 0x31);
                    } else {
                        func_80079FFC(arg0, 0x2D);
                    }
                    arg0->unk_04 = 2;
                    break;
            }
            if ((arg0->unk_04 == 2) || (var_v1 == 5)) {
                var_a1 = 0x80;
            } else {
                var_v0 = D_800CD3C0;
                if (D_800CD3C8 != 0) {
                    var_v0 = 2;
                }
                switch (var_v0) {
                    case 0:
                        if (var_v1 >= 3) {
                            var_v1 = 2;
                        }
                        var_a1 = (((s32) ((var_v1 << 7) + 0x80) / 2) + (var_v1 * 0xA)) - 0xA;
                        break;
                    default:
                    case 2:
                    case 3:
                        if ((D_800DCE44 != 0x8013) && (D_800CD380 != 1)) {
                            var_a1 = ((s32) (var_v1 << 7) / 2) + (var_v1 * -8) + 0x10;
                            break;
                        }
                    /* fallthrough */
                    case 1:
                        if (var_v1 >= 4) {
                            var_v1 = 3;
                        }
                        var_a1 = (((s32) ((var_v1 * 0xC) + 0x12E) / 2) + (var_v1 << 6)) - 0x80;
                        break;
                }
            }
            if (arg0->unk_1C == 0xB) {
                arg0->unk_0C = var_a1;
            } else if (arg0->unk_04 >= 2) {
                func_8007A0A0(arg0, var_a1, 0x80);
            } else {
                func_80079F54(arg0, var_a1, 0x10 / arg0->unk_04);
            }
            break;
    }
}

void func_i5_80118D44(unk_800E3A28* arg0) {
    switch (D_i5_801190C0) {
        case 3:
        case 4:
            func_8007A0A0(arg0, 0, 0xC0);
            break;
        default:
            func_8007A0A0(arg0, 50, 0xC0);
            break;
    }
}

void func_i5_80118D94(unk_800E3A28* arg0) {

    switch (D_i5_801190C0) {
        case 0:
        case 1:
        case 5:
        case 6:
            arg0->unk_15 = 0;
            arg0->unk_0C = -100;
            arg0->unk_10 = 100;
            arg0->unk_04 = 0x80;
            arg0->unk_08 = 0x80;
            break;
        case 2:
        case 3:
        case 4:
        default:
            if (arg0->unk_04 > 640) {
                arg0->unk_04 = 640;
            }
            if (arg0->unk_04 > 128) {
                arg0->unk_04 -= 16;
            } else {
                arg0->unk_04 = 128;
            }
            arg0->unk_1C += arg0->unk_04;

            if (arg0->unk_08 > 640) {
                arg0->unk_08 = 640;
            }
            if (arg0->unk_08 > 128) {
                arg0->unk_08 -= 16;
            } else {
                arg0->unk_08 = 128;
            }
            arg0->unk_20 += arg0->unk_08;

            arg0->unk_15 = 1;
            if ((D_i5_801190CC == 0) || (D_i5_801190C0 == 3) || (D_i5_801190C0 == 4)) {
                func_8007A0A0(arg0, -100, 0xC0);
            } else {
                func_8007A0A0(arg0, 0, 0xC0);
            }
            if ((D_i5_801190CC == 5) || (D_i5_801190C0 == 3) || (D_i5_801190C0 == 4)) {
                func_8007A154(arg0, 100);
            } else {
                func_8007A154(arg0, 0);
            }
            break;
    }
}

void func_i5_80118F24(unk_800E3A28* arg0) {
    s32 temp_v1;

    arg0->unk_1C = func_80079E88(0x79)->unk_0C >> 2;
    temp_v1 = arg0->unk_0C + arg0->unk_1C;

    if ((temp_v1 < -30) || (temp_v1 > 320)) {
        arg0->unk_15 = 0;
    } else {
        arg0->unk_15 = 1;
    }
}

void func_i5_80118F84(unk_800E3A28* arg0) {
    switch (D_i5_801190C0) {
        case 0:
        case 1:
        case 5:
        case 6:
            func_8007A0A0(arg0, 150, 0xC0);
            break;
        case 2:
        case 3:
        case 4:
        default:
            func_8007A0A0(arg0, 0, 0xC0);
            break;
    }
}
