typedef struct EnThiefbird {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnThiefbird *, GlobalContext *);
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ char pad_18D[0x1];
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ char pad_196[0xC];                  /* maybe part of unk_194[7]? */
    /* 0x1A2 */ Vec3s unk_1A2;                      /* inferred */
    /* 0x1A8 */ char pad_1A8[0x60];                 /* maybe part of unk_1A2[17]? */
    /* 0x208 */ Vec3s unk_208;                      /* inferred */
    /* 0x20E */ char pad_20E[0x62];                 /* maybe part of unk_208[17]? */
    /* 0x270 */ ColliderJntSph unk_270;             /* inferred */
    /* 0x290 */ ColliderJntSphElement unk_290;      /* inferred */
    /* 0x2D0 */ char pad_2D0[0x80];                 /* maybe part of unk_290[3]? */
    /* 0x350 */ Vec3f unk_350;                      /* inferred */
    /* 0x35C */ char pad_35C[0x60];                 /* maybe part of unk_350[9]? */
    /* 0x3BC */ Vec3f unk_3BC;                      /* inferred */
    /* 0x3C8 */ char pad_3C8[0xC];
    /* 0x3D4 */ f32 unk_3D4;                        /* inferred */
    /* 0x3D8 */ f32 unk_3D8;                        /* inferred */
    /* 0x3DC */ f32 unk_3DC;                        /* inferred */
    /* 0x3E0 */ f32 unk_3E0;                        /* inferred */
    /* 0x3E4 */ char pad_3E4[0x4];
    /* 0x3E8 */ s32 unk_3E8;                        /* inferred */
    /* 0x3EC */ Actor *unk_3EC;                     /* inferred */
    /* 0x3F0 */ char pad_3F0[0x5A0];                /* maybe part of unk_3EC[361]? */
} EnThiefbird;                                      /* size = 0x990 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnThiefbird_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnThiefbird_Draw {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnThiefbird_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnThiefbird_Update {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ColliderJntSph *sp28;                /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C10984 {
    /* 0x00 */ char pad_0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80C10B0C {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C10DE8 {
    /* 0x0 */ char pad_0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_80C10E98 {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ s32 sp50;                            /* inferred */
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ char pad_60[0x4];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ char pad_70[0x4];
    /* 0x74 */ u32 sp74;                            /* inferred */
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0xC];                    /* maybe part of sp78[4]? */
    /* 0x88 */ s32 sp88;                            /* inferred */
    /* 0x8C */ char pad_8C[0x8];                    /* maybe part of sp88[3]? */
    /* 0x94 */ ? sp94;                              /* inferred */
    /* 0x94 */ char pad_94[0x4];
    /* 0x98 */ s32 sp98;                            /* inferred */
    /* 0x9C */ char pad_9C[0x4];
    /* 0xA0 */ s32 spA0;                            /* inferred */
    /* 0xA4 */ char pad_A4[0x4];
    /* 0xA8 */ s32 spA8;                            /* inferred */
    /* 0xAC */ s32 spAC;                            /* inferred */
    /* 0xB0 */ s32 spB0;                            /* inferred */
    /* 0xB4 */ char pad_B4[0xC];
};                                                  /* size = 0xC0 */

struct _mips2c_stack_func_80C11338 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C11454 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C114C0 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C11538 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C11590 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x8];                    /* maybe part of sp2C[3]? */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C118E4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1193C {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ SkelAnime *sp28;                     /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C11C60 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C11D14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C11DC0 {};              /* size 0x0 */

struct _mips2c_stack_func_80C11DF0 {
    /* 0x00 */ char pad_0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C11F6C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1215C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C12308 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C12378 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1242C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C124B0 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80C126A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C126D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C12744 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C127F4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Vec3f *sp2C;                         /* inferred */
    /* 0x30 */ char pad_30[0x14];                   /* maybe part of sp2C[6]? */
    /* 0x44 */ Actor *sp44;                         /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80C12B1C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C12D00 {
    /* 0x00 */ char pad_0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_80C130EC {};              /* size 0x0 */

struct _mips2c_stack_func_80C1315C {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0xC];                    /* maybe part of sp1C[4]? */
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
    /* 0x30 */ char pad_30[0xC];                    /* maybe part of sp2C[4]? */
    /* 0x3C */ GraphicsContext *sp3C;               /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80C13354 {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ GraphicsContext *sp5C;               /* inferred */
    /* 0x60 */ char pad_60[0x10];
};                                                  /* size = 0x70 */

? func_801149A0(s16, s16, s16, s32);                /* extern */
void func_80C10984(Actor *arg0, s32 arg1);          /* static */
s32 func_80C10B0C(EnThiefbird *arg0, GlobalContext *arg1); /* static */
void func_80C10DE8(u32 *arg0, s32 arg1, s32 arg2, s32); /* static */
s32 func_80C10E98(GlobalContext *arg0);             /* static */
void func_80C11338(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C11454(Actor *arg0);                    /* static */
void func_80C114C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C11538(EnThiefbird *arg0, u16);         /* static */
void func_80C118E4(EnThiefbird *arg0);              /* static */
void func_80C11C60(Actor *arg0);                    /* static */
void func_80C11DC0(EnThiefbird *arg0);              /* static */
void func_80C11F6C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C12308(EnThiefbird *arg0);              /* static */
void func_80C1242C(EnThiefbird *arg0);              /* static */
void func_80C126A8(EnThiefbird *arg0);              /* static */
void func_80C12744(EnThiefbird *arg0);              /* static */
void func_80C12B1C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80C12D00(EnThiefbird *arg0);              /* static */
s32 func_80C130EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80C1315C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80C13354(EnThiefbird *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_06000088;
extern AnimationHeader D_06000278;
extern AnimationHeader D_06000604;
extern ? D_06003060;
extern ? D_060030D8;
extern ? D_060033B0;
extern ? D_06003D58;
extern FlexSkeletonHeader D_060061A0;
extern AnimationHeader D_060063C4;
static ColliderJntSphElementInit D_80C135C0[3] = {
    {
        {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {1, {{0, 0, 0}, 0x18}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
        {9, {{0x384, 0xFDA8, 0}, 0x14}, 0x64},
    },
    {
        {0, {0xF7CFFFFF, 0, 4}, {0xF7CFFFFF, 0, 0}, 9, 1, 1},
        {0xC, {{0x4B0, 0, 0}, 9}, 0x64},
    },
};
static ColliderJntSphInit D_80C1362C = {{3, 0x11, 9, 0x39, 0x10, 0}, 3, &D_80C135C0};
static CollisionCheckInfoInit D_80C1363C = {0x18, 0xF, 0x1E, 0x1E};
static DamageTable D_80C13644 = {
    {
        0x10,
        1,
        1,
        1,
        1,
        1,
        0,
        1,
        1,
        1,
        1,
        0x22,
        0x32,
        0x42,
        1,
        1,
        1,
        2,
        0x10,
        0x50,
        0,
        0,
        1,
        1,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static s16 D_80C13664[6] = {5, 0xB, 0, 1, 2, 0x14};
static InitChainEntry D_80C13670[3];                /* unable to generate initializer */
static ? D_80C1367C;                                /* unable to generate initializer */
static Vec3f D_80C1368C = {0.0f, -0.15f, 0.0f};
static ? D_80C13698;                                /* unable to generate initializer */
static Vec3f D_80C13920;
static s32 D_80C1392C;

void EnThiefbird_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    s32 phi_v1;
    s32 phi_v1_2;
    EnThiefbird *this = (EnThiefbird *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80C13670);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_060061A0, &D_06000604, &this->unk_1A2, &this->unk_208, 0x11);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_270, (Actor *) this, &D_80C1362C, &this->unk_290);
    phi_v1 = 0;
    phi_v1_2 = 0;
    if (0 != 0x80) {
        do {
            temp_v0 = this->unk_270.elements + phi_v1;
            temp_v1 = phi_v1 + 0x40;
            temp_v0_2 = temp_v0 + 0x28;
            temp_v0_2->unk_E = (s16) temp_v0->unk_2E;
            temp_v0_2->unk_8 = (s16) (s32) this->actor.world.pos.x;
            temp_v0_2->unk_A = (s16) (s32) this->actor.world.pos.y;
            temp_v0_2->unk_C = (s16) (s32) this->actor.world.pos.z;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
        } while (temp_v1 != 0x80);
    }
    temp_v0_3 = this->unk_270.elements + phi_v1_2;
    temp_v0_3->unk_36 = (s16) temp_v0_3->unk_2E;
    temp_v0_4 = temp_v0_3 + 0x28;
    temp_v0_4->unk_8 = (s16) (s32) this->actor.world.pos.x;
    temp_v0_4->unk_A = (s16) (s32) this->actor.world.pos.y;
    temp_v0_4->unk_C = (s16) (s32) this->actor.world.pos.z;
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_80C13644, &D_80C1363C);
    ActorShape_Init(&this->actor.shape, 1500.0f, func_800B3FC0, 35.0f);
    if (this->actor.params == 1) {
        D_80C1392C = 1;
        Math_Vec3f_Copy(&D_80C13920, (Vec3f *) &this->actor.world);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (((u32) (gSaveContext.roomInf[126][5] & 0xFF000000) >> 0x18) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_80C11538(this);
}

void EnThiefbird_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnThiefbird *this = (EnThiefbird *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_270);
}

void func_80C10984(Actor *arg0, s32 arg1) {
    s32 temp_s2;
    s32 temp_s3;
    void *phi_s0;
    s32 phi_s3;
    s32 phi_s2;

    phi_s0 = arg0 + 0x3F0;
    phi_s3 = arg1;
    phi_s2 = 0;
loop_1:
    if ((phi_s0->unk_22 != 0) || (phi_s0->unk_22 = (s16) ((s32) Rand_ZeroFloat(20.0f) + 0x28), phi_s0->unk_0 = (f32) (randPlusMinusPoint5Scaled(30.0f) + arg0->focus.pos.x), phi_s0->unk_4 = (f32) (randPlusMinusPoint5Scaled(30.0f) + arg0->focus.pos.y), phi_s0->unk_8 = (f32) (randPlusMinusPoint5Scaled(30.0f) + arg0->focus.pos.z), phi_s0->unk_C = randPlusMinusPoint5Scaled(5.0f), phi_s0->unk_10 = (f32) (Rand_ZeroOne() + 2.0f), phi_s0->unk_14 = randPlusMinusPoint5Scaled(5.0f), phi_s0->unk_1C = (s16) (s32) Rand_ZeroFloat(1000.0f), phi_s0->unk_18 = (f32) ((Rand_ZeroFloat(20.0f) + 40.0f) * 0.0001f), temp_s3 = phi_s3 - 1, phi_s0->unk_1E = (s16) (Rand_Next() >> 0x10), phi_s3 = temp_s3, (temp_s3 != 0))) {
        temp_s2 = phi_s2 + 1;
        phi_s0 += 0x24;
        phi_s2 = temp_s2;
        if (temp_s2 != 0x28) {
            goto loop_1;
        }
    }
}

s32 func_80C10B0C(EnThiefbird *arg0, GlobalContext *arg1) {
    s32 sp2C;
    s32 sp28;
    s32 sp24;
    s32 sp20;
    s16 sp1E;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v0_2;
    u8 temp_v0;
    u8 temp_v1;
    void *phi_v0;
    s32 phi_a2;
    s32 phi_t0;
    s32 phi_a3;
    s32 phi_a2_2;
    s32 phi_t0_2;
    s32 phi_a3_2;
    s32 phi_a3_3;
    SaveContext *phi_t1;
    u8 phi_v1;
    s32 phi_t0_3;
    SaveContext *phi_t1_2;
    s32 phi_t0_4;

    sp1E = 0;
    phi_v0 = &gSaveContext + 0x12;
    phi_a2 = 0x12;
    phi_t0 = 0;
    phi_a3 = 0;
    phi_t0_2 = 0;
    phi_a3_2 = 0;
loop_1:
    temp_v1 = phi_v0->unk_70;
    phi_a2_2 = phi_a2;
    if (((s32) temp_v1 >= 0x12) && ((s32) temp_v1 < 0x16)) {
        sp1E = (s16) temp_v1;
        phi_t0 = 1;
    } else {
        temp_a2 = phi_a2 + 1;
        phi_v0 += 1;
        phi_a2 = temp_a2;
        phi_a2_2 = temp_a2;
        if (temp_a2 != 0x18) {
            goto loop_1;
        }
    }
    phi_t0_2 = phi_t0;
    if (gSaveContext.playerForm == 4) {
        temp_a3 = (s32) (gSaveContext.equips.equipment & *gEquipMasks) >> *gEquipShifts;
        phi_a3 = temp_a3;
        if (gSaveContext.inventory.items[gItemSlots[16]] == 0x10) {
            phi_a3 = temp_a3 + 4;
        }
    }
    phi_a3_2 = phi_a3;
    if ((phi_t0 != 0) && (phi_a3 != 0)) {
        sp24 = phi_a2_2;
        sp28 = phi_a3;
        sp2C = phi_t0;
        phi_t0_2 = phi_t0;
        phi_a3_2 = phi_a3;
        if (Rand_ZeroOne() < 0.6f) {

        }
    }
    phi_a3_3 = phi_a3_2;
    phi_t1 = &gSaveContext;
    if (phi_t0_2 != 0) {
        func_801149A0(sp1E, (s16) phi_a2_2, (s16) phi_a2_2, phi_a3_2);
        arg0->unk_3E8 = &D_060033B0;
        if (func_80152498(arg1 + 0x4908) == 0) {
            func_801518B0(arg1, 0xF4U, NULL);
        }
        phi_t1_2 = &gSaveContext;
        phi_t0_4 = 0x12;
        goto block_31;
    }
    if (phi_a3_2 != 0) {
        if (phi_a3_2 >= 5) {
            sp28 = phi_a3_2;
            phi_t1 = &gSaveContext;
            if (Rand_ZeroOne() < 0.5f) {
                phi_a3_3 = phi_a3_2 - 4;
            } else {
                phi_a3_3 = 4;
            }
        }
        phi_t0_3 = phi_a3_3 + 0x4C;
        if (phi_a3_3 == 4) {
            func_801149A0(0x10, 0x10);
            arg0->unk_3E8 = &D_06003D58;
            phi_t0_3 = 0x10;
        } else {
            temp_v0 = phi_t1->playerForm;
            if (temp_v0 == 4) {
                phi_v1 = 0U;
            } else {
                phi_v1 = temp_v0;
            }
            (phi_t1 + (phi_v1 * 4))->unk_4C = 0xFF;
            phi_t1->equips.equipment = (0 << *gEquipShifts) | (phi_t1->equips.equipment & *gEquipNegMasks);
            arg0->unk_3E8 = *(&D_80C1367C + (phi_a3_3 * 4));
        }
        sp20 = phi_t0_3;
        phi_t1_2 = &gSaveContext;
        phi_t0_4 = phi_t0_3;
        if (func_80152498(&arg1->msgCtx) == 0) {
            sp20 = phi_t0_3;
            func_801518B0(arg1, 0xF5U, NULL);
            phi_t1_2 = &gSaveContext;
            phi_t0_4 = phi_t0_3;
        }
block_31:
        temp_v0_2 = phi_t1_2->roomInf[126][5];
        if (((u32) (temp_v0_2 & 0xFF000000) >> 0x18) == 0) {
            phi_t1_2->roomInf[126][5] = (temp_v0_2 & 0xFFFFFF) | (phi_t0_4 << 0x18);
        } else {
            phi_t1_2->roomInf[126][5] = (temp_v0_2 & 0xFF00FFFF) | ((phi_t0_4 & 0xFF) << 0x10);
        }
        return 1;
    }
    return 0;
}

void func_80C10DE8(u32 *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a2;
    s32 *temp_a2_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 phi_v0;
    s32 phi_a0;
    s32 phi_v0_2;
    s32 *phi_a2;
    s32 phi_v1;
    s32 phi_v0_3;

    phi_v0 = 0;
    phi_v1 = 0;
    if (arg1 > 0) {
        do {
            temp_a2 = arg0 + (phi_v0 * 4);
            temp_v1 = phi_v1 + 1;
            phi_a0 = 0;
            phi_v0_2 = phi_v0;
            phi_a2 = temp_a2;
            phi_v1 = temp_v1;
            phi_v0_3 = phi_v0;
            if (*temp_a2 != -1) {
loop_3:
                temp_v0 = (s32) (phi_v0_2 + 5) % 8;
                phi_v0_2 = temp_v0;
                phi_v0_3 = temp_v0;
                if (phi_a0 == 8) {
                    phi_a2 = arg0 + (temp_v0 * 4);
                } else {
                    temp_a2_2 = arg0 + (temp_v0 * 4);
                    phi_a0 += 1;
                    phi_a2 = temp_a2_2;
                    if (*temp_a2_2 != -1) {
                        goto loop_3;
                    }
                }
            }
            *phi_a2 = arg2;
            phi_v0 = (s32) (phi_v0_3 + 5) % 8;
        } while (temp_v1 != arg1);
    }
}

s32 func_80C10E98(GlobalContext *arg0) {
    s32 spB0;
    s32 spAC;
    s32 spA8;
    s32 spA0;
    s32 sp98;
    ? sp94;
    s32 sp88;
    s32 sp78;
    u32 sp74;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    s32 sp5C;
    s32 sp58;
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    EnItem00 *temp_s1_5;
    EnItem00 *temp_v0_4;
    f32 temp_f18;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_lo_3;
    s32 temp_lo_4;
    s32 temp_lo_5;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    u32 *temp_s0_2;
    u32 temp_s0;
    u32 temp_v0_3;
    u8 temp_t3;
    u8 temp_t9_2;
    void *temp_s4;
    u32 *phi_s0;
    s32 phi_s0_2;
    s32 phi_s1;
    s32 phi_s0_3;
    s32 phi_v1;
    s32 phi_a3;
    s32 phi_s2;
    s16 phi_s3;
    u32 *phi_s0_4;
    s32 phi_s0_5;
    s32 phi_s0_6;

    temp_s4 = arg0->actorCtx.actorList[2].first;
    phi_s0 = &sp74;
    phi_s3 = 0;
    do {
        temp_s0 = phi_s0 + 4;
        temp_s0->unk_-4 = -1;
        phi_s0 = (u32 *) temp_s0;
    } while (temp_s0 < (u32) &sp94);
    phi_s1 = 0;
    if ((s32) gSaveContext.inventory.ammo[gItemSlots[6]] >= 5) {
        spB0 = 1;
        sp78 = 0xB;
    } else {
        spB0 = 0;
    }
    if ((s32) gSaveContext.inventory.ammo[gItemSlots[1]] >= 0xA) {
        spAC = 1;
        sp88 = 5;
    } else {
        spAC = 0;
    }
    temp_t9 = ((s32) gSaveContext.rupees / 4) * 3;
    temp_lo = temp_t9 / 0x32;
    temp_v1 = (-spB0 - spAC) + 8;
    sp98 = temp_t9;
    phi_s0_2 = temp_lo;
    phi_v1 = temp_v1;
    if (temp_v1 < temp_lo) {
        phi_s0_2 = temp_v1;
    }
    phi_s0_3 = phi_s0_2;
    phi_s0_6 = phi_s0_2;
    if (phi_s0_2 > 0) {
        sp5C = temp_v1;
        do {
            temp_s1 = phi_s1 + 1;
            phi_s1 = temp_s1;
            phi_s0_5 = phi_s0_6;
            if (Rand_ZeroOne() < 0.5f) {
                phi_s0_5 = phi_s0_6 - 1;
            }
            phi_s0_3 = phi_s0_5;
            phi_s0_6 = phi_s0_5;
        } while (temp_s1 < phi_s0_2);
        phi_v1 = sp5C;
    }
    temp_v0 = phi_s0_3 * 0x32;
    temp_s1_2 = phi_v1 - phi_s0_3;
    sp98 -= temp_v0;
    sp58 = temp_v0;
    func_80C10DE8(&sp74, phi_s0_3, 0x14);
    temp_lo_2 = sp98 / 0x14;
    phi_a3 = temp_lo_2;
    if (temp_s1_2 < temp_lo_2) {
        phi_a3 = temp_s1_2;
    }
    temp_lo_3 = phi_a3 * 0x14;
    temp_s1_3 = temp_s1_2 - phi_a3;
    spA0 = phi_a3;
    sp98 -= temp_lo_3;
    sp54 = temp_lo_3;
    func_80C10DE8(&sp74, phi_a3, 2, phi_a3);
    temp_lo_4 = sp98 / 5;
    phi_s2 = temp_lo_4;
    if (temp_s1_3 < temp_lo_4) {
        phi_s2 = temp_s1_3;
    }
    temp_lo_5 = phi_s2 * 5;
    temp_s1_4 = temp_s1_3 - phi_s2;
    spA0 = phi_a3;
    sp98 -= temp_lo_5;
    sp50 = temp_lo_5;
    func_80C10DE8(&sp74, phi_s2, 1, phi_a3);
    if (temp_s1_4 < sp98) {
        spA8 = temp_s1_4;
    } else {
        spA8 = sp98;
    }
    spA0 = phi_a3;
    func_80C10DE8(&sp74, spA8, 0, phi_a3);
    temp_v0_2 = spB0 + spAC + phi_s0_3 + phi_a3 + phi_s2 + spA8;
    if (temp_v0_2 == 0) {
        return 0;
    }
    sp4C = temp_v0_2;
    phi_s0_4 = &sp74;
    do {
        sp64 = (Math_SinS(phi_s3) * 40.0f) + temp_s4->world.pos.x;
        sp68 = temp_s4->world.pos.y + 20.0f;
        sp6C = (Math_CosS(phi_s3) * 40.0f) + temp_s4->world.pos.z;
        temp_v0_3 = *phi_s0_4;
        if (temp_v0_3 != -1) {
            temp_v0_4 = Item_DropCollectible(arg0, (Vec3f *) &sp64, temp_v0_3);
            temp_s1_5 = temp_v0_4;
            if (temp_v0_4 != 0) {
                temp_s1_5->actor.velocity.y = Rand_ZeroFloat(3.0f) + 6.0f;
                temp_f18 = Rand_ZeroFloat(3.0f) + 3.0f;
                temp_s1_5->actor.world.rot.y = phi_s3;
                temp_s1_5->actor.speedXZ = temp_f18;
            }
            phi_s3 = (s16) (phi_s3 + (s16) (0x10000 / sp4C));
        }
        temp_s0_2 = phi_s0_4 + 4;
        phi_s0_4 = temp_s0_2;
    } while (temp_s0_2 != &sp94);
    temp_t3 = gItemSlots[6];
    gSaveContext.inventory.ammo[temp_t3] -= spB0 * 5;
    temp_t9_2 = gItemSlots[1];
    gSaveContext.inventory.ammo[temp_t9_2] -= spAC * 0xA;
    func_801159EC((s16) ((s32) (sp58 + sp54 + sp50 + spA8) * -1));
    return 1;
}

void func_80C11338(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_s3;
    Actor *temp_v0;
    f32 temp_f0;
    s16 *temp_v0_2;
    Actor *phi_s1;
    s16 *phi_v0;
    s16 *phi_v0_2;
    f32 phi_f20;
    Actor *phi_s1_2;

    temp_s3 = arg1->actorCtx.actorList[2].first;
    arg0->unk_3EC = NULL;
    phi_s1 = NULL;
    phi_f20 = 5000.0f;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s1, 8, 0xE);
        phi_s1_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((s32) temp_v0->unk_152 > 0) {
                phi_v0 = D_80C13664;
                if (Actor_XZDistanceBetweenActors(temp_s3, temp_v0) > 10.0f) {
loop_5:
                    phi_v0_2 = phi_v0;
                    if (temp_v0->params != *phi_v0) {
                        temp_v0_2 = phi_v0 + 2;
                        phi_v0 = temp_v0_2;
                        phi_v0_2 = temp_v0_2;
                        if (temp_v0_2 != D_80C13670) {
                            goto loop_5;
                        }
                    }
                    if (phi_v0_2 != D_80C13670) {
                        temp_f0 = Actor_DistanceBetweenActors(arg0, temp_v0);
                        if (temp_f0 < phi_f20) {
                            arg0->unk_3EC = temp_v0;
                            phi_f20 = temp_f0;
                        }
                    }
                }
            }
            phi_s1_2 = temp_v0->next;
        }
        phi_s1 = phi_s1_2;
    } while (phi_s1_2 != 0);
}

void func_80C11454(Actor *arg0) {
    arg0->unk_18C = 0xA;
    arg0->flags &= -0x201;
    arg0[3].home.pos.y = 0.5f;
    arg0[3].home.pos.z = 0.75f;
    arg0[3].home.pos.x = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_80C114C0(Actor *arg0, GlobalContext *arg1) {
    if (arg0->unk_18C == 0xA) {
        arg0->unk_18C = 0U;
        arg0[3].home.pos.x = 0.0f;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x350), 0xB, 2, 0.2f, 0.2f);
        arg0->flags |= 0x200;
    }
}

void func_80C11538(EnThiefbird *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000604, -4.0f);
    arg0->unk_18E = 0x3C;
    arg0->unk_270.base.acFlags |= 1;
    arg0->actionFunc = func_80C11590;
}

void func_80C11590(EnThiefbird *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    s32 sp38;
    SkelAnime *sp2C;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_v1;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    sp3C = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    sp38 = func_801378B8(temp_a0, 0.0f);
    temp_a1 = &this->actor.home;
    this->actor.speedXZ = (Rand_ZeroOne() * 1.5f) + 3.0f;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_192 = this->actor.wallYaw;
    } else {
        sp2C = (SkelAnime *) temp_a1;
        if (Actor_XZDistanceToPoint((Actor *) this, (Vec3f *) temp_a1) > 300.0f) {
            this->unk_192 = Actor_YawToPoint((Actor *) this, (Vec3f *) temp_a1);
        }
    }
    if ((Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_192, 5, 0x300, (s16) 0x10) == 0) && (sp38 != 0) && (Rand_ZeroOne() < 0.1f)) {
        if ((s32) (s16) (Actor_YawToPoint((Actor *) this, (Vec3f *) &this->actor.home) - this->actor.shape.rot.y) > 0) {
            this->unk_192 += Rand_S16Offset(0x1000, 0x1000);
        } else {
            this->unk_192 -= Rand_S16Offset(0x1000, 0x1000);
        }
        Audio_PlayActorSound2((Actor *) this, 0x3A97U);
    }
    if ((this->actor.yDistToWater > -40.0f) || ((this->actor.bgCheckFlags & 1) != 0)) {
        this->unk_190 = -0x1000;
    } else {
        temp_f2 = this->actor.home.pos.y;
        temp_f0 = this->actor.world.pos.y;
        if (temp_f0 < (temp_f2 - 75.0f)) {
            this->unk_190 = (s16) -Rand_S16Offset(0x800, 0x800);
        } else if ((temp_f2 + 75.0f) < temp_f0) {
            this->unk_190 = Rand_S16Offset(0x800, 0x800);
        }
    }
    if ((Math_SmoothStepToS((s16 *) &this->actor.shape, this->unk_190, 0xA, 0x100, (s16) 8) == 0) && (sp38 != 0) && (Rand_ZeroOne() < 0.1f)) {
        if (this->actor.home.pos.y < this->actor.world.pos.y) {
            this->unk_190 -= Rand_S16Offset(0x400, 0x400);
        } else {
            this->unk_190 += Rand_S16Offset(0x400, 0x400);
        }
        temp_v0 = this->unk_190;
        if ((s32) temp_v0 < -0x1000) {
            this->unk_190 = -0x1000;
        } else {
            phi_v1 = temp_v0;
            if ((s32) temp_v0 >= 0x1001) {
                phi_v1 = 0x1000;
            }
            this->unk_190 = phi_v1;
        }
    }
    temp_v0_2 = this->unk_18E;
    if (temp_v0_2 != 0) {
        this->unk_18E = temp_v0_2 - 1;
    }
    if ((this->unk_18E == 0) && (this->actor.xzDistToPlayer < 300.0f) && ((sp3C->unk_A6C << 8) >= 0) && (Player_GetMask(globalCtx) != 0x10) && (this->actor.yDistToWater < -40.0f)) {
        func_80C118E4(this);
    }
}

void func_80C118E4(EnThiefbird *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_060063C4, -10.0f);
    arg0->unk_18E = 0x12C;
    arg0->actionFunc = func_80C1193C;
    arg0->actor.speedXZ = 5.0f;
}

void func_80C1193C(EnThiefbird *this, GlobalContext *globalCtx) {
    Actor *sp34;
    SkelAnime *sp28;
    SkelAnime *temp_a0;
    s16 temp_a1;
    s16 temp_v0;
    s16 temp_v0_3;
    s32 temp_v0_2;
    u32 temp_v0_5;
    u8 temp_v0_4;
    s16 phi_a1;
    s32 phi_a1_2;
    s16 phi_v0;

    temp_a0 = &this->unk_144;
    sp28 = temp_a0;
    sp34 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if (func_801378B8(temp_a0, 1.0f) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3897U);
    }
    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    temp_v0_2 = Actor_PitchBetweenActors((Actor *) this, sp34);
    if (temp_v0_2 < -0x2800) {
        phi_a1 = -0x2800;
    } else {
        phi_v0 = (s16) temp_v0_2;
        if ((s32) (s16) temp_v0_2 >= 0x2801) {
            phi_v0 = 0x2800;
        }
        phi_a1 = phi_v0;
    }
    Math_SmoothStepToS((s16 *) &this->actor.shape, phi_a1, 4, 0x800, (s16) 0x80);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.wallYaw, 6, 0x1000, (s16) 0x100);
    } else if ((Actor_IsActorFacingLink((Actor *) this, 0x3C00) != 0) || (this->actor.xzDistToPlayer > 120.0f)) {
        temp_v0_3 = this->actor.yawTowardsPlayer;
        temp_a1 = (temp_v0_3 - sp34->shape.rot.y) + 0x8000;
        if ((s32) temp_a1 >= 0x4001) {
            phi_a1_2 = (temp_v0_3 + 0x3000) << 0x10;
        } else {
            phi_a1_2 = temp_v0_3 << 0x10;
            if ((s32) temp_a1 < -0x4000) {
                phi_a1_2 = (temp_v0_3 - 0x3000) << 0x10;
            }
        }
        Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (phi_a1_2 >> 0x10), 4, 0x1000, (s16) 0x100);
    }
    if ((this->unk_18E == 0) || ((sp34->unk_A6C << 8) < 0) || (Player_GetMask(globalCtx) == 0x10) || ((this->unk_270.base.atFlags & 2) != 0) || ((this->actor.bgCheckFlags & 1) != 0) || (this->actor.yDistToWater > -40.0f)) {
        temp_v0_4 = this->unk_270.base.atFlags;
        if ((temp_v0_4 & 2) != 0) {
            this->unk_270.base.atFlags = temp_v0_4 & 0xFFFD;
            Audio_PlayActorSound2((Actor *) this, 0x3A97U);
            if ((this->unk_270.base.atFlags & 4) == 0) {
                if ((D_80C1392C != 0) && (((u32) (gSaveContext.inventory.upgrades & *gUpgradeMasks) >> *gUpgradeShifts) != 0) && ((temp_v0_5 = gSaveContext.roomInf[126][5], (((u32) (temp_v0_5 & 0xFF000000) >> 0x18) == 0)) || (((u32) (temp_v0_5 & 0xFF0000) >> 0x10) == 0)) && (Rand_ZeroOne() < 0.5f) && (func_80C10B0C(this, globalCtx) != 0)) {
                    func_80C1242C(this);
                    return;
                }
                if (func_80C10E98(globalCtx) != 0) {
                    func_80C11338((Actor *) this, globalCtx);
                    func_80C12744(this);
                    return;
                }
                func_80C11538(this);
                return;
            }
            func_80C12308(this);
            return;
        }
        func_80C11538(this, 0x3A97U);
        /* Duplicate return node #38. Try simplifying control flow for better match */
    }
}

void func_80C11C60(Actor *arg0) {
    arg0->speedXZ = 0.0f;
    arg0->velocity.y = 0.0f;
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_06000088);
    arg0->bgCheckFlags &= 0xFFFE;
    arg0->shape.rot.x = 0;
    arg0[1].focus.rot.y = 0x28;
    arg0->velocity.y = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3A99U);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    arg0->unk_281 = (u8) (arg0->unk_281 & 0xFFFE);
    arg0->flags |= 0x10;
    arg0[1].focus.unk_12 = 0x1C00;
    arg0[1].focus.pos.z = (bitwise f32) func_80C11D14;
}

void func_80C11D14(EnThiefbird *this, GlobalContext *globalCtx) {
    EnThiefbird *temp_a0;
    s16 temp_v0;
    s32 phi_v0;
    EnThiefbird *phi_a3;
    s32 phi_v0_2;

    temp_v0 = this->unk_18E;
    this->actor.colorFilterTimer = 0x28;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    phi_v0 = (s32) this->unk_18E;
    if (this->unk_18C == 0xA) {
        temp_a0 = this;
        if ((s32) this->unk_18E < 0x26) {
            this = this;
            func_80C114C0((Actor *) temp_a0);
            this->actor.speedXZ = 4.0f;
            phi_v0 = (s32) this->unk_18E;
            goto block_5;
        }
    } else {
block_5:
        phi_a3 = this;
        phi_v0_2 = phi_v0;
        if (phi_v0 < 0x14) {
            this = this;
            Math_ScaledStepToS(this + 0x192, 0, 0x200);
            phi_a3 = this;
            phi_v0_2 = (s32) this->unk_18E;
        }
        phi_a3->actor.shape.rot.y += phi_a3->unk_192;
        if (phi_v0_2 == 0) {
            func_80C11DC0(phi_a3);
        }
    }
}

void func_80C11DC0(EnThiefbird *arg0) {
    arg0->actor.flags &= -2;
    arg0->actionFunc = func_80C11DF0;
    arg0->actor.gravity = -0.5f;
}

void func_80C11DF0(EnThiefbird *this, GlobalContext *globalCtx) {
    PosRot *temp_s3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s5;
    Vec3f *phi_s1;
    s32 phi_s0;
    EnThiefbird *phi_s2;
    s32 phi_s5;
    s32 phi_s0_2;

    if (Math_ScaledStepToS((s16 *) &this->actor.shape, -0x8000, 0x800) != 0) {
        Math_ScaledStepToS(&this->unk_192, 0x1C00, 0x200);
        this->actor.shape.rot.y += this->unk_192;
    }
    phi_s1 = &this->unk_350;
    phi_s0 = 0;
    phi_s0_2 = 0;
    if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.floorHeight == -32000.0f)) {
        do {
            func_800B3030(globalCtx, phi_s1, &D_801D15B0, &D_801D15B0, (s16) 0x8C, (s16) 0, 0);
            temp_s0 = phi_s0 + 0xC;
            phi_s1 = &phi_s1[1];
            phi_s0 = temp_s0;
        } while (temp_s0 < 0x84);
        temp_s3 = &this->actor.world;
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_s3, 0xB, 0x3878U);
        Item_DropCollectible(globalCtx, (Vec3f *) temp_s3, 0x13U);
        phi_s2 = this;
        phi_s5 = 0;
        do {
            if ((s32) phi_s2->unk_196 > 0) {
                do {
                    Item_DropCollectible(globalCtx, (Vec3f *) temp_s3, (u32) *(phi_s5 + D_80C13664));
                    temp_s0_2 = phi_s0_2 + 1;
                    phi_s0_2 = temp_s0_2;
                } while (temp_s0_2 < (s32) phi_s2->unk_196);
            }
            temp_s5 = phi_s5 + 2;
            phi_s2 += 2;
            phi_s5 = temp_s5;
        } while (temp_s5 != 0xC);
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80C11F6C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_06000278, -4.0f);
    func_80C10984(arg0, 0xF);
    if (arg0->colChkInfo.damageEffect != 3) {
        arg0->speedXZ = 4.0f;
    } else {
        arg0->speedXZ = 0.0f;
    }
    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 5) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
        Audio_PlayActorSound2(arg0, 0x389EU);
    } else if (temp_v0 == 1) {
        func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x28);
        Audio_PlayActorSound2(arg0, 0x389EU);
    } else {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
        Audio_PlayActorSound2(arg0, 0x3A98U);
    }
    arg0->unk_281 = (u8) (arg0->unk_281 & 0xFFFE);
    if (arg0->unk_3E8 == 0) {
        arg0[1].focus.rot.z = -0x1000;
        arg0[1].focus.unk_12 = arg0->yawTowardsPlayer + 0x8000;
    } else {
        arg0[1].focus.rot.z = Actor_PitchToPoint(arg0, &D_80C13920);
    }
    arg0[1].focus.rot.y = 0x28;
    if (Rand_ZeroOne() < 0.9f) {
        Item_DropCollectible(arg1, (Vec3f *) &arg0->focus, 0U);
    }
    if (Rand_ZeroOne() < 0.6f) {
        Item_DropCollectible(arg1, (Vec3f *) &arg0->focus, 0U);
    }
    if (Rand_ZeroOne() < 0.3f) {
        Item_DropCollectible(arg1, (Vec3f *) &arg0->focus, 0U);
    }
    arg0[1].focus.pos.z = (bitwise f32) func_80C1215C;
}

void func_80C1215C(EnThiefbird *this, GlobalContext *globalCtx) {
    f32 sp2C;
    s16 temp_v1;
    s16 temp_v1_2;

    temp_v1 = this->unk_18E;
    if (temp_v1 != 0) {
        this->unk_18E = temp_v1 - 1;
    }
    if (this->unk_18C == 0xA) {
        if ((s32) this->unk_18E < 0x26) {
            func_80C114C0((Actor *) this);
            this->actor.speedXZ = 4.0f;
            goto block_5;
        }
        /* Duplicate return node #16. Try simplifying control flow for better match */
        return;
    }
block_5:
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_192 = this->actor.wallYaw;
    } else if (this->unk_3E8 == 0) {
        this->unk_192 = this->actor.yawTowardsPlayer + 0x8000;
    } else {
        this->unk_192 = Actor_YawToPoint((Actor *) this, &D_80C13920);
        this->unk_190 = Actor_PitchToPoint((Actor *) this, &D_80C13920);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_192, 6, 0x1000, (s16) 0x100);
    Math_SmoothStepToS((s16 *) &this->actor.shape, this->unk_190, 5, 0x100, (s16) 0x10);
    temp_v1_2 = this->unk_18E;
    sp2C = ((f32) temp_v1_2 * 153.6f) + 2048.0f;
    this->actor.shape.rot.z = (s16) (s32) (Math_SinS((s16) (temp_v1_2 * 0x1999)) * sp2C);
    if (this->unk_18E == 0) {
        if (this->unk_3E8 != 0) {
            func_80C1242C(this);
            return;
        }
        if (this->unk_3EC != 0) {
            func_80C12744(this);
            return;
        }
        func_80C11538(this);
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void func_80C12308(Actor *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000278, -4.0f);
    func_80C10984(arg0, 0xF);
    arg0[1].focus.rot.z = -0x1000;
    arg0[1].focus.unk_12 = arg0->yawTowardsPlayer + 0x8000;
    arg0[1].focus.rot.y = 0x28;
    arg0[1].focus.pos.z = (bitwise f32) func_80C12378;
}

void func_80C12378(EnThiefbird *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_192 = this->actor.wallYaw;
    } else {
        this->unk_192 = this->actor.yawTowardsPlayer + 0x8000;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_192, 6, 0x1000, (s16) 0x100);
    Math_SmoothStepToS((s16 *) &this->actor.shape, this->unk_190, 5, 0x100, (s16) 0x10);
    if (this->unk_18E == 0) {
        func_80C11538(this);
    }
}

void func_80C1242C(EnThiefbird *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000278, 2.0f, 0.0f, 0.0f, (u8) 0, -4.0f);
    arg0->actor.flags |= 0x10;
    arg0->unk_270.base.acFlags |= 1;
    arg0->actionFunc = func_80C124B0;
    arg0->actor.speedXZ = 12.0f;
}

void func_80C124B0(EnThiefbird *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    f32 sp2C;
    Actor *temp_v0;
    s16 temp_v1;
    s32 phi_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    if ((this->actor.bgCheckFlags & 8) != 0) {
        this->unk_192 = this->actor.wallYaw;
    } else {
        this->unk_192 = Actor_YawToPoint((Actor *) this, &D_80C13920);
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->unk_192, 6, 0x1000, (s16) 0x100);
    Math_SmoothStepToS((s16 *) &this->actor.shape, Actor_PitchToPoint((Actor *) this, &D_80C13920), 6, 0x1000, (s16) 0x100);
    temp_v0 = func_800BC270(globalCtx, (Actor *) this, 80.0f, 0x138B0);
    if (temp_v0 != 0) {
        sp3C = temp_v0;
        temp_v1 = sp3C->world.rot.x - Actor_PitchToPoint(temp_v0, (Vec3f *) &this->actor.focus);
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x1800) {
            if ((s32) temp_v1 > 0) {
                this->unk_3E0 = 25.0f;
            } else {
                this->unk_3E0 = -25.0f;
            }
        }
    }
    if (Math_StepToF(&this->unk_3E0, 0.0f, 5.0f) == 0) {
        sp2C = Math_SinS(this->actor.shape.rot.y);
        this->actor.world.pos.x += this->unk_3E0 * Math_SinS(this->actor.shape.rot.x) * sp2C;
        this->actor.world.pos.y += this->unk_3E0 * Math_CosS(this->actor.shape.rot.x);
        sp2C = Math_CosS(this->actor.shape.rot.y);
        this->actor.world.pos.x += this->unk_3E0 * Math_SinS(this->actor.shape.rot.x) * sp2C;
    }
    if (Actor_DistanceToPoint((Actor *) this, &D_80C13920) < 1000.0f) {
        func_80C126A8(this);
    }
}

void func_80C126A8(EnThiefbird *arg0) {
    arg0->actor.flags &= -2;
    arg0->unk_270.base.acFlags &= -2;
    arg0->actionFunc = func_80C126D8;
}

void func_80C126D8(EnThiefbird *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Math_ApproachS((s16 *) &this->actor.shape, 0x3000, 6, 0x1000);
    if (this->actor.yDistToPlayer > 100.0f) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_80C12744(EnThiefbird *arg0) {
    SkelAnime *sp34;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp34 = temp_a0;
    SkelAnime_ChangeAnimTransitionRepeat(temp_a0, &D_06000604, -4.0f);
    SkelAnime_ChangeAnim(temp_a0, &D_06000604, 1.0f, 0.0f, 0.0f, (u8) 1, -4.0f);
    arg0->unk_190 = 0;
    arg0->unk_270.base.acFlags |= 1;
    arg0->actor.flags |= 0x10;
    arg0->actionFunc = func_80C127F4;
    arg0->actor.speedXZ = 4.0f;
    arg0->unk_144.animPlaybackSpeed = 3.0f;
}

void func_80C127F4(EnThiefbird *this, GlobalContext *globalCtx) {
    Actor *sp44;
    Vec3f *sp2C;
    Actor *temp_a1;
    Actor *temp_a1_3;
    Vec3f *temp_a0;
    f32 temp_f0;
    f32 temp_f2;
    s16 *temp_v0_2;
    s16 temp_a1_2;
    s32 temp_cond;
    s32 temp_v0;
    void *temp_v0_3;
    s16 phi_a1;
    s16 *phi_v0;
    s32 phi_v1;
    s16 phi_v0_2;

    sp44 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_a1 = this->unk_3EC;
    if ((temp_a1 != 0) && ((temp_a1->update == 0) || (temp_a1->unk_152 == 0) || (Actor_XZDistanceBetweenActors(sp44, temp_a1) <= 10.0f))) {
        this->unk_3EC = NULL;
    }
    temp_a1_2 = this->unk_190;
    if (temp_a1_2 == -0x3800) {
        if (Math_ScaledStepToS(&this->unk_194, temp_a1_2, 0xE00) != 0) {
            this->unk_190 = 0;
        }
    } else {
        Math_ScaledStepToS(&this->unk_194, 0, 0x200);
    }
    if (this->unk_3EC == 0) {
        func_80C11338((Actor *) this, globalCtx);
    }
    if (this->unk_3EC != 0) {
        if ((this->actor.bgCheckFlags & 8) != 0) {
            Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.wallYaw, 3, 0x2000, (s16) 0x100);
        } else {
            Math_SmoothStepToS(&this->actor.shape.rot.y, Actor_YawBetweenActors((Actor *) this, this->unk_3EC), 3, 0x2000, (s16) 0x100);
        }
        temp_a0 = &this->unk_3BC;
        sp2C = temp_a0;
        temp_v0 = Math_Vec3f_Pitch(temp_a0, (Vec3f *) &this->unk_3EC->world);
        if (temp_v0 < -0x3000) {
            phi_a1 = -0x3000;
        } else {
            phi_v0_2 = (s16) temp_v0;
            if ((s32) (s16) temp_v0 >= 0x3001) {
                phi_v0_2 = 0x3000;
            }
            phi_a1 = phi_v0_2;
        }
        Math_SmoothStepToS((s16 *) &this->actor.shape, phi_a1, 4, 0x800, (s16) 0x80);
        temp_f0 = Actor_DistanceToPoint(this->unk_3EC, sp2C);
        temp_f2 = (0.02f * temp_f0) + 2.0f;
        temp_cond = temp_f2 > 4.0f;
        this->actor.speedXZ = temp_f2;
        if (temp_cond) {
            this->actor.speedXZ = 4.0f;
        } else {
            this->actor.speedXZ = this->actor.speedXZ;
        }
        temp_a1_3 = this->unk_3EC;
        if ((temp_a1_3->speedXZ <= 0.0f) && (phi_v0 = D_80C13664, phi_v1 = 0, (temp_f0 < 40.0f))) {
            temp_a1_3->unk_152 = 0;
loop_26:
            temp_v0_2 = phi_v0 + 2;
            phi_v0 = temp_v0_2;
            if (this->unk_3EC->params == *phi_v0) {
                temp_v0_3 = this + phi_v1;
                temp_v0_3->unk_196 = (s16) (temp_v0_3->unk_196 + 1);
            } else {
                phi_v1 += 2;
                if (temp_v0_2 != D_80C13670) {
                    goto loop_26;
                }
            }
            this->unk_3EC = NULL;
            this->unk_194 = 0x100;
            this->unk_190 = -0x3800;
            return;
        }
        /* Duplicate return node #35. Try simplifying control flow for better match */
        return;
    }
    this->actor.speedXZ = 4.0f;
    if ((this->actor.bgCheckFlags & 8) != 0) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.wallYaw, 6, 0x1000, (s16) 0x100);
    } else {
        Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 6, 0x1000, (s16) 0x100);
    }
    Math_SmoothStepToS((s16 *) &this->actor.shape, -0x800, 4, 0x800, (s16) 0x80);
    if (this->unk_194 == 0) {
        this->actor.flags &= -0x11;
        func_80C11538(this);
    }
}

void func_80C12B1C(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u8 temp_v0;
    u8 temp_v0_2;
    void *temp_v0_3;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = arg0->unk_281;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_281 = (u8) (temp_v0 & 0xFFFD);
        arg0->unk_280 = (u8) (arg0->unk_280 & 0xFFFD);
        func_800BE258(arg0, arg0[2].flags);
        func_80C114C0(arg0, arg1);
        arg0[1].sfx = 0;
        phi_v0 = (void *) arg0[2].flags;
        phi_v1 = 0;
loop_2:
        phi_v1_2 = phi_v1;
        if ((phi_v0->unk_16 & 2) == 0) {
            temp_v1 = phi_v1 + 0x40;
            phi_v0 += 0x40;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v1 != 0xC0) {
                goto loop_2;
            }
        }
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 3) {
            func_80C11454(arg0);
        } else if (temp_v0_2 == 4) {
            arg0->unk_18C = 0x14;
            arg0[3].home.pos.y = 0.5f;
            arg0[3].home.pos.x = 4.0f;
            if (phi_v1_2 != 0xC0) {
                temp_v0_3 = arg0[2].flags + phi_v1_2;
                Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, (f32) temp_v0_3->unk_E, (f32) temp_v0_3->unk_10, (f32) temp_v0_3->unk_12, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
            }
        } else if (temp_v0_2 == 2) {
            arg0->unk_18C = 0;
            arg0[3].home.pos.y = 0.5f;
            arg0[3].home.pos.x = 4.0f;
        } else if (temp_v0_2 == 5) {
            arg0->unk_18C = 0x1E;
            arg0[3].home.pos.y = 0.5f;
            arg0[3].home.pos.x = 2.0f;
        }
        if (arg0->unk_3E8 != 0) {
            arg0->colChkInfo.damage = 0;
        }
        if (Actor_ApplyDamage(arg0) == 0) {
            arg0->colChkInfo.health = 0;
            Enemy_StartFinishingBlow(arg1, arg0);
            func_80C10984(arg0, 0x28);
            func_80C11C60(arg0);
            return;
        }
        func_80C11F6C(arg0, arg1);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_80C12D00(EnThiefbird *arg0) {
    Vec3f *temp_s1;
    s16 temp_v0;
    s32 temp_s2;
    Vec3f *phi_s0;
    s32 phi_s2;
    f32 phi_f20;

    phi_s0 = arg0 + 0x3F0;
    phi_s2 = 0;
    do {
        temp_v0 = phi_s0->unk_22;
        temp_s1 = phi_s0 + 0xC;
        if (temp_v0 != 0) {
            phi_s0->unk_22 = (s16) (temp_v0 - 1);
            Math_Vec3f_Sum(phi_s0, temp_s1, phi_s0);
            Math_Vec3f_Sum(temp_s1, &D_80C1368C, temp_s1);
            phi_s0->unk_1C = (s16) (phi_s0->unk_1C + 1);
            Math_StepToF((f32 *) temp_s1, 0.0f, 0.05f);
            Math_StepToF(&phi_s0[1].z, 0.0f, 0.05f);
            if (phi_s0[1].y < -0.5f) {
                phi_s0[1].y = -0.5f;
            }
            if ((phi_s2 & 1) != 0) {
                phi_f20 = -1.0f;
            } else {
                phi_f20 = 1.0f;
            }
            phi_s0->unk_20 = (s16) (s32) (Math_SinS((s16) (phi_s0->unk_1C * 0x7D0)) * 8192.0f);
            phi_s0->unk_1E = (s16) (phi_s0->unk_1E + (s32) (1638.0f * fabsf(Math_SinS((s16) (phi_s0->unk_1C * 0xBB8))) * phi_f20));
        }
        temp_s2 = phi_s2 + 1;
        phi_s0 = &phi_s0[3];
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x28);
}

void EnThiefbird_Update(Actor *thisx, GlobalContext *globalCtx) {
    CollisionCheckContext *sp2C;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a2;
    CollisionCheckContext *temp_a1;
    f32 temp_f0;
    EnThiefbird *this = (EnThiefbird *) thisx;

    func_80C12B1C((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    this->actor.world.rot.x = (s16) -(s32) this->actor.shape.rot.x;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.colChkInfo.health != 0) {
        Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    } else {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    }
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 25.0f, 25.0f, 50.0f, 7U);
    if (func_80C1193C == this->actionFunc) {
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_270);
    }
    temp_a2 = &this->unk_270;
    temp_a1 = &globalCtx->colChkCtx;
    if ((this->unk_270.base.acFlags & 1) != 0) {
        sp2C = temp_a1;
        sp28 = temp_a2;
        CollisionCheck_SetAC(globalCtx, temp_a1, (Collider *) temp_a2);
    }
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_270);
    if (this->unk_3D4 > 0.0f) {
        if (this->unk_18C != 0xA) {
            Math_StepToF(&this->unk_3D4, 0.0f, 0.05f);
            temp_f0 = (this->unk_3D4 + 1.0f) * 0.25f;
            this->unk_3D8 = temp_f0;
            if (temp_f0 > 0.5f) {
                this->unk_3D8 = 0.5f;
            } else {
                this->unk_3D8 = this->unk_3D8;
            }
        } else if (Math_StepToF(&this->unk_3DC, 0.5f, 0.0125f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
    }
    func_80C12D00(this);
    if (&D_06000604 == this->unk_144.animCurrentSeg) {
        if (func_801378B8(&this->unk_144, 13.0f) == 0) {
            goto block_17;
        }
        goto block_19;
    }
block_17:
    if ((&D_06000278 == this->unk_144.animCurrentSeg) && (func_801378B8(&this->unk_144, 1.0f) != 0)) {
block_19:
        Audio_PlayActorSound2((Actor *) this, 0x3897U);
    }
}

s32 func_80C130EC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if ((arg1 == 0xA) || (arg1 == 0xB)) {
        arg5->unk_3E4 = (Gfx *) *arg2;
        *arg2 = NULL;
    } else if (arg1 == 0x10) {
        *arg2 = NULL;
    } else if (arg1 == 8) {
        arg4->z += arg5[1].sfx;
    }
    return 0;
}

void func_80C1315C(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Gfx *sp44;
    GraphicsContext *sp3C;
    GraphicsContext *sp2C;
    s32 sp1C;
    s32 sp18;
    Gfx *temp_v1;
    GraphicsContext **temp_a2;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_v0_2;
    s32 temp_a2_2;
    s32 temp_v0;
    s32 temp_v1_2;
    s8 temp_v0_3;
    Gfx *phi_v1;
    Actor *phi_a3;

    arg0 = arg0;
    Collider_UpdateSpheres(arg1, arg4 + 0x270);
    temp_a2 = arg0;
    phi_a3 = arg4;
    if ((arg1 == 0xA) || (arg1 == 0xB)) {
        temp_v0_2 = *temp_a2;
        temp_v1 = temp_v0_2->polyOpa.p;
        arg0 = temp_a2;
        sp3C = temp_v0_2;
        sp44 = temp_v1;
        SysMatrix_NormalizeXYZ(temp_a2 + 0x187FC);
        temp_v1->words.w0 = 0xDA380003;
        sp44 = temp_v1;
        temp_v1->words.w1 = Matrix_NewMtx(*arg0);
        temp_v1[1].words.w0 = 0xDE000000;
        temp_v1[1].words.w1 = arg4->unk_3E4;
        sp3C->polyOpa.p = &temp_v1[2];
        goto block_11;
    }
    if (arg1 == 0x10) {
        temp_v0 = arg4->unk_3E8;
        if (temp_v0 != 0) {
            temp_a1 = *temp_a2;
            if (&D_060033B0 == temp_v0) {
                phi_v1 = temp_a1->polyXlu.p;
            } else {
                phi_v1 = temp_a1->polyOpa.p;
            }
            phi_v1->words.w0 = 0xDA380003;
            sp2C = temp_a1;
            sp44 = phi_v1;
            phi_v1->words.w1 = Matrix_NewMtx(*temp_a2);
            phi_v1[1].words.w0 = 0xDE000000;
            phi_v1[1].words.w1 = arg4->unk_3E8;
            if (&D_060033B0 == arg4->unk_3E8) {
                temp_a1->polyXlu.p = phi_v1 + 0x10;
            } else {
                temp_a1->polyOpa.p = phi_v1 + 0x10;
            }
block_11:
            phi_a3 = arg4;
        }
    }
    temp_v0_3 = *(&D_80C13698 + arg1);
    if (temp_v0_3 != -1) {
        if (temp_v0_3 == 9) {
            SysMatrix_GetStateTranslationAndScaledX(1000.0f, phi_a3 + (temp_v0_3 * 0xC) + 0x350);
            return;
        }
        temp_v1_2 = temp_v0_3 * 0xC;
        temp_a2_2 = phi_a3 + temp_v1_2;
        sp18 = temp_a2_2;
        sp1C = temp_v1_2;
        SysMatrix_GetStateTranslation(temp_a2_2 + 0x350);
        if ((temp_v1_2 == 0x24) || (temp_v1_2 == 0x3C)) {
            SysMatrix_GetStateTranslationAndScaledX(2000.0f, temp_a2_2 + 0x35C);
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_80C13354(EnThiefbird *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp5C;
    GraphicsContext *temp_t6;
    f32 temp_f12;
    s32 temp_s3;
    void *temp_s1;
    void *phi_s0;
    Gfx *phi_s1;
    s32 phi_s3;
    Gfx *phi_s1_2;

    temp_t6 = *arg1;
    sp5C = temp_t6;
    temp_s1 = temp_t6->polyOpa.p;
    temp_s1->words.w1 = &sSetupDL[150];
    temp_s1->words.w0 = 0xDE000000;
    temp_s1[1].words.w1 = &D_06003060;
    temp_s1[1].words.w0 = 0xDE000000;
    phi_s0 = arg0 + 0x3F0;
    phi_s1 = temp_s1 + 0x10;
    phi_s3 = 0;
    do {
        phi_s1_2 = phi_s1;
        if (phi_s0->unk_22 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk_0, phi_s0->unk_4, phi_s0->unk_8, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            Matrix_RotateY(phi_s0->unk_1E, 1U);
            SysMatrix_InsertZRotation_s(phi_s0->unk_20, 1);
            SysMatrix_InsertTranslation(0.0f, -10.0f, 0.0f, 1);
            temp_f12 = phi_s0->unk_18;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            phi_s1->words.w0 = 0xDA380003;
            phi_s1->words.w1 = Matrix_NewMtx(*arg1);
            phi_s1[1].words.w0 = 0xDE000000;
            phi_s1[1].words.w1 = &D_060030D8;
            phi_s1_2 = phi_s1 + 0x10;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x24;
        phi_s1 = phi_s1_2;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x28);
    sp5C->polyOpa.p = phi_s1_2;
}

void EnThiefbird_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnThiefbird *this = (EnThiefbird *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, func_80C130EC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_80C1315C, (Actor *) this);
    if ((s32) this->actor.colorFilterTimer > 0) {
        func_800AE5A0(globalCtx);
    }
    func_80C13354(this, (GraphicsContext **) globalCtx);
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) &this->unk_350, 0xB, this->unk_3D8, this->unk_3DC, this->unk_3D4, (u8) (s32) this->unk_18C);
    Math_Vec3s_ToVec3f((Vec3f *) &this->actor.focus, (Vec3s *) &this->unk_270.elements[1].dim.worldSphere);
}
