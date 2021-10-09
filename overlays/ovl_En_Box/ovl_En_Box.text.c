typedef struct EnBox {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ SkelAnime unk_15C;                  /* inferred */
    /* 0x1A0 */ s32 unk_1A0;                        /* inferred */
    /* 0x1A4 */ char pad_1A4[0x8];                  /* maybe part of unk_1A0[3]? */
    /* 0x1AC */ ? (*unk_1AC)(EnBox *, GlobalContext *); /* inferred */
    /* 0x1B0 */ Vec3s unk_1B0;                      /* inferred */
    /* 0x1B6 */ char pad_1B6[0x18];                 /* maybe part of unk_1B0[5]? */
    /* 0x1CE */ Vec3s unk_1CE;                      /* inferred */
    /* 0x1D4 */ char pad_1D4[0x18];                 /* maybe part of unk_1CE[5]? */
    /* 0x1EC */ s16 unk_1EC;                        /* inferred */
    /* 0x1EE */ u8 unk_1EE;                         /* inferred */
    /* 0x1EF */ u8 unk_1EF;                         /* inferred */
    /* 0x1F0 */ u8 unk_1F0;                         /* inferred */
    /* 0x1F1 */ u8 unk_1F1;                         /* inferred */
    /* 0x1F2 */ u8 unk_1F2;                         /* inferred */
    /* 0x1F3 */ s8 unk_1F3;                         /* inferred */
    /* 0x1F4 */ EnBox unk_1F4;                      /* inferred */
    /* 0x200 */ void (*actionFunc)(EnBox *, GlobalContext *); /* overlap */
    /* 0x218 */ s16 unk_218;                        /* overlap; inferred */
    /* 0x21A */ s16 unk_21A;                        /* overlap; inferred */
    /* 0x21C */ s32 unk_21C;                        /* overlap; inferred */
    /* 0x220 */ s32 unk_220;                        /* overlap; inferred */
} EnBox;                                            /* size = 0x224 */

struct _mips2c_stack_EnBox_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBox_Draw {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Gfx *sp34;                           /* inferred */
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x8];                    /* maybe part of sp38[3]? */
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x18];
};                                                  /* size = 0x60 */

struct _mips2c_stack_EnBox_Init {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ CollisionHeader *sp48;               /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBox_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80867BD0 {};              /* size 0x0 */

struct _mips2c_stack_func_80867BDC {};              /* size 0x0 */

struct _mips2c_stack_func_80867C14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80867C8C {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x50];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_80867FBC {};              /* size 0x0 */

struct _mips2c_stack_func_80867FE4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8086800C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ CollisionPoly *sp38;                 /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80868630 {
    /* 0x00 */ char pad_0[0x22];
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80868734 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0xC];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0xC];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_808687E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80868944 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808689E8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80868A6C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80868AFC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80868B74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80868CC8 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad_5C[0x14];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ AnimationHeaderCommon *sp78;         /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80869020 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ SkelAnime *sp44;                     /* inferred */
    /* 0x48 */ char pad_48[0x6];                    /* maybe part of sp44[2]? */
    /* 0x4E */ u16 sp4E;                            /* inferred */
    /* 0x50 */ ? sp50;                              /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ char pad_5C[0x4];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808692E0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0xC];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80869600 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x10];                   /* maybe part of sp18[5]? */
    /* 0x2C */ s32 *sp2C;                           /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80869850 {};              /* size 0x0 */

struct _mips2c_stack_func_80869874 {};              /* size 0x0 */

struct _mips2c_stack_func_808698B4 {};              /* size 0x0 */

? func_800B8B84(EnBox *, GlobalContext *, s32);     /* extern */
s32 func_800BE63C(EnBox *, s32 **);                 /* extern */
s32 func_800C9EBC(GlobalContext *, CollisionContext *, f32, f32, f32 *, ? *, ? *); /* extern */
s32 func_800F2178(s16);                             /* extern */
void func_80867BD0(EnBox *arg0, void (*arg1)(EnBox *, GlobalContext *)); /* static */
void func_80867BDC(EnBox *arg0, GlobalContext *arg1, PosRot *arg2); /* static */
void func_80867C14(void *arg0);                     /* static */
void func_80867C8C(void *arg0, GraphicsContext **arg1); /* static */
void func_80867FBC(void *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80867FE4(EnBox *arg0);                    /* static */
void func_8086800C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80868630(EnBox *arg0, ? *arg1, ? *arg2, ? *arg3); /* static */
void func_80868734(EnBox *arg0, GlobalContext *arg1); /* static */
void func_808687E8(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80868944(EnBox *arg0, GlobalContext *arg1); /* static */
void func_808689E8(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80868A6C(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80868AFC(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80868B74(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80868CC8(EnBox *arg0, GlobalContext *arg1); /* static */
void func_80869020(EnBox *arg0, GlobalContext *arg1); /* static */
void func_808692E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80869600(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, EnBox *arg4, s32 **arg5); /* static */
void *func_80869850(GraphicsContext *arg0);         /* static */
void *func_80869874(GraphicsContext *arg0);         /* static */
void *func_808698B4(GraphicsContext *arg0);         /* static */
extern AnimationHeaderCommon D_0600043C;
extern ? D_060006F0;
extern ? D_06000A50;
extern ? D_06000DB0;
extern ? D_060012E8;
extern ? D_06001850;
extern ? D_06001D58;
extern SkeletonHeader D_060066A0;
extern CollisionHeader D_060080E8;
static InitChainEntry D_80869B50;                   /* unable to generate initializer */
static ? D_80869B54;                                /* unable to generate initializer */
static ? D_80869B68;                                /* unable to generate initializer */
static ? D_80869B7C;                                /* unable to generate initializer */
static ? D_80869B88;                                /* unable to generate initializer */

void func_80867BD0(EnBox *arg0, void (*arg1)(EnBox *, GlobalContext *)) {
    arg0->unk_1AC = arg1;
}

void func_80867BDC(EnBox *arg0, GlobalContext *arg1, PosRot *arg2) {
    arg0->unk_0 = (s32) arg2->pos.x;
    arg0->actor.flags = arg2->pos.y;
    arg0->actor.home.pos.y = 0.0f;
    arg0->actor.home.pos.z = 0.0f;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->actor.home.pos.x = arg2->pos.z;
}

void func_80867C14(void *arg0) {
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    temp_v1 = arg0->unk_18 + 1;
    arg0->unk_18 = temp_v1;
    phi_v1 = temp_v1;
    if (temp_v1 >= 0x56) {
        arg0->unk_18 = 0x55;
        phi_v1 = 0x55;
    }
    temp_v0 = phi_v1 - 0x1C;
    if (phi_v1 != 0x55) {
        arg0->unk_1C = temp_v0;
        if (temp_v0 < 0) {
            arg0->unk_1C = 0;
        }
    } else {
        temp_t0 = arg0->unk_1C + 1;
        arg0->unk_1C = temp_t0;
        if (temp_t0 >= 0x56) {
            func_80867FE4();
        }
    }
    arg0->unk_14 = (s32) (arg0->unk_14 + 1);
}

void func_80867C8C(void *arg0, GraphicsContext **arg1) {
    f32 sp74;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f30;
    s16 temp_lo;
    s16 temp_s0;
    s32 temp_s4;
    s32 temp_s6;
    s32 phi_s4;
    f32 phi_f24;

    temp_s6 = arg0->unk_18 - arg0->unk_1C;
    if (temp_s6 > 0) {
        temp_s2 = *arg1;
        SysMatrix_StatePush();
        phi_s4 = 0;
        if (temp_s6 > 0) {
            sp74 = (f32) temp_s6;
            do {
                temp_f2 = (f32) arg0->unk_1C;
                temp_f0 = (f32) phi_s4 / sp74;
                temp_s0 = (s16) (s32) ((((f32) arg0->unk_18 - temp_f2) * temp_f0) + temp_f2);
                temp_f20 = (f32) temp_s0;
                temp_f24 = 1.0f - (temp_f20 * 0.011764706f);
                temp_lo = temp_s0 * 0x9A6;
                temp_f26 = Rand_ZeroOne() * 0.03f * temp_f0 * temp_f24;
                temp_f30 = (Math_SinS(temp_lo) * 45.0f) + arg0->unk_0;
                if (arg0->unk_20 != 0) {
                    phi_f24 = (arg0->unk_4 - (0.03f * temp_f20)) - (0.01f * temp_f20 * temp_f20);
                } else {
                    phi_f24 = arg0->unk_4 + (0.03f * temp_f20) + (0.01f * temp_f20 * temp_f20);
                }
                temp_f28 = (Math_CosS(temp_lo) * 45.0f) + arg0->unk_8;
                temp_f20_2 = Rand_Centered();
                temp_f22 = Rand_Centered();
                SysMatrix_InsertTranslation((2.0f * temp_f20_2) + temp_f30, (2.0f * temp_f22) + phi_f24, (2.0f * Rand_Centered()) + temp_f28, 0);
                Matrix_Scale(temp_f26, temp_f26, temp_f26, 1);
                temp_v0 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = -1;
                temp_v0->words.w0 = 0xFA000080;
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w0 = 0xFB000000;
                temp_v0_2->words.w1 = 0xFF9600FF;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s4 = phi_s4 + 1;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) D_04023210;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_s4 = temp_s4;
            } while (temp_s4 != temp_s6);
        }
        SysMatrix_StatePop();
        temp_v0_5 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = (u32) &D_801D1DE0;
    }
}

void func_80867FBC(void *arg0, GlobalContext *arg1, s32 arg2) {
    arg0->unk_C = func_80867C14;
    arg0->unk_10 = func_80867C8C;
    arg0->unk_20 = arg2;
}

void func_80867FE4(EnBox *arg0) {
    arg0->actor.home.pos.y = 0.0f;
    arg0->actor.home.pos.z = 0.0f;
    func_80867BDC(arg0);
}

void func_8086800C(Actor *arg0, GlobalContext *arg1) {
    CollisionPoly *sp38;
    s32 sp34;
    f32 sp2C;
    ? sp28;
    Actor *temp_a3;
    f32 temp_f0;

    temp_a3 = arg0;
    if ((temp_a3->unk_1EE & 0x80) == 0) {
        sp28.unk_0 = (s32) temp_a3->world.pos.x;
        sp28.unk_4 = (f32) temp_a3->world.pos.y;
        sp28.unk_8 = (s32) temp_a3->world.pos.z;
        arg0 = temp_a3;
        sp2C += 1.0f;
        temp_f0 = func_800C411C(arg1 + 0x830, &sp38, &sp34, temp_a3, (Vec3f *) &sp28);
        if (temp_f0 != -32000.0f) {
            arg0->world.pos.y = temp_f0;
            arg0->floorHeight = temp_f0;
        }
    }
}

void EnBox_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp48;
    f32 sp44;
    f32 sp40;
    DynaCollisionContext *temp_s0;
    SkelAnime *temp_s0_2;
    s16 temp_t4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s8 temp_s0_3;
    u8 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    s16 phi_s0;
    EnBox *this = (EnBox *) thisx;

    sp48 = NULL;
    sp44 = 0.0f;
    sp40 = (f32) SkelAnime_GetFrameCount(&D_0600043C);
    Actor_ProcessInitChain((Actor *) this, &D_80869B50);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_060080E8, &sp48);
    temp_s0 = &globalCtx->colCtx.dyna;
    this->unk_144 = BgCheck_AddActorMesh(globalCtx, temp_s0, (DynaPolyActor *) this, sp48);
    this->unk_1EE = 0;
    this->unk_1F1 = ((s32) this->actor.params >> 0xC) & 0xF;
    this->unk_1F2 = 0;
    this->unk_1F3 = 0;
    this->actor.gravity = -5.5f;
    this->actor.minVelocityY = -50.0f;
    this->unk_1F0 = (u8) this->actor.world.rot.z;
    this->actor.floorHeight = this->actor.world.pos.y;
    if (this->actor.world.rot.x == 0xB4) {
        this->unk_1EE = 0x80;
        this->actor.world.rot.x = 0x7FFF;
        this->unk_220 = 0;
    } else {
        func_800C636C(globalCtx, temp_s0, this->unk_144);
        temp_t4 = this->actor.world.rot.x;
        this->actor.world.rot.x = 0;
        this->unk_220 = temp_t4 & 0x7F;
    }
    this->unk_21C = ((s32) this->actor.params >> 5) & 0x7F;
    this->actor.shape.rot.x = this->actor.world.rot.x;
    if ((Actor_GetChestFlag(globalCtx, this->actor.params & 0x1F) != 0) || (this->unk_21C == 0)) {
        this->unk_1EF = 0xFF;
        this->unk_1F2 = 0x64;
        func_80867BD0(this, func_80869020);
        this->unk_1EE |= 0x10;
        sp44 = sp40;
    } else {
        temp_v0 = this->unk_1F1;
        if (((temp_v0 == 3) || (temp_v0 == 8)) && (Flags_GetSwitch(globalCtx, (s32) this->unk_1F0) == 0)) {
            func_800C62BC(globalCtx, temp_s0, this->unk_144);
            if (Rand_ZeroOne() < 0.5f) {
                this->unk_1EE |= 4;
            }
            this->unk_1A0 = -0xC;
            func_80867BD0(this, func_80868944);
            this->unk_1EF = 0;
            this->unk_1EE |= 1;
            this->actor.flags |= 0x10;
        } else {
            temp_v0_2 = this->unk_1F1;
            if (((temp_v0_2 == 1) || (temp_v0_2 == 7)) && (Actor_GetRoomCleared(globalCtx, (u32) this->actor.room) == 0)) {
                func_80867BD0(this, func_80868A6C);
                func_800C62BC(globalCtx, temp_s0, this->unk_144);
                if ((this->unk_1EE & 0x80) != 0) {
                    this->actor.world.pos.y = this->actor.home.pos.y + 50.0f;
                } else {
                    this->actor.world.pos.y = this->actor.home.pos.y - 50.0f;
                }
                this->unk_1EF = 0;
                this->unk_1EE |= 1;
                this->actor.flags |= 0x10;
            } else {
                temp_v0_3 = this->unk_1F1;
                if ((temp_v0_3 == 9) || (temp_v0_3 == 0xA)) {

                } else if (((temp_v0_3 == 0xB) || (temp_v0_3 == 0xC)) && (Flags_GetSwitch(globalCtx, (s32) this->unk_1F0) == 0)) {
                    func_80867BD0(this, func_808689E8);
                    func_800C62BC(globalCtx, temp_s0, this->unk_144);
                    if ((this->unk_1EE & 0x80) != 0) {
                        this->actor.world.pos.y = this->actor.home.pos.y + 50.0f;
                    } else {
                        this->actor.world.pos.y = this->actor.home.pos.y - 50.0f;
                    }
                    this->unk_1EF = 0;
                    this->unk_1EE |= 1;
                    this->actor.flags |= 0x10;
                } else {
                    temp_v0_4 = this->unk_1F1;
                    if ((temp_v0_4 == 4) || (temp_v0_4 == 6)) {
                        this->actor.flags |= 0x80;
                    }
                    func_80867BD0(this, func_80868CC8);
                    temp_t8 = this->unk_1EE | 1;
                    this->unk_1EE = temp_t8;
                    this->unk_1EE = temp_t8 | 0x10;
                }
            }
        }
    }
    if ((this->unk_21C == 0x11) && (Actor_GetChestFlag(globalCtx, this->actor.params & 0x1F) == 0)) {
        this->actor.flags |= 0x10;
    }
    this->actor.shape.rot.z = 0;
    temp_v0_5 = this->actor.shape.rot.z;
    this->actor.shape.rot.y += 0x8000;
    this->actor.world.rot.z = temp_v0_5;
    this->actor.home.rot.z = temp_v0_5;
    temp_s0_2 = &this->unk_15C;
    SkelAnime_Init(globalCtx, temp_s0_2, &D_060066A0, (AnimationHeader *) &D_0600043C, &this->unk_1B0, &this->unk_1CE, 5);
    SkelAnime_ChangeAnim(temp_s0_2, (AnimationHeader *) &D_0600043C, 1.5f, sp44, sp40, (u8) 2, 0.0f);
    if (func_800BE63C(this) != 0) {
        Actor_SetScale((Actor *) this, 0.0075f);
        Actor_SetHeight((Actor *) this, 20.0f);
    } else {
        Actor_SetScale((Actor *) this, 0.01f);
        Actor_SetHeight((Actor *) this, 40.0f);
    }
    temp_s0_3 = this->actor.cutscene;
    this->unk_218 = -1;
    this->unk_21A = -1;
    phi_s0 = (s16) temp_s0_3;
    if (temp_s0_3 != -1) {
        do {
            if (func_800F2178(phi_s0) == 1) {
                this->unk_21A = phi_s0;
            } else {
                this->unk_218 = phi_s0;
            }
            temp_v0_6 = ActorCutscene_GetAdditionalCutscene(phi_s0);
            phi_s0 = temp_v0_6;
        } while (temp_v0_6 != -1);
    }
    func_80867BDC(&this->unk_1F4, globalCtx, &this->actor.home);
}

void EnBox_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBox *this = (EnBox *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80868630(EnBox *arg0, ? *arg1, ? *arg2, ? *arg3) {
    f32 sp24;
    s16 sp22;
    s32 temp_v0;

    sp24 = Rand_ZeroOne() * 25.0f;
    temp_v0 = (s32) (Rand_ZeroOne() * 65536.0f);
    sp22 = (s16) temp_v0;
    arg1->unk_0 = (f32) arg0->actor.world.pos.x;
    arg1->unk_4 = (s32) arg0->actor.world.pos.y;
    arg1->unk_8 = (f32) arg0->actor.world.pos.z;
    arg1->unk_0 = (f32) (arg1->unk_0 + (Math_SinS((s16) temp_v0) * sp24));
    arg1->unk_8 = (f32) (arg1->unk_8 + (Math_CosS(sp22) * sp24));
    arg2->unk_4 = 1.0f;
    arg2->unk_0 = Math_SinS(sp22);
    arg2->unk_8 = Math_CosS(sp22);
    arg3->unk_0 = 0.0f;
    arg3->unk_4 = 0.0f;
    arg3->unk_8 = 0.0f;
}

void func_80868734(EnBox *arg0, GlobalContext *arg1) {
    ? sp60;
    ? sp54;
    ? sp48;
    s32 temp_s0;
    s32 phi_s0;

    phi_s0 = 0;
    do {
        func_80868630(arg0, &sp60, &sp54, &sp48);
        func_800B1280(arg1, (Vec3f *) &sp60, (Vec3f *) &sp54, (Vec3f *) &sp48, (s16) 0x64, (s16) 0x1E, (s16) 0xF);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x14);
}

void func_808687E8(EnBox *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s32 temp_v0;
    u8 temp_t2;
    u8 temp_t8;

    temp_t8 = arg0->unk_1EE & ~1;
    arg0->unk_1EF = 0xFF;
    arg0->unk_1EE = temp_t8;
    if ((arg0->actor.bgCheckFlags & 1) != 0) {
        temp_t2 = temp_t8 | 2;
        temp_v0 = temp_t2 & 0xFF;
        arg0->unk_1EE = temp_t2;
        if ((temp_v0 & 4) != 0) {
            arg0->unk_1EE = temp_v0 & 0xFFFB;
        } else {
            arg0->unk_1EE = temp_v0 | 4;
        }
        if (arg0->unk_1F1 == 3) {
            arg0->actor.velocity.y = -arg0->actor.velocity.y * 0.55f;
        } else {
            arg0->actor.velocity.y = -arg0->actor.velocity.y * 0.65f;
        }
        if (arg0->actor.velocity.y < 5.5f) {
            arg0->actor.shape.rot.z = 0;
            arg0->actor.world.pos.y = arg0->actor.floorHeight;
            func_80867BD0(arg0, func_80868CC8);
        }
        func_8019F1C0(&arg0->actor.projectedPos, 0x2856U);
        func_80868734(arg0, arg1);
    }
    temp_f0 = arg0->actor.world.pos.y - arg0->actor.floorHeight;
    if ((arg0->unk_1EE & 4) != 0) {
        arg0->actor.shape.rot.z = (s16) (s32) (temp_f0 * 50.0f);
        return;
    }
    arg0->actor.shape.rot.z = (s16) (s32) (-temp_f0 * 50.0f);
}

void func_80868944(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1;
    s32 temp_v0;

    temp_a1 = arg1;
    arg1 = arg1;
    func_800B8C50(arg0, temp_a1);
    temp_v0 = arg0->unk_1A0;
    if (temp_v0 >= 0) {
        arg1 = arg1;
        func_80867BD0((EnBox *) arg0, func_808687E8);
        func_800C6314(arg1, &arg1->colCtx.dyna, arg0->unk_144);
        return;
    }
    if (temp_v0 >= -0xB) {
        arg0->unk_1A0 = (s32) (temp_v0 + 1);
        return;
    }
    if (Flags_GetSwitch(arg1, (s32) arg0->unk_1F0) != 0) {
        arg0->unk_1A0 = (s32) (arg0->unk_1A0 + 1);
    }
}

void func_808689E8(Actor *arg0, GlobalContext *arg1) {
    func_800B8C50(arg0, arg1);
    if (Flags_GetSwitch(arg1, (s32) arg0->unk_1F0) != 0) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk_218) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_218, arg0);
            func_80867BD0((EnBox *) arg0, func_80868AFC);
            arg0->unk_1A0 = -0x1E;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk_218);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80868A6C(Actor *arg0, GlobalContext *arg1) {
    func_800B8C50(arg0, arg1);
    if (Actor_GetRoomClearedTemp(arg1, (u32) arg0->room) != 0) {
        if (ActorCutscene_GetCanPlayNext(arg0->unk_218) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk_218, arg0);
            Actor_SetRoomCleared(arg1, (u32) arg0->room);
            func_80867BD0((EnBox *) arg0, func_80868AFC);
            arg0->unk_1A0 = -0x1E;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk_218);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_80868AFC(Actor *arg0, GlobalContext *arg1) {
    if ((func_800F22C4(arg0->unk_218, arg0) != 0) || (arg0->unk_1A0 != 0)) {
        func_80867BD0((EnBox *) arg0, func_80868B74);
        arg0->unk_1A0 = 0;
        func_80867FBC(arg0 + 0x1F4, arg1, (arg0->unk_1EE & 0x80) != 0);
        func_8019F1C0(&arg0->projectedPos, 0x287BU);
    }
}

void func_80868B74(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;

    temp_a2 = arg0->unk_144;
    arg0 = arg0;
    func_800C6314(arg1, arg1 + 0x880, temp_a2);
    temp_v0 = arg0->unk_1A0;
    if (temp_v0 < 0) {
        arg0->unk_1A0 = (s32) (temp_v0 + 1);
        return;
    }
    if (temp_v0 < 0x28) {
        if ((arg0->unk_1EE & 0x80) != 0) {
            arg0->world.pos.y -= 1.25f;
        } else {
            arg0->world.pos.y += 1.25f;
        }
        arg0->unk_1A0 = (s32) (arg0->unk_1A0 + 1);
        if ((arg0->unk_218 != -1) && (arg0 = arg0, (ActorCutscene_GetCurrentIndex() == arg0->unk_218))) {
            temp_v0_2 = arg0->unk_1A0;
            if (temp_v0_2 == 2) {
                func_800B724C(arg1, arg0, 4U);
                return;
            }
            if (temp_v0_2 == 0x16) {
                func_800B724C(arg1, arg0, 1U);
                return;
            }
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    temp_a0 = arg0;
    if (temp_v0 < 0x3C) {
        arg0->unk_1EF = (u8) (arg0->unk_1EF + 0xC);
        arg0->unk_1A0 = (s32) (temp_v0 + 1);
        arg0->world.pos.y = arg0->home.pos.y;
        return;
    }
    arg0 = arg0;
    func_80867BD0((EnBox *) temp_a0, func_80868CC8);
    ActorCutscene_Stop((s16) arg0->cutscene);
}

void func_80868CC8(EnBox *arg0, GlobalContext *arg1) {
    AnimationHeaderCommon *sp78;
    f32 sp70;
    ? sp5C;
    f32 sp4C;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    AnimationHeaderCommon *phi_a1;
    f32 phi_f0;
    s32 phi_v0;
    s32 phi_v0_2;

    arg0->unk_1EF = 0xFF;
    arg0->unk_1EE |= 1;
    if ((arg0->unk_1EC != 0) && (((s32) arg0->unk_21A < 0) || (ActorCutscene_GetCurrentIndex() == arg0->unk_21A) || (ActorCutscene_GetCurrentIndex() == -1))) {
        if ((s32) arg0->unk_1EC < 0) {
            phi_a1 = &D_0600043C;
            phi_f0 = 1.5f;
        } else {
            sp5C.unk_0 = (s32) D_80869B54.unk_0;
            sp5C.unk_4 = (s32) D_80869B54.unk_4;
            sp5C.unk_8 = (s32) D_80869B54.unk_8;
            sp5C.unk_C = (s32) D_80869B54.unk_C;
            sp5C.unk_10 = (s32) D_80869B54.unk_10;
            temp_v0 = gSaveContext.playerForm * 4;
            phi_a1 = *(&D_80869B68 + temp_v0);
            phi_f0 = *(&sp5C + temp_v0);
        }
        sp78 = phi_a1;
        sp70 = phi_f0;
        SkelAnime_ChangeAnim(arg0 + 0x15C, (AnimationHeader *) phi_a1, phi_f0, 0.0f, (f32) SkelAnime_GetFrameCount(phi_a1), (u8) 2, 0.0f);
        func_80867BD0(arg0, func_80869020);
        if ((s32) arg0->unk_1EC > 0) {
            Actor_SpawnAsChild(arg1 + 0x1CA0, (Actor *) arg0, arg1, 0x5C, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.shape.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.shape.rot.z, -1);
            func_801A3098(0x92BU);
        }
        temp_v0_2 = arg0->unk_21C;
        if (temp_v0_2 == 0x11) {
            arg0->unk_1EE |= 0x20;
            return;
        }
        if ((temp_v0_2 == 0xC) || (temp_v0_2 == 0x5A)) {
            Actor_SetCollectibleFlag(arg1, arg0->unk_220);
        }
        Actor_SetChestFlag(arg1, arg0->actor.params & 0x1F);
        return;
    }
    Actor_CalcOffsetOrientedToDrawRotation((Actor *) arg0, (Vec3f *) &sp4C, (Vec3f *) &arg1->actorCtx.actorList[2].first->world);
    if ((sp54 > -50.0f) && (sp54 < 0.0f) && (fabsf(sp50) < 10.0f) && (fabsf(sp4C) < 20.0f) && (Actor_IsLinkFacingActor((Actor *) arg0, 0x3000, arg1) != 0)) {
        temp_v0_3 = arg0->unk_21C;
        if (((temp_v0_3 == 0xC) || (temp_v0_3 == 0x5A)) && (Actor_GetCollectibleFlag(arg1, arg0->unk_220) != 0)) {
            arg0->unk_21C = 0xA;
        }
        temp_v0_4 = arg0->unk_21C;
        phi_v0 = temp_v0_4;
        if ((temp_v0_4 == 0x7C) && (gSaveContext.inventory.items[gItemSlots[0x44]] == 0x44)) {
            arg0->unk_21C = 0xA;
            phi_v0 = 0xA;
        }
        phi_v0_2 = phi_v0;
        if ((phi_v0 == 0x7D) && (gSaveContext.inventory.items[gItemSlots[0x49]] == 0x49)) {
            arg0->unk_21C = 0xA;
            phi_v0_2 = 0xA;
        }
        func_800B8B84(arg0, arg1, -phi_v0_2);
    }
    if (Actor_GetChestFlag(arg1, arg0->actor.params & 0x1F) != 0) {
        func_80867BD0(arg0, func_80869020);
    }
}

void func_80869020(Actor *arg0, GlobalContext *arg1) {
    f32 sp58;
    ? sp54;
    ? sp50;
    u16 sp4E;
    SkelAnime *sp44;
    SkelAnime *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_3;
    u8 temp_v0_2;
    f32 phi_f0;
    f32 phi_f0_2;
    u16 phi_a2;
    f32 phi_f2;

    temp_a0 = arg0 + 0x15C;
    arg0->flags &= -0x81;
    sp44 = temp_a0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        temp_v0 = arg0->unk_1EC;
        if ((s32) temp_v0 > 0) {
            if ((s32) temp_v0 < 0x78) {
                arg0->unk_1EC = (s16) (temp_v0 + 1);
            } else {
                Math_StepToF(arg0 + 0x1A8, 0.0f, 0.05f);
            }
        } else if ((s32) temp_v0 >= -0x77) {
            arg0->unk_1EC = (s16) (temp_v0 - 1);
        } else {
            Math_StepToF(arg0 + 0x1A8, 0.0f, 0.05f);
        }
        temp_v0_2 = arg0->unk_1EE;
        if ((temp_v0_2 & 0x20) != 0) {
            arg0->unk_1EE = (u8) (temp_v0_2 & 0xFFDF);
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 0x1B0, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) (s32) arg0->world.rot.x, (s16) (s32) arg0->world.rot.y, (s16) (s32) arg0->world.rot.z, ((arg0->params & 0x1F) << 9) | 6);
            return;
        }
        if ((temp_v0_2 & 0x40) != 0) {
            arg0->unk_1EE = (u8) (temp_v0_2 & 0xFFBF);
            return;
        }
        /* Duplicate return node #32. Try simplifying control flow for better match */
        return;
    }
    phi_a2 = 0U;
    if (gSaveContext.playerForm == 3) {
        phi_f0 = 14.0f;
    } else {
        phi_f0 = 30.0f;
    }
    sp4E = 0;
    if (func_801378B8(sp44, phi_f0) != 0) {
        phi_a2 = 0x281FU;
    } else {
        if (gSaveContext.playerForm == 3) {
            phi_f0_2 = 15.0f;
        } else {
            phi_f0_2 = 90.0f;
        }
        sp4E = 0;
        if (func_801378B8(sp44, phi_f0_2) != 0) {
            phi_a2 = 0x2820U;
        }
    }
    if (phi_a2 != 0) {
        func_8019F1C0(&arg0->projectedPos, phi_a2 & 0xFFFF);
    }
    temp_v0_3 = arg0->unk_17C->unk_16;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk_1A8 = (f32) ((f32) (0x7D00 - temp_v0_3) * 0.00006f);
        temp_f0 = arg0->unk_1A8;
        phi_f2 = 0.0f;
        if (temp_f0 < 0.0f) {
            goto block_28;
        }
        phi_f2 = 1.0f;
        if (temp_f0 > 1.0f) {
block_28:
            arg0->unk_1A8 = phi_f2;
        }
    }
    if ((func_800C9EBC(arg1, &arg1->colCtx, arg0->world.pos.x, arg0->world.pos.z, &sp58, &sp54, &sp50) != 0) && (arg0->floorHeight < sp58)) {
        EffectSsBubble_Spawn(arg1, (Vec3f *) &arg0->world, 5.0f, 2.0f, 20.0f, 0.3f);
    }
}

void func_808692E0(Actor *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    ? sp34;
    f32 sp30;
    f32 sp28;
    f32 temp_f0;
    f32 temp_f2;
    f32 temp_f2_2;

    sp40.unk_0 = D_80869B7C.unk_0;
    sp40.unk_4 = (s32) D_80869B7C.unk_4;
    sp40.unk_8 = (s32) D_80869B7C.unk_8;
    sp34.unk_0 = (s32) D_80869B88.unk_0;
    sp34.unk_4 = (s32) D_80869B88.unk_4;
    sp34.unk_8 = (s32) D_80869B88.unk_8;
    arg0->unk_1F2 = (u8) (arg0->unk_1F2 + 1);
    func_800B9010(arg0, 0x31F1U);
    if (Rand_ZeroOne() < 0.3f) {
        sp30 = (2.0f * Rand_ZeroOne()) - 1.0f;
        sp4C.unk_0 = arg0->world.pos.x;
        sp4C.unk_4 = (f32) arg0->world.pos.y;
        sp4C.unk_8 = (f32) arg0->world.pos.z;
        temp_f2 = sp30 * 20.0f;
        sp4C += temp_f2 * Math_SinS((s16) (arg0->world.rot.y + 0x4000));
        sp28 = temp_f2;
        sp54 += temp_f2 * Math_CosS((s16) (arg0->world.rot.y + 0x4000));
        sp30 = (2.0f * Rand_ZeroOne()) - 1.0f;
        temp_f0 = Math_SinS(arg0->world.rot.y);
        temp_f2_2 = sp30 * 1.6f;
        sp44 = 1.8f;
        sp40 = temp_f0 * temp_f2_2;
        sp28 = temp_f2_2;
        sp48 = Math_CosS(arg0->world.rot.y) * temp_f2_2;
        EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp4C, (Vec3f *) &sp40, (Vec3f *) &sp34, (s16) 0x96);
    }
}

void EnBox_Update(Actor *thisx, GlobalContext *globalCtx) {
    u8 temp_t2;
    u8 temp_v0;
    u8 temp_v0_2;
    void (*temp_v0_3)(EnBox *, GlobalContext *);
    u8 phi_v0;
    EnBox *this = (EnBox *) thisx;

    temp_v0 = this->unk_1EE;
    if ((temp_v0 & 0x10) != 0) {
        this->unk_1EE = temp_v0 & 0xFFEF;
        func_8086800C((Actor *) this, globalCtx);
    }
    if ((this->unk_21C == 0x11) && (Actor_GetChestFlag(globalCtx, this->actor.params & 0x1F) == 0)) {
        globalCtx->actorCtx.unk5 |= 8;
    }
    this->unk_1AC(this, globalCtx);
    temp_v0_2 = this->unk_1EE;
    temp_t2 = temp_v0_2 | 1;
    phi_v0 = temp_v0_2;
    if ((temp_v0_2 & 0x80) != 0) {
        this->unk_1EE = temp_t2;
        phi_v0 = temp_t2 & 0xFF;
    }
    if ((phi_v0 & 1) == 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 0x1CU);
    }
    Actor_SetHeight((Actor *) this, 40.0f);
    if ((this->unk_21C == 0x76) && (func_80869020 == this->unk_1AC) && (this->unk_15C.animCurrentFrame > 45.0f) && ((s32) this->unk_1F2 < 0x64)) {
        func_808692E0((Actor *) this, globalCtx);
    }
    temp_v0_3 = this->actionFunc;
    if (temp_v0_3 != 0) {
        temp_v0_3(&this->unk_1F4, globalCtx);
    }
}

void func_80869600(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, EnBox *arg4, s32 **arg5) {
    s32 *sp2C;
    s32 *sp18;
    s32 *temp_v0;
    s32 *temp_v0_10;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    s32 *temp_v0_4;
    s32 *temp_v0_5;
    s32 *temp_v0_6;
    s32 *temp_v0_7;
    s32 *temp_v0_8;
    s32 *temp_v0_9;

    if (arg1 == 1) {
        temp_v0 = *arg5;
        *arg5 = temp_v0 + 8;
        *temp_v0 = 0xDA380003;
        sp2C = temp_v0;
        sp2C->unk_4 = Matrix_NewMtx(*arg0);
        if (arg4->unk_1F1 == 2) {
            temp_v0_2 = *arg5;
            *arg5 = temp_v0_2 + 8;
            temp_v0_2->unk_4 = &D_06000DB0;
            temp_v0_2->unk_0 = 0xDE000000;
            return;
        }
        if (func_800BE63C(arg4, arg5) != 0) {
            if ((bitwise s32) arg4->unk_1F4.actor.world.pos.y == 0x3C) {
                temp_v0_3 = *arg5;
                *arg5 = temp_v0_3 + 8;
                temp_v0_3->unk_4 = &D_06000A50;
                temp_v0_3->unk_0 = 0xDE000000;
                return;
            }
            temp_v0_4 = *arg5;
            *arg5 = temp_v0_4 + 8;
            temp_v0_4->unk_4 = &D_060006F0;
            temp_v0_4->unk_0 = 0xDE000000;
            return;
        }
        temp_v0_5 = *arg5;
        *arg5 = temp_v0_5 + 8;
        temp_v0_5->unk_0 = 0xDE000000;
        temp_v0_5->unk_4 = &D_06000A50;
        return;
    }
    if (arg1 == 3) {
        temp_v0_6 = *arg5;
        *arg5 = temp_v0_6 + 8;
        *temp_v0_6 = 0xDA380003;
        sp18 = temp_v0_6;
        sp18->unk_4 = Matrix_NewMtx(*arg0);
        if (arg4->unk_1F1 == 2) {
            temp_v0_7 = *arg5;
            *arg5 = temp_v0_7 + 8;
            temp_v0_7->unk_4 = &D_06001D58;
            temp_v0_7->unk_0 = 0xDE000000;
            return;
        }
        if (func_800BE63C(arg4, arg5) != 0) {
            if ((bitwise s32) arg4->unk_1F4.actor.world.pos.y == 0x3C) {
                temp_v0_8 = *arg5;
                *arg5 = temp_v0_8 + 8;
                temp_v0_8->unk_4 = &D_06001850;
                temp_v0_8->unk_0 = 0xDE000000;
                return;
            }
            temp_v0_9 = *arg5;
            *arg5 = temp_v0_9 + 8;
            temp_v0_9->unk_4 = &D_060012E8;
            temp_v0_9->unk_0 = 0xDE000000;
            return;
        }
        temp_v0_10 = *arg5;
        *arg5 = temp_v0_10 + 8;
        temp_v0_10->unk_0 = 0xDE000000;
        temp_v0_10->unk_4 = &D_06001850;
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void *func_80869850(GraphicsContext *arg0) {
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1->words.w1 = 0;
    return temp_v1;
}

void *func_80869874(GraphicsContext *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w1 = 0xC81049F8;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE200001C;
    temp_v0->unk_0 = 0xDF000000;
    temp_v0->unk_4 = 0;
    return temp_v1;
}

void *func_808698B4(GraphicsContext *arg0) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w1 = 0xC8112078;
    temp_v0 = temp_v1 + 8;
    temp_v1->words.w0 = 0xE200001C;
    temp_v0->unk_0 = 0xDF000000;
    temp_v0->unk_4 = 0;
    return temp_v1;
}

void EnBox_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp44;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_6;
    u8 temp_v1;
    EnBox *this = (EnBox *) thisx;

    temp_v0 = this->unk_1F4.actor.home.pos.z;
    temp_s1 = globalCtx->state.gfxCtx;
    if ((bitwise s32) temp_v0 != 0) {
        (bitwise ? (*)(EnBox *, GlobalContext *)) temp_v0(&this->unk_1F4, globalCtx);
    }
    temp_v1 = this->unk_1EF;
    if (((temp_v1 == 0xFF) && (temp_v0_2 = this->unk_1F1, (temp_v0_2 != 4)) && (temp_v0_2 != 6)) || (((this->actor.flags & 0x80) != 0x80) && ((temp_v0_3 = this->unk_1F1, (temp_v0_3 == 4)) || (temp_v0_3 == 6)))) {
        temp_v0_9 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_9 + 8;
        temp_v0_9->words.w1 = 0;
        temp_v0_9->words.w0 = 0xE7000000;
        temp_v0_10 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = 0xFF;
        temp_v0_10->words.w0 = 0xFB000000;
        temp_v0_11 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_11 + 8;
        temp_v0_11->words.w0 = 0xDB060020;
        sp44 = temp_v0_11;
        sp44->words.w1 = func_80869850(globalCtx->state.gfxCtx);
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_s1->polyOpa.p = SkelAnime_Draw2(globalCtx, this->unk_15C.skeleton, this->unk_15C.limbDrawTbl, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80869600, (Actor *) this, temp_s1->polyOpa.p);
        return;
    }
    if (temp_v1 != 0) {
        temp_v0_4 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE7000000;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xFB000000;
        temp_v0_5->words.w1 = (u32) this->unk_1EF;
        temp_v0_6 = this->unk_1F1;
        if ((temp_v0_6 == 4) || (temp_v0_6 == 6)) {
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDB060020;
            sp38 = temp_v0_8;
            sp38->words.w1 = func_808698B4(globalCtx->state.gfxCtx);
        } else {
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDB060020;
            sp34 = temp_v0_7;
            sp34->words.w1 = func_80869874(globalCtx->state.gfxCtx);
        }
        temp_s1->polyXlu.p = SkelAnime_Draw2(globalCtx, this->unk_15C.skeleton, this->unk_15C.limbDrawTbl, NULL, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80869600, (Actor *) this, temp_s1->polyXlu.p);
    }
}
