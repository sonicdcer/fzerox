#include "global.h"
#include "src/overlays/ovl_i2/ovl_i2.h"
#include "ovl_i3.h"
#include "fzx_game.h"
#include "fzx_racer.h"
#include "assets/segment_2B9EA0.h"
#include "assets/segment_17B960.h"

u16 D_i3_80143780;
u16 D_i3_80143782;
s32 D_i3_80143784;
s32 D_i3_80143788;
s32 D_i3_8014378C;
s32 D_i3_80143790;
int D_i3_80143794;
s32 D_i3_80143798;
s32 D_i3_8014379C;
s32 D_i3_801437A0;
s32 D_i3_801437A4;
s16 D_i3_801437A8;
s16 D_i3_801437AA;
s16 D_i3_801437AC;
s16 D_i3_801437AE;
s16 D_i3_801437B0;
s16 D_i3_801437B2;
s16 D_i3_801437B4;
s16 D_i3_801437B6;
s16 D_i3_801437B8;
s16 D_i3_801437BA;
s16 D_i3_801437BC;
unk_801437C0 D_i3_801437C0[50];
s16 D_i3_801439B4[3];
unk_80077D50* D_i3_801439BC;
u16 D_i3_801439C0;

extern f32 D_800CE748;
extern f32 D_800CE74C;
extern f32 D_800CE750;
extern Mtx D_8024DC80;
extern Lights1 D_8024DCC0;

extern s32 gGameMode;

void func_i3_80139D20(void) {

    D_i3_80143780 = 0;
    D_i3_80143782 = 0;
    if (gGameMode == GAMEMODE_TIME_ATTACK) {
        D_i3_80143784 = 0;
        D_i3_80143780 |= 0x48;
        D_i3_80143790 = 0x19;
        D_i3_80143794 = 0x40;
        D_i3_80143798 = 0x23;
        D_i3_8014379C = 0xDC;
        D_i3_801437A0 = 0x3C;
        D_i3_801437A4 = 0x21;
        D_i3_801437A8 = 0xDC;
        D_i3_801437AA = 0x76;
        D_i3_801437AC = 0;
        D_i3_801437AE = -0xC;
        D_i3_80143788 = 0x140;
        D_i3_8014378C = 0x1E;
    } else {
        D_i3_80143784 = 2;
        D_i3_80143780 |= 0x17;
        D_i3_80143790 = 0x19;
        D_i3_80143794 = 0x40;
        D_i3_80143798 = 0x23;
        D_i3_8014379C = 0xDC;
        D_i3_801437A0 = 0x61;
        D_i3_801437A4 = 0x21;
        D_i3_801437A8 = 0xDC;
        D_i3_801437AA = 0xAA;
        D_i3_801437AC = 0;
        D_i3_801437AE = -0xC;
        D_i3_80143788 = 0;
        D_i3_8014378C = 0;
    }
    func_8006BC84(&D_8024DC80, NULL, 0.7f * D_800CE748, 0.7f * D_800CE74C, 0.7f * D_800CE750, 0.0f, 0.0f, 1.0f, 0.0f,
                  1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    Lights_SetSource(&D_8024DCC0, 0, 0, 0, 255, 255, 255, 100, 50, 69);
    func_80078104(aBestTex, 0x180, 0, 0, 0);

    if (D_i3_80143780 & 4) {
        func_80078104(aRecordsAccelerationSpeedGraphTex, 0x400, 0, 0, 0);
        func_80078104(aRecordsAccelerationSpeedSliderTex, 0x80, 0, 0, 0);
    }
    if (D_i3_80143780 & 0x10) {
        func_i3_8013BF18(1);
        func_80078104(aRecordsArrowTex, 0x800, 0, 1, 0);
    }
}

void func_i3_80139FF4(void) {
    D_i3_80143782 = 1;
}

extern GfxPool* D_800DCCF0;

bool func_i3_8013A004(void) {
    Vp* v0;
    s32 i;
    bool var_a0;
    f32 temp_ft1;
    s32 temp_t6;
    s32 var_a2;

    var_a0 = false;
    switch (D_i3_80143784) {
        case 0:
            if (D_i3_80143782 != 0) {
                D_i3_80143782 = 0;
                D_i3_80143784 = 1;
            }
            break;
        case 1:
            D_i3_80143788 = (D_i3_8014378C * 320.0f) / 30.0f;
            D_i3_8014378C--;

            if (D_i3_8014378C < 0) {
                D_i3_80143788 = 0;
                D_i3_8014378C = 0;
                D_i3_80143784 = 2;
            }
            break;
        case 2:
            var_a0 = true;
            break;
    }

    v0 = D_800DCCF0->unk_2C308;
    for (i = 0; i < 5; i++) {
        var_a2 = (i & 1) ? -D_i3_80143788 : D_i3_80143788;

        v0->vp.vscale[0] = 640;
        v0->vp.vscale[1] = 480;
        v0->vp.vscale[2] = 0x1FF;
        v0->vp.vscale[3] = 0;
        v0->vp.vtrans[0] = (var_a2 + D_i3_80143790 + 45) << 2;
        v0->vp.vtrans[1] = ((D_i3_80143794 + (D_i3_80143798 * i)) - 4) << 2;
        v0->vp.vtrans[2] = 0x1FF;
        v0->vp.vtrans[3] = 0;
        v0++;
    }

    v0->vp.vscale[0] = 640;
    v0->vp.vscale[1] = 480;
    v0->vp.vscale[2] = 0x1FF;
    v0->vp.vscale[3] = 0;
    v0->vp.vtrans[0] = (D_i3_80143788 + D_i3_8014379C + 36) << 2;
    v0->vp.vtrans[1] = (D_i3_801437A0 + D_i3_801437A4) << 2;
    v0->vp.vtrans[2] = 0x1FF;
    v0->vp.vtrans[3] = 0;

    return var_a0;
}

Gfx* func_i3_8013BB80(Gfx* gfx, s32 arg1, u8* arg2);
Gfx* func_i3_8013BBF8(Gfx* gfx, s32 arg1, s32 arg2, f32 arg3);

extern Mtx D_2028480;
extern Lights0 D_20284C0;
extern FrameBuffer* D_800DCCD0[];
extern char* gTrackNames[55];
extern Gfx D_8014940[];
extern unk_struct_1DC D_800E5220[];
extern GfxPool D_1000000;

extern u32 gGameFrameCount;
extern s32 D_800DCD04;
extern s16 D_800E5FE2;
extern s16 D_800E5FE4;
extern s16 D_800E5FE6;

Gfx* func_i3_8013A360(Gfx* gfx, s32 courseIndex) {
    unk_800F8510* var_s2;
    s32 sp1A8;
    s32 xl;
    s32 yl;
    bool var_a0;
    bool var_v0;
    s32 i;
    s32 var_s3;
    s32 temp1;
    s32 temp2;
    f32 var_fv0;
    s8 sp174[0x10];
    char* var;

    gSPDisplayList(gfx++, D_303A810);
    gDPPipeSync(gfx++);
    gDPSetColorImage(gfx++, G_IM_FMT_RGBA, G_IM_SIZ_16b, SCREEN_WIDTH, OS_PHYSICAL_TO_K0(D_800DCCD0[D_800DCD04]));

    if (D_i3_80143780 & 2) {
        gfx = func_8007A440(gfx, 0xC, 8, 0x134, 0xE8, 0, 0, 0, 0xBF);
    }
    if (D_i3_80143780 & 1) {
        var = gTrackNames[courseIndex];
        i = func_i2_801062E4(var, 3, 1);

        gfx = func_i3_DrawBeveledBox(gfx, 0x99 - i / 2, 0x15, i / 2 + 0xA7, 0x2B, 0, 0, 0xC8, 0x7F);

        gDPPipeSync(gfx++);
        gDPSetPrimColor(gfx++, 0, 0, 0, 0, 0, 255);

        gfx = func_i2_80106450(gfx, 0xA2 - (func_i2_801062E4(var, 3, 1) / 2), 0x2A, var, 1, 3, 0);

        gDPPipeSync(gfx++);
        gDPSetPrimColor(gfx++, 0, 0, 250, 250, 0, 255);

        gfx = func_i2_80106450(gfx, 0xA0 - (func_i2_801062E4(var, 3, 1) / 2), 0x28, var, 1, 3, 0);

        if ((D_i3_80143780 & 0x10) && (D_i3_80143780 & 0x20)) {
            temp2 = (gGameFrameCount % 40);
            temp1 = (temp2 / 20);
            temp2 %= 20;

            var_fv0 = temp2 / 20.0f;

            if (temp1 != 0) {
                var_fv0 = 1.0 - var_fv0;
            }
            var_s3 = (s32) (10.0f * var_fv0);

            gfx = func_8007B14C(gfx, func_800783AC(aRecordsArrowTex), (-(i / 2) - var_s3) + 0x76, 16, 32, 32,
                                G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 0, 0);
            gfx = func_8007B14C(gfx, func_800783AC(aRecordsArrowTex), (i / 2) + var_s3 + 0xAA, 16, 32, 32,
                                G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 1, 0);
        }
    }

    if (D_i3_80143780 & 0x40) {
        var_s2 = &D_802A6B40[courseIndex];
        for (i = 0; i < 5; i++) {
            if (i & 1) {
                var_s3 = -D_i3_80143788;
            } else {
                var_s3 = D_i3_80143788;
            }
            if (var_s2->timeRecord[i] != MAX_TIMER) {
                xl = func_i2_801062E4(var_s2->unk_AC[i], 1, 1);
                if (xl > 0) {
                    gfx = func_i3_DrawBeveledBox(gfx, (var_s3 + D_i3_80143790) + 0x4A,
                                                 (D_i3_80143794 + (D_i3_80143798 * i)) + 3,
                                                 (var_s3 + D_i3_80143790) + xl + 0x4D,
                                                 (D_i3_80143794 + (D_i3_80143798 * i)) + 0x11, 0, 0, 0, 0x80);
                }
            }
        }
    }

    sp1A8 = 1;
    var_s2 = &D_802A6B40[courseIndex];
    for (i = 0; i < 5; i++) {

        if (i & 1) {
            var_s3 = -D_i3_80143788;
        } else {
            var_s3 = D_i3_80143788;
        }

        if (var_s2->timeRecord[i] != MAX_TIMER) {
            if ((i != 0) && (var_s2->timeRecord[i] != var_s2->timeRecord[i - 1])) {
                sp1A8 = i + 1;
            }
        } else {
            sp1A8 = i + 1;
        }

        sprintf(sp174, "%d", sp1A8);

        gDPPipeSync(gfx++);
        gDPSetPrimColor(gfx++, 0, 0, 0, 0, 0, 255);

        gfx =
            func_i2_80106450(gfx, var_s3 + D_i3_80143790 + 2, (D_i3_80143798 * i) + D_i3_80143794 + 2, sp174, 1, 3, 0);

        if (D_i3_80143780 & 8) {
            if (D_800E5FE2 == i + 1) {
                var_a0 = true;
            } else {
                var_a0 = false;
            }
        } else {
            var_a0 = false;
        }

        gDPPipeSync(gfx++);

        if (var_a0) {
            gfx = func_8007DB28(gfx, 0);
        } else {
            gDPSetPrimColor(gfx++, 0, 0, 250, 250, 255, 255);
        }
        gfx = func_i2_80106450(gfx, var_s3 + D_i3_80143790, (D_i3_80143798 * i) + D_i3_80143794, sp174, 1, 3, 0);
    }
    gSPDisplayList(gfx++, D_8014940);

    gDPLoadTextureBlock(gfx++, D_303C3F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 224, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    for (i = 0; i < 5; i++) {
        if (i & 1) {
            var_s3 = -D_i3_80143788;
        } else {
            var_s3 = D_i3_80143788;
        }
        if (var_s2->timeRecord[i] != MAX_TIMER) {

            if (D_i3_80143780 & 8) {
                if (D_800E5FE2 == i + 1) {
                    var_a0 = true;
                } else {
                    var_a0 = false;
                }
            } else {
                var_a0 = false;
            }

            gDPPipeSync(gfx++);

            if (var_a0) {
                gDPSetCombineMode(gfx++, G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM);
                gfx = func_8007F090(gfx, 255, 0, 0);
            } else {
                gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
            }
            gfx = func_i3_DrawTimerScisThousandths(gfx, var_s2->timeRecord[i], var_s3 + D_i3_80143790 + 0x4B,
                                                   (D_i3_80143794 + (D_i3_80143798 * i)) - 0xE, 1.0f);
        }
    }

    if (var_s2->unk_D8 != MAX_TIMER) {

        if (D_i3_80143780 & 8) {
            if (D_800E5FE6 != 0) {
                var_a0 = true;
            } else {
                var_a0 = false;
            }
        } else {
            var_a0 = false;
        }

        gDPPipeSync(gfx++);

        if (var_a0) {
            gDPSetCombineMode(gfx++, G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM);
            gfx = func_8007F090(gfx, 255, 0, 0);
        } else {
            gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
        }
        gfx = func_i3_DrawTimerScisThousandths(gfx, var_s2->unk_D8, D_i3_801437A8 + D_i3_80143788, D_i3_801437AA, 1.0f);
    }

    xl = D_i3_801437A8 + D_i3_80143788 + D_i3_801437AC;
    yl = D_i3_801437AA + D_i3_801437AE;

    gDPPipeSync(gfx++);
    gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);

    gDPLoadTextureBlock(gfx++, func_800783AC(aBestTex), G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 12, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);

    gSPTextureRectangle(gfx++, xl << 2, yl << 2, (xl + 16) << 2, (yl + 12) << 2, 0, 0, 0, 1 << 10, 1 << 10);

    gDPLoadTextureBlock(gfx++, D_303D1F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 12, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    gSPTextureRectangle(gfx++, (xl + 16) << 2, yl << 2, (xl + 32) << 2, (yl + 12) << 2, 0, 0, 0, 1 << 10, 1 << 10);

    gDPPipeSync(gfx++);
    gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);

    for (i = 0; i < 5; i++) {
        if (i & 1) {
            var_s3 = -D_i3_80143788;
        } else {
            var_s3 = D_i3_80143788;
        }
        if (var_s2->timeRecord[i] == MAX_TIMER) {
            gfx = func_i2_80106450(gfx, var_s3 + D_i3_80143790 + 0x4B, (D_i3_80143794 + (D_i3_80143798 * i)) - 2,
                                   "--------", 1, 4, 0);
        }
    }

    if (var_s2->unk_D8 == MAX_TIMER) {
        gfx = func_i2_80106450(gfx, D_i3_801437A8 + D_i3_80143788, D_i3_801437AA + 0xC, "--------", 1, 4, 0);
    }

    for (i = 0; i < 5; i++) {
        if (i & 1) {
            var_s3 = -D_i3_80143788;
        } else {
            var_s3 = D_i3_80143788;
        }
        if (var_s2->timeRecord[i] != MAX_TIMER) {
            gfx = func_i2_80106450(gfx, var_s3 + D_i3_80143790 + 0x4B, D_i3_80143794 + (D_i3_80143798 * i) + 0x12,
                                   var_s2->unk_AC[i], 1, 1, 0);
        }
    }

    if (D_i3_80143780 & 4) {
        for (i = 0; i < 5; i++) {
            if (var_s2->timeRecord[i] != MAX_TIMER) {
                gfx = func_i3_8013BBF8(gfx, 0xB2, (i * 0x23) + 0x33, var_s2->unk_98[i]);
            }
        }
    }
    gSPDisplayList(gfx++, D_8014940);

    if (D_i3_80143780 & 8) {
        if (D_800E5FE4 != 0) {
            var_v0 = true;
        } else {
            var_v0 = false;
        }
    } else {
        var_v0 = false;
    }

    gfx = func_i3_DrawSpeed(gfx, D_i3_80143788 + D_i3_8014379C, D_i3_801437A0, var_s2->unk_C0, var_v0, true);
    gSPLoadUcodeL(gfx++, gspF3DFLX_Rej_fifo);
    gfx = Segment_SetTableAddresses(gfx);
    gSPClipRatio(gfx++, FRUSTRATIO_3);
    gSPPerspNormalize(gfx++, D_800E5220[1].unk_118);
    gSPMatrix(gfx++, &D_1000000.unk_20208[1], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPDisplayList(gfx++, D_303A5F8);
    gSPNumLights(gfx++, NUMLIGHTS_1);
    gSPLight(gfx++, &D_20284C0.l[0], 1);
    gSPLight(gfx++, &D_20284C0.a, 2);
    gSPMatrix(gfx++, &D_2028480, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

    for (i = 0; i < 5; i++) {
        if (var_s2->timeRecord[i] != MAX_TIMER) {
            gfx = func_i3_8013BB80(gfx, i, var_s2->unk_34[i]);
        }
    }

    if (var_s2->unk_C0 != 0.0f) {
        gfx = func_i3_8013BB80(gfx, 5, var_s2->unk_C4);
    }
    return gfx;
}

extern Gfx D_80149A0[];

Gfx* func_i3_DrawSpeed(Gfx* gfx, s32 left, s32 top, f32 arg3, bool arg4, bool drawMaxSpeedTexture) {
    s32 i;
    s32 speed;
    s32 digitMask;
    bool startedDrawSpeed;
    s32 digit;
    s32 texLeft;

    gSPDisplayList(gfx++, D_80149A0);
    gDPSetFillColor(gfx++, GPACK_RGBA5551(0, 0, 0, 1) << 16 | GPACK_RGBA5551(0, 0, 0, 1));
    gDPFillRectangle(gfx++, left + 12, top, left + 35, top + 15);
    gSPDisplayList(gfx++, D_8014940);

    texLeft = left;
    speed = (arg3 * 21.6f) + 0.5f;
    if (drawMaxSpeedTexture) {
        gDPPipeSync(gfx++);
        gDPLoadTextureBlock(gfx++, D_303AA70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

        gSPScisTextureRectangle(gfx++, (texLeft + 4) << 2, (top - 17) << 2, (texLeft + 68) << 2, (top - 1) << 2, 0, 0,
                                0, 1 << 10, 1 << 10);
    }

    gDPPipeSync(gfx++);

    gDPLoadTextureBlock(gfx++, D_303C170, G_IM_FMT_RGBA, G_IM_SIZ_16b, 20, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    texLeft += 48;
    gSPScisTextureRectangle(gfx++, texLeft << 2, top << 2, (texLeft + 20) << 2, (top + 16) << 2, 0, 0, 0, 1 << 10,
                            1 << 10);

    gDPPipeSync(gfx++);

    if (arg4) {
        gfx = func_8007F090(gfx, 255, 0, 0);
        gDPSetCombineMode(gfx++, G_CC_MODULATEIDECALA_PRIM, G_CC_MODULATEIDECALA_PRIM);
    } else {
        gDPSetCombineMode(gfx++, G_CC_DECALRGBA, G_CC_DECALRGBA);
    }
    gDPLoadTextureBlock(gfx++, D_303B270, G_IM_FMT_RGBA, G_IM_SIZ_16b, 12, 160, 0, G_TX_NOMIRROR | G_TX_WRAP,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

    digitMask = 1000;
    startedDrawSpeed = false;

    for (i = 0; i < 4; i++) {
        digit = speed / digitMask;
        speed %= digitMask;
        digitMask /= 10;
        if ((digit != 0) || (startedDrawSpeed) || (i == 3)) {
            if (1) {}
            startedDrawSpeed = true;
            gSPScisTextureRectangle(gfx++, (left + (i * 12)) << 2, top << 2, (left + ((i + 1) * 12)) << 2,
                                    (top + 16) << 2, 0, 0, (digit * 16) << 5, 1 << 10, 1 << 10);
        }
    }
    return gfx;
}

extern GfxPool D_1000000;

Gfx* func_i3_8013BB80(Gfx* gfx, s32 arg1, u8* arg2) {
    gSPViewport(gfx++, &D_1000000.unk_2C308[arg1]);

    return func_8009CBE8(gfx, arg1 + 1, arg2[8], arg2[9], arg2[10]);
}

Gfx* func_i3_8013BBF8(Gfx* gfx, s32 arg1, s32 arg2, f32 arg3) {
    u32 var_t8;

    gDPLoadTextureBlock(gfx++, func_800783AC(aRecordsAccelerationSpeedGraphTex), G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);

    gSPTextureRectangle(gfx++, arg1 << 2, arg2 << 2, (arg1 + 32) << 2, (arg2 + 16) << 2, 0, 0, 0, 1 << 10, 1 << 10);

    var_t8 = arg3 * 29.5f;

    gDPLoadTextureBlock(gfx++, func_800783AC(aRecordsAccelerationSpeedSliderTex), G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0,
                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD,
                        G_TX_NOLOD);

    gSPTextureRectangle(gfx++, (arg1 + var_t8 - 2) << 2, (arg2 + 9) << 2, (arg1 + var_t8 + 6) << 2, (arg2 + 17) << 2, 0,
                        0, 0, 1 << 10, 1 << 10);

    return gfx;
}

void func_i3_8013BF18(s32 arg0) {
    if (arg0 != 0) {
        D_i3_80143780 |= 0x20;
    } else {
        D_i3_80143780 &= ~0x20;
    }
}

extern RaceStats gCupRaceStats[][6];
extern s16 gRacersKOd;
extern s16 D_800E5FE2;
extern s16 D_800E5FE4;

void func_i3_8013BF50(s32 arg0) {
    Racer* racer;
    RaceStats* temp_a3;
    s32 i;
    s32 index = arg0 % 6;

    for (i = 0, racer = gRacers; i < 1; i++, racer++) {
        temp_a3 = &gCupRaceStats[i][index];
        temp_a3->raceTime = racer->raceTime;
        temp_a3->maxSpeed = racer->maxSpeed;
        temp_a3->position = racer->position;
        temp_a3->unk_0A = 0;
        if (D_800E5FE2 != 0) {
            temp_a3->unk_0A |= (D_800E5FE2 & 0xF);
        }
        if (D_800E5FE4 != 0) {
            temp_a3->unk_0A |= ((D_800E5FE4 & 0xF) << 4);
        }
        temp_a3->racersKOd = gRacersKOd;
    }
}

extern s16 D_800E5FE2;
extern s32 gCourseIndex;

void func_i3_8013C008(void) {
    unk_800F8510* temp_v1;
    s32 i;

    if (D_800E5FE2 != 0) {
        temp_v1 = &D_802A6B40[gCourseIndex];
        for (i = 0; i < 4; i++) {
            temp_v1->unk_AC[D_800E5FE2 - 1][i] = 0;
        }
    }
}

s32 func_i3_8013D1B4(s8);
extern s8 D_800E42C8[];

void func_i3_8013C080(void) {
    s32 i;

    D_i3_801437B0 = 0;
    D_i3_801437B4 = 0;
    D_i3_801437B6 = D_i3_801437B8 = 0;
    D_i3_801437BA = 0;

    for (i = 0; i < 4; i++) {
        D_800E42C8[i] = 0;
    }

    D_i3_801437BC = func_i3_8013D1B4(60);
    if (D_i3_801437BA >= 3) {
        D_i3_801437B6 = (D_i3_801437BC % 10);
        D_i3_801437B8 = (D_i3_801437BC / 10);
    }
}

void func_i3_8013C380(void);
void func_i3_8013C3B4(s32);
void func_i3_8013C6D8(void);

extern Controller gControllers[];
extern s32 gPlayerControlPorts[];

void func_i3_8013C15C(void) {
    func_8007DABC(&gControllers[gPlayerControlPorts[0]]);
    switch (D_i3_801437B0) {
        case 0:
            func_i3_8013C380();
            return;
        case 1:
            func_i3_8013C3B4(0);
            return;
        case 3:
            func_i3_8013C3B4(1);
            return;
        case 2:
            func_i3_8013C6D8();
            return;
    }
}

signed char D_i3_80140F50[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ'!.,0123456789       >-<";

void func_i3_8013C20C(s32 arg0) {
    unk_801437C0* var_s0;
    s32 i;

    for (i = 0, var_s0 = D_i3_801437C0; i < 50; i++, var_s0++) {
        var_s0->unk_00 = D_i3_80140F50[i];
        var_s0->unk_01 = 0;
        var_s0->unk_02 = Math_Rand1() % SCREEN_WIDTH;
        var_s0->unk_04 = Math_Rand1() % SCREEN_HEIGHT;

        if (arg0 == 0) {
            var_s0->unk_06 = var_s0->unk_02;
            var_s0->unk_08 = var_s0->unk_04;
        } else {
            var_s0->unk_06 = ((i % 10) * 20) + 62;
            var_s0->unk_08 = ((i / 10) * 20) + 100;
        }
    }
}

void func_i3_8013C380(void) {
    D_i3_801437B0 = 1;
    D_i3_801437B4 = 0;
    func_i3_8013C20C(0);
}

void func_i3_8013C3B4(s32 arg0) {
    unk_801437C0* var_s0;
    s32 i;
    s16 var_s2;
    s16 var_s3;
    s16 var_s4;
    s16 var_v1;

    for (i = 0, var_s0 = D_i3_801437C0; i < 50; i++, var_s0++) {
        if (arg0 == 0) {
            var_s2 = var_s0->unk_02;
            var_s3 = var_s0->unk_04;
            var_s4 = ((i / 10) * 20) + 100;
            var_v1 = ((i % 10) * 20) + 62;
            var_v1 += ((16 - func_i2_801062E4(&var_s0->unk_00, 1, 1)) / 2);
        } else {
            var_s3 = ((i / 10) * 20) + 100;
            var_s2 = ((i % 10) * 20) + 62;
            var_s2 += ((16 - func_i2_801062E4(&var_s0->unk_00, 1, 1)) / 2);
            var_v1 = var_s0->unk_02;
            var_s4 = var_s0->unk_04;
        }
        var_s0->unk_06 = (s16) (var_s2 + ((s32) ((var_v1 - var_s2) * D_i3_801437B4) / 60));
        var_s0->unk_08 = (s16) (var_s3 + ((s32) ((var_s4 - var_s3) * D_i3_801437B4) / 60));
    }
    D_i3_801437B4++;
    if (D_i3_801437B4 > 60) {
        if (arg0 == 0) {
            D_i3_801437B0 = 2;
            D_i3_801437B4 = 0;
            for (i = 0, var_s0 = D_i3_801437C0; i < 3; i++, var_s0++) {
                var_s0->unk_00 = 0;
            }
        } else {
            D_i3_801419BC = false;
            func_i3_80139FF4();
        }
    }
}

void func_i3_8013D214(unk_800F8510* arg0);

extern u32 gGameFrameCount;
extern u16 gInputPressed;
extern u16 gInputButtonPressed;
extern unk_80077D50* sFont1CompTexInfos[];

void func_i3_8013C6D8(void) {
    unk_801437C0* temp_a1;
    Vp* vp;
    s32 i;
    s32 sp128;
    s32 temp_t4;
    bool sp120;
    s32 sp11C;
    s32 sp118;
    s32 temp_ft0;
    s32 temp_ft4;
    unk_800F8510* sp10C;
    s32 sp64;
    s32 sp60;
    Vtx* vtx;
    unk_80077D50* spFC;
    f32 spEC[4];
    f32 spDC[4];
    f32 spCC[4];
    f32 spBC[4];
    f32 spB8;
    f32 temp_fv0;
    MtxF sp74;

    sp10C = &D_802A6B40[gCourseIndex];
    temp_t4 = (D_i3_801437B8 * 10) + D_i3_801437B6;

    if (D_i3_801437BA < 3) {
        if (gInputPressed & BTN_LEFT) {
            do {
                if (--D_i3_801437B6 < 0) {
                    D_i3_801437B6 = 9;
                }
                sp128 = (D_i3_801437B8 * 10) + D_i3_801437B6;
            } while (D_i3_80140F50[sp128] == ' ');
        }
        if (gInputPressed & BTN_RIGHT) {
            do {
                if (++D_i3_801437B6 > 9) {
                    D_i3_801437B6 = 0;
                }
                sp128 = (D_i3_801437B8 * 10) + D_i3_801437B6;
            } while (D_i3_80140F50[sp128] == ' ');
        }
        if (gInputPressed & BTN_UP) {
            do {
                if (--D_i3_801437B8 < 0) {
                    D_i3_801437B8 = 4;
                }
                sp128 = (D_i3_801437B8 * 10) + D_i3_801437B6;
            } while (D_i3_80140F50[sp128] == ' ');
        }
        if (gInputPressed & BTN_DOWN) {
            do {
                if (++D_i3_801437B8 > 4) {
                    D_i3_801437B8 = 0;
                }
                sp128 = (D_i3_801437B8 * 10) + D_i3_801437B6;
            } while (D_i3_80140F50[sp128] == ' ');
        }
    }

    sp128 = (D_i3_801437B8 * 10) + D_i3_801437B6;
    if (temp_t4 != sp128) {
        func_800BA8D8(0x1E);
    }
    if (gInputButtonPressed & BTN_A) {
        sp120 = false;
        switch (D_i3_80140F50[sp128]) {
            case '<':
                func_i3_8013D214(sp10C);
                break;
            case '>':
                sp120 = true;
                D_800E42C8[D_i3_801437BA] = ' ';
                break;
            default:
                sp120 = true;
                D_800E42C8[D_i3_801437BA] = D_i3_80140F50[sp128];
                break;
        }

        if (sp120) {
            temp_a1 = &D_i3_801437C0[D_i3_801437BA];
            temp_a1->unk_00 = D_800E42C8[D_i3_801437BA];
            temp_a1->unk_01 = 0;
            temp_a1->unk_02 = ((s16) (sp128 % 10) * 20) + 62;
            temp_a1->unk_04 = ((s16) (sp128 / 10) * 20) + 100;
            D_i3_801439B4[D_i3_801437BA] = 0;
            D_i3_801437BA++;
            if (D_i3_801437BA >= 3) {
                D_i3_801437B6 = D_i3_801437BC % 10;
                D_i3_801437B8 = D_i3_801437BC / 10;
            }
        }
        func_800BA8D8(0x21);
    } else if (gInputButtonPressed & BTN_START) {
        if (D_i3_80140F50[sp128] == '<') {
            func_i3_8013D214(sp10C);
        } else {
            D_i3_801437B6 = D_i3_801437BC % 10;
            D_i3_801437B8 = D_i3_801437BC / 10;
        }
        func_800BA8D8(0x21);
    } else if (gInputButtonPressed & BTN_B) {
        D_i3_801437BA--;
        if (D_i3_801437BA < 0) {
            D_i3_801437BA = 0;
        }
        sp128 = func_i3_8013D1B4(D_800E42C8[D_i3_801437BA]);

        D_i3_801437B6 = sp128 % 10;
        D_i3_801437B8 = sp128 / 10;
        D_800E42C8[D_i3_801437BA] = 0;
        func_800BA8D8(0x10);
    }
    if (D_i3_801437B0 == 2) {
        sp64 = ((s16) (sp128 % 10) * 20) + 62;
        sp60 = ((s16) (sp128 / 10) * 20) + 100;

        for (i = 0, temp_a1 = D_i3_801437C0; i < 3; i++, temp_a1++) {
            if (temp_a1->unk_00 != 0) {
                temp_a1->unk_06 =
                    ((D_i3_801439B4[i] * ((s16) (((i * 20) + 0x84)) - temp_a1->unk_02)) / 15) + temp_a1->unk_02;
                temp_a1->unk_08 = ((D_i3_801439B4[i] * (210 - temp_a1->unk_04)) / 15) + temp_a1->unk_04;
                D_i3_801439B4[i]++;
                if (D_i3_801439B4[i] >= 15) {
                    D_i3_801439B4[i] = 0;
                    temp_a1->unk_00 = 0;
                }
            }
        }
        spFC = sFont1CompTexInfos[func_i2_80106024(&D_i3_80140F50[sp128], FONT_SET_UPPERCASE_ONLY)];
        D_i3_801439BC = spFC;

        spEC[0] = spEC[2] = 0.0f - (spFC->width * 0.5f);
        spEC[1] = spEC[3] = spEC[0] + spFC->width;

        spDC[0] = spDC[1] = spFC->height * 0.5f;
        spDC[2] = spDC[3] = spDC[0] - spFC->height;

        vtx = D_800DCCF0->unk_29D08;
        for (i = 0; i < 4; i++) {
            sp11C = Math_Round(spEC[i]);
            sp118 = Math_Round(spDC[i]);
            if (i & 1) {
                spCC[i] = spFC->width;
            } else {
                spCC[i] = 0.0f;
            }

            if (i >= 2) {
                spBC[i] = spFC->height;
            } else {
                spBC[i] = 0.0f;
            }
            temp_ft4 = spCC[i] * 32.0f;
            temp_ft0 = spBC[i] * 32.0f;
            SET_VTX(vtx, sp11C, sp118, 0, temp_ft4, temp_ft0, 0, 0, 0, 0);
            vtx++;
        }
        temp_fv0 = (s16) sp60 - spFC->height * 0.5f;
        spB8 = (s16) sp64 + 8.0f;
        vp = D_800DCCF0->unk_2C2D8;
        vp->vp.vscale[0] = 0x500;
        vp->vp.vscale[1] = 0x3C0;
        vp->vp.vscale[2] = 0x1FF;
        vp->vp.vscale[3] = 0;
        vp->vp.vtrans[0] = spB8 * 4.0f;
        vp->vp.vtrans[1] = temp_fv0 * 4.0f;
        vp->vp.vtrans[2] = 0x1FF;
        vp->vp.vtrans[3] = 0;

        temp_ft0 = gGameFrameCount % 128;
        i = ((temp_ft0 << 12) / 127) % 4096;

        temp_ft0 = gGameFrameCount % 32;
        temp_fv0 = temp_ft0 / 31.0f;

        if ((gGameFrameCount / 64) % 2) {
            temp_fv0 = 1.0f - temp_fv0;
        }
        spB8 = (100.0f * temp_fv0) + 400.0f;
        if (spB8 > 500.0f) {
            spB8 = 500.0f;
        }

        func_8006D03C(&D_800DCCF0->unk_2B2C8[1], &sp74, 60.0f, 16.0f, 8129.0f, 320.0f, 0.0f, 240.0f, 0.0f,
                      &D_i3_801439C0);
        func_8006CC98(&D_800DCCF0->unk_2B2C8[2], &sp74, 0.0f, 0.0f, spB8, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
        func_8006C378(&D_800DCCF0->unk_2B2C8[3], &sp74, spB8, 0, i, i, 0.0f, 0.0f, 0.0f);
    }
}

s32 func_i3_8013D1B4(s8 arg0) {
    s32 i;
    s8 var_v0;
    s32 ret = 0;

    if (arg0 == ' ') {
        var_v0 = '>';
    } else {
        var_v0 = arg0;
    }

    for (i = 0; i != 50; i++) {
        if (D_i3_80140F50[i] == var_v0) {
            ret = i;
            break;
        }
    }

    return ret;
}

void func_i3_8013D214(unk_800F8510* arg0) {
    s32 i;
    s32 var_v1;

    D_i3_801437B0 = 3;
    D_i3_801437B4 = 0;
    func_i3_8013C20C(1);

    for (i = 0; i < 4; i++) {
        if (i < D_i3_801437BA) {
            var_v1 = D_800E42C8[i];
        } else {
            var_v1 = 0;
        }

        arg0->unk_AC[D_800E5FE2 - 1][i] = var_v1;
    }
    func_i2_80101118(gCourseIndex);
}

signed char D_i3_80140F84[] = "NAME ENTRY";

extern s8 D_800E42C8[];
extern Gfx D_80148C0[];

Gfx* func_i3_8013D2BC(Gfx* gfx) {
    s32 i;
    s32 alpha;
    s32 temp;
    s32 temp2;
    s32 spF4;
    s16 var_v0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_s0;
    s32 pad;
    s8 spDC[2];
    unk_801437C0* var_s0;

    if (D_i3_801437B0 == 0) {
        return gfx;
    }
    var_v0 = D_i3_801437B0;
    if ((D_i3_801437B2 == 1) && (D_i3_801437B0 == 2)) {
        var_v0 = 1;
    }
    switch (var_v0) {
        case 2:
            spF4 = (D_i3_801437B8 * 10) + D_i3_801437B6;
            gfx = func_i3_DrawBeveledBox(gfx, 0x34, 0x36, 0x10C, 0xDC, 0, 0, 0, 0x80);
            temp_v0 = func_i2_801062E4(D_i3_80140F84, 3, 1);
            temp_v1 = (320 - temp_v0) / 2;
            gDPPipeSync(gfx++);
            gDPSetPrimColor(gfx++, 0, 0, 0, 0, 0, 255);
            gfx = func_i2_80106450(gfx, temp_v1 + 2, 0x51, D_i3_80140F84, 1, 3, 0);
            gDPPipeSync(gfx++);
            gDPSetPrimColor(gfx++, 0, 0, 250, 250, 0, 255);
            gfx = func_i2_80106450(gfx, temp_v1, 0x4F, D_i3_80140F84, 1, 3, 0);

            spDC[1] = 0;
            for (i = 0; i < 50; i++) {
                spDC[0] = D_i3_80140F50[i];
                temp = (0x10 - func_i2_801062E4(spDC, 1, 1)) / 2;
                temp_s0 = ((i % 10) * 20) + temp + 62;
                if (spF4 != i) {
                    gfx = func_i2_80106450(gfx, temp_s0, ((i / 10) * 20) + 100, spDC, 1, 1, 0);
                }
            }

            for (i = 0; i < 3; i++) {
                gDPPipeSync(gfx++);
                if (D_i3_801437BA != i) {
                    gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 255);
                } else {
                    gfx = func_8007F090(gfx, 255, 0, 0);
                }
                temp_s0 = (i * 20) + 0x84;
                gfx = func_i2_80106450(gfx, temp_s0, 0xD6, "_", 1, 1, 1);
                if (D_i3_801437C0[i].unk_00 == 0) {
                    spDC[0] = D_800E42C8[i];
                    temp_s0 += (0x10 - func_i2_801062E4(spDC, 1, 1)) / 2;
                    gfx = func_i2_80106450(gfx, temp_s0, 0xD2, spDC, 1, 1, 0);
                }
            }

            for (i = 0, var_s0 = D_i3_801437C0; i < 3; i++, var_s0++) {
                if (var_s0->unk_00 != 0) {
                    if (0) {}
                    gDPPipeSync(gfx++);
                    gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, 128);
                    gfx = func_i2_80106450(gfx, var_s0->unk_06, var_s0->unk_08, &var_s0->unk_00, 1, 1, 1);
                }
            }

            gSPDisplayList(gfx++, D_80148C0);
            gSPViewport(gfx++, D_1000000.unk_2C2D8);
            gSPPerspNormalize(gfx++, D_i3_801439C0);
            gSPMatrix(gfx++, &D_1000000.unk_2B2C8[1], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
            gSPMatrix(gfx++, &D_1000000.unk_2B2C8[2], G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
            gSPMatrix(gfx++, &D_1000000.unk_2B2C8[3], G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPVertex(gfx++, D_1000000.unk_29D08, 4, 0);

            gDPLoadTextureBlock(gfx++, func_800783AC(D_i3_801439BC->unk_04), G_IM_FMT_RGBA, G_IM_SIZ_16b,
                                D_i3_801439BC->width, D_i3_801439BC->height, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                                G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

            gSP2Triangles(gfx++, 0, 3, 1, 0, 0, 2, 3, 0);
            break;
        case 1:
            alpha = ((D_i3_801437B4 * 255) - 255) / 60;
            if (alpha < 0) {
                alpha = 0;
            } else if (alpha > 255) {
                alpha = 255;
            }
            gDPPipeSync(gfx++);
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, alpha);

            for (i = 0, var_s0 = D_i3_801437C0; i < 50; i++, var_s0++) {
                gfx = func_i2_80106450(gfx, var_s0->unk_06, var_s0->unk_08, &var_s0->unk_00, 1, 1, 1);
            }
            break;
        case 3:
            alpha = ((1.0f - ((D_i3_801437B4 - 1) / 60.0f)) * 255.0f);
            if (alpha < 0) {
                alpha = 0;
            } else if (alpha > 255) {
                alpha = 255;
            }

            gDPPipeSync(gfx++);
            gDPSetPrimColor(gfx++, 0, 0, 255, 255, 255, alpha);

            for (i = 0, var_s0 = D_i3_801437C0; i < 50; i++, var_s0++) {
                gfx = func_i2_80106450(gfx, var_s0->unk_06, var_s0->unk_08, &var_s0->unk_00, 1, 1, 1);
            }
            break;
    }
    D_i3_801437B2 = D_i3_801437B0;
    return gfx;
}
