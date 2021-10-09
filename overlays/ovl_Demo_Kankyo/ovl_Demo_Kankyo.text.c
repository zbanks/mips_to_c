void func_808CE45C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808CF970(s32 arg0, GlobalContext *arg1);  /* static */
void func_808CFE04(void *arg0, GlobalContext *arg1); /* static */
extern ? D_04023428;
extern ? D_06001000;
static u8 D_808D03C0 = 0;
static s16 D_808D03C4 = 0;
static s16 D_808D03EA = 0xE;

typedef struct DemoKankyo {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ u8 unk144;                         /* inferred */
    /* 0x0145 */ char pad145[0x3];                  /* maybe part of unk144[4]? */
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ f32 unk14C;                        /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ char pad154[0xC];                  /* maybe part of unk150[4]? */
    /* 0x0160 */ f32 unk160;                        /* inferred */
    /* 0x0164 */ f32 unk164;                        /* inferred */
    /* 0x0168 */ f32 unk168;                        /* inferred */
    /* 0x016C */ f32 unk16C;                        /* inferred */
    /* 0x0170 */ f32 unk170;                        /* inferred */
    /* 0x0174 */ f32 unk174;                        /* inferred */
    /* 0x0178 */ f32 unk178;                        /* inferred */
    /* 0x017C */ f32 unk17C;                        /* inferred */
    /* 0x0180 */ u16 unk180;                        /* inferred */
    /* 0x0182 */ char pad182[0x2];                  /* maybe part of unk180[2]? */
    /* 0x0184 */ s8 unk184;                         /* inferred */
    /* 0x0185 */ char pad185[0x3];                  /* maybe part of unk184[4]? */
    /* 0x0188 */ f32 unk188;                        /* inferred */
    /* 0x018C */ char pad18C[0x8];                  /* maybe part of unk188[3]? */
    /* 0x0194 */ s16 unk194;                        /* inferred */
    /* 0x0196 */ char pad196[0x2];                  /* maybe part of unk194[2]? */
    /* 0x0198 */ s8 unk198;                         /* inferred */
    /* 0x0199 */ char pad199[0x53];                 /* maybe part of unk198[84]? */
    /* 0x01EC */ s8 unk1EC;                         /* inferred */
    /* 0x01ED */ char pad1ED[0x53];                 /* maybe part of unk1EC[84]? */
    /* 0x0240 */ s8 unk240;                         /* inferred */
    /* 0x0241 */ char pad241[0x1403];               /* maybe part of unk240[5124]? */
    /* 0x1644 */ void (*actionFunc)(DemoKankyo *, GlobalContext *);
    /* 0x1648 */ s32 unk1648;                       /* inferred */
    /* 0x164C */ s8 unk164C;                        /* inferred */
    /* 0x164D */ char pad164D[0x3];                 /* maybe part of unk164C[4]? */
} DemoKankyo;                                       /* size 0x1650 */

typedef struct {
    /* 0x0000 */ Room currRoom;
    /* 0x0014 */ Room prevRoom;
    /* 0x0028 */ void *roomMemPages[2];
    /* 0x0030 */ u8 activeMemPage;
    /* 0x0031 */ s8 unk31;
    /* 0x0032 */ char pad32[0x2];                   /* maybe part of unk31[3]? */
    /* 0x0034 */ void *activeRoomVram;
    /* 0x0038 */ DmaRequest dmaRequest;
    /* 0x0058 */ OSMesgQueue loadQueue;
    /* 0x0070 */ void *loadMsg[1];
    /* 0x0074 */ void *unk74;
    /* 0x0078 */ s8 unk78;
    /* 0x0079 */ s8 unk79;
    /* 0x007A */ char pad7A[0x2];                   /* maybe part of unk79[3]? */
    /* 0x007C */ s16 unk7C;                         /* inferred */
    /* 0x007E */ char pad7E[0x2];                   /* maybe part of unk7C[2]? */
} RoomContext;                                      /* size 0x80 */

void DemoKankyo_SetupAction(DemoKankyo *this, void (*actionFunc)(DemoKankyo *, GlobalContext *)) {
    DemoKankyo *self = (DemoKankyo *) this;
    self->actionFunc = actionFunc;
}

void func_808CE45C(Actor *arg0, GlobalContext *arg1) {
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    void *spA4;
    f32 *sp90;
    f32 *sp8C;
    f32 *sp88;
    f32 *sp84;
    f32 *sp7C;
    f32 *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_s4;
    s32 temp_v0_4;
    u16 temp_t3;
    u16 temp_t5;
    u16 temp_t8;
    u16 temp_t9_2;
    u8 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    s32 phi_v1;
    Actor *phi_s0;
    s32 phi_s4;
    f32 phi_f4;
    f32 phi_f8;
    f32 phi_f10;
    f32 phi_f6;
    f32 phi_f10_2;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f0_2;
    s32 phi_v1_2;
    void *phi_fp;

    spA4 = arg1->actorCtx.actorList[2].first;
    phi_fp = arg1 + 0x10000;
    if (arg1->roomCtx.unk7C != 0) {
        temp_v0 = arg1->envCtx.unk_F2[3];
        phi_fp = arg1 + 0x10000;
        if (temp_v0 != 0) {
            arg1->envCtx.unk_F2[3] = temp_v0 - 1;
        } else {
            Actor_MarkForDeath(arg0);
        }
        phi_v1 = (s32) arg1->envCtx.unk_F2[3];
    } else {
        temp_v1 = arg1->envCtx.unk_F2[3];
        temp_t9 = temp_v1 + 0x10;
        phi_v1 = (s32) temp_v1;
        if ((s32) temp_v1 < 0x40) {
            arg1->envCtx.unk_F2[3] = temp_t9;
            phi_v1 = temp_t9 & 0xFF;
        }
    }
    phi_s4 = 0;
    phi_v1_2 = phi_v1;
    if (phi_v1 > 0) {
        phi_s0 = arg0;
        do {
            temp_f16 = arg1->view.eye.x;
            temp_f2 = arg1->view.at.x - temp_f16;
            temp_f12 = arg1->view.at.y - arg1->view.eye.y;
            temp_f14 = arg1->view.at.z - arg1->view.eye.z;
            temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
            temp_f18 = temp_f2 / temp_f0;
            temp_f20 = temp_f12 / temp_f0;
            spCC = temp_f18;
            temp_f22 = temp_f14 / temp_f0;
            spC8 = temp_f20;
            spC4 = temp_f22;
            temp_v0_2 = phi_s0->unk144;
            if (temp_v0_2 != 0) {
                if ((temp_v0_2 != 1) && (temp_v0_2 != 2)) {
                    if (temp_v0_2 != 3) {

                    } else {
                        phi_s0->unk144 = 0U;
                        goto block_74;
                    }
                } else {
                    phi_s0->unk180 = (u16) (phi_s0->unk180 + 1);
                    spBC = arg1->view.eye.x + (temp_f18 * 80.0f);
                    spB8 = arg1->view.eye.y + (temp_f20 * 80.0f);
                    spB4 = arg1->view.eye.z + (temp_f22 * 80.0f);
                    temp_v0_3 = phi_s0->unk144;
                    phi_s0->unk154 = (f32) phi_s0->unk148;
                    phi_s0->unk158 = (f32) phi_s0->unk14C;
                    phi_s0->unk15C = (f32) phi_s0->unk150;
                    if (temp_v0_3 == 1) {
                        if (phi_s4 < 0x20) {
                            if (Rand_ZeroOne() < 0.5f) {
                                phi_s0->unk18C = (u16) ((s32) (Rand_ZeroOne() * 200.0f) + 0xC8);
                            } else {
                                phi_s0->unk18C = (u16) (-0xC8 - (s32) (Rand_ZeroOne() * 200.0f));
                            }
                            phi_s0->unk18E = (u16) ((s32) (Rand_ZeroOne() * 50.0f) + 0xF);
                            phi_s0->unk190 = (f32) (((Rand_ZeroOne() * 10.0f) + 10.0f) * 0.01f);
                            temp_f0_2 = Rand_ZeroOne();
                            if (temp_f0_2 < 0.2f) {
                                D_808D03C4 = 1;
                            } else if (temp_f0_2 < 0.2f) {
                                D_808D03C4 = 3;
                            } else if (temp_f0_2 < 0.4f) {
                                D_808D03C4 = 7;
                            } else {
                                D_808D03C4 = 0xF;
                            }
                            if ((D_808D03C4 & phi_s4) == 0) {
                                phi_s0->unk14C = 0.0f;
                            }
                            phi_s0->unk144 = 2U;
                            phi_s0->unk17C = 0.0f;
                        }
                        Math_SmoothStepToF(phi_s0 + 0x188, 0.1f, 0.1f, 0.001f, 0.00001f);
                        Math_SmoothStepToF(phi_s0 + 0x178, phi_s0->unk17C, 0.5f, 0.2f, 0.02f);
                        phi_s0->unk148 = (f32) (phi_s0->unk148 + (__sinf(phi_s0->unk16C) * phi_s0->unk178));
                        phi_s0->unk14C = (f32) (phi_s0->unk14C + (__sinf(phi_s0->unk170) * phi_s0->unk178));
                        temp_v0_4 = (phi_s4 >> 1) & 3;
                        phi_s0->unk150 = (f32) (phi_s0->unk150 + (__sinf(phi_s0->unk174) * phi_s0->unk178));
                        if (temp_v0_4 != 0) {
                            if (temp_v0_4 != 1) {
                                if (temp_v0_4 != 2) {
                                    if (temp_v0_4 != 3) {

                                    } else {
                                        phi_s0->unk16C = (f32) (phi_s0->unk16C + (0.01f * Rand_ZeroOne()));
                                        phi_s0->unk170 = (f32) (phi_s0->unk170 + (0.08f * Rand_ZeroOne()));
                                        phi_f4 = phi_s0->unk174 + (0.05f * Rand_ZeroOne());
                                        goto block_39;
                                    }
                                } else {
                                    phi_s0->unk16C = (f32) (phi_s0->unk16C + (0.01f * Rand_ZeroOne()));
                                    phi_s0->unk170 = (f32) (phi_s0->unk170 + (0.4f * Rand_ZeroOne()));
                                    phi_f4 = phi_s0->unk174 + (0.004f * Rand_ZeroOne());
                                    goto block_39;
                                }
                            } else {
                                phi_s0->unk16C = (f32) (phi_s0->unk16C + (0.01f * Rand_ZeroOne()));
                                phi_s0->unk170 = (f32) (phi_s0->unk170 + (0.05f * Rand_ZeroOne()));
                                phi_f4 = phi_s0->unk174 + (0.005f * Rand_ZeroOne());
                                goto block_39;
                            }
                        } else {
                            phi_s0->unk16C = (f32) (phi_s0->unk16C + 0.008f);
                            phi_s0->unk170 = (f32) (phi_s0->unk170 + (0.05f * Rand_ZeroOne()));
                            phi_f4 = phi_s0->unk174 + 0.015f;
block_39:
                            phi_s0->unk174 = phi_f4;
                        }
                    } else if (temp_v0_3 == 2) {
                        temp_s1 = phi_s0 + 0x188;
                        if ((D_808D03C4 & phi_s4) == 0) {
                            sp7C = phi_s0 + 0x150;
                            sp84 = phi_s0 + 0x148;
                            sp88 = phi_s0 + 0x168;
                            sp8C = phi_s0 + 0x164;
                            sp90 = phi_s0 + 0x160;
                            Math_SmoothStepToF(temp_s1, 0.25f, 0.1f, 0.001f, 0.00001f);
                            Math_SmoothStepToF(sp90, spA4->world.pos.x, 0.5f, 1.0f, 0.2f);
                            Math_SmoothStepToF(sp8C, spA4->world.pos.y + 50.0f, 0.5f, 1.0f, 0.2f);
                            Math_SmoothStepToF(sp88, spA4->world.pos.z, 0.5f, 1.0f, 0.2f);
                            temp_t8 = phi_s0->unk18E;
                            temp_f8 = (f32) temp_t8;
                            phi_f8 = temp_f8;
                            if ((s32) temp_t8 < 0) {
                                phi_f8 = temp_f8 + 4294967296.0f;
                            }
                            Math_SmoothStepToF(sp84, phi_f8 * Math_SinS((s16) (phi_s0->unk182 - 0x8000)), 0.5f, 2.0f, 0.2f);
                            temp_t9_2 = phi_s0->unk18E;
                            temp_f10 = (f32) temp_t9_2;
                            phi_f10 = temp_f10;
                            if ((s32) temp_t9_2 < 0) {
                                phi_f10 = temp_f10 + 4294967296.0f;
                            }
                            Math_SmoothStepToF(sp7C, phi_f10 * Math_CosS((s16) (phi_s0->unk182 - 0x8000)), 0.5f, 2.0f, 0.2f);
                            phi_s0->unk182 = (u16) (phi_s0->unk182 + phi_s0->unk18C);
                            phi_s0->unk14C = (f32) (phi_s0->unk14C + __sinf(phi_s0->unk170));
                            phi_s0->unk16C = (f32) (phi_s0->unk16C + (0.2f * Rand_ZeroOne()));
                            phi_s0->unk170 = (f32) (phi_s0->unk170 + phi_s0->unk190);
                            phi_s0->unk174 = (f32) (phi_s0->unk174 + (0.1f * Rand_ZeroOne()));
                            temp_t3 = phi_s0->unk18E;
                            temp_f6 = (f32) temp_t3;
                            phi_f6 = temp_f6;
                            if ((s32) temp_t3 < 0) {
                                phi_f6 = temp_f6 + 4294967296.0f;
                            }
                            phi_s0->unk148 = (f32) (phi_f6 * Math_SinS((s16) (phi_s0->unk182 - 0x8000)));
                            temp_t5 = phi_s0->unk18E;
                            temp_f10_2 = (f32) temp_t5;
                            phi_f10_2 = temp_f10_2;
                            if ((s32) temp_t5 < 0) {
                                phi_f10_2 = temp_f10_2 + 4294967296.0f;
                            }
                            phi_s0->unk150 = (f32) (phi_f10_2 * Math_CosS((s16) (phi_s0->unk182 - 0x8000)));
                        } else {
                            Math_SmoothStepToF(temp_s1, 0.1f, 0.1f, 0.001f, 0.00001f);
                            Math_SmoothStepToF(phi_s0 + 0x178, 1.5f, 0.5f, 0.1f, 0.0002f);
                            phi_s0->unk148 = (f32) ((phi_s0->prevPos.y - phi_s0->unk160) + phi_s0->uncullZoneScale);
                            phi_s0->unk14C = (f32) ((phi_s0->prevPos.z - phi_s0->unk164) + phi_s0->uncullZoneDownward);
                            phi_s0->unk150 = (f32) ((phi_s0->unk114 - phi_s0->unk168) + phi_s0->prevPos.x);
                        }
                    }
                    if ((phi_s0->unk144 != 2) && ((temp_f12_2 = -130.0f, temp_f2_2 = (phi_s0->unk148 + phi_s0->unk160) - spBC, phi_f2 = temp_f2_2, (temp_f2_2 > 130.0f)) || (temp_f2_2 < temp_f12_2) || (temp_f0_3 = (phi_s0->unk14C + phi_s0->unk164) - spB8, (temp_f0_3 > 130.0f)) || (temp_f0_3 < temp_f12_2) || (temp_f0_4 = (phi_s0->unk150 + phi_s0->unk168) - spB4, (temp_f0_4 > 130.0f)) || (temp_f0_4 < temp_f12_2))) {
                        if (temp_f2_2 > 130.0f) {
                            phi_s0->unk148 = 0.0f;
                            phi_s0->unk160 = (f32) (spBC - 130.0f);
                            phi_f2 = (phi_s0->unk148 + phi_s0->unk160) - spBC;
                        }
                        if (phi_f2 < temp_f12_2) {
                            phi_s0->unk148 = 0.0f;
                            phi_s0->unk160 = (f32) (spBC + 130.0f);
                        }
                        temp_f0_5 = (phi_s0->unk14C + phi_s0->unk164) - spB8;
                        phi_f0 = temp_f0_5;
                        if (temp_f0_5 > 50.0f) {
                            phi_s0->unk14C = 0.0f;
                            phi_s0->unk164 = (f32) (spB8 - 50.0f);
                            phi_f0 = (phi_s0->unk14C + phi_s0->unk164) - spB8;
                        }
                        if (phi_f0 < -50.0f) {
                            phi_s0->unk14C = 0.0f;
                            phi_s0->unk164 = (f32) (spB8 + 50.0f);
                        }
                        temp_f0_6 = (phi_s0->unk150 + phi_s0->unk168) - spB4;
                        phi_f0_2 = temp_f0_6;
                        if (temp_f0_6 > 130.0f) {
                            phi_s0->unk150 = 0.0f;
                            phi_s0->unk168 = (f32) (spB4 - 130.0f);
                            phi_f0_2 = (phi_s0->unk150 + phi_s0->unk168) - spB4;
                        }
                        if (phi_f0_2 < temp_f12_2) {
                            phi_s0->unk150 = 0.0f;
                            phi_s0->unk168 = (f32) (spB4 + 130.0f);
                        }
                    }
                    goto block_74;
                }
            } else {
                phi_s0->unk160 = (f32) (temp_f16 + (spCC * 80.0f));
                phi_s0->unk164 = (f32) (arg1->view.eye.y + (spC8 * 80.0f));
                phi_s0->unk168 = (f32) (arg1->view.eye.z + (spC4 * 80.0f));
                temp_f8_2 = (Rand_ZeroOne() - 0.5f) * 160.0f;
                phi_s0->unk14C = 30.0f;
                phi_s0->unk148 = temp_f8_2;
                phi_s0->unk150 = (f32) ((Rand_ZeroOne() - 0.5f) * 160.0f);
                temp_f0_7 = Rand_ZeroOne();
                phi_s0->unk184 = 0;
                phi_s0->unk17C = (f32) ((temp_f0_7 * 1.6f) + 0.5f);
                phi_s0->unk180 = (u16) (u32) (Rand_ZeroOne() * 65535.0f);
                phi_s0->unk188 = 0.1f;
                phi_s0->unk16C = (f32) (Rand_ZeroOne() * 360.0f);
                phi_s0->unk170 = (f32) (Rand_ZeroOne() * 360.0f);
                temp_f0_8 = Rand_ZeroOne();
                phi_s0->unk194 = 0;
                phi_s0->unk144 = (u8) (phi_s0->unk144 + 1);
                phi_s0->unk174 = (f32) (temp_f0_8 * 360.0f);
block_74:
                phi_v1_2 = (s32) phi_fp->unk70F9;
            }
            temp_s4 = phi_s4 + 1;
            phi_s0 += 0x54;
            phi_s4 = temp_s4;
        } while (temp_s4 < phi_v1_2);
    }
}

void func_808CF06C(DemoKankyo *this, GlobalContext *globalCtx) {
    s32 temp_a1;

    temp_a1 = this->unk1648;
    this = this;
    if (Object_IsLoaded(&globalCtx->objectCtx, temp_a1) != 0) {
        this->unk164C = 1;
        this->actor.objBankIndex = (s8) this->unk1648;
        DemoKankyo_SetupAction(this, func_808CF0CC);
    }
}

void func_808CF0CC(DemoKankyo *this, GlobalContext *globalCtx) {
    f32 spDC;
    f32 spD8;
    f32 spD4;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f *temp_s4;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f30;
    s32 temp_s3;
    s32 temp_v0_2;
    u8 temp_t6;
    u8 temp_v0;
    u8 temp_v1;
    s32 phi_v1;
    DemoKankyo *phi_s0;
    s32 phi_s3;
    f32 phi_f4;
    f32 phi_f2;
    f32 phi_f0;
    f32 phi_f12;
    f32 phi_f2_2;
    f32 phi_f0_2;
    s32 phi_v1_2;
    f32 phi_f0_3;

    temp_v1 = globalCtx->envCtx.unk_F2[3];
    temp_t6 = temp_v1 + 0x10;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 < 0x40) {
        globalCtx->envCtx.unk_F2[3] = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    temp_f2 = globalCtx->view.at.x - globalCtx->view.eye.x;
    temp_f12 = globalCtx->view.at.y - globalCtx->view.eye.y;
    temp_f14 = globalCtx->view.at.z - globalCtx->view.eye.z;
    temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    temp_f18 = temp_f12 / temp_f0;
    spDC = temp_f2 / temp_f0;
    spD8 = temp_f18;
    spD4 = temp_f14 / temp_f0;
    phi_s0 = this;
    phi_s3 = 0;
    phi_v1_2 = phi_v1;
    if (phi_v1 > 0) {
        do {
            temp_v0 = phi_s0->unk144;
            if (temp_v0 != 0) {
                if ((temp_v0 != 1) && (temp_v0 != 2)) {
                    if (temp_v0 != 3) {

                    } else {
                        phi_s0->unk144 = 0;
                        goto block_42;
                    }
                } else {
                    temp_s4 = &globalCtx->view.eye;
                    phi_s0->unk180 += 1;
                    temp_f0_2 = spD8 * 120.0f;
                    temp_f30 = -120.0f;
                    if (this->actor.params == 2) {
                        phi_s0->unk164 = globalCtx->view.eye.y + temp_f0_2 + 80.0f;
                    }
                    temp_f20 = globalCtx->view.eye.x + (spDC * 120.0f);
                    temp_f24 = globalCtx->view.eye.y + temp_f0_2;
                    temp_f26 = globalCtx->view.eye.z + (spD4 * 120.0f);
                    Math_SmoothStepToF(phi_s0 + 0x188, 0.2f, 0.1f, 0.001f, 0.00001f);
                    Math_SmoothStepToF(phi_s0 + 0x178, phi_s0->unk17C, 0.5f, 0.2f, 0.02f);
                    phi_s0->unk148 += __sinf(phi_s0->unk16C) * phi_s0->unk178;
                    phi_s0->unk14C += __sinf(phi_s0->unk170) * phi_s0->unk178;
                    temp_v0_2 = (phi_s3 >> 1) & 3;
                    phi_s0->unk150 += __sinf(phi_s0->unk174) * phi_s0->unk178;
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 != 1) {
                            if (temp_v0_2 != 2) {
                                if (temp_v0_2 != 3) {

                                } else {
                                    phi_s0->unk16C += 0.01f * Rand_ZeroOne();
                                    phi_s0->unk170 += 0.08f * Rand_ZeroOne();
                                    phi_f4 = phi_s0->unk174 + (0.05f * Rand_ZeroOne());
                                    goto block_21;
                                }
                            } else {
                                phi_s0->unk16C += 0.01f * Rand_ZeroOne();
                                phi_s0->unk170 += 0.4f * Rand_ZeroOne();
                                phi_s0->unk174 += 0.004f * Rand_ZeroOne();
                            }
                        } else {
                            phi_s0->unk16C += 0.01f * Rand_ZeroOne();
                            phi_s0->unk170 += 0.05f * Rand_ZeroOne();
                            phi_f4 = phi_s0->unk174 + (0.005f * Rand_ZeroOne());
block_21:
                            phi_s0->unk174 = phi_f4;
                        }
                    } else {
                        phi_s0->unk16C += 0.008f;
                        phi_s0->unk170 += 0.05f * Rand_ZeroOne();
                        phi_s0->unk174 += 0.015f;
                    }
                    temp_f0_3 = phi_s0->unk148 + phi_s0->unk160;
                    temp_f2_2 = temp_f0_3 - temp_f20;
                    phi_f2 = temp_f2_2;
                    phi_f0 = temp_f0_3;
                    if (temp_f2_2 > 120.0f) {
                        phi_s0->unk160 = temp_f20 - 120.0f;
                        temp_f0_4 = phi_s0->unk148 + phi_s0->unk160;
                        phi_f2 = temp_f0_4 - temp_f20;
                        phi_f0 = temp_f0_4;
                    }
                    if (phi_f2 < temp_f30) {
                        phi_s0->unk160 = temp_f20 + 120.0f;
                        phi_f0 = phi_s0->unk148 + phi_s0->unk160;
                    }
                    spA4 = phi_f0;
                    spA8 = phi_s0->unk14C + phi_s0->unk164;
                    spAC = phi_s0->unk150 + phi_s0->unk168;
                    temp_f2_3 = Math_Vec3f_DistXZ((Vec3f *) &spA4, temp_s4) / 200.0f;
                    if (temp_f2_3 < 0.0f) {
                        phi_f12 = 0.0f;
                    } else {
                        if (temp_f2_3 > 1.0f) {
                            phi_f0_3 = 1.0f;
                        } else {
                            phi_f0_3 = temp_f2_3;
                        }
                        phi_f12 = phi_f0_3;
                    }
                    temp_f0_5 = 100.0f + phi_f12 + 60.0f;
                    temp_f2_4 = (phi_s0->unk14C + phi_s0->unk164) - temp_f24;
                    phi_f2_2 = temp_f2_4;
                    if (temp_f0_5 < temp_f2_4) {
                        phi_s0->unk164 = temp_f24 - temp_f0_5;
                        phi_f2_2 = (phi_s0->unk14C + phi_s0->unk164) - temp_f24;
                    }
                    if (phi_f2_2 < -temp_f0_5) {
                        phi_s0->unk164 = temp_f24 + temp_f0_5;
                    }
                    temp_f0_6 = (phi_s0->unk150 + phi_s0->unk168) - temp_f26;
                    phi_f0_2 = temp_f0_6;
                    if (temp_f0_6 > 120.0f) {
                        phi_s0->unk168 = temp_f26 - 120.0f;
                        phi_f0_2 = (phi_s0->unk150 + phi_s0->unk168) - temp_f26;
                    }
                    if (phi_f0_2 < temp_f30) {
                        phi_s0->unk168 = temp_f26 + 120.0f;
                    }
                    goto block_42;
                }
            } else {
                temp_f20_2 = 2.0f * 120.0f;
                phi_s0->unk160 = globalCtx->view.eye.x + (spDC * 120.0f);
                phi_s0->unk164 = globalCtx->view.eye.y + (spD8 * 120.0f);
                phi_s0->unk168 = globalCtx->view.eye.z + (spD4 * 120.0f);
                phi_s0->unk148 = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                phi_s0->unk14C = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                phi_s0->unk150 = (Rand_ZeroOne() - 0.5f) * temp_f20_2;
                temp_f0_7 = Rand_ZeroOne();
                phi_s0->unk184 = 0;
                phi_s0->unk17C = (temp_f0_7 * 1.6f) + 0.5f;
                phi_s0->unk180 = (u16) (u32) (Rand_ZeroOne() * 65535.0f);
                phi_s0->unk188 = 0.2f;
                phi_s0->unk16C = Rand_ZeroOne() * 360.0f;
                phi_s0->unk170 = Rand_ZeroOne() * 360.0f;
                temp_f0_8 = Rand_ZeroOne();
                phi_s0->unk194 = 0;
                phi_s0->unk144 += 1;
                phi_s0->unk174 = temp_f0_8 * 360.0f;
block_42:
                phi_v1_2 = (s32) globalCtx->envCtx.unk_F2[3];
            }
            temp_s3 = phi_s3 + 1;
            phi_s0 += 0x54;
            phi_s3 = temp_s3;
        } while (temp_s3 < phi_v1_2);
    }
}

void DemoKankyo_Init(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    s32 sp20;
    s16 temp_v0;
    s32 temp_v1;
    DemoKankyo *phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;

    phi_v0 = this;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unk144 = 0;
        phi_v0->unk198 = 0;
        phi_v0->unk1EC = 0;
        phi_v0->unk240 = 0;
        phi_v0 += 0x150;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x40);
    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                phi_v0_2 = -1;
            } else {
                sp20 = 0;
                this->unk164C = 1;
                DemoKankyo_SetupAction(this, func_808CF0CC);
                goto block_12;
            }
        } else {
            this->unk164C = 0;
            sp20 = Object_GetIndex(&globalCtx->objectCtx, D_808D03EA);
            DemoKankyo_SetupAction(this, func_808CF06C);
            goto block_12;
        }
    } else {
        sp20 = 0;
        this->actor.room = -1;
        if (D_808D03C0 == 0) {
            DemoKankyo_SetupAction(this, (void (*)(DemoKankyo *, GlobalContext *)) func_808CE45C);
            D_808D03C0 = 1;
        } else {
            Actor_MarkForDeath(&this->actor);
        }
block_12:
        phi_v0_2 = sp20;
    }
    if (phi_v0_2 >= 0) {
        this->unk1648 = phi_v0_2;
    }
}

void DemoKankyo_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    Actor_MarkForDeath(&this->actor);
}

void DemoKankyo_Update(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_808CF970(s32 arg0, GlobalContext *arg1) {
    f32 spAC;
    f32 spA8;
    f32 spA4;
    Vec3f sp98;
    void *sp64;
    Gfx *temp_v0;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_2;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s2;
    MtxF *temp_s5;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f4;
    s16 temp_s3;
    s32 temp_v0_10;
    u32 temp_t0;
    u8 temp_t7;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u8 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    void *temp_s0;
    s32 phi_s3;
    f32 phi_f4;
    f32 phi_f0;
    u8 phi_t9;
    f32 phi_f18;

    if ((arg1->cameraPtrs[0]->unk14C & 0x100) == 0) {
        temp_s2 = arg1->state.gfxCtx;
        temp_s2->polyXlu.p = Gfx_CallSetupDL(temp_s2->polyXlu.p, 0x14U);
        temp_v0 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        temp_v0->words.w1 = Lib_SegmentedToVirtual((void *) &D_04079B10);
        temp_v0_2 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = (u32) D_0407AB10;
        phi_s3 = 0;
        if ((s32) arg1->envCtx.unk_F2[3] > 0) {
            sp64 = arg1 + 0x10000;
            do {
                temp_s0 = arg0 + (phi_s3 * 0x54);
                temp_a1 = &spA4;
                spA4 = temp_s0->unk148 + temp_s0->unk160;
                spA8 = temp_s0->unk14C + temp_s0->unk164;
                spAC = temp_s0->unk150 + temp_s0->unk168;
                func_80169474(arg1, (Vec3f *) temp_a1, &sp98);
                if ((sp98.x >= 0.0f) && (sp98.x < 320.0f) && (sp98.y >= 0.0f) && (sp98.y < 240.0f)) {
                    temp_s5 = &arg1->mf_187FC;
                    SysMatrix_InsertTranslation(spA4, spA8, spAC, 0);
                    temp_t7 = temp_s0->unk184;
                    temp_f4 = (f32) temp_t7;
                    phi_f4 = temp_f4;
                    if ((s32) temp_t7 < 0) {
                        phi_f4 = temp_f4 + 4294967296.0f;
                    }
                    temp_f0 = phi_f4 / 50.0f;
                    phi_f0 = temp_f0;
                    if (temp_f0 > 1.0f) {
                        phi_f0 = 1.0f;
                    }
                    temp_f12 = temp_s0->unk188 * phi_f0;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    if (phi_s3 < 0x20) {
                        if (temp_s0->unk144 != 2) {
                            temp_v0_3 = temp_s0->unk184;
                            phi_t9 = temp_v0_3 - 1;
                            if ((s32) temp_v0_3 > 0) {
                                goto block_27;
                            }
                        } else {
                            temp_v0_4 = temp_s0->unk184;
                            if ((s32) temp_v0_4 < 0x64) {
                                temp_s0->unk184 = (u8) (temp_v0_4 + 1);
                            }
                        }
                    } else if (temp_s0->unk144 != 2) {
                        if ((temp_s0->unk180 & 0x1F) < 0x10) {
                            temp_v0_5 = temp_s0->unk184;
                            if ((s32) temp_v0_5 < 0xEB) {
                                temp_s0->unk184 = (u8) (temp_v0_5 + 0x14);
                            }
                        } else {
                            temp_v0_6 = temp_s0->unk184;
                            if ((s32) temp_v0_6 >= 0x15) {
                                temp_s0->unk184 = (u8) (temp_v0_6 - 0x14);
                            }
                        }
                    } else if ((temp_s0->unk180 & 0xF) < 8) {
                        temp_v0_7 = temp_s0->unk184;
                        if ((s32) temp_v0_7 < 0xFF) {
                            temp_s0->unk184 = (u8) (temp_v0_7 + 0x64);
                        }
                    } else {
                        temp_v0_8 = temp_s0->unk184;
                        phi_t9 = temp_v0_8 - 0xA;
                        if ((s32) temp_v0_8 >= 0xB) {
block_27:
                            temp_s0->unk184 = phi_t9;
                        }
                    }
                    temp_v0_9 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_9 + 8;
                    temp_v0_9->words.w1 = 0;
                    temp_v0_9->words.w0 = 0xE7000000;
                    temp_v0_10 = phi_s3 & 1;
                    if (temp_v0_10 != 0) {
                        if (temp_v0_10 != 1) {

                        } else {
                            temp_v0_11 = temp_s2->polyXlu.p;
                            temp_s2->polyXlu.p = temp_v0_11 + 8;
                            temp_v0_11->words.w0 = 0xFA000000;
                            temp_v0_11->words.w1 = temp_s0->unk184 | ~0xFF;
                            temp_v0_12 = temp_s2->polyXlu.p;
                            temp_s2->polyXlu.p = temp_v0_12 + 8;
                            temp_v0_12->words.w0 = 0xFB000000;
                            temp_v0_12->words.w1 = temp_s0->unk184 | 0x64FF00;
                        }
                    } else {
                        temp_v0_13 = temp_s2->polyXlu.p;
                        temp_s2->polyXlu.p = temp_v0_13 + 8;
                        temp_v0_13->words.w0 = 0xFA000000;
                        temp_v0_13->words.w1 = temp_s0->unk184 | ~0x64FF;
                        temp_v0_14 = temp_s2->polyXlu.p;
                        temp_s2->polyXlu.p = temp_v0_14 + 8;
                        temp_v0_14->words.w0 = 0xFB000000;
                        temp_v0_14->words.w1 = temp_s0->unk184 | 0xFAB40000;
                    }
                    SysMatrix_InsertMatrix(temp_s5, 1);
                    temp_t0 = arg1->state.frames;
                    temp_f18 = (f32) temp_t0;
                    phi_f18 = temp_f18;
                    if ((s32) temp_t0 < 0) {
                        phi_f18 = temp_f18 + 4294967296.0f;
                    }
                    SysMatrix_InsertZRotation_f(phi_f18 * 20.0f * 0.017453292f, 1);
                    temp_v0_15 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_15 + 8;
                    temp_v0_15->words.w0 = 0xDA380003;
                    temp_v0_15->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                    temp_v0_16 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_16 + 8;
                    temp_v0_16->words.w1 = (u32) D_0407AB58;
                    temp_v0_16->words.w0 = 0xDE000000;
                }
                temp_s3 = phi_s3 + 1;
                phi_s3 = (s32) temp_s3;
            } while ((s32) temp_s3 < (s32) sp64->unk70F9);
        }
    }
}

void func_808CFE04(void *arg0, GlobalContext *arg1) {
    f32 spBC;
    f32 spB8;
    f32 spB4;
    Vec3f spA8;
    void *sp68;
    MtxF *sp54;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    Vec3f *temp_s2;
    f32 *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_s5;
    s32 temp_v0_2;
    u32 temp_t0;
    u8 temp_t1;
    void *temp_s0;
    s16 phi_s5;
    f32 phi_f4;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f6;
    f32 phi_f2;

    if (arg0->unk164C != 0) {
        temp_s1 = arg1->state.gfxCtx;
        func_8012C2DC(temp_s1);
        phi_s5 = 0;
        if ((s32) arg1->envCtx.unk_F2[3] > 0) {
            sp68 = arg1 + 0x10000;
            do {
                temp_s0 = arg0 + (phi_s5 * 0x54);
                temp_a1 = &spB4;
                spB4 = temp_s0->unk148 + temp_s0->unk160;
                spB8 = temp_s0->unk14C + temp_s0->unk164;
                spBC = temp_s0->unk150 + temp_s0->unk168;
                func_80169474(arg1, (Vec3f *) temp_a1, &spA8);
                if ((spA8.x >= 0.0f) && (spA8.x < 320.0f) && (spA8.y >= 0.0f) && (spA8.y < 240.0f)) {
                    sp54 = &arg1->mf_187FC;
                    temp_s2 = &arg1->view.eye;
                    SysMatrix_InsertTranslation(spB4, spB8, spBC, 0);
                    temp_t1 = temp_s0->unk184;
                    temp_f4 = (f32) temp_t1;
                    phi_f4 = temp_f4;
                    if ((s32) temp_t1 < 0) {
                        phi_f4 = temp_f4 + 4294967296.0f;
                    }
                    temp_f0 = phi_f4 / 50.0f;
                    phi_f0 = temp_f0;
                    if (temp_f0 > 1.0f) {
                        phi_f0 = 1.0f;
                    }
                    temp_f12 = temp_s0->unk188 * phi_f0;
                    Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
                    temp_f2 = Math_Vec3f_DistXYZ((Vec3f *) &spB4, temp_s2) / 300.0f;
                    if (temp_f2 > 1.0f) {
                        phi_f0_2 = 0.0f;
                    } else {
                        temp_f0_2 = 1.0f - temp_f2;
                        if (temp_f0_2 > 1.0f) {
                            phi_f2 = 1.0f;
                        } else {
                            phi_f2 = temp_f0_2;
                        }
                        phi_f0_2 = phi_f2;
                    }
                    if (arg0->unk1C == 1) {
                        temp_s0->unk184 = (u8) (u32) (255.0f * phi_f0_2);
                    } else {
                        temp_s0->unk184 = (u8) (u32) (160.0f * phi_f0_2);
                    }
                    temp_v0 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = temp_v0 + 8;
                    temp_v0->words.w1 = 0;
                    temp_v0->words.w0 = 0xE7000000;
                    temp_v0_2 = phi_s5 & 1;
                    if (temp_v0_2 != 0) {
                        if (temp_v0_2 != 1) {

                        } else {
                            temp_v0_3 = temp_s1->polyXlu.p;
                            temp_s1->polyXlu.p = temp_v0_3 + 8;
                            temp_v0_3->words.w0 = 0xFA000000;
                            temp_v0_3->words.w1 = temp_s0->unk184 | 0xC8C8BE00;
                            temp_v0_4 = temp_s1->polyXlu.p;
                            temp_s1->polyXlu.p = temp_v0_4 + 8;
                            temp_v0_4->words.w0 = 0xFB000000;
                            temp_v0_4->words.w1 = temp_s0->unk184 | 0xC8C81E00;
                        }
                    } else {
                        temp_v0_5 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_5 + 8;
                        temp_v0_5->words.w0 = 0xFA000000;
                        temp_v0_5->words.w1 = temp_s0->unk184 | 0xE6E6DC00;
                        temp_v0_6 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_6 + 8;
                        temp_v0_6->words.w0 = 0xFB000000;
                        temp_v0_6->words.w1 = temp_s0->unk184 | 0xE6E61E00;
                    }
                    temp_v0_7 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = temp_v0_7 + 8;
                    temp_v0_7->words.w1 = (u32) &D_04023348;
                    temp_v0_7->words.w0 = 0xDE000000;
                    SysMatrix_InsertMatrix(sp54, 1);
                    temp_t0 = arg1->state.frames;
                    temp_f6 = (f32) temp_t0;
                    phi_f6 = temp_f6;
                    if ((s32) temp_t0 < 0) {
                        phi_f6 = temp_f6 + 4294967296.0f;
                    }
                    SysMatrix_InsertZRotation_f(phi_f6 * 20.0f * 0.017453292f, 1);
                    temp_v0_8 = temp_s1->polyXlu.p;
                    temp_s1->polyXlu.p = temp_v0_8 + 8;
                    temp_v0_8->words.w0 = 0xDA380003;
                    temp_v0_8->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
                    if (arg0->unk1C == 1) {
                        temp_v0_9 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_9 + 8;
                        temp_v0_9->words.w1 = (u32) &D_06001000;
                        temp_v0_9->words.w0 = 0xDE000000;
                    } else {
                        temp_v0_10 = temp_s1->polyXlu.p;
                        temp_s1->polyXlu.p = temp_v0_10 + 8;
                        temp_v0_10->words.w1 = (u32) &D_04023428;
                        temp_v0_10->words.w0 = 0xDE000000;
                    }
                }
                temp_s5 = phi_s5 + 1;
                phi_s5 = temp_s5;
            } while ((s32) temp_s5 < (s32) sp68->unk70F9);
        }
    }
}

void DemoKankyo_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DemoKankyo *this = (DemoKankyo *) thisx;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if ((temp_v0 != 1) && (temp_v0 != 2)) {
            return;
        }
        func_808CFE04();
        return;
    }
    func_808CF970();
}

