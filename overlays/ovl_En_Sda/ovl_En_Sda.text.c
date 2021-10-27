struct _mips2c_stack_EnSda_Destroy {};              /* size 0x0 */

struct _mips2c_stack_EnSda_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnSda_Init {};                 /* size 0x0 */

struct _mips2c_stack_EnSda_Update {};               /* size 0x0 */

struct _mips2c_stack_func_809469C0 {
    /* 0x00 */ char pad_0[0x7C];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];                    /* maybe part of sp90[4]? */
    /* 0xA0 */ s16 spA0;                            /* inferred */
    /* 0xA2 */ char pad_A2[0xE];
};                                                  /* size = 0xB0 */

struct _mips2c_stack_func_8094702C {
    /* 0x000 */ char pad_0[0x64];
    /* 0x064 */ ? sp64;                             /* inferred */
    /* 0x064 */ char pad_64[0x108];
    /* 0x16C */ f32 sp16C;                          /* inferred */
    /* 0x170 */ f32 sp170;                          /* inferred */
    /* 0x174 */ f32 sp174;                          /* inferred */
    /* 0x178 */ s16 sp178;                          /* inferred */
    /* 0x17A */ s16 sp17A;                          /* inferred */
    /* 0x17C */ char pad_17C[0xC];                  /* maybe part of sp17A[7]? */
    /* 0x188 */ f32 sp188;                          /* inferred */
    /* 0x18C */ f32 sp18C;                          /* inferred */
    /* 0x190 */ f32 sp190;                          /* inferred */
    /* 0x194 */ f32 sp194;                          /* inferred */
    /* 0x198 */ f32 sp198;                          /* inferred */
    /* 0x19C */ f32 sp19C;                          /* inferred */
    /* 0x1A0 */ char pad_1A0[0x10];
};                                                  /* size = 0x1B0 */

struct _mips2c_stack_func_80947668 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

void func_809469C0(GlobalContext *arg0, Actor *arg1, f32 arg2); /* static */
void func_8094702C(Gfx *arg0, Actor *arg1, GlobalContext *arg2, ? arg3); /* static */
void func_80947668(Gfx *arg0, Actor *arg1, GlobalContext *arg2, GlobalContext *); /* static */
static Vec3f D_80947A60 = {0.0f, 0.0f, 0.0f};
static ? D_80947A6C;                                /* unable to generate initializer */
static ? D_80947A78;                                /* unable to generate initializer */
static ? D_80947A88;                                /* unable to generate initializer */
static ? D_80947A98;                                /* unable to generate initializer */
static ? D_80947AB0;                                /* unable to generate initializer */
static ? D_80947ACC;                                /* unable to generate initializer */
static ? D_80947AEC;                                /* unable to generate initializer */
static ? D_80947AFC;                                /* unable to generate initializer */
static ? D_80947B10;                                /* unable to generate initializer */
static ? D_80947D68;                                /* unable to generate initializer */
static ? D_80947D88;                                /* unable to generate initializer */
static ? D_80947EA0;

void EnSda_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSda *this = (EnSda *) thisx;

}

void EnSda_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSda *this = (EnSda *) thisx;

}

void EnSda_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *phi_v0;
    EnSda *this = (EnSda *) thisx;

    if (this->actor.params == 1) {
        phi_v0 = this->actor.parent;
    } else {
        phi_v0 = globalCtx->actorCtx.actorList[2].first;
    }
    this->actor.world.pos.x = phi_v0->world.pos.x;
    this->actor.world.pos.y = phi_v0->world.pos.y;
    this->actor.world.pos.z = phi_v0->world.pos.z;
}

void EnSda_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_t7;
    GlobalContext *temp_a3;
    GraphicsContext *temp_v0;
    Actor *phi_s0;
    EnSda *this = (EnSda *) thisx;

    temp_a3 = globalCtx;
    temp_v0 = temp_a3->state.gfxCtx;
    temp_t7 = temp_v0->polyOpa.d - 0x1000;
    sp20 = temp_t7;
    temp_v0->polyOpa.d = temp_t7;
    if (this->actor.params == 1) {
        phi_s0 = this->actor.parent;
    } else {
        phi_s0 = temp_a3->actorCtx.actorList[2].first;
    }
    phi_s0->shape.shadowAlpha = 0;
    globalCtx = temp_a3;
    func_8094702C(sp20, phi_s0, temp_a3);
    if ((s32) gGameInfo->data[1248] < 5) {
        func_80947668(sp20, phi_s0, globalCtx, globalCtx);
    }
}

void func_809469C0(GlobalContext *arg0, Actor *arg1, f32 arg2) {
    s16 spA0;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp80;
    f32 sp7C;
    GameInfo *temp_a0;
    GameInfo *temp_a0_2;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f8;
    s16 *temp_a3;
    s16 *temp_a3_2;
    s16 *temp_a3_3;
    s16 *temp_a3_4;
    s16 *temp_a3_5;
    s16 temp_a0_10;
    s16 temp_a0_11;
    s16 temp_a0_12;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_8;
    s16 temp_a0_9;
    s16 temp_a1;
    s16 temp_a1_2;
    s16 temp_a1_4;
    s16 temp_s3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t3_4;
    s16 temp_t3_5;
    s16 temp_t3_6;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v0_9;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 temp_v1_5;
    s16 temp_v1_6;
    s16 temp_v1_7;
    s32 temp_a1_3;
    s32 temp_a1_5;
    s32 temp_f8_2;
    s32 temp_f8_3;
    u8 temp_v0_2;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    s16 phi_s3;
    s16 phi_t3;
    s16 phi_t3_2;
    s16 phi_a0;
    s16 phi_a2;
    s32 phi_a1;
    s16 phi_t3_3;
    s16 phi_a0_2;
    s16 phi_a2_2;
    s32 phi_a1_2;
    s16 phi_t3_4;
    s16 phi_a0_3;
    s16 phi_a2_3;
    s32 phi_a1_3;
    s16 phi_t3_5;
    s16 phi_a0_4;
    s16 phi_a2_4;
    s32 phi_a1_4;
    s16 phi_t3_6;
    s16 phi_a0_5;
    s16 phi_a2_5;
    s32 phi_a1_5;
    s16 phi_t3_7;

    phi_s3 = 0;
    phi_t3 = spA0;
    do {
        if ((arg2 == 0.0f) || (temp_t3 = *(&D_80947ACC + (phi_s3 * 2)), phi_t3 = temp_t3, phi_t3_7 = temp_t3, ((s32) temp_t3 >= 0))) {
            temp_a0 = gGameInfo;
            if (arg2 > 0.0f) {
                temp_v0 = &D_80947EA0 + (phi_t3 * 0xC);
                temp_v1 = &D_80947EA0 + (phi_s3 * 0xC);
                temp_f0 = temp_v1->unk_0;
                temp_f2 = temp_v1->unk_4;
                temp_f12 = temp_v1->unk_8;
                sp88 = (((temp_v0->unk_0 - temp_f0) * arg2) + temp_f0) - arg0->unk_24;
                sp8C = (((f32) temp_a0->data[2448] + ((((temp_v0->unk_4 - temp_f2) * arg2) + temp_f2) - arg0->unk_28) + 76.0f + 30.0f) - 105.0f) + 15.0f;
                sp90 = (((temp_v0->unk_8 - temp_f12) * arg2) + temp_f12) - arg0->unk_2C;
            } else {
                temp_v1_2 = &D_80947EA0 + (phi_s3 * 0xC);
                sp88 = temp_v1_2->unk_0 - arg0->unk_24;
                sp8C = (((f32) temp_a0->data[2448] + (temp_v1_2->unk_4 - arg0->unk_28) + 76.0f + 30.0f) - 105.0f) + 15.0f;
                sp90 = temp_v1_2->unk_8 - arg0->unk_2C;
            }
            SysMatrix_MultiplyVector3fByState((Vec3f *) &sp88, (Vec3f *) &sp7C);
            temp_a0_2 = gGameInfo;
            temp_v0_2 = *(&D_80947AEC + phi_s3);
            temp_f8 = sp7C * (1.0f + ((f32) temp_a0_2->data[2449] / 100.0f));
            sp7C = temp_f8;
            temp_f10 = sp80 * (1.0f + ((f32) temp_a0_2->data[2449] / 100.0f));
            sp80 = temp_f10;
            temp_f8_2 = (s32) (temp_f8 + 32.0f);
            temp_f8_3 = (s32) (temp_f10 * 64.0f);
            phi_t3_2 = 0;
            phi_a2 = -0x180;
            phi_t3_3 = 0;
            phi_t3_4 = 0;
            phi_t3_5 = 0;
            phi_t3_6 = 0;
            if (temp_v0_2 == 2) {
                do {
                    temp_a3 = &D_80947A98 + (phi_t3_2 * 2);
                    temp_a1 = *temp_a3;
                    temp_t3_2 = phi_t3_2 + 1;
                    temp_a0_3 = (s32) temp_a1 * -1;
                    phi_t3_2 = temp_t3_2;
                    phi_a0 = temp_a0_3;
                    phi_t3_7 = temp_t3_2;
                    phi_a1 = (s32) temp_a1;
                    if ((s32) temp_a0_3 < (s32) temp_a1) {
                        do {
                            temp_v1_3 = (s16) temp_f8_2 + phi_a0;
                            temp_a0_4 = phi_a0 + 1;
                            if ((s32) temp_v1_3 >= 0) {
                                temp_v0_3 = (s16) temp_f8_3 + phi_a2;
                                if (((s32) temp_v1_3 < 0x40) && ((s32) temp_v0_3 >= 0) && ((s32) temp_v0_3 < 0x1000)) {
                                    *(arg1 + temp_v1_3 + temp_v0_3) = 0xFF;
                                    phi_a1 = (s32) *temp_a3;
                                }
                            }
                            phi_a0 = temp_a0_4;
                        } while ((s32) temp_a0_4 < phi_a1);
                    }
                    phi_a2 = (s16) (phi_a2 + 0x40);
                } while ((s32) temp_t3_2 < 0xC);
            } else if (temp_v0_2 == 1) {
                phi_a2_2 = -0x100;
                do {
                    temp_a3_2 = &D_80947A88 + (phi_t3_3 * 2);
                    temp_a1_2 = *temp_a3_2;
                    temp_t3_3 = phi_t3_3 + 1;
                    temp_a0_5 = (s32) temp_a1_2 * -1;
                    phi_t3_3 = temp_t3_3;
                    phi_a0_2 = temp_a0_5;
                    phi_t3_7 = temp_t3_3;
                    phi_a1_2 = (s32) temp_a1_2;
                    if ((s32) temp_a0_5 < (s32) temp_a1_2) {
                        do {
                            temp_v1_4 = (s16) temp_f8_2 + phi_a0_2;
                            temp_a0_6 = phi_a0_2 + 1;
                            if ((s32) temp_v1_4 >= 0) {
                                temp_v0_4 = (s16) temp_f8_3 + phi_a2_2;
                                if (((s32) temp_v1_4 < 0x40) && ((s32) temp_v0_4 >= 0) && ((s32) temp_v0_4 < 0x1000)) {
                                    *(arg1 + temp_v1_4 + temp_v0_4) = 0xFF;
                                    phi_a1_2 = (s32) *temp_a3_2;
                                }
                            }
                            phi_a0_2 = temp_a0_6;
                        } while ((s32) temp_a0_6 < phi_a1_2);
                    }
                    phi_a2_2 = (s16) (phi_a2_2 + 0x40);
                } while ((s32) temp_t3_3 < 8);
            } else if (temp_v0_2 == 0) {
                phi_a2_3 = -0xC0;
                do {
                    temp_a3_3 = &D_80947A78 + (phi_t3_4 * 2);
                    temp_v0_5 = *temp_a3_3;
                    temp_t3_4 = phi_t3_4 + 1;
                    temp_a0_7 = (s32) temp_v0_5 * -1;
                    temp_a1_3 = temp_v0_5 - 1;
                    phi_t3_4 = temp_t3_4;
                    phi_a0_3 = temp_a0_7;
                    phi_t3_7 = temp_t3_4;
                    phi_a1_3 = temp_a1_3;
                    if ((s32) temp_a0_7 < temp_a1_3) {
                        do {
                            temp_v1_5 = (s16) temp_f8_2 + phi_a0_3;
                            temp_a0_8 = phi_a0_3 + 1;
                            if ((s32) temp_v1_5 >= 0) {
                                temp_v0_6 = (s16) temp_f8_3 + phi_a2_3;
                                if (((s32) temp_v1_5 < 0x40) && ((s32) temp_v0_6 >= 0) && ((s32) temp_v0_6 < 0x1000)) {
                                    *(arg1 + temp_v1_5 + temp_v0_6) = 0xFF;
                                    phi_a1_3 = *temp_a3_3 - 1;
                                }
                            }
                            phi_a0_3 = temp_a0_8;
                        } while ((s32) temp_a0_8 < phi_a1_3);
                    }
                    phi_a2_3 = (s16) (phi_a2_3 + 0x40);
                } while ((s32) temp_t3_4 < 7);
            } else if (temp_v0_2 == 4) {
                phi_a2_4 = -0x1C0;
                do {
                    temp_a3_4 = &D_80947AB0 + (phi_t3_5 * 2);
                    temp_a1_4 = *temp_a3_4;
                    temp_t3_5 = phi_t3_5 + 1;
                    temp_a0_9 = (s32) temp_a1_4 * -1;
                    phi_t3_5 = temp_t3_5;
                    phi_a0_4 = temp_a0_9;
                    phi_t3_7 = temp_t3_5;
                    phi_a1_4 = (s32) temp_a1_4;
                    if ((s32) temp_a0_9 < (s32) temp_a1_4) {
                        do {
                            temp_v1_6 = (s16) temp_f8_2 + phi_a0_4;
                            temp_a0_10 = phi_a0_4 + 1;
                            if ((s32) temp_v1_6 >= 0) {
                                temp_v0_7 = (s16) temp_f8_3 + phi_a2_4;
                                if (((s32) temp_v1_6 < 0x40) && ((s32) temp_v0_7 >= 0) && ((s32) temp_v0_7 < 0x1000)) {
                                    *(arg1 + temp_v1_6 + temp_v0_7) = 0xFF;
                                    phi_a1_4 = (s32) *temp_a3_4;
                                }
                            }
                            phi_a0_4 = temp_a0_10;
                        } while ((s32) temp_a0_10 < phi_a1_4);
                    }
                    phi_a2_4 = (s16) (phi_a2_4 + 0x40);
                } while ((s32) temp_t3_5 < 0xE);
            } else {
                phi_a2_5 = -0x80;
                do {
                    temp_a3_5 = &D_80947A6C + (phi_t3_6 * 2);
                    temp_v0_8 = *temp_a3_5;
                    temp_t3_6 = phi_t3_6 + 1;
                    temp_a0_11 = (s32) temp_v0_8 * -1;
                    temp_a1_5 = temp_v0_8 - 1;
                    phi_t3_6 = temp_t3_6;
                    phi_a0_5 = temp_a0_11;
                    phi_t3_7 = temp_t3_6;
                    phi_a1_5 = temp_a1_5;
                    if ((s32) temp_a0_11 < temp_a1_5) {
                        do {
                            temp_v1_7 = (s16) temp_f8_2 + phi_a0_5;
                            temp_a0_12 = phi_a0_5 + 1;
                            if ((s32) temp_v1_7 >= 0) {
                                temp_v0_9 = (s16) temp_f8_3 + phi_a2_5;
                                if (((s32) temp_v1_7 < 0x40) && ((s32) temp_v0_9 >= 0) && ((s32) temp_v0_9 < 0x1000)) {
                                    *(arg1 + temp_v1_7 + temp_v0_9) = 0xFF;
                                    phi_a1_5 = *temp_a3_5 - 1;
                                }
                            }
                            phi_a0_5 = temp_a0_12;
                        } while ((s32) temp_a0_12 < phi_a1_5);
                    }
                    phi_a2_5 = (s16) (phi_a2_5 + 0x40);
                } while ((s32) temp_t3_6 < 6);
            }
        }
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_t3 = phi_t3_7;
    } while ((s32) temp_s3 < 0x10);
    spA0 = phi_t3_7;
}

void func_8094702C(Gfx *arg0, Actor *arg1, GlobalContext *arg2, ? arg3) {
    f32 sp19C;
    f32 sp198;
    f32 sp194;
    f32 sp18C;
    f32 sp188;
    s16 sp17A;
    s16 sp178;
    f32 sp16C;
    ? sp64;
    Actor *temp_v0;
    GameInfo *temp_v1_2;
    GameInfo *temp_v1_3;
    GameInfo *temp_v1_4;
    GameInfo *temp_v1_6;
    MtxF *temp_s2;
    f32 *temp_a0;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    s16 *temp_a2;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_s3;
    s16 temp_s3_2;
    s16 temp_s3_3;
    s16 temp_s3_4;
    s16 temp_s3_5;
    s16 temp_s3_6;
    s16 temp_s3_7;
    s16 temp_t2;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v1_5;
    s32 temp_a1;
    s32 temp_lo;
    s32 temp_v1;
    s8 temp_v0_2;
    void *temp_t6;
    void *temp_t8;
    void *temp_v0_3;
    void *temp_v0_4;
    s32 phi_s3;
    Actor *phi_v0;
    Actor *phi_v0_2;
    s32 phi_s3_2;
    s16 phi_s3_3;
    s16 phi_s3_4;
    s16 phi_s3_5;
    s16 phi_s3_6;
    s16 phi_t2;
    s16 phi_a0;
    s16 phi_a3;
    s32 phi_a1;
    Actor *phi_v0_3;
    s32 phi_s3_7;

    phi_s3 = 0;
    phi_v0_2 = arg1;
    phi_s3_2 = 0;
    phi_s3_3 = (s16) 0;
    phi_s3_4 = (s16) 0;
    phi_s3_5 = (s16) 0;
    phi_s3_6 = (s16) 0;
    phi_s3_7 = 0;
    if (gGameInfo->data[2457] != 0) {
        phi_v0 = arg1;
        do {
            if (((phi_s3 >= 0) && (phi_s3 < 0x40)) || ((temp_v1 = phi_s3 & 0x3F, ((phi_s3 < 0xFC0) == 0)) && (phi_s3 < 0x1000)) || (temp_v1 == 0) || (temp_v1 == 0x3F)) {
                *phi_v0 = 0xFF;
            } else {
                *phi_v0 = 0;
            }
            temp_s3 = phi_s3 + 1;
            phi_s3 = (s32) temp_s3;
            phi_v0 += 1;
        } while ((s32) temp_s3 < 0x1000);
    } else {
        do {
            temp_s3_2 = phi_s3_2 + 1;
            temp_v0 = phi_v0_2 + 4;
            temp_v0->unk_-4 = 0;
            phi_v0_2 = temp_v0;
            phi_s3_2 = (s32) temp_s3_2;
        } while ((s32) temp_s3_2 < 0x400);
    }
    SysMatrix_SetStateXRotation((f32) (gGameInfo->data[2450] + 0x46) / 100.0f);
    do {
        temp_v0_2 = *(&D_80947AFC + phi_s3_3);
        if ((s32) temp_v0_2 >= 0) {
            temp_t6 = &D_80947EA0 + (temp_v0_2 * 0xC);
            temp_t8 = arg2 + (phi_s3_3 * 0xC);
            temp_t6->unk_0 = (s32) temp_t8->unk_BEC;
            temp_t6->unk_4 = (s32) temp_t8->unk_BF0;
            temp_t6->unk_8 = (s32) temp_t8->unk_BF4;
        }
        temp_s3_3 = phi_s3_3 + 1;
        phi_s3_3 = temp_s3_3;
    } while ((s32) temp_s3_3 < 0x12);
    temp_f2 = D_80947EA0.unk_0;
    temp_f12 = D_80947EA0.unk_8;
    D_80947EA0.unk_4 = (f32) (D_80947EA0.unk_4 + 3.0f);
    temp_f0 = D_80947EA0.unk_4;
    D_80947EA0.unk_B4 = (f32) (((D_80947EA0.unk_B4 - temp_f2) * 1.2f) + temp_f2);
    D_80947EA0.unk_B8 = (f32) (((D_80947EA0.unk_B8 - temp_f0) * -1.2f) + temp_f0);
    D_80947EA0.unk_BC = (f32) (((D_80947EA0.unk_BC - temp_f12) * 1.2f) + temp_f12);
    do {
        func_809469C0(arg2, arg1, (f32) phi_s3_4 / 5.0f);
        temp_s3_4 = phi_s3_4 + 1;
        phi_s3_4 = temp_s3_4;
    } while ((s32) temp_s3_4 < 6);
    temp_s2 = arg2 + 0xD04;
    if (arg0[3].texture.s != 1) {
        func_8018219C(temp_s2, (Vec3s *) &sp178, 0);
        temp_v1_2 = gGameInfo;
        sp17A = sp17A + (temp_v1_2->data[1335] << 0xF) + 0x8000;
        sp178 *= temp_v1_2->data[1336] - 1;
        SysMatrix_InsertMatrix(temp_s2, 0);
        SysMatrix_MultiplyVector3fByState(&D_80947A60, (Vec3f *) &sp16C);
        Matrix_RotateY(sp17A, 0U);
        SysMatrix_InsertXRotation_s(sp178, 1);
        do {
            temp_lo = phi_s3_5 * 0xC;
            SysMatrix_MultiplyVector3fByState(temp_lo + &D_80947B10, (Vec3f *) &sp188);
            temp_v1_3 = gGameInfo;
            temp_v0_3 = &sp64 + temp_lo;
            temp_s3_5 = phi_s3_5 + 1;
            temp_v0_3->unk_0 = (f32) (((((f32) temp_v1_3->data[1330] / 100.0f) + 4.0f) * sp188) + sp16C);
            temp_v0_3->unk_4 = (f32) (((((f32) temp_v1_3->data[1330] / 100.0f) + 4.0f) * sp18C) + sp170);
            temp_v0_3->unk_8 = (f32) (((((f32) temp_v1_3->data[1330] / 100.0f) + 4.0f) * sp190) + sp174);
            phi_s3_5 = temp_s3_5;
        } while ((s32) temp_s3_5 < 0x16);
        SysMatrix_SetStateXRotation((f32) (temp_v1_3->data[2450] + 0x46) / 100.0f);
        do {
            temp_a0 = &sp194;
            temp_v0_4 = &sp64 + (phi_s3_6 * 0xC);
            sp194 = temp_v0_4->unk_0 - arg2->unk_24;
            sp198 = (f32) gGameInfo->data[1328] + (temp_v0_4->unk_4 - arg2->unk_28) + 16.0f;
            sp19C = temp_v0_4->unk_8 - arg2->unk_2C;
            SysMatrix_MultiplyVector3fByState((Vec3f *) temp_a0, (Vec3f *) &sp188);
            temp_v1_4 = gGameInfo;
            temp_s3_6 = phi_s3_6 + 1;
            temp_f16 = sp188 * (1.0f + ((f32) temp_v1_4->data[1338] / 100.0f));
            sp188 = temp_f16;
            temp_f10 = sp18C * (1.0f + ((f32) temp_v1_4->data[1338] / 100.0f));
            temp_f16_2 = temp_f10 * 64.0f;
            sp18C = temp_f10;
            phi_s3_6 = temp_s3_6;
loop_24:
            phi_t2 = 0;
            phi_a3 = -0xC0;
loop_25:
            temp_a2 = &D_80947A78 + (phi_t2 * 2);
            temp_v0_5 = *temp_a2;
            temp_t2 = phi_t2 + 1;
            temp_a0_2 = (s32) temp_v0_5 * -1;
            temp_a1 = temp_v0_5 - 1;
            phi_t2 = temp_t2;
            phi_a0 = temp_a0_2;
            phi_a1 = temp_a1;
            if ((s32) temp_a0_2 < temp_a1) {
                do {
                    temp_v0_6 = (s16) (s32) (temp_f16 + 32.0f) + phi_a0;
                    temp_a0_3 = phi_a0 + 1;
                    if ((s32) temp_v0_6 >= 0) {
                        temp_v1_5 = (s16) (s32) temp_f16_2 + phi_a3;
                        if (((s32) temp_v0_6 < 0x40) && ((s32) temp_v1_5 >= 0) && ((s32) temp_v1_5 < 0x1000)) {
                            *(arg1 + temp_v0_6 + temp_v1_5) = 0xFF;
                            phi_a1 = *temp_a2 - 1;
                        }
                    }
                    phi_a0 = temp_a0_3;
                } while ((s32) temp_a0_3 < phi_a1);
            }
            phi_a3 = (s16) (phi_a3 + 0x40);
            if ((s32) temp_t2 < 7) {
                goto loop_25;
            }
            if ((s32) (s16) (temp_t2 + 1) < 6) {
                goto loop_24;
            }
        } while ((s32) temp_s3_6 < 0x16);
    }
    phi_v0_3 = arg1;
    if (gGameInfo->data[2461] == 1) {
        do {
            if (*phi_v0_3 != 0) {
                temp_v1_6 = gGameInfo;
                *phi_v0_3 = (u8) ((0xFF - temp_v1_6->data[2461]) - ((phi_s3_7 >> 6) * (temp_v1_6->data[2460] + 4)));
            }
            temp_s3_7 = phi_s3_7 + 1;
            phi_v0_3 += 1;
            phi_s3_7 = (s32) temp_s3_7;
        } while ((s32) temp_s3_7 < 0x1000);
    }
}

void func_80947668(u32 arg0, Actor *arg1, GlobalContext *arg2) {
    GameInfo *temp_s0;
    GameInfo *temp_s0_2;
    Gfx *temp_s0_3;
    Gfx *temp_s0_4;
    Gfx *temp_v1;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s1;
    s16 phi_s1;

    temp_a0 = arg2->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C448(temp_a0);
    temp_v1 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1[1];
    temp_v1->words.w0 = 0xFA000000;
    temp_v1->words.w1 = (gGameInfo->data[2452] + 0x32) & 0xFF;
    temp_v1_2 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_2[1];
    temp_v1_2->words.w1 = 0;
    temp_v1_2->words.w0 = 0xFB000000;
    SysMatrix_InsertTranslation(arg1->world.pos.x, arg1->floorHeight, arg1->world.pos.z, 0);
    SysMatrix_InsertYRotation_f((f32) gGameInfo->data[2451] / 100.0f, 1);
    Matrix_Scale(1.0f, 1.0f, ((f32) gGameInfo->data[2463] / 10.0f) + 1.0f, 1);
    temp_s0 = gGameInfo;
    SysMatrix_InsertTranslation(((f32) temp_s0->data[2462] / 10.0f) + 2.0f, 0.0f, ((f32) temp_s0->data[2458] + ((((arg1->world.pos.y - arg1->floorHeight) + (f32) temp_s0->data[2454]) * (f32) (temp_s0->data[2455] - 5)) / 10.0f)) - 20.0f, 1);
    temp_s0_2 = gGameInfo;
    Matrix_Scale(((f32) (temp_s0_2->data[2456] - 0xFA) / 1000.0f) + 0.6f, 1.0f, ((f32) (temp_s0_2->data[2459] - 0xFA) / 1000.0f) + 0.6f, 1);
    temp_s0_3 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_s0_3[1];
    temp_s0_3->words.w0 = 0xDA380003;
    temp_s0_3->words.w1 = Matrix_NewMtx(arg2->state.gfxCtx);
    temp_v1_3 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_3[1];
    temp_v1_3->words.w1 = (u32) &D_80947D68;
    temp_v1_3->words.w0 = 0xDE000000;
    temp_v1_4 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_4[1];
    temp_v1_4->words.w1 = arg0;
    temp_v1_4->words.w0 = 0xFD900000;
    temp_v1_5 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_5[1];
    temp_v1_5->words.w1 = 0x7098260;
    temp_v1_5->words.w0 = 0xF5900000;
    temp_v1_6 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_6[1];
    temp_v1_6->words.w1 = 0;
    temp_v1_6->words.w0 = 0xE6000000;
    temp_v1_7 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_7[1];
    temp_v1_7->words.w1 = 0x77FF100;
    temp_v1_7->words.w0 = 0xF3000000;
    temp_v1_8 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_8[1];
    temp_v1_8->words.w1 = 0;
    temp_v1_8->words.w0 = 0xE7000000;
    temp_v1_9 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_9[1];
    temp_v1_9->words.w0 = 0xF5881000;
    temp_v1_9->words.w1 = 0x98260;
    temp_v1_10 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_10[1];
    temp_v1_10->words.w0 = 0xF2000000;
    temp_v1_10->words.w1 = 0xFC0FC;
    temp_v1_11 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = &temp_v1_11[1];
    temp_v1_11->words.w1 = (u32) &D_80947D88;
    temp_v1_11->words.w0 = 0xDE000000;
    phi_s1 = 0;
    if ((s32) gGameInfo->data[1326] > 0) {
        do {
            temp_f12 = ((f32) gGameInfo->data[1327] / 100.0f) + 1.0f;
            Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
            temp_s0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_s0_4[1];
            temp_s0_4->words.w0 = 0xDA380003;
            temp_s0_4->words.w1 = Matrix_NewMtx(arg2->state.gfxCtx);
            temp_v1_12 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = &temp_v1_12[1];
            temp_v1_12->words.w1 = (u32) &D_80947D88;
            temp_v1_12->words.w0 = 0xDE000000;
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
        } while ((s32) temp_s1 < (s32) gGameInfo->data[1326]);
    }
}
