typedef struct BgDblueMovebg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ f32 unk_148;                        /* inferred */
    /* 0x14C */ char pad_14C[0x10];                 /* maybe part of unk_148[5]? */
    /* 0x15C */ void (*actionFunc)(BgDblueMovebg *, GlobalContext *);
    /* 0x160 */ s32 unk_160;                        /* inferred */
    /* 0x164 */ ? *unk_164;                         /* inferred */
    /* 0x168 */ u32 unk_168;                        /* inferred */
    /* 0x16C */ void *unk_16C;                      /* inferred */
    /* 0x170 */ s8 unk_170;                         /* inferred */
    /* 0x171 */ s8 unk_171;                         /* inferred */
    /* 0x172 */ u16 unk_172;                        /* inferred */
    /* 0x174 */ u16 unk_174;                        /* inferred */
    /* 0x176 */ char pad_176[0x2];
    /* 0x178 */ s32 unk_178;                        /* inferred */
    /* 0x17C */ char pad_17C[0x2];
    /* 0x17E */ s16 unk_17E;                        /* inferred */
    /* 0x180 */ s16 unk_180;                        /* inferred */
    /* 0x182 */ char pad_182[0x2];
    /* 0x184 */ f32 unk_184;                        /* inferred */
    /* 0x188 */ s16 unk_188;                        /* inferred */
    /* 0x18A */ s16 unk_18A;                        /* inferred */
    /* 0x18C */ s16 unk_18C;                        /* inferred */
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ Vec3f unk_190;                      /* inferred */
    /* 0x19C */ Vec3f unk_19C;                      /* inferred */
    /* 0x1A8 */ Vec3f unk_1A8;                      /* inferred */
    /* 0x1B4 */ char pad_1B4[0x2];
    /* 0x1B6 */ s16 unk_1B6;                        /* inferred */
    /* 0x1B8 */ s16 unk_1B8;                        /* inferred */
    /* 0x1BA */ char pad_1BA[0x2];
    /* 0x1BC */ s32 unk_1BC;                        /* inferred */
    /* 0x1C0 */ s32 unk_1C0;                        /* inferred */
    /* 0x1C4 */ s32 unk_1C4;                        /* inferred */
    /* 0x1C8 */ s32 unk_1C8;                        /* inferred */
    /* 0x1CC */ s16 unk_1CC;                        /* inferred */
    /* 0x1CE */ s16 unk_1CE;                        /* inferred */
    /* 0x1D0 */ s16 unk_1D0;                        /* inferred */
    /* 0x1D2 */ s16 unk_1D2;                        /* inferred */
    /* 0x1D4 */ f32 unk_1D4;                        /* inferred */
    /* 0x1D8 */ char pad_1D8[0x120];                /* maybe part of unk_1D4[73]? */
    /* 0x2F8 */ s32 unk_2F8;                        /* inferred */
    /* 0x2FC */ s32 unk_2FC;                        /* inferred */
    /* 0x300 */ char pad_300[0x70];                 /* maybe part of unk_2FC[29]? */
} BgDblueMovebg;                                    /* size = 0x370 */

struct _mips2c_stack_BgDblueMovebg_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgDblueMovebg_Draw {
    /* 0x00 */ char pad_0[0x88];
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x18];                   /* maybe part of sp88[7]? */
    /* 0xA4 */ GraphicsContext *spA4;               /* inferred */
    /* 0xA8 */ char pad_A8[0x38];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_BgDblueMovebg_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x10];
};                                                  /* size = 0x40 */

struct _mips2c_stack_BgDblueMovebg_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A29A80 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2A128 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2A1E0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2A32C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2A444 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A2A670 {};              /* size 0x0 */

struct _mips2c_stack_func_80A2A688 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2A714 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2A7F8 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A2AAB8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A2ABD0 {
    /* 0x00 */ char pad_0[0x80];
    /* 0x80 */ s32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x8];                    /* maybe part of sp80[3]? */
    /* 0x8C */ Vec3f *sp8C;                         /* inferred */
    /* 0x90 */ char pad_90[0x4];
    /* 0x94 */ BgDblueMovebg *sp94;                 /* inferred */
    /* 0x98 */ char pad_98[0x14];                   /* maybe part of sp94[6]? */
    /* 0xAC */ ? spAC;                              /* inferred */
    /* 0xAC */ char pad_AC[0x4];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0x4];
};                                                  /* size = 0xB8 */

struct _mips2c_stack_func_80A2AED0 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Vec3f *sp3C;                         /* inferred */
    /* 0x40 */ BgDblueMovebg *sp40;                 /* inferred */
    /* 0x44 */ Vec3f *sp44;                         /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0xC];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80A2B1A0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2B274 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A2B308 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

s16 func_800F2178(s16, BgDblueMovebg *, Actor *);   /* extern */
s32 func_8017D668(f32, f32, f32, f32, f32, f32, ? *, ? *, ? *); /* extern */
? func_8019FB0C(Vec3f *, ?, f32, ?);                /* extern */
? func_8019FC20(Vec3f *, ?);                        /* extern */
s32 func_80A29A80(GlobalContext *arg0, s32 arg1, s32 arg2, BgDblueMovebg *); /* static */
void func_80A2A128(BgDblueMovebg *arg0, GlobalContext *arg1); /* static */
void func_80A2A1E0(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2A32C(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2A444(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2A670(BgDblueMovebg *arg0, GlobalContext *arg1); /* static */
void func_80A2A688(Actor *arg0, ? arg1);            /* static */
void func_80A2A714(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2A7F8(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2AAB8(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2ABD0(BgDblueMovebg *arg0, GlobalContext *arg1); /* static */
void func_80A2AED0(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2B1A0(BgDblueMovebg *, GlobalContext *); /* static */
void func_80A2B274(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A2B308(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_06004848;
extern ? D_060052B8;
extern ? D_06008778;
extern ? D_0600A528;
extern ? D_0600CD10;
extern void D_0600CE00;
static ? D_80A2B870;                                /* unable to generate initializer */
static ? D_80A2B8AC;                                /* unable to generate initializer */
static ? D_80A2B8DC;                                /* unable to generate initializer */
static ? D_80A2B90C;                                /* unable to generate initializer */
static ? D_80A2B93C;                                /* unable to generate initializer */
static ? D_80A2B96C;                                /* unable to generate initializer */
static ? D_80A2B974;                                /* unable to generate initializer */
static InitChainEntry D_80A2B978[4];                /* unable to generate initializer */
static Vec3f D_80A2B988 = {1785.0f, 0.0f, 220.0f};
static BgDblueMovebg *D_80A2BBF0;
static s8 D_80A2BBF4;
static s8 D_80A2BBF5;

s32 func_80A29A80(GlobalContext *arg0, s32 arg1, s32 arg2) {
    s32 sp2C;
    s32 temp_s0_2;
    u8 temp_s0;
    void *temp_v1;
    s32 phi_s0;
    s32 phi_s1;

    sp2C = 1;
    if (arg2 < 0xE) {
        temp_v1 = (arg2 * 2) + &D_80A2B870;
        temp_s0 = temp_v1->unk_0;
        temp_s0_2 = temp_s0 - 1;
        phi_s0 = temp_s0_2;
        if (temp_s0 != 0) {
            phi_s1 = arg1 + temp_s0_2;
loop_3:
            if (((1 << phi_s0) & temp_v1->unk_1) != 0) {
                if (Flags_GetSwitch(arg0, phi_s1) == 0) {
                    sp2C = 0;
                } else {
                    goto block_8;
                }
            } else if (Flags_GetSwitch(arg0, phi_s1) != 0) {
                sp2C = 0;
            } else {
block_8:
                phi_s0 += -1;
                phi_s1 += -1;
                if (phi_s0 == 0) {

                } else {
                    goto loop_3;
                }
            }
        }
    } else {
        sp2C = 0;
        if (arg2 != 0xE) {
            if (arg2 != 0xF) {

            } else if ((Flags_GetSwitch(arg0, arg1) == 0) || ((Flags_GetSwitch(arg0, arg1 + 1) != 0) && (Flags_GetSwitch(arg0, arg1 + 2) != 0) && (Flags_GetSwitch(arg0, arg1 + 3) != 0))) {
                sp2C = 1;
            }
        } else {
            if (Flags_GetSwitch(arg0, arg1) == 0) {
                sp2C = 1;
            }
            if ((Flags_GetSwitch(arg0, arg1 + 1) != 0) && (Flags_GetSwitch(arg0, arg1 + 2) != 0) && (Flags_GetSwitch(arg0, arg1 + 3) != 0)) {
                sp2C += 2;
            }
        }
    }
    return sp2C;
}

void BgDblueMovebg_Init(Actor *thisx, GlobalContext *globalCtx) {
    Vec3f *sp2C;
    PosRot *sp28;
    Vec3f *sp24;
    ? *temp_v0_3;
    CollisionHeader *temp_a2;
    PosRot *temp_a1_2;
    Vec3f *temp_a0;
    Vec3f *temp_a3;
    s16 temp_a1;
    s16 temp_a2_2;
    s16 temp_t0;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t9;
    s32 temp_t1_2;
    s32 temp_t4;
    s32 temp_t7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_4;
    s32 temp_v1;
    s8 temp_t1;
    s8 temp_t5;
    s32 phi_v0;
    BgDblueMovebg *phi_v1;
    ? *phi_v0_2;
    BgDblueMovebg *this = (BgDblueMovebg *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80A2B978);
    this->unk_160 = this->actor.params & 0xF;
    this->unk_1BC = ((s32) this->actor.params >> 0xC) & 0xF;
    this->unk_1C0 = ((s32) this->actor.params >> 4) & 0xFF;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v1 = this->unk_160;
    if ((temp_v1 == 9) || (temp_v1 == 8)) {
        if (D_80A2BBF4.unk_0 != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_t5 = this->actor.room;
        this->actor.room = -1;
        this->unk_170 = temp_t5;
        D_80A2BBF4.unk_0 = 1;
        temp_t8 = this->actor.world.rot.z;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->unk_171 = (s8) temp_t8;
        goto block_9;
    }
    if (temp_v1 == 6) {
        if ((&D_80A2BBF4)[1] != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        temp_t0 = this->actor.world.rot.z;
        temp_t1 = this->actor.room;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->actor.room = -1;
        this->unk_171 = (s8) temp_t0;
        this->unk_170 = temp_t1;
        (&D_80A2BBF4)[1] = 1;
        goto block_9;
    }
block_9:
    temp_v0 = this->unk_160 * 4;
    temp_a2 = *(&D_80A2B90C + temp_v0);
    phi_v0 = temp_v0;
    if (temp_a2 != 0) {
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_a2);
        phi_v0 = this->unk_160 * 4;
    }
    this->unk_164 = *(&D_80A2B8AC + phi_v0);
    this->unk_168 = *(&D_80A2B8DC + phi_v0);
    this->unk_16C = *(&D_80A2B93C + phi_v0);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_1B6, 2);
    temp_t7 = this->unk_160;
    switch (temp_t7) {
    case 1:
        temp_a2_2 = this->actor.world.rot.x;
        temp_a1 = this->actor.world.rot.z;
        this->actor.world.rot.x = 0;
        this->actor.shape.rot.x = 0;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->unk_1C4 = (s32) temp_a2_2;
        this->unk_1C8 = (s32) temp_a1;
        if (func_80A29A80(globalCtx, (s32) temp_a1, (s32) temp_a2_2) != 0) {
            this->unk_172 |= 1;
        } else {
            this->unk_172 &= 0xFFFE;
        }
        this->unk_17E = 0;
        this->unk_184 = 0.0f;
        if (Flags_GetSwitch(globalCtx, this->unk_1C0) != 0) {
            this->unk_18C = 0x384;
        } else {
            this->unk_18C = 0;
        }
        this->actionFunc = func_80A2A714;
        this->actor.shape.rot.y += (s32) (((f32) this->unk_18C / 10.0f) * 182.04445f);
        return;
    case 6:
        temp_v0_2 = func_80A29A80(globalCtx, this->unk_1C0, this->unk_1BC);
        temp_t4 = temp_v0_2 * 2;
        this->unk_178 = temp_v0_2;
        this->unk_1CC = *(&D_80A2B96C + temp_t4);
        this->actionFunc = func_80A2A1E0;
        this->unk_1CE = this->unk_1CC;
        return;
    case 7:
        temp_t8_2 = this->actor.world.rot.x;
        temp_t9 = this->actor.world.rot.z;
        this->actor.world.rot.x = 0;
        this->actor.shape.rot.x = 0;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->unk_1C4 = (s32) temp_t8_2;
        this->unk_1C8 = (s32) temp_t9;
        if (Flags_GetSwitch(globalCtx, this->unk_1C0) != 0) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        this->unk_18C = 0;
        this->actor.draw = func_80A2B308;
        this->unk_17E = 0;
        this->unk_184 = 0.0f;
        this->actionFunc = func_80A2A32C;
        this->actor.shape.rot.y += (s32) (((f32) this->unk_18C / 10.0f) * 182.04445f);
        return;
    case 8:
    case 9:
        this->unk_2FC = 0;
        this->unk_2F8 = 0;
        phi_v1 = this;
        phi_v0_2 = &D_80A2B974;
        do {
            temp_v0_3 = phi_v0_2 + 2;
            temp_v0_3->unk_-2 = (s16) phi_v1->unk_1B6;
            phi_v1 += 2;
            phi_v0_2 = temp_v0_3;
        } while (temp_v0_3 != D_80A2B978);
        temp_v0_4 = func_80A29A80(globalCtx, this->unk_1C0, this->unk_1BC);
        temp_t1_2 = temp_v0_4 * 2;
        this->unk_178 = temp_v0_4;
        this->unk_1CC = *(&D_80A2B96C + temp_t1_2);
        this->unk_1CE = this->unk_1CC;
        Matrix_RotateY(this->actor.shape.rot.y, 0U);
        temp_a0 = &this->unk_190;
        sp24 = temp_a0;
        SysMatrix_GetStateTranslationAndScaledX(2240.0f, temp_a0);
        temp_a3 = &this->unk_19C;
        sp2C = temp_a3;
        SysMatrix_GetStateTranslationAndScaledX(-10.0f, temp_a3);
        temp_a1_2 = &this->actor.world;
        sp28 = temp_a1_2;
        Math_Vec3f_Sum(temp_a0, (Vec3f *) temp_a1_2, temp_a0);
        Math_Vec3f_Sum(sp2C, (Vec3f *) temp_a1_2, sp2C);
        D_80A2BBF0 = this;
        this->actor.flags |= 0x20;
        this->actionFunc = func_80A2AED0;
        return;
    case 10:
        this->actionFunc = func_80A2B1A0;
        return;
    case 11:
        this->unk_1CC = *(&D_80A2B96C + (func_80A29A80(globalCtx, this->unk_1C0, this->unk_1BC) * 2));
        D_80A2BBF0 = this;
        this->actor.flags |= 0x20;
        this->actor.update = Actor_Noop;
        this->actor.draw = func_80A2B274;
        /* fallthrough */
    default:
        return;
    }
}

void BgDblueMovebg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_a2;
    s32 temp_v0;
    BgDblueMovebg *this = (BgDblueMovebg *) thisx;

    temp_a2 = this->unk_144;
    this = this;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    temp_v0 = this->unk_160;
    if ((temp_v0 == 9) || (temp_v0 == 8)) {
        func_801A72CC(&this->unk_1A8);
    }
}

void func_80A2A128(BgDblueMovebg *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    s32 temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 1, 0x22E);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            temp_v1 = ((s32) temp_v0->params >> 0xC) & 0xF;
            if ((temp_v1 == 5) && (temp_v0->update != 0)) {
                arg0->unk_2FC = temp_v0;
            } else if ((temp_v1 == 6) && (temp_v0->update != 0)) {
                arg0->unk_2F8 = temp_v0;
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
}

void func_80A2A1E0(BgDblueMovebg *arg0, GlobalContext *arg1) {
    BgDblueMovebg *temp_a3;
    s16 *temp_a0;
    s16 temp_a1_2;
    s16 temp_v1;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;
    s8 temp_a1_3;
    s8 temp_v0_2;
    s8 temp_v1_2;
    s8 temp_v1_3;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk_1C0;
    temp_a2 = temp_a3->unk_1BC;
    arg0 = temp_a3;
    temp_v0 = func_80A29A80(arg1, temp_a1, temp_a2, temp_a3);
    temp_a0 = &arg0->unk_1CC;
    if (temp_v0 != arg0->unk_178) {
        if (temp_v0 != 0) {
            if ((temp_v0 != 1) && (temp_v0 != 2)) {
                if (temp_v0 != 3) {

                } else {
                    goto block_7;
                }
            } else {
                arg0->unk_17E = 0x28;
            }
        } else {
block_7:
            arg0->unk_17E = 0xF;
        }
    }
    temp_v1 = arg0->unk_17E;
    arg0->unk_178 = temp_v0;
    if ((s32) temp_v1 <= 0) {
        arg0->unk_1CE = *(&D_80A2B96C + (temp_v0 * 2));
    } else {
        arg0->unk_17E = temp_v1 - 1;
    }
    temp_a1_2 = arg0->unk_1CE;
    arg0 = arg0;
    Math_StepToS(temp_a0, temp_a1_2, 0xC);
    arg0->actor.shape.rot.y += arg0->unk_1CC;
    temp_v1_2 = arg1->roomCtx.currRoom.num;
    if (temp_v1_2 == 0) {
        arg0->unk_164 = &D_06004848;
        goto block_15;
    }
    if (temp_v1_2 == 8) {
        arg0->unk_164 = NULL;
block_15:
    }
    temp_v0_2 = arg0->unk_170;
    if (temp_v0_2 != arg1->roomCtx.currRoom.num) {
        temp_a1_3 = arg0->unk_171;
        if (temp_a1_3 != arg1->roomCtx.currRoom.num) {
            temp_v1_3 = arg1->roomCtx.prevRoom.num;
            if ((temp_v0_2 != temp_v1_3) && (temp_a1_3 != temp_v1_3)) {
                D_80A2BBF5 = 0;
                Actor_MarkForDeath((Actor *) arg0);
            }
        }
    }
}

void func_80A2A32C(BgDblueMovebg *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    BgDblueMovebg *temp_a2;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v0;
    f32 phi_f0;
    s32 phi_v1;

    temp_a2 = arg0;
    temp_f0 = temp_a2->unk_148;
    temp_a3 = arg1->actorCtx.actorList[2].first;
    if (temp_f0 != 0.0f) {
        temp_v0 = temp_a2->actor.yawTowardsPlayer;
        temp_a2->unk_18E = temp_a2->actor.shape.rot.y - temp_v0;
        temp_a2->unk_184 = temp_a2->actor.xzDistToPlayer;
        if (temp_f0 >= 0.0f) {
            phi_f0 = 1.0f;
        } else {
            phi_f0 = -1.0f;
        }
        phi_v0 = 1;
        if ((s32) (s16) (temp_v0 - temp_a3->shape.rot.y) > 0) {
            phi_v0 = -1;
        }
        temp_a2->unk_17E = (s16) (s32) ((f32) phi_v0 * phi_f0);
        phi_v1 = 0;
        if ((s32) temp_a2->unk_17E > 0) {
            phi_v1 = 1;
        }
        if (phi_v1 != 0) {
            temp_a0 = temp_a2->unk_1B6;
            arg0 = temp_a2;
            arg0->unk_180 = func_800F2178(temp_a0, temp_a2, temp_a3);
            arg0->unk_172 |= 8;
            arg0->actionFunc = func_80A2A444;
            arg0->unk_1D2 = arg0->unk_1B6;
            return;
        }
        temp_a3->unk_A70 = (s32) (temp_a3->unk_A70 & ~0x10);
        temp_a2->unk_148 = 0.0f;
        /* Duplicate return node #11. Try simplifying control flow for better match */
    }
}

void func_80A2A444(BgDblueMovebg *arg0, GlobalContext *arg1) {
    Actor *sp24;
    s32 sp20;
    Actor *temp_a3;
    s16 temp_v0;

    temp_a3 = arg1->actorCtx.actorList[2].first;
    arg0->unk_188 += 1;
    temp_v0 = arg0->unk_188;
    if ((s32) temp_v0 >= 6) {
        arg0->unk_188 = 5;
    } else {
        arg0->unk_188 = temp_v0;
    }
    sp24 = temp_a3;
    sp20 = Math_StepToS(&arg0->unk_18A, 0x384, arg0->unk_188);
    arg0->actor.shape.rot.y = (s32) ((f32) (arg0->unk_18C + (s16) (arg0->unk_18A * arg0->unk_17E)) * 0.1f * 182.04445f) + arg0->actor.home.rot.y;
    if (((temp_a3->unk_A70 & 0x10) != 0) && (arg0->unk_184 > 0.0f)) {
        sp24 = temp_a3;
        temp_a3->world.pos.x = (Math_SinS((s16) (arg0->actor.shape.rot.y - arg0->unk_18E)) * arg0->unk_184) + arg0->actor.home.pos.x;
        temp_a3->world.pos.z = (Math_CosS((s16) (arg0->actor.shape.rot.y - arg0->unk_18E)) * arg0->unk_184) + arg0->actor.home.pos.z;
    } else {
        arg0->unk_184 = 0.0f;
    }
    if (sp20 != 0) {
        arg1->actorCtx.actorList[2].first->unk_A70 = (s32) (arg1->actorCtx.actorList[2].first->unk_A70 & ~0x10);
        arg0->unk_148 = 0.0f;
        Actor_SetSwitchFlag(arg1, arg0->unk_1C0);
        Audio_PlayActorSound2((Actor *) arg0, 0x2893U);
        if (func_80A29A80(arg1, arg0->unk_1C8, arg0->unk_1C4) != 0) {
            arg0->unk_172 |= 1;
        } else {
            arg0->unk_172 &= 0xFFFE;
        }
        if (((arg0->unk_174 & 1) == 0) && ((arg0->unk_172 & 1) != 0)) {
            func_801000CC(0x296DU);
        }
        func_80A2A670(arg0, arg1);
        return;
    }
    func_800B9010((Actor *) arg0, 0x216BU);
}

void func_80A2A670(BgDblueMovebg *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A2A688;
}

void func_80A2A688(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;

    arg0->unk_180 = (s16) (arg0->unk_180 - 1);
    if ((s32) arg0->unk_180 <= 0) {
        temp_a0 = arg0->unk_1B6;
        arg0 = arg0;
        ActorCutscene_Stop(temp_a0);
    }
    arg0 = arg0;
    if ((Math_StepToF(arg0 + 0x28, arg0->home.pos.y - 60.0f, 2.0f) != 0) && ((s32) arg0->unk_180 <= 0)) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80A2A714(BgDblueMovebg *arg0, GlobalContext *arg1) {
    BgDblueMovebg *temp_a2;
    f32 temp_f0;
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v0;
    f32 phi_f0;

    temp_a2 = arg0;
    temp_f0 = temp_a2->unk_148;
    if (temp_f0 != 0.0f) {
        temp_v0 = temp_a2->actor.yawTowardsPlayer;
        temp_a2->unk_18E = temp_a2->actor.shape.rot.y - temp_v0;
        temp_a2->unk_184 = temp_a2->actor.xzDistToPlayer;
        if (temp_f0 >= 0.0f) {
            phi_f0 = 1.0f;
        } else {
            phi_f0 = -1.0f;
        }
        phi_v0 = 1;
        if ((s32) (s16) (temp_v0 - arg1->actorCtx.actorList[2].first->shape.rot.y) > 0) {
            phi_v0 = -1;
        }
        temp_a0 = temp_a2->unk_1B6;
        temp_a2->unk_17E = (s16) (s32) ((f32) phi_v0 * phi_f0);
        arg0 = temp_a2;
        arg0->unk_180 = func_800F2178(temp_a0, temp_a2);
        arg0->unk_172 |= 8;
        arg0->actionFunc = func_80A2A7F8;
        arg0->unk_1D2 = arg0->unk_1B6;
    }
}

void func_80A2A7F8(BgDblueMovebg *arg0, GlobalContext *arg1) {
    Actor *sp2C;
    s32 sp28;
    s16 sp26;
    Actor *temp_v1;
    s16 temp_v0;
    s32 temp_hi;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk_188 += 1;
    temp_v0 = arg0->unk_188;
    if ((s32) temp_v0 >= 6) {
        arg0->unk_188 = 5;
    } else {
        arg0->unk_188 = temp_v0;
    }
    sp2C = temp_v1;
    sp28 = Math_StepToS(&arg0->unk_18A, 0x384, arg0->unk_188);
    sp26 = arg0->unk_18A * arg0->unk_17E;
    arg0->actor.shape.rot.y = (s32) ((f32) (arg0->unk_18C + sp26) * 0.1f * 182.04445f) + arg0->actor.home.rot.y;
    if (((temp_v1->unk_A70 & 0x10) != 0) && (arg0->unk_184 > 0.0f)) {
        sp2C = temp_v1;
        temp_v1->world.pos.x = (Math_SinS((s16) (arg0->actor.shape.rot.y - arg0->unk_18E)) * arg0->unk_184) + arg0->actor.home.pos.x;
        temp_v1->world.pos.z = (Math_CosS((s16) (arg0->actor.shape.rot.y - arg0->unk_18E)) * arg0->unk_184) + arg0->actor.home.pos.z;
    } else {
        arg0->unk_184 = 0.0f;
    }
    if (sp28 != 0) {
        temp_hi = (s32) (arg0->unk_18C + sp26 + 0xE10) % 0xE10;
        if ((temp_hi == 0x384) || (temp_hi == 0xA8C)) {
            sp2C = arg1->actorCtx.actorList[2].first;
            Actor_SetSwitchFlag(arg1, arg0->unk_1C0);
        } else {
            sp2C = arg1->actorCtx.actorList[2].first;
            Actor_UnsetSwitchFlag(arg1, arg0->unk_1C0);
        }
        sp2C->unk_A6C = (s32) (sp2C->unk_A6C | 0x20);
        sp2C->unk_A70 = (s32) (sp2C->unk_A70 & ~0x10);
        arg0->unk_148 = 0.0f;
        arg0->unk_188 = 0;
        arg0->unk_18C = (s16) ((s32) (arg0->unk_18C + sp26 + 0xE10) % 0xE10);
        arg0->unk_18A = 0;
        arg0->unk_17E = 0;
        Audio_PlayActorSound2((Actor *) arg0, 0x2893U);
        if (func_80A29A80(arg1, arg0->unk_1C8, arg0->unk_1C4) != 0) {
            arg0->unk_172 |= 1;
        } else {
            arg0->unk_172 &= 0xFFFE;
        }
        if (((arg0->unk_174 & 1) == 0) && ((arg0->unk_172 & 1) != 0)) {
            func_801000CC(0x296DU);
        }
        arg0->unk_1D0 = 0x11;
        arg0->actionFunc = func_80A2AAB8;
        arg0->unk_174 = arg0->unk_172;
        return;
    }
    func_800B9010((Actor *) arg0, 0x216BU);
}

void func_80A2AAB8(BgDblueMovebg *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    s32 sp18;
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v1;
    BgDblueMovebg *phi_a2;

    temp_v0 = arg0->unk_180;
    arg0->unk_180 = temp_v0 - 1;
    if ((s32) temp_v0 <= 0) {
        temp_a0 = arg0->unk_1B6;
        sp1C = arg1->actorCtx.actorList[2].first;
        arg0 = arg0;
        ActorCutscene_Stop(temp_a0);
    }
    phi_v1 = 0;
    phi_a2 = arg0;
    if (((s32) arg0->unk_1D0 > 0) && (((s32) D_80A2B974.unk_0 >= 0) || ((s32) D_80A2B974.unk_2 >= 0))) {
        sp18 = 0;
        arg0 = arg0;
        sp1C = arg1->actorCtx.actorList[2].first;
        phi_a2 = arg0;
        if (ActorCutscene_GetCurrentIndex() != -1) {
            phi_v1 = 1;
        }
    }
    if ((phi_v1 == 0) && ((s32) phi_a2->unk_180 <= 0)) {
        phi_a2->unk_1D0 += -1;
        if (phi_a2->unk_1D0 == 1) {
            phi_a2->unk_148 = 0.0f;
            arg1->actorCtx.actorList[2].first->unk_A6C = (s32) (arg1->actorCtx.actorList[2].first->unk_A6C | 0x20);
            arg1->actorCtx.actorList[2].first->unk_A70 = (s32) (arg1->actorCtx.actorList[2].first->unk_A70 & ~0x10);
        }
        if ((s32) phi_a2->unk_1D0 <= 0) {
            arg1->actorCtx.actorList[2].first->unk_A6C = (s32) (arg1->actorCtx.actorList[2].first->unk_A6C & ~0x20);
            phi_a2->actionFunc = func_80A2A714;
        }
    }
}

void func_80A2ABD0(BgDblueMovebg *arg0, GlobalContext *arg1) {
    ? spAC;
    BgDblueMovebg *sp94;
    Vec3f *sp8C;
    s32 sp80;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s7;
    void *temp_v0;
    s32 phi_fp;
    s32 phi_s5;
    Vec3f *phi_s6;
    void *phi_s0;
    s32 phi_v0;
    f32 *phi_s2;
    s16 *phi_s3;
    s32 phi_s7;

    sp94 = arg0;
    phi_fp = 0;
    do {
        phi_s5 = 0;
        if (sp94->unk_2F8 == 0) {
            func_80A2A128(arg0, arg1);
            sp80 = phi_fp + 1;
        } else {
            sp80 = phi_fp + 1;
            sp8C = arg0 + 0x24;
            phi_s6 = arg0 + (phi_fp * 0x60) + 0x238;
            phi_s0 = arg0 + (phi_fp * 8);
            phi_s2 = arg0 + (phi_fp << 5) + 0x1F8;
            phi_s3 = arg0 + (phi_fp * 0x10) + 0x1D8;
            phi_s7 = 0;
            do {
                Matrix_RotateY(arg0->actor.shape.rot.y, 0U);
                SysMatrix_InsertXRotation_s((s16) (arg0->actor.shape.rot.x + phi_s5), 1);
                SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
                SysMatrix_MultiplyVector3fByState(&D_80A2B988, (Vec3f *) &spAC);
                Math_Vec3f_Sum(sp8C, (Vec3f *) &spAC, (Vec3f *) &spAC);
                Math_Vec3f_Copy(phi_s6, (Vec3f *) &spAC);
                temp_v0 = sp94->unk_2F8;
                temp_f20 = spB0 - temp_v0->world.pos.y;
                temp_f0 = Math_Vec3f_DistXZ(temp_v0 + 0x24, (Vec3f *) &spAC);
                if ((phi_s0->unk_300 != 0) && (temp_f20 <= 12.0f) && (temp_f20 >= 0.0f) && (temp_f0 <= 60.0f)) {
                    phi_v0 = 1;
                } else if (((temp_f20 >= 0.0f) && ((temp_f20 > 0.0f) || (temp_f0 > 60.0f))) || ((phi_v0 = 1, (temp_f20 < 0.0f)) && ((temp_f20 < -150.0f) || (phi_v0 = 1, (temp_f0 > 40.0f))))) {
                    phi_v0 = 0;
                }
                if (phi_v0 != 0) {
                    phi_s0->unk_300 = (u8) sp80;
                    Math_StepToF(phi_s2, 1.0f, 0.2f);
                    Math_StepToS(phi_s3, 0xFF, 0x14);
                } else {
                    phi_s0->unk_300 = 0U;
                    Math_StepToF(phi_s2, 0.0f, 0.01f);
                    Math_StepToS(phi_s3, 0, 0x14);
                }
                temp_s7 = phi_s7 + 2;
                phi_s5 += 0x2000;
                phi_s6 = &phi_s6[1];
                phi_s0 += 1;
                phi_s2 = &phi_s2[1];
                phi_s3 = &phi_s3[1];
                phi_s7 = temp_s7;
            } while (temp_s7 != 0x10);
        }
        sp94 += 4;
        phi_fp = sp80;
    } while (sp80 != 2);
}

void func_80A2AED0(BgDblueMovebg *arg0, GlobalContext *arg1) {
    ? sp5C;
    f32 sp58;
    ? sp54;
    ? sp50;
    f32 sp48;
    Vec3f *sp44;
    BgDblueMovebg *sp40;
    Vec3f *sp3C;
    BgDblueMovebg *temp_a3;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    s16 temp_v0_5;
    s16 temp_v1_2;
    s32 temp_v0_3;
    s8 temp_a0;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_4;
    s8 temp_v1;
    s32 phi_v1;

    temp_a3 = arg1 + 0x18000;
    temp_v0 = arg1->roomCtx.currRoom.num;
    temp_v1 = arg0->unk_170;
    if ((temp_v1 != temp_v0) && (temp_a0 = arg0->unk_171, (temp_a0 != temp_v0)) && (temp_v0_2 = arg1->roomCtx.prevRoom.num, (temp_v1 != temp_v0_2)) && (temp_a0 != temp_v0_2)) {
        D_80A2BBF4 = 0;
        Actor_MarkForDeath((Actor *) arg0);
        return;
    }
    sp40 = temp_a3;
    temp_v0_3 = func_80A29A80(arg1, arg0->unk_1C0, arg0->unk_1BC, temp_a3);
    if (temp_v0_3 != arg0->unk_178) {
        if (temp_v0_3 != 0) {
            if ((temp_v0_3 != 1) && (temp_v0_3 != 2)) {
                if (temp_v0_3 != 3) {

                } else {
                    goto block_12;
                }
            } else {
                arg0->unk_17E = 0x28;
                arg0->unk_1D2 = arg0->unk_1B6;
            }
        } else {
block_12:
            arg0->unk_17E = 0xF;
            arg0->unk_1D2 = arg0->unk_1B8;
        }
        arg0->unk_172 |= 8;
    }
    arg0->unk_178 = temp_v0_3;
    if ((arg0->unk_172 & 8) == 0) {
        temp_v1_2 = arg0->unk_17E;
        if ((s32) temp_v1_2 <= 0) {
            arg0->unk_1CE = *(&D_80A2B96C + (temp_v0_3 * 2));
        } else {
            arg0->unk_17E = temp_v1_2 - 1;
        }
    }
    sp40 = temp_a3;
    Math_StepToS(&arg0->unk_1CC, arg0->unk_1CE, 0xC);
    arg0->actor.shape.rot.x += arg0->unk_1CC;
    if (arg0->unk_160 == 8) {
        if (arg1->roomCtx.currRoom.num == 8) {
            sp40 = temp_a3;
            func_80A2ABD0(arg0, arg1);
            arg0->unk_172 |= 0x20;
        } else {
            arg0->unk_172 &= 0xFFDF;
        }
    }
    temp_v0_4 = (arg1 + 0x18000)->unk_6E0;
    if (temp_v0_4 == 0) {
        arg0->unk_164 = &D_06008778;
    } else if (temp_v0_4 == 8) {
        arg0->unk_164 = &D_0600A528;
    }
    if (arg0 == D_80A2BBF0) {
        if (func_8017D668(arg1->view.eye.x, arg1->view.eye.z, arg0->unk_190.x, arg0->unk_190.z, arg0->unk_19C.x, arg0->unk_19C.z, &sp54, &sp5C, &sp50) != 0) {
            sp58 = arg0->actor.world.pos.y;
        } else {
            temp_a0_2 = &arg1->view.eye;
            temp_a1 = &arg0->unk_190;
            sp40 = (BgDblueMovebg *) temp_a1;
            sp44 = temp_a0_2;
            temp_f0 = Math_Vec3f_DistXYZ(temp_a0_2, temp_a1);
            temp_a1_2 = &arg0->unk_19C;
            sp3C = temp_a1_2;
            sp48 = temp_f0;
            if (sp48 <= Math_Vec3f_DistXYZ(temp_a0_2, temp_a1_2)) {
                Math_Vec3f_Copy((Vec3f *) &sp54, (Vec3f *) sp40);
            } else {
                Math_Vec3f_Copy((Vec3f *) &sp54, temp_a1_2);
            }
        }
        SkinMatrix_Vec3fMtxFMultXYZ(&arg1->projectionMatrix, (Vec3f *) &sp54, &arg0->unk_1A8);
        temp_v0_5 = arg0->unk_1CC;
        phi_v1 = -(s32) temp_v0_5;
        if ((s32) temp_v0_5 >= 0) {
            phi_v1 = (s32) temp_v0_5;
        }
        arg0->unk_1D4 = (f32) phi_v1 / 364.0f;
    }
}

void func_80A2B1A0(BgDblueMovebg *arg0, GlobalContext *arg1) {
    BgDblueMovebg *temp_a3;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_v0;

    temp_a3 = arg0;
    temp_a1 = temp_a3->unk_1C0;
    temp_a2 = temp_a3->unk_1BC;
    arg0 = temp_a3;
    temp_v0 = func_80A29A80(arg1, temp_a1, temp_a2, temp_a3);
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        arg0->actor.shape.rot.z = arg0->actor.home.rot.z + 0x8000;
        return;
    }
    arg0->actor.shape.rot.z = arg0->actor.home.rot.z;
}

void BgDblueMovebg_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDblueMovebg *temp_a0;
    s16 temp_a1;
    BgDblueMovebg *this = (BgDblueMovebg *) thisx;

    this->actionFunc(this, globalCtx);
    temp_a0 = this;
    if ((temp_a0->unk_172 & 8) != 0) {
        temp_a1 = temp_a0->unk_1D2;
        this = temp_a0;
        if (func_8013E2D4((Actor *) temp_a0, temp_a1, -1, 0) != 0) {
            this->unk_172 &= 0xFFF7;
        }
    }
}

void func_80A2B274(Actor *this, GlobalContext *globalCtx) {
    Actor *temp_a3;
    CollisionPoly *temp_a1;
    f32 temp_a2;
    s16 temp_v1;

    temp_a3 = this;
    if (temp_a3 != D_80A2BBF0) {
        Actor_MarkForDeath(temp_a3);
        return;
    }
    temp_a1 = temp_a3[1].wallPoly;
    temp_a2 = temp_a3[1].minVelocityY;
    this = temp_a3;
    temp_v1 = *(&D_80A2B96C + (func_80A29A80(globalCtx, (s32) temp_a1, (bitwise s32) temp_a2, (BgDblueMovebg *) temp_a3) * 2));
    if (temp_v1 != 0) {
        if ((s32) temp_v1 > 0) {
            func_8019FC20(&this->projectedPos, 0x2173);
            return;
        }
        func_8019FC20(&this->projectedPos, 0x2174);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80A2B308(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = this->unk_164;
}

void BgDblueMovebg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *spA4;
    s32 sp88;
    Gfx *temp_s0;
    Gfx *temp_s1;
    Gfx *temp_s1_2;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    s32 temp_fp;
    s32 temp_s3;
    s32 temp_v0;
    void *temp_a0;
    void *temp_s1_3;
    void *temp_s1_4;
    void *temp_s2_2;
    void *phi_s5;
    s32 phi_s3;
    s32 phi_fp;
    Gfx *phi_s1;
    Gfx *phi_s1_2;
    Gfx *phi_s1_3;
    BgDblueMovebg *this = (BgDblueMovebg *) thisx;

    SysMatrix_StatePush();
    temp_v0 = this->unk_160;
    temp_s2 = globalCtx->state.gfxCtx;
    if ((temp_v0 == 9) || (temp_v0 == 8) || ((this->actor.flags & 0x40) != 0)) {
        temp_a0 = this->unk_16C;
        if (temp_a0 != 0) {
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(temp_a0));
        }
        if ((this->unk_164 != 0) || (this->unk_160 == 6)) {
            temp_s0 = Gfx_CallSetupDL(temp_s2->polyOpa.p, 0x19U);
            temp_s0->words.w0 = 0xDA380003;
            temp_s0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            if (this->unk_160 == 6) {
                temp_s0[1].words.w1 = (u32) &D_060052B8;
                temp_s0[1].words.w0 = 0xDE000000;
                if (this->unk_164 != 0) {
                    temp_s0[2].words.w0 = 0xDE000000;
                    temp_s0[2].words.w1 = (u32) this->unk_164;
                    temp_s2->polyOpa.p = &temp_s0[3];
                } else {
                    temp_s2->polyOpa.p = &temp_s0[2];
                }
            } else {
                temp_s0[1].words.w0 = 0xDE000000;
                temp_s0[1].words.w1 = (u32) this->unk_164;
                temp_s2->polyOpa.p = &temp_s0[2];
            }
        }
        if (this->unk_168 != 0) {
            temp_s1 = func_8012C2B4(temp_s2->polyXlu.p);
            temp_s1->words.w0 = 0xDA380003;
            temp_s1->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_s1[1].words.w0 = 0xDE000000;
            temp_s1[1].words.w1 = this->unk_168;
            temp_s2->polyXlu.p = &temp_s1[2];
        }
    }
    SysMatrix_StatePop();
    if ((this->unk_160 == 8) && ((this->unk_172 & 0x20) != 0)) {
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600CE00));
        spA4 = globalCtx->state.gfxCtx;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
        Matrix_RotateY(this->actor.shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->actor.shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(this->actor.shape.rot.z, 1);
        temp_s1_2 = func_8012C2B4(spA4->polyXlu.p);
        sp88 = 0;
        phi_fp = 0;
        phi_s1 = temp_s1_2;
        do {
            phi_s5 = this + sp88;
            phi_s3 = 0;
loop_18:
            phi_s1_2 = phi_s1;
            phi_s1_3 = phi_s1;
            if ((s32) phi_s5->unk_1D8 > 0) {
                temp_s2_2 = this + (phi_s3 << 5) + (phi_fp * 4);
                if (temp_s2_2->unk_1F8 > 0.1f) {
                    phi_s1->words.w0 = 0xDB060024;
                    phi_s1->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, (u32) (s32) (((f32) (globalCtx->gameplayFrames & 0x7F) * -9.0f) / temp_s2_2->unk_1F8), 0x20, 0x20, 1, 0U, 0U, 0x20, 0x20);
                    phi_s1_2 = phi_s1 + 8;
                }
                SysMatrix_StatePush();
                SysMatrix_InsertXRotation_s((s16) ((s32) (phi_fp << 0x1D) >> 0x10), 1);
                SysMatrix_InsertTranslation(1785.0f, 0.0f, 270.0f, 1);
                if (phi_s3 != 0) {
                    SysMatrix_InsertZRotation_s(-0x8000, 1);
                }
                temp_f0 = temp_s2_2->unk_1F8;
                Matrix_Scale(temp_f0 * this->actor.scale.x, temp_f0 * this->actor.scale.y, temp_f0 * this->actor.scale.z, 1);
                phi_s1_2->words.w0 = 0xDA380003;
                temp_s1_3 = phi_s1_2 + 8;
                phi_s1_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_s1_3->unk_0 = 0xFB000000;
                temp_s1_4 = temp_s1_3 + 8;
                temp_s1_3->unk_4 = (s32) ((phi_s5->unk_1D8 & 0xFF) | ~0xFF);
                temp_s1_4->unk_0 = 0xDE000000;
                temp_s1_4->unk_4 = &D_0600CD10;
                SysMatrix_StatePop();
                phi_s1_3 = temp_s1_4 + 8;
            }
            temp_s3 = phi_s3 + 1;
            phi_s5 += 0x10;
            phi_s3 = temp_s3;
            phi_s1 = phi_s1_3;
            phi_s1 = phi_s1_3;
            if (temp_s3 != 2) {
                goto loop_18;
            }
            temp_fp = phi_fp + 1;
            sp88 += 2;
            phi_fp = temp_fp;
        } while (temp_fp != 8);
        spA4->polyXlu.p = phi_s1_3;
    }
    if ((this->unk_160 == 9) || (this->unk_160 == 8)) {
        if ((s32) this->unk_1CC >= 0) {
            func_8019FB0C(&this->unk_1A8, 0x2168, this->unk_1D4, 0x20);
            return;
        }
        func_8019FB0C(&this->unk_1A8, 0x2169, this->unk_1D4, 0x20);
        /* Duplicate return node #32. Try simplifying control flow for better match */
    }
}
