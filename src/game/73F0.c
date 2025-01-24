#include "global.h"
#include "fzxthread.h"
#include "fzx_course.h"
#include "segment_symbols.h"
#include "assets/segment_17B1E0.h"

OSMesg D_800E12B0;
UNUSED s8 D_800E12B8[0x10];
s32 D_800E12C8[0x800];
s32 D_800E32C8;
s32 D_800E32CC;
Vtx* D_800E32D0;

Gfx* func_8006F3D8(Gfx* gfx);
Gfx* func_8006F444(Gfx* gfx);
Gfx* func_8006F478(Gfx* gfx);
Gfx* func_8006F4E4(Gfx* gfx);
Gfx* func_8006F514(Gfx* gfx);
Gfx* func_8006F57C(Gfx* gfx);
Gfx* func_8006F5E4(Gfx* gfx);
Gfx* func_8006F68C(Gfx* gfx);
Gfx* func_8006F6FC(Gfx* gfx);
Gfx* func_8006F7A4(Gfx* gfx);
Gfx* func_8006F89C(Gfx* gfx);
Gfx* func_8006F998(Gfx* gfx);
Gfx* func_8006FA94(Gfx* gfx);
Gfx* func_8006FB90(Gfx* gfx);

s32 D_800CD180 = 0;

Gfx* (*D_800CD184[])(Gfx*) = { func_8006F3D8, func_8006F444, func_8006F478, func_8006F4E4, func_8006F4E4, func_8006F514,
                               func_8006F514, func_8006F57C, func_8006F57C, func_8006F5E4, func_8006F68C, func_8006F6FC,
                               func_8006F7A4, func_8006F7A4, func_8006F89C, func_8006F89C, func_8006F998, func_8006F998,
                               func_8006FA94, func_8006FA94, func_8006FB90, func_8006FB90 };

bool func_8006D3F0(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 0x16)) {
        return true;
    }
    return false;
}

extern unk_802D3978 D_802D3978[];

void func_8006D414(void) {
    s32 i;

    for (i = 0; i < 48; i++) {
        D_802D3978[i].unk_00 = 1;
    }
}

extern unk_80225800 D_80225800;
extern unk_802D3D38 D_802D3D38[];
extern unk_800F8510* D_800F8510;
extern unk_802D1B60 D_802D1B60;

void func_8006D448(void) {
    unk_802D1B60_unk_00* temp_s0;
    s32 i;
    s32 j;
    s32 k;
    f32 spAC;
    Vtx* vtx;
    unk_8006FC8C* temp_s5;
    unk_802D1B60* var = &D_802D1B60;
    f32 temp;
    Vec3f sp90;
    Mtx3F sp6C;

    if (D_800CD180 != 0) {
        //! @bug vtx uninitialised
    } else {
        vtx = D_80225800.unk_1C0;
    }

    var->unk_08 = 0;

    for (i = 0; i < var->unk_04; i++) {
        temp_s0 = &var->unk_00[i];
        if (temp_s0->unk_00 != 0x16) {
            continue;
        }

        temp_s5 = &D_800F8510->unk_10[temp_s0->unk_04];
        temp = func_8009E108(temp_s5, temp_s0->unk_08, &spAC);
        func_8009E85C(temp_s5, temp_s0->unk_08, &sp6C, temp);
        func_8009E6F0(temp_s5, temp_s0->unk_08, &sp90);

        sp90.x += (temp_s0->unk_0C * sp6C.z.x) + (2 * sp6C.y.x);
        sp90.y += (temp_s0->unk_0C * sp6C.z.y) + (2 * sp6C.y.y);
        sp90.z += (temp_s0->unk_0C * sp6C.z.z) + (2 * sp6C.y.z);

        vtx->v.ob[0] = sp90.x + 16.0f * sp6C.y.x;
        vtx->v.ob[1] = sp90.y + 16.0f * sp6C.y.y;
        vtx->v.ob[2] = sp90.z + 16.0f * sp6C.y.z;
        vtx->v.tc[0] = 0x400;
        vtx->v.tc[1] = 0;
        vtx++;
        vtx->v.ob[0] = sp90.x - 18.4752f * sp6C.x.x;
        vtx->v.ob[1] = sp90.y - 18.4752f * sp6C.x.y;
        vtx->v.ob[2] = sp90.z - 18.4752f * sp6C.x.z;
        vtx->v.tc[0] = 0;
        vtx->v.tc[1] = 0x800;
        vtx++;
        vtx->v.ob[0] = sp90.x - 18.4752f * sp6C.z.x;
        vtx->v.ob[1] = sp90.y - 18.4752f * sp6C.z.y;
        vtx->v.ob[2] = sp90.z - 18.4752f * sp6C.z.z;
        vtx->v.tc[0] = 0x800;
        vtx->v.tc[1] = 0x800;
        vtx++;
        vtx->v.ob[0] = sp90.x + 18.4752f * sp6C.x.x;
        vtx->v.ob[1] = sp90.y + 18.4752f * sp6C.x.y;
        vtx->v.ob[2] = sp90.z + 18.4752f * sp6C.x.z;
        vtx->v.tc[0] = 0;
        vtx->v.tc[1] = 0x800;
        vtx++;
        vtx->v.ob[0] = sp90.x + 18.4752f * sp6C.z.x;
        vtx->v.ob[1] = sp90.y + 18.4752f * sp6C.z.y;
        vtx->v.ob[2] = sp90.z + 18.4752f * sp6C.z.z;
        vtx->v.tc[0] = 0x800;
        vtx->v.tc[1] = 0x800;
        vtx++;
        D_802D3978[var->unk_08].unk_04.x = sp90.x;
        D_802D3978[var->unk_08].unk_04.y = sp90.y;
        D_802D3978[var->unk_08].unk_04.z = sp90.z;
        D_802D3978[var->unk_08].unk_00 = 1;
        var->unk_08++;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        D_800F8510->unk_10[i].unk_4C = NULL;
        D_800F8510->unk_10[i].unk_50 = NULL;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = 0, k = 0; k < var->unk_04; k++) {
            temp_s0 = &var->unk_00[k];
            if (temp_s0->unk_00 != 0x16) {
                continue;
            }

            if (i == temp_s0->unk_04) {
                D_800F8510->unk_10[i].unk_50 = &D_802D3978[j + 1];
            }
            j++;
        }
    }

    //! @bug j is potentially uninitialised here
    var->unk_08 = j;

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = var->unk_08, k = var->unk_04 - 1; k >= 0; k--) {
            temp_s0 = &var->unk_00[k];
            if (temp_s0->unk_00 != 0x16) {
                continue;
            }

            if (i == temp_s0->unk_04) {
                D_800F8510->unk_10[i].unk_4C = &D_802D3978[j - 1];
            }
            j--;
        }
    }
}

#pragma GLOBAL_ASM("asm/us/rev0/nonmatchings/game/73F0/func_8006DAAC.s")

void func_8006E478(void) {
    unk_802D1B60* var = &D_802D1B60;
    s32 i;
    s32 j;
    s32 k;
    f32 spA4;
    Vtx* vtx;
    s32 pad[3];
    Vec3f sp88;
    f32 temp;
    unk_8006FC8C* temp_s4;
    unk_802D1B60_unk_00* temp_s0;
    Mtx3F sp58;

    if (D_800CD180 != 0) {
        //! @bug vtx uninitialised
    } else {
        vtx = D_80225800.unk_040;
    }
    var->unk_0C = 0;

    for (i = 0; i < var->unk_04; i++) {
        temp_s0 = &var->unk_00[i];

        if (temp_s0->unk_00 != 0x17) {
            continue;
        }
        temp_s4 = &D_800F8510->unk_10[temp_s0->unk_04];
        temp = func_8009E108(temp_s4, temp_s0->unk_08, &spA4);
        func_8009E85C(temp_s4, temp_s0->unk_08, &sp58, temp);
        func_8009E6F0(temp_s4, temp_s0->unk_08, &sp88);

        sp88.x += temp_s0->unk_0C * sp58.z.x - 0.5 * temp_s0->unk_10.x * sp58.z.x;
        sp88.y += temp_s0->unk_0C * sp58.z.y - 0.5 * temp_s0->unk_10.x * sp58.z.y;
        sp88.z += temp_s0->unk_0C * sp58.z.z - 0.5 * temp_s0->unk_10.x * sp58.z.z;

        D_802D3D38[var->unk_0C].unk_00.x = sp88.x;
        D_802D3D38[var->unk_0C].unk_00.y = sp88.y;
        D_802D3D38[var->unk_0C].unk_00.z = sp88.z;

        vtx->v.ob[0] = ((temp_s0->unk_10.y * sp58.y.x) + sp88.x) + (0.5 * temp_s0->unk_10.z * sp58.x.x);
        vtx->v.ob[1] = ((temp_s0->unk_10.y * sp58.y.y) + sp88.y) + (0.5 * temp_s0->unk_10.z * sp58.x.y);
        vtx->v.ob[2] = ((temp_s0->unk_10.y * sp58.y.z) + sp88.z) + (0.5 * temp_s0->unk_10.z * sp58.x.z);
        vtx->v.tc[0] = 0x400;
        vtx->v.tc[1] = 0x240;
        vtx++;
        vtx->v.ob[0] = sp88.x;
        vtx->v.ob[1] = sp88.y;
        vtx->v.ob[2] = sp88.z;
        vtx->v.tc[0] = 0x400;
        vtx->v.tc[1] = 0x700;
        vtx++;
        vtx->v.ob[0] = ((temp_s0->unk_10.z * sp58.x.x) + sp88.x);
        vtx->v.ob[1] = ((temp_s0->unk_10.z * sp58.x.y) + sp88.y);
        vtx->v.ob[2] = ((temp_s0->unk_10.z * sp58.x.z) + sp88.z);
        vtx->v.tc[0] = 0;
        sp88.x += temp_s0->unk_10.x * sp58.z.x;
        sp88.y += temp_s0->unk_10.x * sp58.z.y;
        sp88.z += temp_s0->unk_10.x * sp58.z.z;

        vtx++;
        vtx->v.ob[0] = ((temp_s0->unk_10.y * sp58.y.x) + sp88.x) + (0.5 * temp_s0->unk_10.z * sp58.x.x);
        vtx->v.ob[1] = ((temp_s0->unk_10.y * sp58.y.y) + sp88.y) + (0.5 * temp_s0->unk_10.z * sp58.x.y);
        vtx->v.ob[2] = ((temp_s0->unk_10.y * sp58.y.z) + sp88.z) + (0.5 * temp_s0->unk_10.z * sp58.x.z);
        vtx->v.tc[0] = 0x400;
        vtx->v.tc[1] = 0x240;
        vtx++;
        vtx->v.ob[0] = sp88.x;
        vtx->v.ob[1] = sp88.y;
        vtx->v.ob[2] = sp88.z;
        vtx->v.tc[0] = 0x400;
        vtx->v.tc[1] = 0x700;
        vtx++;
        vtx->v.ob[0] = (temp_s0->unk_10.z * sp58.x.x) + sp88.x;
        vtx->v.ob[1] = (temp_s0->unk_10.z * sp58.x.y) + sp88.y;
        vtx->v.ob[2] = (temp_s0->unk_10.z * sp58.x.z) + sp88.z;
        vtx->v.tc[0] = 0;
        vtx++;

        D_802D3D38[var->unk_0C].unk_0C = sp58;
        D_802D3D38[var->unk_0C].unk_30 = temp_s0->unk_10;

        var->unk_0C++;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        D_800F8510->unk_10[i].unk_44 = NULL;
        D_800F8510->unk_10[i].unk_48 = NULL;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = 0, k = 0; k < var->unk_04; k++) {
            temp_s0 = &var->unk_00[k];
            if (temp_s0->unk_00 != 0x17) {
                continue;
            }

            if (i == temp_s0->unk_04) {
                D_800F8510->unk_10[i].unk_48 = &D_802D3D38[j + 1];
            }
            j++;
        }
    }
    //! @bug j is potentially uninitialised here
    var->unk_0C = j;

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = var->unk_0C, k = var->unk_04 - 1; k >= 0; k--) {
            temp_s0 = &var->unk_00[k];
            if (temp_s0->unk_00 != 0x17) {
                continue;
            }

            if (i == temp_s0->unk_04) {
                D_800F8510->unk_10[i].unk_44 = &D_802D3D38[j - 1];
            }
            j--;
        }
    }
}

extern s32 D_800F8518;
extern unk_36ED0 D_802A9FC0[];
extern unk_802D08E0 D_802D08E0[];
extern Mtx D_8022F0C0[];

void func_8006EC7C(void) {
    unk_8006FC8C* temp_s4;
    unk_36ED0* var_s1;
    unk_802D08E0* var_s0;
    s32 i;
    f32 sp14C;
    s32 j;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fa0;
    f32 temp_fa1;
    s32 pad[2];
    unk_802D1B60* sp12C;
    f32 var_fs0;
    unk_802D1B60_unk_00* temp_s3;
    f32 temp;
    Mtx* mtx;
    MtxF spDC;
    Vec3f spD0;
    Mtx3F spAC;

    sp12C = &D_802D1B60;
    if (D_800CD180 != 0) {
        //! @bug mtx uninitialised
    } else {
        mtx = D_8022F0C0;
    }

    var_s0 = D_802D08E0;
    for (i = 0; i < sp12C->unk_04; i++) {
        temp_s3 = &sp12C->unk_00[i];
        if (func_8006D3F0(temp_s3->unk_00) == 0) {
            continue;
        }
        temp_s4 = &D_800F8510->unk_10[temp_s3->unk_04];

        temp = func_8009E108(temp_s4, temp_s3->unk_08, &sp14C);
        func_8009E85C(temp_s4, temp_s3->unk_08, &spAC, temp);
        func_8009E6F0(temp_s4, temp_s3->unk_08, &spD0);

        if ((temp_s3->unk_00 >= 0xC) && (temp_s3->unk_00 < 0x16)) {
            if (SQ(spAC.x.y) > 0.95) {
                if (spAC.y.y > 0.f) {
                    spAC.x.x = -1.0f * spAC.y.x;
                    spAC.x.y = 0.f;
                    spAC.x.z = -1.0f * spAC.y.z;
                    func_80074A90(&spAC.x.x, &spAC.x.z);
                    spAC.y.x = 0.0f;
                    spAC.y.y = 1.0f;
                    spAC.y.z = 0.0f;
                    spAC.z.x = spAC.x.z;
                    spAC.z.y = 0.0f;
                    spAC.z.z = 0.0f - spAC.x.x;
                } else {
                    spAC.x.x = spAC.y.x;
                    spAC.x.y = 0.f;
                    spAC.x.z = spAC.y.z;
                    func_80074A90(&spAC.x.x, &spAC.x.z);
                    spAC.y.x = 0.0f;
                    spAC.y.y = 1.0f;
                    spAC.y.z = 0.0f;
                    spAC.z.x = spAC.x.z;
                    spAC.z.y = 0.0f;
                    spAC.z.z = 0.0f - spAC.x.x;
                }
            } else {
                spAC.x.y = 0.0f;
                func_80074A90(&spAC.x.x, &spAC.x.z);
                spAC.y.x = 0.0f;
                spAC.y.y = 1.0f;
                spAC.y.z = 0.0f;
                spAC.z.x = spAC.x.z;
                spAC.z.y = 0.0f;
                spAC.z.z = 0.0f - spAC.x.x;
            }
        }

        spD0.x += temp_s3->unk_0C * spAC.z.x;
        spD0.y += temp_s3->unk_0C * spAC.z.y;
        spD0.z += temp_s3->unk_0C * spAC.z.z;
        var_s0->unk_00.x = spD0.x;
        var_s0->unk_00.y = spD0.y;
        var_s0->unk_00.z = spD0.z;
        var_s0->unk_0C = spAC;

        switch (temp_s3->unk_00) {
            case 0:
            case 1:
            case 2:
                var_s0->unk_30 = (temp_s4->radiusLeft + temp_s4->radiusRight + 165.0f) / 120.0f;
                break;
            case 11:
                var_s0->unk_30 = (temp_s4->radiusLeft + temp_s4->radiusRight + 165.0f) / 520.0f;
                break;
            default:
                var_s0->unk_30 = 1.0f;
                break;
        }

        switch (temp_s3->unk_00) {
            case 4:
            case 6:
            case 8:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x * -1.0f,
                              var_s0->unk_0C.x.y * -1.0f, var_s0->unk_0C.x.z * -1.0f, var_s0->unk_0C.y.x,
                              var_s0->unk_0C.y.y, var_s0->unk_0C.y.z, var_s0->unk_00.x, var_s0->unk_00.y,
                              var_s0->unk_00.z);
                break;
            case 9:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x,
                              var_s0->unk_0C.x.y, var_s0->unk_0C.x.z, var_s0->unk_0C.y.x, var_s0->unk_0C.y.y,
                              var_s0->unk_0C.y.z, var_s0->unk_00.x + (var_s0->unk_0C.y.x * 50.0f),
                              var_s0->unk_00.y + (var_s0->unk_0C.y.y * 50.0f),
                              var_s0->unk_00.z + (var_s0->unk_0C.y.z * 50.0f));
                break;
            case 11:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x,
                              var_s0->unk_0C.x.y, var_s0->unk_0C.x.z, var_s0->unk_0C.y.x, var_s0->unk_0C.y.y,
                              var_s0->unk_0C.y.z, var_s0->unk_00.x + (var_s0->unk_0C.y.x * 100.0f * var_s0->unk_30),
                              var_s0->unk_00.y + (var_s0->unk_0C.y.y * 100.0f * var_s0->unk_30),
                              var_s0->unk_00.z + (var_s0->unk_0C.y.z * 100.0f * var_s0->unk_30));
                break;
            case 10:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x * -1.0f,
                              var_s0->unk_0C.x.y * -1.0f, var_s0->unk_0C.x.z * -1.0f, var_s0->unk_0C.y.x,
                              var_s0->unk_0C.y.y, var_s0->unk_0C.y.z, var_s0->unk_00.x + (var_s0->unk_0C.y.x * 50.0f),
                              var_s0->unk_00.y + (var_s0->unk_0C.y.y * 50.0f),
                              var_s0->unk_00.z + (var_s0->unk_0C.y.z * 50.0f));
                break;
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x,
                              var_s0->unk_0C.x.y, var_s0->unk_0C.x.z, 0.0f, 1.0f, 0.0f, var_s0->unk_00.x, -750.0f,
                              var_s0->unk_00.z);
                break;
            default:
                func_8006BC84(mtx, &spDC, var_s0->unk_30, var_s0->unk_30, var_s0->unk_30, var_s0->unk_0C.x.x,
                              var_s0->unk_0C.x.y, var_s0->unk_0C.x.z, var_s0->unk_0C.y.x, var_s0->unk_0C.y.y,
                              var_s0->unk_0C.y.z, var_s0->unk_00.x, var_s0->unk_00.y, var_s0->unk_00.z);
                break;
        }
        mtx++;

        var_fs0 = 1e8f;
        var_s1 = D_802A9FC0;
        for (j = 0; j < D_800F8518; j++) {

            temp_fv0 = var_s1->unk_14.x - var_s0->unk_00.x;
            temp_fv1 = var_s1->unk_14.y - var_s0->unk_00.y;
            temp_fa0 = var_s1->unk_14.z - var_s0->unk_00.z;
            temp_fa1 = SQ(temp_fv0) + SQ(temp_fv1) + SQ(temp_fa0);
            if (temp_fa1 < var_fs0) {
                var_s0->unk_34 = var_s1;
                var_fs0 = temp_fa1;
            }
            var_s1++;
        }
        var_s0++;
    }
}

extern Gfx D_8017220[];
extern Gfx D_80172A0[];

Gfx* func_8006F3D8(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);
    if (D_800E32C8 != 5) {
        gSPDisplayList(gfx++, D_8017220);
    }
    D_800E32C8 = 5;
    gSPDisplayList(gfx++, D_80172A0);

    return gfx;
}

extern Gfx D_8018618[];

Gfx* func_8006F444(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);
    gSPDisplayList(gfx++, D_8018618);

    return gfx;
}

extern Gfx D_801A1F8[];
extern Gfx D_801A278[];

Gfx* func_8006F478(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);
    if (D_800E32C8 != 7) {
        gSPDisplayList(gfx++, D_801A1F8);
    }
    D_800E32C8 = 7;
    gSPDisplayList(gfx++, D_801A278);

    return gfx;
}

extern Gfx D_801AEF8[];

Gfx* func_8006F4E4(Gfx* gfx) {

    gSPClearGeometryMode(gfx++, G_CULL_BACK);
    gSPDisplayList(gfx++, D_801AEF8);

    return gfx;
}

extern Gfx D_801D030[];
extern Gfx D_801D0B0[];

Gfx* func_8006F514(Gfx* gfx) {

    gSPClearGeometryMode(gfx++, G_CULL_BACK);
    if (D_800E32C8 != 9) {
        gSPDisplayList(gfx++, D_801D030);
    }
    D_800E32C8 = 9;
    gSPDisplayList(gfx++, D_801D0B0);

    return gfx;
}

extern Gfx D_801E178[];
extern Gfx D_801E1F8[];

Gfx* func_8006F57C(Gfx* gfx) {

    gSPClearGeometryMode(gfx++, G_CULL_BACK);
    if (D_800E32C8 != 10) {
        gSPDisplayList(gfx++, D_801E178);
    }
    D_800E32C8 = 10;
    gSPDisplayList(gfx++, D_801E1F8);

    return gfx;
}

extern GfxPool D_1000000;
extern Gfx D_801EAA8[];

Gfx* func_8006F5E4(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);

    if (D_800E32C8 != 11) {
        gSPDisplayList(gfx++, D_3000688);
    }
    D_800E32C8 = 11;

    gSPDisplayList(gfx++, D_30006D0);

    gSPMatrix(gfx++, K0_TO_PHYS(D_1000000.unk_2C5E8), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gfx++, D_801EAA8);

    return gfx;
}

Gfx* func_8006F68C(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);

    gSPDisplayList(gfx++, D_30006D0);

    gSPMatrix(gfx++, K0_TO_PHYS(D_1000000.unk_2C628), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gfx++, D_801EAA8);

    return gfx;
}

extern Gfx D_801EBF8[];

Gfx* func_8006F6FC(Gfx* gfx) {

    gSPSetGeometryMode(gfx++, G_CULL_BACK);

    if (D_800E32C8 != 12) {
        gSPDisplayList(gfx++, D_3000590);
    }
    D_800E32C8 = 12;

    gSPDisplayList(gfx++, D_30005D8);

    gSPMatrix(gfx++, K0_TO_PHYS(D_1000000.unk_2C668), G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);

    gSPDisplayList(gfx++, D_801EBF8);

    return gfx;
}

extern u16 D_8014A20[];
extern Gfx D_801ED28[];

Gfx* func_8006F7A4(Gfx* gfx) {

    if (D_800E32C8 != 0) {
        gDPPipeSync(gfx++);

        gDPLoadTextureBlock(gfx++, D_8014A20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);
    }

    gSPDisplayList(gfx++, D_801ED28);
    D_800E32C8 = 0;
    return gfx;
}

extern Gfx D_801EEA0[];
extern u16 D_801F018[];

Gfx* func_8006F89C(Gfx* gfx) {

    if (D_800E32C8 != 1) {
        gDPPipeSync(gfx++);

        gDPLoadTextureBlock(gfx++, D_801F018, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);
    }

    gSPDisplayList(gfx++, D_801EEA0);
    D_800E32C8 = 1;
    return gfx;
}

extern Gfx D_801F818[];
extern u16 D_801F8C8[];

Gfx* func_8006F998(Gfx* gfx) {

    if (D_800E32C8 != 2) {
        gDPPipeSync(gfx++);

        gDPLoadTextureBlock(gfx++, D_801F8C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);
    }

    gSPDisplayList(gfx++, D_801F818);
    D_800E32C8 = 2;
    return gfx;
}

extern Gfx D_80200C8[];
extern u16 D_8020208[];

Gfx* func_8006FA94(Gfx* gfx) {

    if (D_800E32C8 != 3) {
        gDPPipeSync(gfx++);

        gDPLoadTextureBlock(gfx++, D_8020208, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD);
    }

    gSPDisplayList(gfx++, D_80200C8);
    D_800E32C8 = 3;
    return gfx;
}

extern Gfx D_8021208[];
extern u16 D_8021380[];

Gfx* func_8006FB90(Gfx* gfx) {

    if (D_800E32C8 != 4) {
        gDPPipeSync(gfx++);

        gDPLoadTextureBlock(gfx++, D_8021380, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD);
    }

    gSPDisplayList(gfx++, D_8021208);
    D_800E32C8 = 4;
    return gfx;
}

void func_8006FC8C(unk_8006FC8C* arg0, f32 arg1, Vec3f* arg2) {
    s32 pad;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 temp_fv0;
    Mtx3F sp28;

    temp_fv0 = func_8009E108(arg0, arg1, &sp58);

    sp54 = ((arg0->next->radiusLeft - arg0->radiusLeft) * temp_fv0) + arg0->radiusLeft;
    sp50 = ((arg0->next->radiusRight - arg0->radiusRight) * temp_fv0) + arg0->radiusRight;

    func_8009E85C(arg0, arg1, &sp28, temp_fv0);
    func_8009E6F0(arg0, arg1, arg2);
    sp58 = (sp54 - sp50) / 2.0f;

    arg2->x += sp58 * sp28.xz;
    arg2->y += sp58 * sp28.yz;
    arg2->z += sp58 * sp28.zz;
}

void func_8006FD7C(s32 arg0, s32 arg1, f32 arg2) {
    s32 i = 0;
    s32 temp_v0;
    s32 pad;
    s32 sp0;

    if (D_800CD180 == 0) {
        sp0 = D_800F8518;
    }

    while (true) {
        temp_v0 = (i + sp0 - 1) % sp0;

        if ((D_802A9FC0[temp_v0].unk_04 < arg1 ||
             (arg1 == D_802A9FC0[temp_v0].unk_04 && D_802A9FC0[temp_v0].unk_08 <= arg2)) &&
            (arg1 < D_802A9FC0[i].unk_04 || (arg1 == D_802A9FC0[i].unk_04 && arg2 < D_802A9FC0[i].unk_08))) {
            break;
        }
        i++;
    }
    D_800E12C8[arg0] = temp_v0;
}

f32 func_8006FE90(s32 arg0, f32 arg1) {
    s32 i;
    s32 sp0;

    i = 0;
    if (D_800CD180 == 0) {
        sp0 = D_800F8518;
    }

    do {
        if (arg0 == D_802A9FC0[i].unk_04) {
            goto next;
        }
        i++;
    } while (i < sp0);

    if (arg1 <= 0.00001f) {
        return 0.0001f;
    }

    return 1.0f;

next:
    while (true) {

        if (arg0 == D_802A9FC0[i].unk_04 && arg1 < D_802A9FC0[i].unk_08) {
            break;
        }

        i++;

        if (i == D_800F8518) {
            return 1.0f;
        }

        if (arg0 != D_802A9FC0[i].unk_04) {
            return 1.0f;
        }
    }

    return D_802A9FC0[i].unk_08;
}

extern unk_802D2D78 D_802D2D78[];
extern unk_802D3E38 D_802D3E38[];

s32 func_80074BB4(Vec3f* arg0, f32 arg1);

f32 D_800CD1DC = 150.0f;
f32 D_800CD1E0 = 50.0f;
f32 D_800CD1E4 = 50.0f;

void func_8006FF90(s32 arg0, unk_8006FF90_arg_1* arg1, Vtx** arg2) {
    Vtx* vtx;
    f32 sp78;
    f32 sp74;
    s32 pad;
    f32 sp6C;
    Vec3f sp60;
    Vec3f sp54;
    Mtx3F sp30;
    unk_8006FC8C* sp2C;

    sp78 = arg1->unk_08;
    sp2C = &D_800F8510->unk_10[arg1->unk_00];
    vtx = *arg2;

    sp74 = func_8009E538(sp2C, sp78, &sp54);
    func_8009E85C(sp2C, arg1->unk_08, &sp30, func_8009E108(sp2C, arg1->unk_08, &sp6C));
    func_8006FC8C(sp2C, arg1->unk_08, &sp60);
    sp60.x += 5.0f * sp30.xy;
    sp60.y += 5.0f * sp30.yy;
    sp60.z += 5.0f * sp30.zy;
    vtx->v.ob[0] = Math_Round(((arg1->unk_10 * sp30.xz) + sp60.x) + (sp30.xx * D_800CD1E4));
    vtx->v.ob[1] = Math_Round(((arg1->unk_10 * sp30.yz) + sp60.y) + (sp30.yx * D_800CD1E4));
    vtx->v.ob[2] = Math_Round(((arg1->unk_10 * sp30.zz) + sp60.z) + (sp30.zx * D_800CD1E4));
    vtx->v.tc[0] = 0x400;
    vtx->v.tc[1] = 0x200;
    vtx++;
    vtx->v.ob[0] = Math_Round(((arg1->unk_10 + D_800CD1E0) * sp30.xz) + sp60.x);
    vtx->v.ob[1] = Math_Round(((arg1->unk_10 + D_800CD1E0) * sp30.yz) + sp60.y);
    vtx->v.ob[2] = Math_Round(((arg1->unk_10 + D_800CD1E0) * sp30.zz) + sp60.z);
    vtx->v.tc[0] = 0;
    vtx->v.tc[1] = 0;
    vtx++;
    vtx->v.ob[0] = Math_Round(((arg1->unk_10 - D_800CD1E0) * sp30.xz) + sp60.x);
    vtx->v.ob[1] = Math_Round(((arg1->unk_10 - D_800CD1E0) * sp30.yz) + sp60.y);
    vtx->v.ob[2] = Math_Round(((arg1->unk_10 - D_800CD1E0) * sp30.zz) + sp60.z);
    vtx->v.tc[0] = 0x800;
    vtx->v.tc[1] = 0;

    sp78 += D_800CD1DC / sp74;
    D_802D3E38[arg0].unk_08 = sp78;
    D_802D3E38[arg0].unk_0C.x = arg1->unk_10 - D_800CD1E0;
    D_802D3E38[arg0].unk_18.x = arg1->unk_10 + D_800CD1E0;

    sp60.x = sp60.x + sp30.xx * D_800CD1DC;
    sp60.y = sp60.y + sp30.yx * D_800CD1DC;
    sp60.z = sp60.z + sp30.zx * D_800CD1DC;

    vtx++;
    vtx->v.ob[0] = Math_Round((arg1->unk_10 * sp30.xz) + sp60.x);
    vtx->v.ob[1] = Math_Round((arg1->unk_10 * sp30.yz) + sp60.y);
    vtx->v.ob[2] = Math_Round((arg1->unk_10 * sp30.zz) + sp60.z);
    vtx->v.tc[0] = 0x400;
    vtx->v.tc[1] = 0x800;
    vtx++;
    vtx->v.ob[0] = Math_Round((((arg1->unk_10 + D_800CD1E0) * sp30.xz) + sp60.x) - (sp30.xx * D_800CD1E4));
    vtx->v.ob[1] = Math_Round((((arg1->unk_10 + D_800CD1E0) * sp30.yz) + sp60.y) - (sp30.yx * D_800CD1E4));
    vtx->v.ob[2] = Math_Round((((arg1->unk_10 + D_800CD1E0) * sp30.zz) + sp60.z) - (sp30.zx * D_800CD1E4));
    vtx->v.tc[0] = 0;
    vtx->v.tc[1] = 0x600;
    vtx++;
    vtx->v.ob[0] = Math_Round((((arg1->unk_10 - D_800CD1E0) * sp30.xz) + sp60.x) - (sp30.xx * D_800CD1E4));
    vtx->v.ob[1] = Math_Round((((arg1->unk_10 - D_800CD1E0) * sp30.yz) + sp60.y) - (sp30.yx * D_800CD1E4));
    vtx->v.ob[2] = Math_Round((((arg1->unk_10 - D_800CD1E0) * sp30.zz) + sp60.z) - (sp30.zx * D_800CD1E4));
    vtx->v.tc[0] = 0x800;
    vtx->v.tc[1] = 0x600;
    D_802D2D78[arg0].unk_00 = arg1->unk_04;
    vtx++;
    *arg2 = vtx;
}

void func_8007049C(s32 arg0, unk_8006FF90_arg_1* arg1, Vtx** arg2) {
    Vtx* vtx;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    Vec3f spD4;
    Vec3f spC8;
    Vec3f spBC;
    Vec3f spB0;
    Mtx3F sp8C;
    unk_8006FC8C* sp88;
    s32 pad;
    MtxF sp44;

    spF0 = arg1->unk_08;
    sp88 = &D_800F8510->unk_10[arg1->unk_00];
    vtx = *arg2;

    spEC = func_8009E538(sp88, spF0, &spBC);
    spE8 = func_8009E108(sp88, arg1->unk_08, &spE4);

    func_8009E85C(sp88, arg1->unk_08, &sp8C, spE8);

    spE0 = sp88->radiusLeft + sp88->radiusRight;
    spE0 = (((sp88->next->radiusLeft + sp88->next->radiusRight) - spE0) * spE8) + spE0;
    spE0 /= 2;

    func_8006FC8C(sp88, arg1->unk_08, &spC8);
    func_8006C520(NULL, &sp44, 1.0f, DEG_TO_FZXANG(arg1->unk_10), sp8C.xx, sp8C.yx, sp8C.zx, 0.0f, 0.0f, 0.0f);
    spBC.x = sp44.m[0][0] * sp8C.xz + sp44.m[1][0] * sp8C.yz + sp44.m[2][0] * sp8C.zz;
    spBC.y = sp44.m[0][1] * sp8C.xz + sp44.m[1][1] * sp8C.yz + sp44.m[2][1] * sp8C.zz;
    spBC.z = sp44.m[0][2] * sp8C.xz + sp44.m[1][2] * sp8C.yz + sp44.m[2][2] * sp8C.zz;
    func_80074BB4(&spBC, 1.0f);
    sp8C.xz = spBC.x;
    sp8C.yz = spBC.y;
    sp8C.zz = spBC.z;
    spBC.x = sp44.m[0][0] * sp8C.xy + sp44.m[1][0] * sp8C.yy + sp44.m[2][0] * sp8C.zy;
    spBC.y = sp44.m[0][1] * sp8C.xy + sp44.m[1][1] * sp8C.yy + sp44.m[2][1] * sp8C.zy;
    spBC.z = sp44.m[0][2] * sp8C.xy + sp44.m[1][2] * sp8C.yy + sp44.m[2][2] * sp8C.zy;
    func_80074BB4(&spBC, 1.0f);
    sp8C.xy = spBC.x;
    sp8C.yy = spBC.y;
    sp8C.zy = spBC.z;
    spD4 = spC8;
    spC8.x += (5.0f - spE0) * spBC.x;
    spC8.y += (5.0f - spE0) * spBC.y;
    spC8.z += (5.0f - spE0) * spBC.z;

    vtx->v.ob[0] = Math_Round((sp8C.xx * 50.0f) + spC8.x);
    vtx->v.ob[1] = Math_Round((sp8C.yx * 50.0f) + spC8.y);
    vtx->v.ob[2] = Math_Round((sp8C.zx * 50.0f) + spC8.z);
    vtx->v.tc[0] = 0x400;
    vtx->v.tc[1] = 0x200;
    vtx++;
    vtx->v.ob[0] = Math_Round((sp8C.xz * 50.0f) + spC8.x);
    vtx->v.ob[1] = Math_Round((sp8C.yz * 50.0f) + spC8.y);
    vtx->v.ob[2] = Math_Round((sp8C.zz * 50.0f) + spC8.z);
    vtx->v.tc[0] = 0;
    vtx->v.tc[1] = 0;
    spB0.x = vtx->v.ob[0] - spD4.x;
    spB0.y = vtx->v.ob[1] - spD4.y;
    spB0.z = vtx->v.ob[2] - spD4.z;
    func_80074BB4(&spB0, 1.0f);

    D_802D3E38[arg0].unk_0C = spB0;
    vtx++;

    vtx->v.ob[0] = Math_Round(spC8.x - (sp8C.xz * 50.0f));
    vtx->v.ob[1] = Math_Round(spC8.y - (sp8C.yz * 50.0f));
    vtx->v.ob[2] = Math_Round(spC8.z - (sp8C.zz * 50.0f));
    vtx->v.tc[0] = 0x800;
    vtx->v.tc[1] = 0;
    spB0.x = vtx->v.ob[0] - spD4.x;
    spB0.y = vtx->v.ob[1] - spD4.y;
    spB0.z = vtx->v.ob[2] - spD4.z;
    func_80074BB4(&spB0, 1.0f);
    D_802D3E38[arg0].unk_18 = spB0;
    D_802D3E38[arg0].unk_04 = spF0;
    spF0 += (150.0f / spEC);
    D_802D3E38[arg0].unk_08 = spF0;
    spC8.x = spC8.x + sp8C.xx * 150.0f;
    spC8.y = spC8.y + sp8C.yx * 150.0f;
    spC8.z = spC8.z + sp8C.zx * 150.0f;

    vtx++;
    vtx->v.ob[0] = Math_Round(spC8.x);
    vtx->v.ob[1] = Math_Round(spC8.y);
    vtx->v.ob[2] = Math_Round(spC8.z);
    vtx->v.tc[0] = 0x400;
    vtx->v.tc[1] = 0x800;
    vtx++;
    vtx->v.ob[0] = Math_Round(((sp8C.xz * 50.0f) + spC8.x) - (sp8C.xx * 50.0f));
    vtx->v.ob[1] = Math_Round(((sp8C.yz * 50.0f) + spC8.y) - (sp8C.yx * 50.0f));
    vtx->v.ob[2] = Math_Round(((sp8C.zz * 50.0f) + spC8.z) - (sp8C.zx * 50.0f));
    vtx->v.tc[0] = 0;
    vtx->v.tc[1] = 0x600;
    vtx++;
    vtx->v.ob[0] = Math_Round((spC8.x - (sp8C.xz * 50.0f)) - (sp8C.xx * 50.0f));
    vtx->v.ob[1] = Math_Round((spC8.y - (sp8C.yz * 50.0f)) - (sp8C.yx * 50.0f));
    vtx->v.ob[2] = Math_Round((spC8.z - (sp8C.zz * 50.0f)) - (sp8C.zx * 50.0f));
    vtx->v.tc[0] = 0x800;
    vtx->v.tc[1] = 0x600;
    D_802D2D78[arg0].unk_00 = arg1->unk_04;
    vtx++;
    *arg2 = vtx;
}

s32 D_800CD1E8 = 0;

f32 func_80074A20(Vec3f, Vec3f);
void func_8006FD7C(s32 arg0, s32 arg1, f32 arg2);
f32 func_8006FE90(s32 arg0, f32 arg1);

Vtx* func_80070B5C(unk_8006FC8C* arg0, f32 arg1, unk_8006FF90_arg_1* arg2, Vtx* arg3, f32 arg4, f32 arg5) {
    bool sp114 = false;
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv1;
    f32 var_fs2;
    f32 var_fs3;
    s32 var_s2;
    unk_8006FC8C* temp_v0;
    f32 spF4;
    Vec3f spE8;
    Vec3f spDC;
    Vec3f spD0 = { 0.0f, 0.0f, 0.0f };
    Vec3f spC4 = { 0.0f, 0.0f, 0.0f };
    Vec3f spB8 = { 0.0f, 0.0f, 0.0f };
    Vec3f spAC = { 0.0f, 0.0f, 0.0f };
    Mtx3F sp88;
    f32 temp = 1.0f;

    var_s2 = 0;

    while (true) {
        func_8006FD7C((s32) (arg3 - D_800E32D0) / 2, arg0->segmentIndex, arg1);
        func_8009E538(arg0, arg1, &spDC);
        func_8006FC8C(arg0, arg1, &spE8);
        temp_fv0 = func_8009E108(arg0, arg1, &spF4);
        func_8009E85C(arg0, arg1, &sp88, temp_fv0);
        spE8.x += sp88.y.x * 10.0f;
        spE8.y += sp88.y.y * 10.0f;
        spE8.z += sp88.y.z * 10.0f;

        temp_fv1 = arg0->radiusLeft + arg0->radiusRight;
        temp_fv1 = (((arg0->next->radiusLeft + arg0->next->radiusRight) - temp_fv1) * temp_fv0) + temp_fv1;
        temp_fv1 /= 2;

        if (arg2->unk_10 < -1.0f * temp_fv1) {
            var_fs2 = -1.0f * temp_fv1;
        } else {
            var_fs2 = arg2->unk_10;
        }

        if (temp_fv1 < arg2->unk_14) {
            var_fs3 = temp_fv1;
        } else {
            var_fs3 = arg2->unk_14;
        }
        spC4.x = Math_Round((sp88.z.x * var_fs2) + spE8.x);
        spC4.y = Math_Round((sp88.z.y * var_fs2) + spE8.y);
        spC4.z = Math_Round((sp88.z.z * var_fs2) + spE8.z);
        spAC.x = Math_Round((sp88.z.x * var_fs3) + spE8.x);
        spAC.y = Math_Round((sp88.z.y * var_fs3) + spE8.y);
        spAC.z = Math_Round((sp88.z.z * var_fs3) + spE8.z);
        if (!sp114) {
            spD0 = spC4;
            spB8 = spAC;
            sp114 = true;
        }
        arg4 += 9.0f * func_80074A20(spC4, spD0);
        arg5 += 9.0f * func_80074A20(spAC, spB8);
        if ((arg4 > 32768.0f) || (arg5 > 32768.0f)) {
            arg4 = (func_80074A20(spC4, spD0) * 9.0f) + -32768.0f;
            arg5 = (func_80074A20(spAC, spB8) * 9.0f) + -32768.0f;
        }
        arg3->v.ob[0] = spC4.x;
        arg3->v.ob[1] = spC4.y;
        arg3->v.ob[2] = spC4.z;
        spD0 = spC4;
        arg3->v.tc[0] = 0;
        arg3->v.tc[1] = arg4 * 1;
        arg3++;
        D_800CD1E8++;
        var_s2++;

        arg3->v.ob[0] = spAC.x;
        arg3->v.ob[1] = spAC.y;
        arg3->v.ob[2] = spAC.z;
        spB8 = spAC;
        arg3->v.tc[0] = func_80074A20(spC4, spAC) * 6.0f * 1;
        arg3->v.tc[1] = arg5 * 1;
        arg3++;
        D_800CD1E8++;
        var_s2++;

        if (D_800CD1E8 >= D_800E32CC) {
            return arg3;
        }

        if (arg1 == arg2->unk_0C) {
            break;
        }

        if (var_s2 == 0x20) {
            var_s2 = 0;
            while (true) {
                arg4 -= 1024.0f;
                arg5 -= 1024.0f;
                if (arg4 < -31744.0f || arg5 < -31744.0f) {
                    break;
                }
            }

        } else {
            arg1 = func_8006FE90(arg0->segmentIndex, arg1);

            if (arg2->unk_0C <= arg1) {
                if (1) {}
                arg1 = arg2->unk_0C;
            }
        }
    }
    return arg3;
}

extern Vtx D_802268C0[];
extern Vtx D_8022E8C0[];
extern unk_802D2D70 D_802D2D70;

void func_80071260(s32 arg0) {
    s32 i;
    s32 j;
    s32 pad;
    unk_8006FC8C* temp_s5;
    unk_8006FF90_arg_1* temp_s0;
    s32 pad2[2];
    unk_802D3E38* var_s6;
    f32 temp_fa0;
    Vtx* spA8;
    Vtx* spA4;
    f32 temp_fv0;
    unk_802D2D70* var_s2; // sp9C
    s32 temp_v0;
    f32 var_fv0;
    f32 var_fv1;

    D_800CD1E8 = 0;
    if (D_800CD180 != 0) {
        //! @bug Uninitalised pointers!
        D_800E32CC = 0x400;
    } else {
        D_800E32CC = 0x800;
        D_800E32D0 = D_802268C0;
        spA8 = D_802268C0;
        spA4 = D_8022E8C0;
        // FAKE
        if (1) {}
        if (1) {}
        if (1) {}
        if (1) {}
        var_s2 = &D_802D2D70;
    }

    for (i = 0; i < var_s2->index; i++) {
        temp_s0 = &var_s2->unk_00[i];
        temp_s5 = &D_800F8510->unk_10[temp_s0->unk_00];

        D_802D2D78[i].unk_00 = temp_s0->unk_04;
        D_802D2D78[i].unk_04 = spA8;
        D_802D3E38[i].unk_00 = temp_s0->unk_04;
        D_802D3E38[i].unk_04 = temp_s0->unk_08;
        D_802D3E38[i].unk_08 = temp_s0->unk_0C;
        D_802D3E38[i].unk_0C.x = temp_s0->unk_10;
        D_802D3E38[i].unk_18.x = temp_s0->unk_14;
        temp_fa0 = temp_s0->unk_08;

        if (temp_s0->unk_04 == 3) {
            var_fv1 = (temp_s5->radiusLeft + temp_s5->radiusRight) / 520.0f;
            if (var_fv1 < 1.0f) {
                var_fv1 = 1.0f;
            }
            D_800CD1DC = 150.0f * var_fv1;
            D_800CD1E0 = 50.0f * var_fv1;
            D_800CD1E4 = 50.0f * var_fv1;

            switch (temp_s5->trackSegmentInfo & TRACK_SHAPE_MASK) {
                case TRACK_SHAPE_ROAD:
                case TRACK_SHAPE_WALLED_ROAD:
                case TRACK_SHAPE_TUNNEL:
                case TRACK_SHAPE_BORDERLESS_ROAD:
                    func_8006FF90(i, temp_s0, &spA4);
                    break;
                default:
                    func_8007049C(i, temp_s0, &spA4);
                    break;
            }
        } else {
            var_fv0 = -32768.0f;
            var_fv1 = -32768.0f;

            for (j = 0; j < i; j++) {
                if ((temp_s0->unk_00 == (var_s2->unk_00[j].unk_00 + 1)) &&
                    (temp_s0->unk_04 == var_s2->unk_00[j].unk_04) && (var_s2->unk_00[j].unk_0C == 1.0f) &&
                    (temp_s0->unk_10 == var_s2->unk_00[j].unk_10) && (temp_s0->unk_14 == var_s2->unk_00[j].unk_14)) {
                    // UB?
                    // float calculation just needs to be 1.0f
                    var_fv0 = D_802D2D78[j].unk_08[-2].v.tc[1] / (2.0f - 1.0f);
                    var_fv1 = D_802D2D78[j].unk_08[-1].v.tc[1] / (2.0f - 1.0f);
                    while (true) {
                        var_fv0 -= 1024.0f;
                        var_fv1 -= 1024.0f;
                        if (var_fv0 < -31744.0f || var_fv1 < -31744.0f) {
                            break;
                        }
                    }
                }
            }
            spA8 = func_80070B5C(temp_s5, temp_fa0, temp_s0, spA8, var_fv0, var_fv1);
            if (D_800CD1E8 >= D_800E32CC) {
                var_s2->index = i - 1;
            }
            D_802D2D78[i].unk_00 = temp_s0->unk_04;
        }

        D_802D2D78[i].unk_08 = spA8;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        D_800F8510->unk_10[i].unk_54 = NULL;
        D_800F8510->unk_10[i].unk_58 = NULL;
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = 0; j < var_s2->index; j++) {
            temp_s0 = &var_s2->unk_00[j];
            if (i == temp_s0->unk_00) {
                D_800F8510->unk_10[i].unk_58 = &D_802D3E38[j + 1];
            }
        }
    }

    for (i = 0; i < D_800F8510->unk_08; i++) {
        for (j = var_s2->index - 1; j >= 0; j--) {
            temp_s0 = &var_s2->unk_00[j];
            if (i == temp_s0->unk_00) {
                D_800F8510->unk_10[i].unk_54 = &D_802D3E38[j];
            }
        }
    }

    for (i = 0; i < var_s2->index; i++) {}
}

extern CourseData D_8010B7B0;
extern unk_8006FF90_arg_1 D_802D1B70[];
extern unk_800F8510 D_802A6B40[56];

void func_80071790(s32 courseIndex, s32 trackSegment) {
    s32 index = D_802D2D70.index;
    unk_8006FF90_arg_1* var_v1 = &D_802D2D70.unk_00[index];
    unk_8006FC8C* temp_a0;
    f32 temp_fs1;
    f32 temp_fs3;

    // FAKE cast
    temp_a0 = &D_802A6B40[(s16) courseIndex].unk_10[0];
    temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
    temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
    temp_fs1 -= temp_fs3;

    switch (D_8010B7B0.pit[trackSegment]) {
        case PIT_LEFT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 1;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            index++;
            break;
        case PIT_RIGHT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 1;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
        case PIT_BOTH:
            var_v1->unk_04 = 1;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            var_v1++;
            index++;
            var_v1->unk_04 = 1;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
    }
    D_802D2D70.unk_00 = D_802D1B70;
    D_802D2D70.index = index;
}

extern s8 D_i2_8010BD50[];

void func_800718D0(s32 courseIndex, s32 trackSegment) {
    s32 index;
    unk_8006FF90_arg_1* var_v1;
    unk_8006FC8C* temp_a0;
    f32 temp_fs1;
    f32 temp_fs3;

    index = D_802D2D70.index;
    var_v1 = &D_802D2D70.unk_00[index];

    // FAKE cast
    temp_a0 = &D_802A6B40[(s16) courseIndex].unk_10[0];
    temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
    temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
    temp_fs1 -= temp_fs3;

    switch (D_8010B7B0.dirt[trackSegment]) {
        case DIRT_LEFT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 2;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            index++;
            break;
        case DIRT_RIGHT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 2;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
        case DIRT_BOTH:
            var_v1->unk_04 = 2;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            var_v1++;
            index++;
            var_v1->unk_04 = 2;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
        case DIRT_MIDDLE:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 2;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -100.0f;
            var_v1->unk_14 = 100.0f;
            index++;
            break;
    }
    D_802D2D70.unk_00 = D_802D1B70;
    D_802D2D70.index = index;
}

void func_80071A58(s32 courseIndex, s32 trackSegment) {
    s32 index;
    unk_8006FF90_arg_1* var_v1;
    unk_8006FC8C* temp_a0;
    f32 temp_fs1;
    f32 temp_fs3;

    index = D_802D2D70.index;
    var_v1 = &D_802D2D70.unk_00[index];

    // FAKE cast
    temp_a0 = &D_802A6B40[(s16) courseIndex].unk_10[0];
    temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
    temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
    temp_fs1 -= temp_fs3;

    switch (D_8010B7B0.ice[trackSegment]) {
        case ICE_LEFT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 4;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            index++;
            break;
        case ICE_RIGHT:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 4;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
        case ICE_BOTH:
            var_v1->unk_04 = 4;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = 100.0f;
            var_v1->unk_14 = 5000.0f;
            var_v1++;
            index++;
            var_v1->unk_04 = 4;
            var_v1->unk_00 = trackSegment;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -5000.0f;
            var_v1->unk_14 = -100.0f;
            index++;
            break;
        case ICE_MIDDLE:
            var_v1->unk_00 = trackSegment;
            var_v1->unk_04 = 4;
            var_v1->unk_08 = 0.0f;
            var_v1->unk_0C = 1.0f;
            var_v1->unk_10 = -100.0f;
            var_v1->unk_14 = 100.0f;
            index++;
            break;
    }
    D_802D2D70.unk_00 = D_802D1B70;
    D_802D2D70.index = index;
}

void func_80071BE4(s32 courseIndex) {
    unk_802D1B60_unk_00* var_s0;
    s32 i;
    s32 spBC;
    unk_8006FC8C* temp_s3;
    f32 var_fs0;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_ft4;
    f32 temp_fs5;
    s32 var_s1;
    s32 var_s2;
    f32 temp;
    Vec3f sp88;

    var_s1 = D_802D1B60.unk_04;
    var_s2 = D_802D1B60.unk_08;
    spBC = D_802D1B60.unk_0C;
    var_s0 = &D_802D1B60.unk_00[var_s1];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_s3 = &D_802A6B40[courseIndex].unk_10[i];
        temp_fs2 = temp_s3->unk_28;

        temp_fs3 = temp_s3->radiusLeft + temp_s3->radiusRight;
        temp_ft4 = (temp_s3->next->radiusLeft + temp_s3->next->radiusRight);
        temp_fs4 = (temp_s3->radiusLeft - temp_s3->radiusRight) / 2;
        temp_fs5 = (temp_s3->next->radiusLeft - temp_s3->next->radiusRight) / 2;
        temp_ft4 -= temp_fs3;
        temp_fs5 -= temp_fs4;

        var_fs0 = 0.0f;

        switch (D_8010B7B0.landmine[i]) {
            case 0:
                temp_fs2 /= 5.0f;
                temp = func_8009E538(temp_s3, 0.0f, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - ((temp_fs3 + (temp_ft4 * var_fs0)) / 4);
                var_s0++;
                var_s1++;
                var_s2++;

                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) + ((temp_fs3 + (temp_ft4 * var_fs0)) / 4);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_00 = 22;
                var_s0->unk_04 = i;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4;
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - ((temp_fs3 + (temp_ft4 * var_fs0)) / 4);
                var_s0++;
                var_s1++;
                var_s2++;

                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) + ((temp_fs3 + (temp_ft4 * var_fs0)) / 4);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_00 = 22;
                var_s0->unk_04 = i;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4;
                var_s0++;
                var_s1++;
                var_s2++;
                break;
            case 1:
                temp_fs2 /= 6.0f;
                var_s0->unk_00 = 22;
                var_s0->unk_04 = i;
                var_s0->unk_08 = 0.0f;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_0C = var_fs0 + temp_fs4 + ((temp_fs3 + var_fs0) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, 0.0f, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4 + (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4 + ((temp_fs3 + (temp_ft4 * var_fs0)) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4 + (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4 + ((temp_fs3 + (temp_ft4 * var_fs0)) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = (temp_fs5 * var_fs0) + temp_fs4 + (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;
                break;
            case 2:
                temp_fs2 /= 6.0f;
                var_s0->unk_00 = 22;
                var_s0->unk_04 = i;
                var_s0->unk_08 = 0.0f;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_0C = (var_fs0 + temp_fs4) - ((temp_fs3 + var_fs0) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, 0.0f, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - ((temp_fs3 + (temp_ft4 * var_fs0)) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - ((temp_fs3 + (temp_ft4 * var_fs0)) / 8);
                var_s0++;
                var_s1++;
                var_s2++;

                temp = func_8009E538(temp_s3, var_fs0, &sp88);
                var_fs0 += temp_fs2 / temp;
                var_s0->unk_04 = i;
                var_s0->unk_00 = 22;
                // clang-format off
                var_s0->unk_10.x = 0.0f; \
                var_s0->unk_10.y = 0.0f; \
                var_s0->unk_10.z = 0.0f;
                // clang-format on
                var_s0->unk_08 = var_fs0;
                var_s0->unk_0C = ((temp_fs5 * var_fs0) + temp_fs4) - (((temp_fs3 + (temp_ft4 * var_fs0)) * 3.0f) / 8);
                var_s0++;
                var_s1++;
                var_s2++;
                break;
        }
    }

    D_802D1B60.unk_08 = var_s2;
    D_802D1B60.unk_0C = spBC;
    D_802D1B60.unk_04 = var_s1;
}

void func_8007243C(s32 courseIndex) {
    unk_802D1B60_unk_00* var_s0;
    s32 spC0;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_ft3;
    s32 i;
    s32 var_s2;
    s32 var_s3;
    f32 temp_fv1;
    unk_8006FC8C* temp_a0;
    Vec3f sp88;

    spC0 = D_802D1B60.unk_08;
    var_s3 = D_802D1B60.unk_0C;
    var_s2 = D_802D1B60.unk_04;

    var_s0 = &D_802D1B60.unk_00[var_s2];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_a0 = &D_802A6B40[courseIndex].unk_10[i];

        temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
        temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
        temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
        temp_fs1 = ((temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2);
        temp_fs0 -= temp_fs2;
        temp_fs1 -= temp_fs3;

        temp_fv1 = 0.0f;

        switch (D_8010B7B0.jump[i]) {
            case JUMP_ALL:
                temp_fv1 -= 100.0f / func_8009E538(temp_a0, 1.0f, &sp88);
                temp_fv1 += 1.0f;

                var_s0->unk_00 = 0x17;
                var_s0->unk_04 = i;
                var_s0->unk_08 = temp_fv1;
                var_s0->unk_0C = (temp_fs1 * temp_fv1) + temp_fs3;
                var_s0->unk_10.x = temp_fs2 + (temp_fs0 * temp_fv1);
                var_s0->unk_10.y = 30.0f;
                var_s0->unk_10.z = 60.0f;
                var_s0++;
                var_s2++;
                var_s3++;
                break;
            case JUMP_LEFT:
                temp_fv1 -= 100.0f / func_8009E538(temp_a0, 1.0f, &sp88);
                temp_fv1 += 1.0f;

                var_s0->unk_00 = 0x17;
                var_s0->unk_04 = i;
                var_s0->unk_08 = temp_fv1;
                var_s0->unk_0C = ((temp_fs1 * temp_fv1) + temp_fs3) + ((temp_fs2 + (temp_fs0 * temp_fv1)) / 4);
                var_s0->unk_10.x = (temp_fs2 + (temp_fs0 * temp_fv1)) / 2;
                var_s0->unk_10.y = 30.0f;
                var_s0->unk_10.z = 60.0f;
                var_s0++;
                var_s2++;
                var_s3++;
                break;
            case JUMP_RIGHT:
                temp_fv1 -= 100.0f / func_8009E538(temp_a0, 1.0f, &sp88);
                temp_fv1 += 1.0f;

                var_s0->unk_00 = 0x17;
                var_s0->unk_04 = i;
                var_s0->unk_08 = temp_fv1;
                var_s0->unk_0C = ((temp_fs1 * temp_fv1) + temp_fs3) - ((temp_fs2 + (temp_fs0 * temp_fv1)) / 4);
                var_s0->unk_10.x = (temp_fs2 + (temp_fs0 * temp_fv1)) / 2;
                var_s0->unk_10.y = 30.0f;
                var_s0->unk_10.z = 60.0f;
                var_s0++;
                var_s2++;
                var_s3++;
                break;
        }
    }

    D_802D1B60.unk_08 = spC0;
    D_802D1B60.unk_0C = var_s3;
    D_802D1B60.unk_04 = var_s2;
}

void func_80072758(s32 arg0, s32 arg1) {
    s32 sp5C;
    f32 sp58;
    f32 temp;
    f32 var_fs0;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    unk_8006FC8C* sp3C;
    unk_8006FF90_arg_1* sp38;
    Vec3f sp2C;

    sp5C = D_802D2D70.index;
    sp38 = &D_802D2D70.unk_00[sp5C];
    sp3C = &D_802A6B40[arg0].unk_10[arg1];
    sp4C = sp3C->radiusLeft + sp3C->radiusRight;
    sp48 = sp3C->next->radiusLeft + sp3C->next->radiusRight;
    sp44 = (sp3C->radiusLeft - sp3C->radiusRight) / 2;
    sp40 = (sp3C->next->radiusLeft - sp3C->next->radiusRight) / 2;
    sp48 -= sp4C;
    sp40 -= sp44;
    sp58 = sp3C->unk_28;

    var_fs0 = 0;

    switch (D_8010B7B0.dash[arg1]) {
        case DASH_MIDDLE:
            sp58 /= 2;
            temp = func_8009E538(sp3C, 0, &sp2C);
            var_fs0 += sp58 / temp;
            sp38->unk_00 = arg1;
            sp38->unk_04 = 3;
            sp38->unk_08 = var_fs0;
            sp38->unk_0C = 1.0f;

            switch (sp3C->trackSegmentInfo & TRACK_SHAPE_MASK) {
                case TRACK_SHAPE_HALF_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 0.0f;
                    break;
                case TRACK_SHAPE_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 22.5f;
                    break;
                case TRACK_SHAPE_CYLINDER:
                    sp38->unk_10 = sp38->unk_14 = 202.5f;
                    break;
                default:
                    sp38->unk_10 = 0.0f;
                    sp38->unk_14 = 0.0f;
                    break;
            }
            sp5C++;
            break;
        case DASH_LEFT:
            sp58 /= 2;
            temp = func_8009E538(sp3C, 0, &sp2C);
            var_fs0 += sp58 / temp;
            sp4C = (var_fs0 * sp48) + sp4C;
            sp38->unk_00 = arg1;
            sp38->unk_04 = 3;
            sp38->unk_08 = var_fs0;
            sp38->unk_0C = 1.0f;
            sp38->unk_10 = (sp4C / 2.0) - 100.0f;
            sp38->unk_14 = sp38->unk_10;
            if (sp38->unk_10 < 0.0f) {
                sp38->unk_10 = 0.0f;
            }
            sp38->unk_14 = sp38->unk_10;

            switch (sp3C->trackSegmentInfo & TRACK_SHAPE_MASK) {
                case TRACK_SHAPE_HALF_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 45.0f;
                    break;
                case TRACK_SHAPE_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 157.5f;
                    break;
                case TRACK_SHAPE_CYLINDER:
                    sp38->unk_10 = sp38->unk_14 = 337.5f;
                    break;
            }
            sp5C++;
            break;
        case DASH_RIGHT:
            sp58 /= 2;
            temp = func_8009E538(sp3C, 0, &sp2C);
            var_fs0 += sp58 / temp;
            sp4C = (var_fs0 * sp48) + sp4C;
            sp38->unk_00 = arg1;
            sp38->unk_04 = 3;
            sp38->unk_08 = var_fs0;
            sp38->unk_0C = 1.0f;
            sp38->unk_10 = ((sp4C / 2.0) - 100.0f) * -1.0f;

            if (sp38->unk_10 > 0.0f) {
                sp38->unk_10 = 0.0f;
            }
            sp38->unk_14 = sp38->unk_10;

            switch (sp3C->trackSegmentInfo & TRACK_SHAPE_MASK) {
                case TRACK_SHAPE_HALF_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 315.0f;
                    break;
                case TRACK_SHAPE_PIPE:
                    sp38->unk_10 = sp38->unk_14 = 247.5f;
                    break;
                case TRACK_SHAPE_CYLINDER:
                    sp38->unk_10 = sp38->unk_14 = 67.5f;
                    break;
            }
            sp5C++;
            break;
    }

    D_802D2D70.unk_00 = D_802D1B70;
    D_802D2D70.index = sp5C;
}

void func_80072BB0(s32 courseIndex) {
    s32 j;
    s32 i;
    s32 var_a1;
    unk_8006FC8C* temp_t2;
    unk_802D1B60_unk_00* var_a2;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;

    var_a1 = D_802D1B60.unk_04;

    var_a2 = &D_802D1B60.unk_00[var_a1];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < D_802A6B40[courseIndex].unk_08; j++) {
            temp_t2 = &D_802A6B40[courseIndex].unk_10[j];

            if (i == 3) {}

            temp_fs2 = temp_t2->radiusLeft + temp_t2->radiusRight;
            temp_fs0 = temp_t2->next->radiusLeft + temp_t2->next->radiusRight;
            temp_fs3 = (temp_t2->radiusLeft - temp_t2->radiusRight) / 2;
            temp_fs1 = (temp_t2->next->radiusLeft - temp_t2->next->radiusRight) / 2;
            temp_fs0 -= temp_fs2;
            temp_fs1 -= temp_fs3;

            if (i == D_8010B7B0.gate[j]) {
                switch (D_8010B7B0.gate[j]) {
                    case GATE_SQUARE:
                        var_a2->unk_00 = 0;
                        break;
                    case GATE_START:
                        var_a2->unk_00 = 1;
                        break;
                    case GATE_HEXAGONAL:
                        var_a2->unk_00 = 2;
                        break;
                }
                var_a2->unk_04 = j;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_fs3;
                var_a2->unk_10.x = 0.0f;
                var_a2->unk_10.y = 0.0f;
                var_a2->unk_10.z = 0.0f;
                var_a1++;
                var_a2++;
            }
        }
    }
    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
    D_802D1B60.unk_04 = var_a1;
}

void func_80072D00(s32 courseIndex) {
    s32 var_a1;
    s32 i;
    unk_8006FC8C* temp_a0;
    unk_802D1B60_unk_00* var_a2;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;

    var_a1 = D_802D1B60.unk_04;

    var_a2 = &D_802D1B60.unk_00[var_a1];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_a0 = &D_802A6B40[courseIndex].unk_10[i];

        temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
        temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
        temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
        temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
        temp_fs0 -= temp_fs2;
        temp_fs1 -= temp_fs3;

        switch (D_8010B7B0.building[i]) {
            case BUILDING_TALL_LEFT:
                var_a2->unk_00 = 12;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_TALL_RIGHT:
                var_a2->unk_00 = 13;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_TALL_BOTH:
                var_a2->unk_00 = 12;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                var_a2->unk_04 = i;
                var_a2->unk_00 = 13;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
        }
    }
    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
    D_802D1B60.unk_04 = var_a1;
}

void func_80072ECC(s32 courseIndex) {
    s32 var_a1;
    s32 i;
    s32 j;
    unk_8006FC8C* temp_a0;
    unk_802D1B60_unk_00* var_a2;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;

    var_a1 = D_802D1B60.unk_04;

    var_a2 = &D_802D1B60.unk_00[var_a1];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_a0 = &D_802A6B40[courseIndex].unk_10[i];

        temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
        temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
        temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
        temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
        temp_fs0 -= temp_fs2;
        temp_fs1 -= temp_fs3;

        switch (D_8010B7B0.building[i]) {
            case BUILDING_SHORT_LEFT:
                var_a2->unk_00 = 14;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_SHORT_RIGHT:
                var_a2->unk_00 = 15;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_SHORT_BOTH:
                var_a2->unk_00 = 14;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                var_a2->unk_04 = i;
                var_a2->unk_00 = 15;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
        }
    }

    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
    D_802D1B60.unk_04 = var_a1;
}

void func_800730A4(s32 courseIndex) {
    s32 var_a1;
    s32 i;
    s32 j;
    unk_8006FC8C* temp_a0;
    unk_802D1B60_unk_00* var_a2;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;

    var_a1 = D_802D1B60.unk_04;
    var_a2 = &D_802D1B60.unk_00[var_a1];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_a0 = &D_802A6B40[courseIndex].unk_10[i];

        temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
        temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
        temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
        temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
        temp_fs0 -= temp_fs2;
        temp_fs1 -= temp_fs3;

        switch (D_8010B7B0.building[i]) {
            case BUILDING_SPIRE_LEFT:
                var_a2->unk_00 = 16;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_SPIRE_RIGHT:
                var_a2->unk_00 = 17;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_SPIRE_BOTH:
                var_a2->unk_00 = 16;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                var_a2->unk_04 = i;
                var_a2->unk_00 = 17;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
        }
    }

    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
    D_802D1B60.unk_04 = var_a1;
}

void func_8007327C(s32 courseIndex) {
    s32 var_a1;
    s32 i;
    s32 j;
    unk_8006FC8C* temp_a0;
    unk_802D1B60_unk_00* var_a2;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;

    var_a1 = D_802D1B60.unk_04;

    var_a2 = &D_802D1B60.unk_00[var_a1];

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        temp_a0 = &D_802A6B40[courseIndex].unk_10[i];

        temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
        temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
        temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
        temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
        temp_fs0 -= temp_fs2;
        temp_fs1 -= temp_fs3;

        switch (D_8010B7B0.building[i]) {
            case BUILDING_MOUNTAIN_BOTH:
                var_a2->unk_00 = 0x12;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                var_a2->unk_04 = i;
                var_a2->unk_00 = 0x13;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_MOUNTAIN_LEFT:
                var_a2->unk_00 = 0x12;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_MOUNTAIN_RIGHT:
                var_a2->unk_00 = 0x13;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_TALL_GOLD_BOTH:
                var_a2->unk_00 = 0x14;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                var_a2->unk_04 = i;
                var_a2->unk_00 = 0x15;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_TALL_GOLD_LEFT:
                var_a2->unk_00 = 0x14;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = temp_a0->radiusLeft + 500.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
            case BUILDING_TALL_GOLD_RIGHT:
                var_a2->unk_00 = 0x15;
                var_a2->unk_04 = i;
                var_a2->unk_08 = 0.0f;
                var_a2->unk_0C = (temp_a0->radiusRight + 500.0f) * -1.0f;
                // clang-format off
                var_a2->unk_10.x = 0.0f; \
                var_a2->unk_10.y = 0.0f; \
                var_a2->unk_10.z = 0.0f;
                // clang-format on
                var_a2++;
                var_a1++;
                break;
        }
    }

    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
    D_802D1B60.unk_04 = var_a1;
}

void func_80073510(s32 courseIndex) {
    func_80072D00(courseIndex);
    func_80072ECC(courseIndex);
    func_800730A4(courseIndex);
    func_8007327C(courseIndex);
}

void func_80073548(s32 courseIndex) {
    unk_802D1B60_unk_00* var_a2;
    s32 var_a1 = D_802D1B60.unk_04;
    s32 temp_v0 = D_802D1B60.unk_08;
    s32 temp_v1 = D_802D1B60.unk_0C;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs2;
    f32 temp_fs3;
    unk_8006FC8C* temp_a0;
    s32 i;
    s32 j;

    var_a2 = &D_802D1B60.unk_00[var_a1];

    for (i = 0; i < 5; i++) {
        for (j = 0; j < D_802A6B40[courseIndex].unk_08; j++) {
            temp_a0 = &D_802A6B40[courseIndex].unk_10[j];

            if (i == 5) {}

            temp_fs2 = temp_a0->radiusLeft + temp_a0->radiusRight;
            temp_fs0 = temp_a0->next->radiusLeft + temp_a0->next->radiusRight;
            temp_fs3 = (temp_a0->radiusLeft - temp_a0->radiusRight) / 2;
            temp_fs1 = (temp_a0->next->radiusLeft - temp_a0->next->radiusRight) / 2;
            temp_fs0 -= temp_fs2;
            temp_fs1 -= temp_fs3;

            if (i == D_8010B7B0.sign[j]) {
                switch (D_8010B7B0.sign[j]) {
                    case SIGN_TV:
                        var_a2->unk_00 = 3;
                        var_a2->unk_04 = j;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = (temp_a0->radiusRight + 23.0f + 20.0f) * -1.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        var_a2->unk_04 = j;
                        var_a2->unk_00 = 4;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = temp_a0->radiusLeft + 23.0f + 20.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        break;
                    case SIGN_2:
                        var_a2->unk_00 = 5;
                        var_a2->unk_04 = j;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = (temp_a0->radiusRight + 23.0f + 20.0f) * -1.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        var_a2->unk_04 = j;
                        var_a2->unk_00 = 6;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = temp_a0->radiusLeft + 23.0f + 20.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        break;
                    case SIGN_1:
                        var_a2->unk_00 = 7;
                        var_a2->unk_04 = j;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = (temp_a0->radiusRight + 23.0f + 20.0f) * -1.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        var_a2->unk_04 = j;
                        var_a2->unk_00 = 8;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = temp_a0->radiusLeft + 23.0f + 20.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        break;
                    case SIGN_NINTEX:
                        var_a2->unk_00 = 9;
                        var_a2->unk_04 = j;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = (temp_a0->radiusRight + 23.0f + 20.0f) * -1.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        var_a2->unk_04 = j;
                        var_a2->unk_00 = 10;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = temp_a0->radiusLeft + 23.0f + 20.0f;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        break;
                    case SIGN_OVERHEAD:
                        var_a2->unk_00 = 11;
                        var_a2->unk_04 = j;
                        var_a2->unk_08 = 0.0f;
                        var_a2->unk_0C = temp_fs3;
                        // clang-format off
                        var_a2->unk_10.x = 0.0f; \
                        var_a2->unk_10.y = 0.0f; \
                        var_a2->unk_10.z = 0.0f;
                        // clang-format on
                        var_a2++;
                        var_a1++;
                        break;
                }
            }
        }
    }

    D_802D1B60.unk_04 = var_a1;
    D_802D1B60.unk_08 = temp_v0;
    D_802D1B60.unk_0C = temp_v1;
}

extern s32 D_802CDFD0;

void func_80073894(s32 courseIndex) {
    if (D_800CD180 != 0) {
        if (D_802CDFD0 < 4) {
            return;
        }
    } else if (D_8010B7B0.controlPointCount < 4) {
        return;
    }

    D_802D1B60.unk_08 = 0;
    D_802D1B60.unk_0C = 0;
    D_802D1B60.unk_04 = 0;
    func_80071BE4(courseIndex);
    func_8007243C(courseIndex);
    func_80072BB0(courseIndex);
    func_80073510(courseIndex);
    func_80073548(courseIndex);
}

extern s32 D_800CD180;

void func_8007392C(s32 courseIndex) {
    s32 i;

    if (D_800CD180 != 0) {
        if (D_802CDFD0 < 4) {
            return;
        }
    } else if (D_8010B7B0.controlPointCount < 4) {
        return;
    }

    D_802D2D70.index = 0;

    for (i = 0; i < D_802A6B40[courseIndex].unk_08; i++) {
        func_80071A58(courseIndex, i);
        func_800718D0(courseIndex, i);
        func_80071790(courseIndex, i);
        func_80072758(courseIndex, i);
    }
}

extern s32 gCourseIndex;
extern CourseData D_8010C770;
extern unk_8006FC8C D_802CDFD8[];
extern unk_8006FC8C D_802C2020[];

void func_80073A04(void) {
    unk_8006FC8C* var_a1;
    unk_800F8510* var_a0;
    s32 var_a3;
    s32 i;

    var_a0 = &D_802A6B40[gCourseIndex];
    var_a1 = D_802C2020;
    var_a0->unk_10 = D_802C2020;

    for (i = 0; i < var_a0->unk_08; i++) {
        var_a1->segmentIndex = i;
        var_a1->next = var_a1 + 1;
        var_a1->prev = var_a1 - 1;
        var_a1++;
    }

    var_a0->unk_10->prev = &var_a0->unk_10[var_a0->unk_08 - 1];
    var_a0->unk_10[var_a0->unk_08 - 1].next = var_a0->unk_10;

    var_a3 = 0;
    for (i = 0; i < var_a0->unk_08; i++) {
        var_a1 = &var_a0->unk_10[i];
        if (!(var_a1->trackSegmentInfo & (TRACK_SHAPE_MASK | TRACK_TYPE_MASK))) {
            var_a3 = i;
            break;
        }
    }

    var_a1 = &var_a0->unk_10[var_a3];

    for (i = 0; i < var_a0->unk_08; i++) {
        if (var_a1->next->trackSegmentInfo & (TRACK_SHAPE_MASK | TRACK_TYPE_MASK)) {
            var_a3 = var_a1->segmentIndex;
            break;
        }
        var_a1 = var_a1->next;
    }

    var_a3 = var_a0->unk_10[var_a3].next->segmentIndex;
    var_a1 = &var_a0->unk_10[var_a3];
    for (i = 0; i < var_a0->unk_08; i++) {
        D_802CDFD8[i] = *var_a1;

        D_8010C770.bankAngle[i] = D_8010B7B0.bankAngle[var_a1->segmentIndex];
        D_8010C770.pit[i] = D_8010B7B0.pit[var_a1->segmentIndex];
        D_8010C770.dash[i] = D_8010B7B0.dash[var_a1->segmentIndex];
        D_8010C770.dirt[i] = D_8010B7B0.dirt[var_a1->segmentIndex];
        D_8010C770.ice[i] = D_8010B7B0.ice[var_a1->segmentIndex];
        D_8010C770.jump[i] = D_8010B7B0.jump[var_a1->segmentIndex];
        D_8010C770.landmine[i] = D_8010B7B0.landmine[var_a1->segmentIndex];
        D_8010C770.gate[i] = D_8010B7B0.gate[var_a1->segmentIndex];
        D_8010C770.building[i] = D_8010B7B0.building[var_a1->segmentIndex];
        D_8010C770.sign[i] = D_8010B7B0.sign[var_a1->segmentIndex];
        var_a1 = var_a1->next;
    }

    for (i = 0; i < var_a0->unk_08; i++) {
        D_802C2020[i] = D_802CDFD8[i];
        var_a0->unk_10[i] = D_802CDFD8[i];

        D_8010B7B0.bankAngle[i] = D_8010C770.bankAngle[i];
        D_8010B7B0.pit[i] = D_8010C770.pit[i];
        D_8010B7B0.dash[i] = D_8010C770.dash[i];
        D_8010B7B0.dirt[i] = D_8010C770.dirt[i];
        D_8010B7B0.ice[i] = D_8010C770.ice[i];
        D_8010B7B0.jump[i] = D_8010C770.jump[i];
        D_8010B7B0.landmine[i] = D_8010C770.landmine[i];
        D_8010B7B0.gate[i] = D_8010C770.gate[i];
        D_8010B7B0.building[i] = D_8010C770.building[i];
        D_8010B7B0.sign[i] = D_8010C770.sign[i];
    }

    var_a1 = var_a0->unk_10;
    for (i = 0; i < var_a0->unk_08; i++) {
        var_a1->segmentIndex = i;
        var_a1->next = var_a1 + 1;
        var_a1->prev = var_a1 - 1;
        var_a1++;
    }
    var_a0->unk_10->prev = &var_a0->unk_10[var_a0->unk_08 - 1];
    var_a0->unk_10[var_a0->unk_08 - 1].next = var_a0->unk_10;
}

extern OSMesgQueue gDmaMesgQueue;
extern OSIoMesg D_800DCCA8;
extern OSPiHandle* gCartRomHandle;

void Dma_ClearRomCopy(void* romAddr, void* ramAddr, size_t size) {
    osInvalDCache(osPhysicalToVirtual(ramAddr), size);
    D_800DCCA8.hdr.pri = OS_MESG_PRI_NORMAL;
    D_800DCCA8.hdr.retQueue = &gDmaMesgQueue;
    D_800DCCA8.dramAddr = osPhysicalToVirtual(ramAddr);
    D_800DCCA8.devAddr = (uintptr_t) romAddr;
    D_800DCCA8.size = size;
    gCartRomHandle->transferInfo.cmdType = LEO_CMD_TYPE_2;
    osEPiStartDma(gCartRomHandle, &D_800DCCA8, OS_READ);
    MQ_WAIT_FOR_MESG(&gDmaMesgQueue, NULL);
}

void func_80073ED0(void* romAddr, void* ramAddr, size_t size) {
    OSMesg sp20[8];

    if (gDmaMesgQueue.validCount >= gDmaMesgQueue.msgCount) {
        MQ_WAIT_FOR_MESG(&gDmaMesgQueue, sp20);
    }
    osInvalDCache(osPhysicalToVirtual(ramAddr), size);
    D_800DCCA8.hdr.pri = OS_MESG_PRI_NORMAL;
    D_800DCCA8.hdr.retQueue = &gDmaMesgQueue;
    D_800DCCA8.dramAddr = osPhysicalToVirtual(ramAddr);
    D_800DCCA8.devAddr = (uintptr_t) romAddr;
    D_800DCCA8.size = size;
    gCartRomHandle->transferInfo.cmdType = LEO_CMD_TYPE_2;
    osEPiStartDma(gCartRomHandle, &D_800DCCA8, OS_READ);
    MQ_WAIT_FOR_MESG(&gDmaMesgQueue, sp20);
}

void func_80073FA0(u8* romAddr, u8* ramAddr, size_t size) {
    s32 remainder;
    s32 i;
    s32 numBlocks = size / 1024;

    for (i = 0; i < numBlocks; i++) {
        func_80073ED0(romAddr, ramAddr, 0x400);

        romAddr += 0x400;
        ramAddr += 0x400;
    }

    remainder = size % 1024;
    if (remainder) {
        func_80073ED0(romAddr, ramAddr, remainder);
    }
}

// todo: move these to appropriate places
static const char devrostr0[] = "\n/***\nCOURSE GADGET TEXTURE OVER!! %f,%f\n***/\n";
static const char devrostr1[] = "GADGET OVER !! OVER !! OVER !!\n";
static const char devrostr2[] = "Gadget Vtx Over %d!!\n";
static const char devrostr3[] = "move start position %d\n";
static const char devrostr4[] = "look index %d\n";
static const char devrostr5[] = "index %d\n";
static const char devrostr6[] = "ENTRY CHECK\n";

extern u8 D_i2_8010D730[][9];
extern s16 D_80106F48;

void func_80074428(s32 arg0);

void func_8007402C(s32 courseIndex) {
    s32 pad;
    s32 sp28;

    if (courseIndex >= 54) {
        func_80073FA0(SEGMENT_ROM_START(course_data) + (courseIndex - 30) * sizeof(CourseData),
                      osVirtualToPhysical(&D_8010B7B0), sizeof(CourseData));
        if ((D_80106F48 >= 4) && (courseIndex == 55)) {
            D_8010B7B0.skybox = SKYBOX_BLUE;
        }
    } else if (courseIndex >= 48) {
        func_800A3044();
        return;
    } else if (courseIndex >= 24) {
        sp28 = courseIndex - 24;
        if (func_800760F8() != 2) {
            osWritebackDCacheAll();
            LeoDD_DrawIsDiskInserted();
            osWritebackDCacheAll();
        }

        while (func_800760F8() != 2) {}

        if (func_i1_80403680(0xFFFB, D_i2_8010D730[sp28], "CRSD\0\0\0\0ENTRY CHECK OK\n") != 0xFFFF) {
            func_i1_804096C8(0xFFFB, D_i2_8010D730[sp28], "CRSD\0\0\0\0ENTRY LOAD OK\n\0\0UNPACK\n\0UNPACK OK\n",
                             &D_8010B7B0, 0);
        }
    } else {
        func_80073FA0(SEGMENT_ROM_START(course_data) + courseIndex * sizeof(CourseData),
                      osVirtualToPhysical(&D_8010B7B0), sizeof(CourseData));
    }

    func_80074428(courseIndex);
}

void func_800741DC(s32 courseIndex) {
    func_80073894(courseIndex);
    func_8007392C(courseIndex);
}

void func_80074204(void) {
    s32 i;

    for (i = 0; i < 64; i++) {
        D_8010B7B0.bankAngle[i] = 0;
        D_8010B7B0.pit[i] = PIT_NONE;
        D_8010B7B0.dash[i] = DASH_NONE;
        D_8010B7B0.dirt[i] = DIRT_NONE;
        D_8010B7B0.ice[i] = ICE_NONE;
        D_8010B7B0.jump[i] = JUMP_NONE;
        D_8010B7B0.landmine[i] = LANDMINE_NONE;
        D_8010B7B0.gate[i] = GATE_NONE;
        D_8010B7B0.building[i] = BUILDING_NONE;
        D_8010B7B0.sign[i] = SIGN_NONE;
    }
}

void func_80074204(void);

void func_800742D0(void) {
    func_80074204();
    D_8010B7B0.venue = VENUE_MUTE_CITY;
    D_8010B7B0.skybox = SKYBOX_PURPLE;
}

extern unk_8006FF90_arg_1 D_802D1B70[];
extern unk_802D1B60_unk_00 D_802D0FE0[];
extern CourseData D_8010CF50;

void func_800742FC(void) {
    s32 i;

    bzero(SEGMENT_VRAM_START(unk_context), SEGMENT_BSS_SIZE(unk_context));
    func_80074204();
    D_802CDFD0 = 0;
    D_8010B7B0.creatorId = CREATOR_NINTENDO;
    D_8010B7B0.controlPointCount = 0;
    D_8010B7B0.venue = VENUE_MUTE_CITY;
    D_8010B7B0.skybox = SKYBOX_PURPLE;
    D_8010CF50 = D_8010B7B0;
    D_802D1B60.unk_00 = D_802D0FE0;
    D_802A6B40[0].unk_10 = D_802C2020;
    D_802D2D70.unk_00 = D_802D1B70;

    for (i = 0; i < ARRAY_COUNT(D_802A6B40); i++) {}

    func_8007402C(0);
    func_80074204();
    D_8010CF50 = D_8010B7B0;
    D_8010B7B0.controlPointCount = 0;
    D_802CDFD0 = 0;
}

void func_80074428(s32 arg0) {
    s32 i;
    unk_8006FC8C* var_v0;
    CourseData* courseData = &D_8010B7B0;

    if (courseData->controlPointCount == 0) {
        return;
    }

    D_802A6B40[arg0].unk_10 = D_802C2020;
    D_802A6B40[arg0].unk_08 = courseData->controlPointCount;

    for (i = 0; i < courseData->controlPointCount; i++) {
        D_802C2020[i].pos = courseData->controlPoint[i].pos;
        D_802C2020[i].radiusLeft = courseData->controlPoint[i].radiusLeft;
        D_802C2020[i].radiusRight = courseData->controlPoint[i].radiusRight;
        D_802C2020[i].trackSegmentInfo = courseData->controlPoint[i].trackSegmentInfo;
    }

    var_v0 = D_802C2020;
    for (i = 0; i < courseData->controlPointCount; i++, var_v0++) {
        var_v0->segmentIndex = i;
        var_v0->next = var_v0 + 1;
        var_v0->prev = var_v0 - 1;
    }

    D_802C2020[0].prev = &D_802C2020[courseData->controlPointCount - 1];
    D_802C2020[courseData->controlPointCount - 1].next = &D_802C2020[0];

    if (courseData->controlPointCount < 4) {
        return;
    }

    func_8009DEAC(&D_802A6B40[arg0]);
    func_80074CE4(&D_802A6B40[arg0]);
    func_8009F508(&D_802A6B40[arg0]);
}

extern unk_8006FC8C D_802CB6D0[];

void func_80074594(void) {
    s32 i;
    CourseData* courseData = &D_8010B7B0;

    courseData->controlPointCount = D_802CDFD0;

    for (i = 0; i < courseData->controlPointCount; i++) {
        courseData->controlPoint[i].pos = D_802CB6D0[i].pos;
        courseData->controlPoint[i].radiusLeft = D_802CB6D0[i].radiusLeft;
        courseData->controlPoint[i].radiusRight = D_802CB6D0[i].radiusRight;
        courseData->controlPoint[i].trackSegmentInfo = D_802CB6D0[i].trackSegmentInfo;
    }
}

void func_80074634(unk_800F8510* arg0) {
    unk_8006FC8C* temp_a1;
    s32 i;
    f32 var_fv0 = 65536.0f;
    f32 var_fv1 = -65536.0f;
    f32 var_fa0 = 65536.0f;
    f32 var_fa1 = -65536.0f;

    for (i = 0; i < arg0->unk_08; i++) {

        temp_a1 = &arg0->unk_10[i];

        if (temp_a1->pos.x < var_fv0) {
            var_fv0 = temp_a1->pos.x;
        }
        if (var_fv1 < temp_a1->pos.x) {
            var_fv1 = temp_a1->pos.x;
        }

        if (temp_a1->pos.z < var_fa0) {
            var_fa0 = temp_a1->pos.z;
        }
        if (var_fa1 < temp_a1->pos.z) {
            var_fa1 = temp_a1->pos.z;
        }
    }

    for (i = 0; i < arg0->unk_08; i++) {

        temp_a1 = &arg0->unk_10[i];

        temp_a1->pos.x -= ((var_fv0 + var_fv1) / 2);
        temp_a1->pos.z -= ((var_fa0 + var_fa1) / 2);
    }
}

extern unk_8006FC8C D_802CB6D0[];

void func_80074744(void) {
    unk_8006FC8C* var_a0;
    s32 i;
    s32 trackShape;

    for (i = 0; i < D_802CDFD0; i++) {
        var_a0 = &D_802CB6D0[i];
        trackShape = var_a0->trackSegmentInfo & TRACK_SHAPE_MASK;
        switch (trackShape) {
            case TRACK_SHAPE_PIPE:
            case TRACK_SHAPE_CYLINDER:
            case TRACK_SHAPE_HALF_PIPE:
            case TRACK_SHAPE_AIR:
                D_8010B7B0.pit[i] = PIT_NONE;
                D_8010B7B0.dirt[i] = DIRT_NONE;
                D_8010B7B0.ice[i] = ICE_NONE;
                D_8010B7B0.jump[i] = JUMP_NONE;
                D_8010B7B0.landmine[i] = LANDMINE_NONE;
                break;
        }
        switch (trackShape) {
            case TRACK_SHAPE_ROAD:
            case TRACK_SHAPE_BORDERLESS_ROAD:
                break;
            default:
                D_8010B7B0.gate[i] = GATE_NONE;
                D_8010B7B0.sign[i] = SIGN_NONE;
                break;
        }
    }
}

UNUSED s32 D_800CD21C = 0;

s32 D_800CD220[] = { 1, 0, 0, 0, 2, 3, 4, 0, 0, 0, 0 };
s32 D_800CD24C[] = { 1, 2, 0, 1, 2, 0, 1, 2, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

void func_800747EC(s32 venue) {
    void* sp1C = (D_800CD220[venue] * 0x800) + SEGMENT_ROM_START(segment_2747F0);

    func_80073FA0(sp1C, Segment_SegmentedToVirtual(D_8014A20), 0x800);
}

extern GfxPool* D_800DCCF0;
extern s8 D_800DCE5C;

void func_80074844(void) {
    static s32 D_800CD298 = 0;
    static s32 D_800CD29C = 0;
    f32 temp;
    MtxF sp3C;

    if (D_800DCE5C == 0) {
        D_800CD298 = (D_800CD298 + 0xFE9) & 0xFFF;
        D_800CD29C = (D_800CD29C + 0xFDE) & 0xFFF;
    }

    sp3C.m[2][1] = sp3C.m[0][1] = sp3C.m[1][0] = sp3C.m[1][2] = sp3C.m[3][0] = sp3C.m[3][1] = sp3C.m[3][2] =
        sp3C.m[0][3] = sp3C.m[1][3] = sp3C.m[2][3] = 0.0f;

    sp3C.m[3][3] = sp3C.m[1][1] = 1.0f;

    sp3C.m[2][0] = temp = SIN(0x1000 - D_800CD298);
    sp3C.m[0][2] = -temp;

    sp3C.m[0][0] = sp3C.m[2][2] = temp = COS(0x1000 - D_800CD298);

    Matrix_ToMtx(&sp3C, D_800DCCF0->unk_2C5E8);

    sp3C.m[2][0] = temp = SIN(D_800CD298);
    sp3C.m[0][2] = -temp;
    sp3C.m[0][0] = sp3C.m[2][2] = temp = COS(D_800CD298);

    Matrix_ToMtx(&sp3C, D_800DCCF0->unk_2C628);
    sp3C.m[1][2] = temp = SIN(D_800CD29C);
    sp3C.m[2][1] = -temp;
    sp3C.m[2][2] = sp3C.m[1][1] = temp = COS(D_800CD29C);

    sp3C.m[2][0] = sp3C.m[0][2] = 0.0f;
    sp3C.m[0][0] = 1.0f;
    Matrix_ToMtx(&sp3C, D_800DCCF0->unk_2C668);
}

UNUSED s32 D_800CD2A0 = -1;

f32 func_80074A20(Vec3f arg0, Vec3f arg1) {
    return sqrtf(SQ(arg1.x - arg0.x) + SQ(arg1.y - arg0.y) + SQ(arg1.z - arg0.z));
}
