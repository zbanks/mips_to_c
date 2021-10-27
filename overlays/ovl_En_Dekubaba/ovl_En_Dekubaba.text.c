typedef struct EnDekubaba {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ void (*actionFunc)(EnDekubaba *, GlobalContext *);
    /* 0x18C */ u8 unk_18C;                         /* inferred */
    /* 0x18D */ char pad_18D[0x1];
    /* 0x18E */ s16 unk_18E;                        /* inferred */
    /* 0x190 */ s16 unk_190;                        /* inferred */
    /* 0x192 */ s16 unk_192;                        /* inferred */
    /* 0x194 */ s16 unk_194;                        /* inferred */
    /* 0x196 */ s16 unk_196;                        /* inferred */
    /* 0x198 */ Vec3s unk_198;                      /* inferred */
    /* 0x19E */ char pad_19E[0x2A];                 /* maybe part of unk_198[8]? */
    /* 0x1C8 */ Vec3s unk_1C8;                      /* inferred */
    /* 0x1CE */ char pad_1CE[0x2A];                 /* maybe part of unk_1C8[8]? */
    /* 0x1F8 */ f32 unk_1F8;                        /* inferred */
    /* 0x1FC */ f32 unk_1FC;                        /* inferred */
    /* 0x200 */ f32 unk_200;                        /* inferred */
    /* 0x204 */ f32 unk_204;                        /* inferred */
    /* 0x208 */ Vec3f unk_208;                      /* inferred */
    /* 0x214 */ char pad_214[0x24];                 /* maybe part of unk_208[4]? */
    /* 0x238 */ CollisionPoly *unk_238;             /* inferred */
    /* 0x23C */ ColliderJntSph unk_23C;             /* inferred */
    /* 0x25C */ ColliderJntSphElement unk_25C;      /* inferred */
    /* 0x29C */ char pad_29C[0x180];                /* maybe part of unk_25C[7]? */
} EnDekubaba;                                       /* size = 0x41C */

struct _mips2c_stack_EnDekubaba_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnDekubaba_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Vec3f *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnDekubaba_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnDekubaba_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void (*sp2C)(EnDekubaba *, GlobalContext *); /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B1530 {};              /* size 0x0 */

struct _mips2c_stack_func_808B15B8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B16BC {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B1798 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B1814 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B18A8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B1B14 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B1BC0 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s16 sp30;                            /* inferred */
    /* 0x32 */ char pad_32[0x6];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B1CF0 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ char pad_54[0x4];
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ Actor *sp64;                         /* inferred */
};                                                  /* size = 0x68 */

struct _mips2c_stack_func_808B2158 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B2240 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808B2608 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B2660 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ PosRot *sp24;                        /* inferred */
    /* 0x28 */ PosRot *sp28;                        /* inferred */
    /* 0x2C */ SkelAnime *sp2C;                     /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808B2890 {};              /* size 0x0 */

struct _mips2c_stack_func_808B28B4 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B2980 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B29C4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ SkelAnime *sp34;                     /* inferred */
    /* 0x38 */ char pad_38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x2];
    /* 0x4A */ s16 sp4A;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_808B2C40 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B2CB8 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808B3044 {};              /* size 0x0 */

struct _mips2c_stack_func_808B3078 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B3170 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B3280 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B3390 {};              /* size 0x0 */

struct _mips2c_stack_func_808B3404 {
    /* 0x00 */ char pad_0[0x68];
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad_6C[0xC];                    /* maybe part of sp68[4]? */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad_84[0x4];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808B3768 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B37E8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ PosRot *sp38;                        /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808B39AC {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B3B48 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B3BE4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B3C50 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808B3D74 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B3DA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B3E40 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B3EE8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808B3F50 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808B4548 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B465C {
    /* 0x00 */ char pad_0[0x5C];
    /* 0x5C */ void *sp5C;                          /* inferred */
    /* 0x60 */ char pad_60[0xC];                    /* maybe part of sp5C[4]? */
    /* 0x6C */ ColliderJntSph *sp6C;                /* inferred */
    /* 0x70 */ char pad_70[0x20];                   /* maybe part of sp6C[9]? */
    /* 0x90 */ s32 sp90;                            /* inferred */
    /* 0x94 */ char pad_94[0xC];                    /* maybe part of sp90[4]? */
    /* 0xA0 */ ? spA0;                              /* inferred */
    /* 0xA0 */ char pad_A0[0x30];
    /* 0xD0 */ f32 spD0;                            /* inferred */
    /* 0xD4 */ f32 spD4;                            /* inferred */
    /* 0xD8 */ f32 spD8;                            /* inferred */
    /* 0xDC */ char pad_DC[0x4];
};                                                  /* size = 0xE0 */

struct _mips2c_stack_func_808B48FC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ ColliderJntSph *sp1C;                /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ GraphicsContext *sp2C;               /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808B49C8 {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x40];
};                                                  /* size = 0x88 */

struct _mips2c_stack_func_808B4ABC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_800B8B84(EnDekubaba *, GlobalContext *, ?);  /* extern */
void func_808B1530(EnDekubaba *arg0, EnDekubaba *); /* static */
void func_808B15B8(EnDekubaba *arg0);               /* static */
void func_808B16BC(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_808B1798(Actor *arg0);                    /* static */
void func_808B1814(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_808B18A8(EnDekubaba *arg0, s8);           /* static */
void func_808B1BC0(Actor *arg0);                    /* static */
void func_808B2158(EnDekubaba *arg0);               /* static */
void func_808B2608(EnDekubaba *arg0, s16, s16);     /* static */
void func_808B2890(EnDekubaba *arg0, s16);          /* static */
void func_808B2980(EnDekubaba *arg0);               /* static */
void func_808B2C40(EnDekubaba *arg0);               /* static */
void func_808B3044(EnDekubaba *arg0, EnDekubaba *); /* static */
void func_808B3170(Actor *arg0, s32 arg1, s32);     /* static */
void func_808B3390(Actor *arg0);                    /* static */
void func_808B3768(EnDekubaba *arg0);               /* static */
void func_808B39AC(EnDekubaba *arg0);               /* static */
void func_808B3BE4(Actor *arg0);                    /* static */
void func_808B3D74(Actor *arg0);                    /* static */
void func_808B3E40(EnDekubaba *arg0, GlobalContext *arg1); /* static */
void func_808B3F50(Actor *arg0, GlobalContext *arg1); /* static */
void func_808B4548(Actor *arg0, GraphicsContext **arg1); /* static */
void func_808B465C(EnDekubaba *arg0, GraphicsContext **arg1); /* static */
void func_808B48FC(EnDekubaba *arg0, GraphicsContext **arg1); /* static */
void func_808B49C8(EnDekubaba *arg0, GraphicsContext **arg1); /* static */
void func_808B4ABC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_06000208;
extern AnimationHeader D_060002B8;
extern ? D_060010F0;
extern ? D_06001330;
extern ? D_06001828;
extern SkeletonHeader D_06002A40;
extern ? D_06003070;
static ? D_808B4D60;                                /* unable to generate initializer */
static ColliderJntSphInit D_808B4E5C = {{6, 0x11, 9, 0x39, 0x10, 0}, 7, &D_808B4D60};
static CollisionCheckInfoInit D_808B4E6C = {2, 0x19, 0x19, 0xFF};
static DamageTable D_808B4E74 = {
    {
        0x10,
        3,
        1,
        1,
        0xF1,
        3,
        0,
        0xD0,
        2,
        0xF1,
        4,
        0x21,
        0x33,
        0x43,
        1,
        0xF1,
        3,
        2,
        0x10,
        0x50,
        0,
        0,
        1,
        1,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static InitChainEntry D_808B4E94;                   /* unable to generate initializer */
static Color_RGBA8 D_808B4E98 = {0x69, 0xFF, 0x69, 0xFF};
static Color_RGBA8 D_808B4E9C = {0x96, 0xFA, 0x96, 0};
static u32 D_808B4EA0[4] = {0x6001330, 0x6001628, 0x6001828, 0};

void EnDekubaba_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderJntSphElementInit *temp_a1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_f16;
    void *temp_v1;
    ColliderJntSphElementInit *phi_a1;
    s32 phi_v0;
    s32 phi_a0;
    s32 phi_v0_2;
    s32 phi_a0_2;
    s8 phi_a1_2;
    EnDekubaba *this = (EnDekubaba *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_808B4E94);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 22.0f);
    SkelAnime_Init(globalCtx, &this->unk_144, &D_06002A40, &D_060002B8, &this->unk_198, &this->unk_1C8, 8);
    Collider_InitAndSetJntSph(globalCtx, &this->unk_23C, (Actor *) this, &D_808B4E5C, &this->unk_25C);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808B4E74, &D_808B4E6C);
    phi_a1_2 = 1;
    if (this->actor.params == 1) {
        this->unk_1F8 = 2.5f;
        phi_a1 = &D_808B4D60;
        phi_a0 = 0;
        phi_a1_2 = (s8) &D_808B4D60;
        if (D_808B4E5C.count > 0) {
            phi_v0 = 0;
            do {
                temp_a0 = phi_a0 + 1;
                temp_a1 = phi_a1 + 0x24;
                temp_f16 = (s32) ((f32) phi_a1->dim.modelSphere.radius * 2.5f);
                (this->unk_23C.elements + phi_v0)->unk_2E = (s16) temp_f16;
                (this->unk_23C.elements + phi_v0)->unk_36 = (s16) temp_f16;
                phi_a1 = temp_a1;
                phi_v0 += 0x40;
                phi_a0 = temp_a0;
                phi_a1_2 = (s8) temp_a1;
            } while (temp_a0 < D_808B4E5C.count);
        }
        this->actor.colChkInfo.health = 4;
        this->actor.hintId = 8;
        this->actor.targetMode = 2;
    } else {
        this->unk_1F8 = 1.0f;
        phi_v0_2 = 0;
        phi_a0_2 = 0;
        if (D_808B4E5C.count > 0) {
            do {
                temp_a0_2 = phi_a0_2 + 1;
                temp_v1 = this->unk_23C.elements + phi_v0_2;
                temp_v1->unk_36 = (s16) temp_v1->unk_2E;
                phi_v0_2 += 0x40;
                phi_a0_2 = temp_a0_2;
            } while (temp_a0_2 < D_808B4E5C.count);
        }
        this->actor.hintId = 7;
        this->actor.targetMode = 1;
    }
    func_808B18A8(this, phi_a1_2);
    this->unk_18E = 0;
    this->unk_238 = NULL;
}

void EnDekubaba_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDekubaba *this = (EnDekubaba *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk_23C);
}

void func_808B1530(EnDekubaba *arg0) {
    s32 temp_v1_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_v1;
    void *temp_v1_2;

    temp_v1 = arg0->unk_23C.elements;
    (temp_v1 + 0x40)->unk_16 = (s8) (temp_v1[1].info.bumperFlags & 0xFFFE);
    temp_v1_2 = arg0->unk_23C.elements;
    (temp_v1_2 + 0x40)->unk_56 = (s8) (temp_v1_2[2].info.bumperFlags & 0xFFFE);
    temp_v1_3 = 3 << 6;
    temp_a1 = arg0->unk_23C.elements + temp_v1_3;
    temp_a1->unk_16 = (u8) (temp_a1->unk_16 & 0xFFFE);
    temp_a1_2 = arg0->unk_23C.elements + temp_v1_3;
    temp_a1_2->unk_56 = (u8) (temp_a1_2->unk_56 & 0xFFFE);
    temp_a1_3 = arg0->unk_23C.elements + temp_v1_3;
    temp_a1_3->unk_96 = (u8) (temp_a1_3->unk_96 & 0xFFFE);
    temp_a1_4 = arg0->unk_23C.elements + temp_v1_3;
    temp_a1_4->unk_D6 = (u8) (temp_a1_4->unk_D6 & 0xFFFE);
}

void func_808B15B8(EnDekubaba *arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;

    sp24 = Math_CosS(arg0->unk_194);
    sp28 = Math_CosS(arg0->unk_192);
    sp2C = (Math_CosS(arg0->unk_196) + (sp28 + sp24)) * 20.0f;
    arg0->actor.world.pos.x = (Math_SinS(arg0->actor.shape.rot.y) * (sp2C * arg0->unk_1F8)) + arg0->actor.home.pos.x;
    sp24 = Math_SinS(arg0->unk_194);
    sp28 = Math_SinS(arg0->unk_192);
    arg0->actor.world.pos.y = arg0->actor.home.pos.y - ((Math_SinS(arg0->unk_196) + (sp28 + sp24)) * 20.0f * arg0->unk_1F8);
    arg0->actor.world.pos.z = (Math_CosS(arg0->actor.shape.rot.y) * (sp2C * arg0->unk_1F8)) + arg0->actor.home.pos.z;
}

void func_808B16BC(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    u8 temp_v0;
    void *temp_v0_2;

    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 2) {
        arg0->unk_18C = 0;
        arg0->unk_200 = 0.75f;
        arg0->unk_1FC = 4.0f;
        return;
    }
    if (temp_v0 == 4) {
        arg0->unk_18C = 0x14;
        arg0->unk_200 = 0.75f;
        arg0->unk_1FC = 4.0f;
        temp_v0_2 = arg0->unk_258 + (arg2 << 6);
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) temp_v0_2->unk_E, (f32) temp_v0_2->unk_10, (f32) temp_v0_2->unk_12, (s16) 0, (s16) 0, (s16) 0, (s16) 3);
    }
}

void func_808B1798(Actor *arg0) {
    arg0->unk_18C = 0xA;
    arg0->unk_250 = 3;
    arg0[1].focus.rot.y = 0x50;
    arg0->flags &= -0x401;
    arg0->unk_200 = 0.75f;
    arg0->unk_204 = 1.125f;
    arg0->unk_1FC = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808B1814(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (arg0->unk_18C == 0xA) {
        arg0->unk_18C = 0U;
        arg0->unk_250 = 6;
        arg0->unk_1FC = 0.0f;
        temp_f0 = arg0->unk_1F8;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x208), 4, 4, temp_f0 * 0.3f, temp_f0 * 0.2f);
        arg0->flags |= 0x400;
    }
}

void func_808B18A8(Actor *arg0) {
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_v1;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;

    temp_f0 = arg0->unk_1F8;
    arg0->shape.rot.x = -0x4000;
    temp_v0 = arg0->shape.rot.x;
    arg0[1].unk_52 = temp_v0;
    arg0[1].sfx = temp_v0;
    arg0[1].focus.unk_12 = temp_v0;
    arg0->world.pos.x = arg0->home.pos.x;
    arg0->world.pos.y = arg0->home.pos.y + (14.0f * temp_f0);
    arg0->world.pos.z = arg0->home.pos.z;
    Actor_SetScale(arg0, temp_f0 * 0.01f * 0.5f);
    arg0->unk_250 = 0xC;
    arg0->unk_24D = (u8) (arg0->unk_24D | 4);
    arg0[1].focus.rot.y = 0x2D;
    temp_v0_2 = arg0->unk_258 + 0x40;
    temp_v0_2->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v1 = 3 << 6;
    temp_v0_2->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_2->unk_34 = (s16) (s32) arg0->world.pos.z;
    temp_v0_3 = arg0->unk_258 + 0x80;
    temp_v0_3->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v0_3->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_3->unk_34 = (s16) (s32) arg0->world.pos.z;
    temp_v0_4 = arg0->unk_258 + temp_v1;
    temp_v0_4->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v0_4->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_4->unk_34 = (s16) (s32) arg0->world.pos.z;
    temp_v0_5 = arg0->unk_258 + temp_v1 + 0x40;
    temp_v0_5->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v0_5->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_5->unk_34 = (s16) (s32) arg0->world.pos.z;
    temp_v0_6 = arg0->unk_258 + temp_v1 + 0x80;
    temp_v0_6->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v0_6->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_6->unk_34 = (s16) (s32) arg0->world.pos.z;
    temp_v0_7 = arg0->unk_258 + temp_v1 + 0xC0;
    temp_v0_7->unk_30 = (s16) (s32) arg0->world.pos.x;
    temp_v0_7->unk_32 = (s16) ((s32) arg0->world.pos.y - 7);
    temp_v0_7->unk_34 = (s16) (s32) arg0->world.pos.z;
    arg0[1].focus.pos.z = (bitwise f32) func_808B1B14;
}

void func_808B1B14(EnDekubaba *this, GlobalContext *globalCtx) {
    f32 temp_f2;
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    temp_f2 = this->unk_1F8;
    this->actor.world.pos.x = this->actor.home.pos.x;
    this->actor.world.pos.z = this->actor.home.pos.z;
    this->actor.world.pos.y = this->actor.home.pos.y + (14.0f * temp_f2);
    if ((this->unk_18E == 0) && (this->actor.xzDistToPlayer < (200.0f * temp_f2)) && (fabsf(this->actor.yDistToPlayer) < (30.0f * temp_f2))) {
        func_808B1BC0();
    }
}

void func_808B1BC0(Actor *arg0) {
    s16 sp30;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    sp30 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8);
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, (f32) sp30 * 0.06666667f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), (u8) 2, 0.0f);
    temp_v0 = arg0->unk_258;
    arg0[1].focus.rot.y = 0xF;
    temp_v1 = 3 << 6;
    temp_v0->unk_97 = (u8) (temp_v0->unk_97 | 1);
    temp_v0_2 = arg0->unk_258 + temp_v1;
    temp_v0_2->unk_17 = (u8) (temp_v0_2->unk_17 | 1);
    temp_v0_3 = arg0->unk_258 + temp_v1;
    temp_v0_3->unk_57 = (u8) (temp_v0_3->unk_57 | 1);
    temp_v0_4 = arg0->unk_258 + temp_v1;
    temp_v0_4->unk_97 = (u8) (temp_v0_4->unk_97 | 1);
    temp_v0_5 = arg0->unk_258 + temp_v1;
    temp_v0_5->unk_D7 = (u8) (temp_v0_5->unk_D7 | 1);
    arg0->unk_250 = 6;
    arg0->unk_24D = (u8) (arg0->unk_24D & 0xFFFB);
    Audio_PlayActorSound2(arg0, 0x39E2U);
    arg0[1].focus.pos.z = (bitwise f32) func_808B1CF0;
}

void func_808B1CF0(EnDekubaba *this, GlobalContext *globalCtx) {
    Actor *sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    PosRot *sp38;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    f32 phi_f14;
    f32 phi_f12;

    sp64 = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_f2 = this->unk_1F8 * 0.01f * (0.5f + (((f32) (0xF - this->unk_18E) * 0.5f) / 15.0f));
    this->actor.scale.z = temp_f2;
    this->actor.scale.y = temp_f2;
    this->actor.scale.x = temp_f2;
    Math_ScaledStepToS((s16 *) &this->actor.shape, 0x1800, 0x800);
    temp_f0 = (f32) (0xF - this->unk_18E) * 0.06666667f;
    if (temp_f0 > 0.7f) {
        phi_f14 = 0.7f;
    } else {
        phi_f14 = temp_f0;
    }
    sp5C = (sin_rad(phi_f14 * 3.1415927f) * 32.0f) + 14.0f;
    temp_v0_2 = this->actor.shape.rot.x;
    if ((s32) temp_v0_2 < -0x38E3) {
        phi_f12 = 0.0f;
    } else if ((s32) temp_v0_2 < -0x238E) {
        Math_ScaledStepToS(&this->unk_192, -0x5555, 0x38E);
        phi_f12 = Math_CosS(this->unk_192) * 20.0f;
    } else if ((s32) temp_v0_2 < -0xE38) {
        Math_ScaledStepToS(&this->unk_192, -0xAAA, 0x38E);
        Math_ScaledStepToS(&this->unk_194, -0x5555, 0x38E);
        Math_ScaledStepToS(&this->unk_196, -0x5555, 0x222);
        sp40 = Math_CosS(this->unk_194);
        sp44 = Math_CosS(this->unk_192);
        sp48 = Math_CosS(this->unk_196);
        sp4C = Math_SinS(this->unk_194);
        sp50 = Math_SinS(this->unk_192);
        phi_f12 = (((sp5C - (20.0f * (-sp50 - sp4C))) * sp48) / -Math_SinS(this->unk_196)) + (20.0f * (sp44 + sp40));
    } else {
        Math_ScaledStepToS(&this->unk_192, -0xAAA, 0x38E);
        Math_ScaledStepToS(&this->unk_194, -0x31C7, 0x222);
        Math_ScaledStepToS(&this->unk_196, -0x5555, 0x222);
        sp40 = Math_CosS(this->unk_194);
        sp44 = Math_CosS(this->unk_192);
        sp48 = Math_CosS(this->unk_196);
        sp4C = Math_SinS(this->unk_194);
        sp50 = Math_SinS(this->unk_192);
        phi_f12 = (((sp5C - (20.0f * (-sp50 - sp4C))) * sp48) / -Math_SinS(this->unk_196)) + (20.0f * (sp44 + sp40));
    }
    if ((s32) this->unk_18E < 0xA) {
        sp60 = phi_f12;
        Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.home, (Vec3f *) &sp64->world), 2, 0xE38);
    }
    this->actor.world.pos.y = this->actor.home.pos.y + (sp5C * this->unk_1F8);
    sp60 = phi_f12;
    sp38 = &this->actor.home;
    sp58 = Math_SinS(this->actor.shape.rot.y) * (phi_f12 * this->unk_1F8);
    temp_f16 = this->unk_1F8;
    temp_f18 = Math_CosS(this->actor.shape.rot.y) * (sp60 * temp_f16);
    this->actor.world.pos.x = this->actor.home.pos.x + sp58;
    this->actor.world.pos.z = this->actor.home.pos.z + temp_f18;
    EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) sp38, temp_f16 * 3.0f, 0, (s16) (s32) (temp_f16 * 12.0f), (s16) (s32) (temp_f16 * 5.0f), (s16) 1, (s16) -1, (s16) 0xA, NULL);
    if (this->unk_18E == 0) {
        if (Math_Vec3f_DistXZ((Vec3f *) sp38, (Vec3f *) &sp64->world) < (240.0f * this->unk_1F8)) {
            func_808B2890(this);
            return;
        }
        func_808B2158(this);
        /* Duplicate return node #18. Try simplifying control flow for better match */
    }
}

void func_808B2158(EnDekubaba *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, -1.5f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), 0.0f, (u8) 2, -3.0f);
    temp_v0 = arg0->unk_23C.elements;
    arg0->unk_18E = 0xF;
    temp_v1 = 3 << 6;
    temp_v0[2].info.ocElemFlags &= 0xFFFE;
    temp_v0_2 = arg0->unk_23C.elements + temp_v1;
    temp_v0_2->unk_17 = (u8) (temp_v0_2->unk_17 & 0xFFFE);
    temp_v0_3 = arg0->unk_23C.elements + temp_v1;
    temp_v0_3->unk_57 = (u8) (temp_v0_3->unk_57 & 0xFFFE);
    temp_v0_4 = arg0->unk_23C.elements + temp_v1;
    temp_v0_4->unk_97 = (u8) (temp_v0_4->unk_97 & 0xFFFE);
    temp_v0_5 = arg0->unk_23C.elements + temp_v1;
    temp_v0_5->unk_D7 = (u8) (temp_v0_5->unk_D7 & 0xFFFE);
    arg0->actionFunc = func_808B2240;
}

void func_808B2240(EnDekubaba *this, GlobalContext *globalCtx) {
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 temp_f0;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    f32 phi_f14;
    f32 phi_f12;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_f2 = this->unk_1F8 * 0.01f * (0.5f + ((f32) this->unk_18E * 0.033333335f));
    this->actor.scale.z = temp_f2;
    this->actor.scale.y = temp_f2;
    this->actor.scale.x = temp_f2;
    Math_ScaledStepToS((s16 *) &this->actor.shape, -0x4000, 0x300);
    temp_f0 = (f32) this->unk_18E * 0.033f;
    if (temp_f0 > 0.7f) {
        phi_f14 = 0.7f;
    } else {
        phi_f14 = temp_f0;
    }
    sp58 = (sin_rad(phi_f14 * 3.1415927f) * 32.0f) + 14.0f;
    temp_v0_2 = this->actor.shape.rot.x;
    if ((s32) temp_v0_2 < -0x38E3) {
        phi_f12 = 0.0f;
    } else if ((s32) temp_v0_2 < -0x238E) {
        Math_ScaledStepToS(&this->unk_192, -0x4000, 0x555);
        phi_f12 = Math_CosS(this->unk_192) * 20.0f;
    } else if ((s32) temp_v0_2 < -0xE38) {
        Math_ScaledStepToS(&this->unk_192, -0x5555, 0x555);
        Math_ScaledStepToS(&this->unk_194, -0x4000, 0x555);
        Math_ScaledStepToS(&this->unk_196, -0x4000, 0x333);
        sp3C = Math_CosS(this->unk_194);
        sp40 = Math_CosS(this->unk_192);
        sp44 = Math_CosS(this->unk_196);
        sp48 = Math_SinS(this->unk_194);
        sp4C = Math_SinS(this->unk_192);
        phi_f12 = (((sp58 - (20.0f * (-sp4C - sp48))) * sp44) / -Math_SinS(this->unk_196)) + (20.0f * (sp40 + sp3C));
    } else {
        Math_ScaledStepToS(&this->unk_192, -0x5555, 0x555);
        Math_ScaledStepToS(&this->unk_194, -0x5555, 0x333);
        Math_ScaledStepToS(&this->unk_196, -0x4000, 0x333);
        sp3C = Math_CosS(this->unk_194);
        sp40 = Math_CosS(this->unk_192);
        sp44 = Math_CosS(this->unk_196);
        sp48 = Math_SinS(this->unk_194);
        sp4C = Math_SinS(this->unk_192);
        phi_f12 = (((sp58 - (20.0f * (-sp4C - sp48))) * sp44) / -Math_SinS(this->unk_196)) + (20.0f * (sp40 + sp3C));
    }
    this->actor.world.pos.y = this->actor.home.pos.y + (sp58 * this->unk_1F8);
    sp5C = phi_f12;
    sp54 = Math_SinS(this->actor.shape.rot.y) * (phi_f12 * this->unk_1F8);
    temp_f16 = this->unk_1F8;
    temp_f18 = Math_CosS(this->actor.shape.rot.y) * (sp5C * temp_f16);
    this->actor.world.pos.x = this->actor.home.pos.x + sp54;
    this->actor.world.pos.z = this->actor.home.pos.z + temp_f18;
    EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.home, temp_f16 * 3.0f, 0, (s16) (s32) (temp_f16 * 12.0f), (s16) (s32) (temp_f16 * 5.0f), (s16) 1, (s16) -1, (s16) 0xA, NULL);
    if (this->unk_18E == 0) {
        func_808B18A8(this);
    }
}

void func_808B2608(EnDekubaba *arg0) {
    arg0->unk_18E = SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8) * 2;
    SkelAnime_ChangeAnimTransitionRepeat(arg0 + 0x144, &D_060002B8, -3.0f);
    arg0->actionFunc = func_808B2660;
}

void func_808B2660(EnDekubaba *this, GlobalContext *globalCtx) {
    Actor *sp34;
    SkelAnime *sp2C;
    PosRot *sp28;
    PosRot *sp24;
    PosRot *temp_a0_2;
    PosRot *temp_a1;
    SkelAnime *temp_a0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 phi_t2;

    temp_a0 = &this->unk_144;
    sp2C = temp_a0;
    sp34 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    if ((func_801378B8(temp_a0, 0.0f) != 0) || (func_801378B8(temp_a0, 12.0f) != 0)) {
        if (this->actor.params == 1) {
            Audio_PlayActorSound2((Actor *) this, 0x385CU);
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x3860U);
        }
    }
    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    temp_a0_2 = &this->actor.home;
    sp28 = temp_a0_2;
    temp_a1 = &sp34->world;
    sp24 = temp_a1;
    Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) temp_a0_2, (Vec3f *) temp_a1), 2, (s16) (((s32) this->unk_18E % 5) * 0x222));
    temp_v0_2 = this->unk_18E;
    if ((s32) temp_v0_2 < 0xA) {
        this->unk_192 += 0x16C;
        this->unk_194 += 0x16C;
        this->unk_196 += 0xB6;
        this->actor.shape.rot.x += 0x222;
    } else {
        if ((s32) temp_v0_2 < 0x14) {
            this->unk_192 += -0x16C;
            this->unk_194 += 0x111;
            phi_t2 = this->actor.shape.rot.x + 0x16C;
            goto block_14;
        }
        if ((s32) temp_v0_2 < 0x1E) {
            this->unk_194 += -0x111;
            this->actor.shape.rot.x += -0xB6;
        } else {
            this->unk_194 += -0xB6;
            this->unk_196 += 0xB6;
            phi_t2 = this->actor.shape.rot.x - 0x16C;
block_14:
            this->actor.shape.rot.x = phi_t2;
        }
    }
    func_808B15B8(this);
    temp_f2 = this->unk_1F8;
    if ((240.0f * temp_f2) < Math_Vec3f_DistXZ((Vec3f *) sp28, (Vec3f *) sp24)) {
        func_808B2158(this);
        return;
    }
    if ((this->unk_18E == 0) || (this->actor.xzDistToPlayer < (80.0f * temp_f2))) {
        func_808B2890(this);
    }
}

void func_808B2890(EnDekubaba *arg0) {
    arg0->unk_18E = 8;
    arg0->actionFunc = func_808B28B4;
    arg0->unk_144.animPlaybackSpeed = 0.0f;
}

void func_808B28B4(EnDekubaba *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    Actor *temp_v1;
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    sp2C = temp_v1;
    Math_SmoothStepToS((s16 *) &this->actor.shape, 0x1800, 2, 0xE38, (s16) 0x71C);
    Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw((Vec3f *) &this->actor.home, (Vec3f *) &temp_v1->world), 2, 0xE38);
    Math_ScaledStepToS(&this->unk_192, 0xAAA, 0x444);
    Math_ScaledStepToS(&this->unk_194, -0x4718, 0x888);
    Math_ScaledStepToS(&this->unk_196, -0x6AA4, 0x888);
    if (this->unk_18E == 0) {
        func_808B2980(this);
    }
    func_808B15B8(this);
}

void func_808B2980(EnDekubaba *arg0) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    arg0 = arg0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06000208);
    arg0->unk_18E = 0;
    arg0->actionFunc = func_808B29C4;
}

void func_808B29C4(EnDekubaba *this, GlobalContext *globalCtx) {
    s32 sp4C;
    s16 sp4A;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    SkelAnime *sp34;
    SkelAnime *temp_a0;
    f32 temp_f18;
    s16 temp_v1;
    s32 temp_f10;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_a0 = &this->unk_144;
    sp34 = temp_a0;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->unk_18E;
    if (temp_v1 == 0) {
        if (func_801378B8(temp_a0, 1.0f) != 0) {
            if (this->actor.params == 1) {
                Audio_PlayActorSound2((Actor *) this, 0x385DU);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3861U);
            }
        }
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0, 0x222);
        temp_f10 = (s32) (this->unk_144.animCurrentFrame * 10.0f);
        sp4A = (s16) temp_f10;
        temp_v1_2 = Math_ScaledStepToS(&this->unk_192, -0xE38, (s16) ((s16) temp_f10 + 0x38E)) & 1;
        sp4C = temp_v1_2;
        temp_v1_3 = temp_v1_2 & Math_ScaledStepToS(&this->unk_194, -0xE38, (s16) (sp4A + 0x71C));
        sp4C = temp_v1_3;
        if ((temp_v1_3 & Math_ScaledStepToS(&this->unk_196, -0xE38, (s16) (sp4A + 0xE38))) != 0) {
            SkelAnime_ChangeAnimPlaybackRepeat(sp34, &D_060002B8, 4.0f);
            temp_f18 = Math_SinS(this->actor.shape.rot.y) * 5.0f;
            sp40 = 0.0f;
            sp3C = temp_f18;
            sp44 = Math_CosS(this->actor.shape.rot.y) * 5.0f;
            func_800B0DE0(globalCtx, (Vec3f *) &this->actor.world, (Vec3f *) &sp3C, &D_801D15B0, &D_808B4E98, &D_808B4E9C, (s16) 1, (s16) (s32) (this->unk_1F8 * 100.0f));
            this->unk_18E = 1;
        }
    } else if ((s32) temp_v1 >= 0xB) {
        func_808B2C40(this);
    } else {
        this->unk_18E = temp_v1 + 1;
        if (((s32) this->unk_18E >= 4) && (Actor_IsActorFacingLink((Actor *) this, 0x16C) == 0)) {
            Math_ApproachS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xF, 0x71C);
        }
        if ((func_801378B8(sp34, 0.0f) != 0) || (func_801378B8(sp34, 12.0f) != 0)) {
            if (this->actor.params == 1) {
                Audio_PlayActorSound2((Actor *) this, 0x385CU);
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3860U);
            }
        }
    }
    func_808B15B8(this);
}

void func_808B2C40(EnDekubaba *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_06000208, 1.0f, 15.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_06000208), (u8) 2, -3.0f);
    arg0->unk_18E = 0;
    arg0->actionFunc = func_808B2CB8;
}

void func_808B2CB8(EnDekubaba *this, GlobalContext *globalCtx) {
    f32 sp44;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    s32 sp30;
    f32 temp_f0;
    f32 temp_f18;
    s16 temp_v1;
    s32 temp_v0;
    f32 phi_f2;
    s32 phi_v0;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_v1 = this->unk_18E;
    if (temp_v1 == 0) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, -0x93E, 0x38E);
        Math_ScaledStepToS(&this->unk_192, -0x888, 0x16C);
        Math_ScaledStepToS(&this->unk_194, -0x888, 0x16C);
        if (Math_ScaledStepToS(&this->unk_196, -0x888, 0x16C) != 0) {
            sp38 = Math_SinS(this->actor.shape.rot.y) * 30.0f * this->unk_1F8;
            temp_f18 = Math_CosS(this->actor.shape.rot.y) * 30.0f;
            sp3C.unk_0 = this->actor.home.pos.x;
            (&sp3C)[1] = this->actor.home.pos.y;
            (&sp3C)[2] = this->actor.home.pos.z;
            phi_f2 = temp_f18 * this->unk_1F8;
            phi_v0 = 0;
            do {
                temp_f0 = this->unk_1F8;
                sp34 = phi_f2;
                sp30 = phi_v0;
                func_800B1210(globalCtx, (Vec3f *) &sp3C, &D_801D15B0, &D_801D15B0, (s16) (s32) (temp_f0 * 500.0f), (s16) (s32) (temp_f0 * 50.0f));
                temp_v0 = phi_v0 + 1;
                sp3C += sp38;
                sp44 += phi_f2;
                phi_v0 = temp_v0;
            } while (temp_v0 != 3);
            this->unk_18E = 1;
        }
    } else if (temp_v1 == 0xB) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, -0x93E, 0x200);
        Math_ScaledStepToS(&this->unk_192, -0xAAA, 0x200);
        Math_ScaledStepToS(&this->unk_196, -0x5C71, 0x200);
        if (Math_ScaledStepToS(&this->unk_194, 0x238C, 0x200) != 0) {
            this->unk_18E = 0xC;
        }
    } else if (temp_v1 == 0x12) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0x2AA8, 0xAAA);
        if (Math_ScaledStepToS(&this->unk_192, 0x1554, 0x5B0) != 0) {
            this->unk_18E = 0x19;
        }
        Math_ScaledStepToS(&this->unk_194, -0x38E3, 0xAAA);
        Math_ScaledStepToS(&this->unk_196, -0x5C71, 0x2D8);
    } else if (temp_v1 == 0x19) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, -0x5550, 0xAAA);
        if (Math_ScaledStepToS(&this->unk_192, -0x6388, 0x93E) != 0) {
            this->unk_18E = 0x1A;
        }
        Math_ScaledStepToS(&this->unk_194, -0x3FFC, 0x4FA);
        Math_ScaledStepToS(&this->unk_196, -0x238C, 0x444);
    } else if (temp_v1 == 0x1A) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0x1800, 0x93E);
        if (Math_ScaledStepToS(&this->unk_192, -0x1555, 0x71C) != 0) {
            this->unk_18E = 0x1B;
        }
        Math_ScaledStepToS(&this->unk_194, -0x38E3, 0x2D8);
        Math_ScaledStepToS(&this->unk_196, -0x5C71, 0x5B0);
    } else if ((s32) temp_v1 >= 0x1B) {
        this->unk_18E = temp_v1 + 1;
        if ((s32) this->unk_18E >= 0x1F) {
            if (this->actor.xzDistToPlayer < (80.0f * this->unk_1F8)) {
                func_808B2890(this, -0x93E);
            } else {
                func_808B2608(this, -0x93E);
            }
        }
    } else {
        this->unk_18E = temp_v1 + 1;
        if (this->unk_18E == 0xA) {
            Audio_PlayActorSound2((Actor *) this, 0x3863U);
        }
        if ((s32) this->unk_18E >= 0xC) {
            Math_ScaledStepToS(&this->unk_196, -0x5C71, 0x88);
        }
    }
    func_808B15B8(this);
}

void func_808B3044(EnDekubaba *arg0) {
    arg0->unk_18E = 9;
    arg0->unk_23C.base.acFlags |= 1;
    arg0->actionFunc = func_808B3078;
    arg0->unk_144.animPlaybackSpeed = -1.0f;
}

void func_808B3078(EnDekubaba *this, GlobalContext *globalCtx) {
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_v1 = this->unk_18E;
    if ((s32) temp_v1 >= 9) {
        temp_s0 = Math_SmoothStepToS((s16 *) &this->actor.shape, 0x1800, 1, 0x11C6, (s16) 0x71C);
        temp_s0_2 = temp_s0 | Math_SmoothStepToS(&this->unk_192, -0x1555, 1, 0xAAA, (s16) 0x71C);
        temp_s0_3 = temp_s0_2 | Math_SmoothStepToS(&this->unk_194, -0x38E3, 1, 0xE38, (s16) 0x71C);
        if ((temp_s0_3 | Math_SmoothStepToS(&this->unk_196, -0x5C71, 1, 0x11C6, (s16) 0x71C)) == 0) {
            this->unk_18E = 8;
        }
    } else {
        if (temp_v1 != 0) {
            this->unk_18E = temp_v1 - 1;
        }
        if (this->unk_18E == 0) {
            func_808B2608(this, 0x1800, 1);
        }
    }
    func_808B15B8(this);
}

void func_808B3170(Actor *arg0, s32 arg1) {
    SkelAnime_ChangeAnimTransitionStop(arg0 + 0x144, &D_06000208, -5.0f);
    arg0->unk_24D = (u8) (arg0->unk_24D & 0xFFFE);
    arg0[1].focus.rot.y = (s16) arg1;
    Actor_SetScale(arg0, arg0->unk_1F8 * 0.01f);
    if (arg1 == 2) {
        func_800BCB70(arg0, 0, 0x9B, 0, (s16) 0x2A);
    } else if (arg1 == 3) {
        func_800BCB70(arg0, 0, 0x9B, 0, (s16) 0x2A);
        arg0->unk_18C = 0x20;
        arg0->unk_200 = 0.75f;
        arg0->unk_1FC = 2.0f;
    } else {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x2A);
    }
    arg0[1].focus.pos.z = (bitwise f32) func_808B3280;
}

void func_808B3280(EnDekubaba *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    temp_s0 = Math_ScaledStepToS((s16 *) &this->actor.shape, -0x4000, 0xE38) & 1;
    temp_s0_2 = temp_s0 & Math_ScaledStepToS(&this->unk_192, -0x4000, 0xE38);
    temp_s0_3 = temp_s0_2 & Math_ScaledStepToS(&this->unk_194, -0x4000, 0xE38);
    if ((temp_s0_3 & Math_ScaledStepToS(&this->unk_196, -0x4000, 0xE38)) != 0) {
        if (this->actor.colChkInfo.health == 0) {
            func_808B3768(this);
        } else {
            this->unk_23C.base.acFlags |= 1;
            if (this->unk_18E == 0) {
                if (this->actor.xzDistToPlayer < (80.0f * this->unk_1F8)) {
                    func_808B2890(this);
                } else {
                    func_808B3044(this);
                }
            } else {
                func_808B39AC(this);
            }
        }
    }
    func_808B15B8(this);
}

void func_808B3390(Actor *arg0) {
    arg0[1].focus.rot.y = 0;
    arg0->unk_160 = 0.0f;
    arg0->world.rot.y = arg0->shape.rot.y + 0x8000;
    arg0->unk_24D = (u8) (arg0->unk_24D & 0xFFFE);
    arg0->speedXZ = arg0->unk_1F8 * 3.0f;
    arg0->flags |= 0x30;
    arg0[1].focus.pos.z = func_808B3404;
    arg0->gravity = -0.8f;
    arg0->velocity.y = 4.0f;
}

void func_808B3404(EnDekubaba *this, GlobalContext *globalCtx) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp68;
    PosRot *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_v0;
    s32 temp_s0_2;
    u16 temp_v0_2;
    s32 phi_s0;

    Math_StepToF(&this->actor.speedXZ, 0.0f, this->unk_1F8 * 0.1f);
    temp_v0 = this->unk_18E;
    if (temp_v0 == 0) {
        Math_ScaledStepToS((s16 *) &this->actor.shape, 0x4800, 0x71C);
        Math_ScaledStepToS(&this->unk_192, 0x4800, 0x71C);
        Math_ScaledStepToS(&this->unk_194, 0x4800, 0x71C);
        temp_f0 = this->unk_1F8;
        temp_s0 = &this->actor.world;
        EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_s0, temp_f0 * 3.0f, 0, (s16) (s32) (temp_f0 * 12.0f), (s16) (s32) (temp_f0 * 5.0f), (s16) 1, (s16) -1, (s16) 0xA, NULL);
        if ((this->actor.scale.x > 0.005f) && ((temp_v0_2 = this->actor.bgCheckFlags, ((temp_v0_2 & 2) != 0)) || ((temp_v0_2 & 8) != 0))) {
            temp_f0_2 = this->unk_1F8;
            this->actor.scale.z = 0.0f;
            this->actor.scale.y = 0.0f;
            this->actor.scale.x = 0.0f;
            this->actor.speedXZ = 0.0f;
            this->actor.flags &= -6;
            EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) temp_s0, temp_f0_2 * 3.0f, 0, (s16) (s32) (temp_f0_2 * 12.0f), (s16) (s32) (temp_f0_2 * 5.0f), (s16) 0xF, (s16) -1, (s16) 0xA, NULL);
        }
        if ((this->actor.bgCheckFlags & 2) != 0) {
            Audio_PlayActorSound2((Actor *) this, 0x387BU);
            this->unk_18E = 1;
            return;
        }
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 1) {
        sp78.unk_0 = this->actor.world.pos.x;
        (&sp78)[1] = this->actor.world.pos.y;
        (&sp78)[2] = this->actor.world.pos.z;
        temp_f24 = Math_SinS(this->actor.shape.rot.x) * 20.0f;
        sp68 = Math_CosS(this->actor.shape.rot.x);
        temp_f20 = Math_SinS(this->actor.shape.rot.y) * (-20.0f * sp68);
        sp68 = Math_CosS(this->actor.shape.rot.x);
        temp_f22 = Math_CosS(this->actor.shape.rot.y) * (-20.0f * sp68);
        phi_s0 = 0;
        do {
            func_800B1210(globalCtx, (Vec3f *) &sp78, &D_801D15B0, &D_801D15B0, (s16) 0x1F4, (s16) 0x32);
            temp_s0_2 = phi_s0 + 1;
            sp78 += temp_f20;
            sp7C += temp_f24;
            sp80 += temp_f22;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 4);
        temp_f0_3 = this->unk_1F8;
        func_800B1210(globalCtx, (Vec3f *) &this->actor.home, &D_801D15B0, &D_801D15B0, (s16) (s32) (temp_f0_3 * 500.0f), (s16) (s32) (temp_f0_3 * 100.0f));
        func_808B3E40(this, globalCtx);
    }
}

void func_808B3768(EnDekubaba *arg0) {
    SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, -1.5f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), 0.0f, (u8) 2, -3.0f);
    arg0->actionFunc = func_808B37E8;
    arg0->unk_23C.base.acFlags &= 0xFFFE;
}

void func_808B37E8(EnDekubaba *this, GlobalContext *globalCtx) {
    PosRot *sp38;
    PosRot *temp_a1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f2;

    Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, this->unk_1F8 * 5.0f);
    temp_f0 = this->unk_1F8 * 0.1f * 0.01f;
    if (Math_StepToF((f32 *) &this->actor.scale, temp_f0, temp_f0) != 0) {
        temp_f0_2 = this->unk_1F8;
        func_800B1210(globalCtx, (Vec3f *) &this->actor.home, &D_801D15B0, &D_801D15B0, (s16) (s32) (temp_f0_2 * 500.0f), (s16) (s32) (temp_f0_2 * 100.0f));
        if (this->actor.dropFlag == 0) {
            temp_a1 = &this->actor.world;
            sp38 = temp_a1;
            Item_DropCollectible(globalCtx, (Vec3f *) temp_a1, 0xCU);
            if (this->actor.params == 1) {
                Item_DropCollectible(globalCtx, (Vec3f *) temp_a1, 0xCU);
                Item_DropCollectible(globalCtx, (Vec3f *) sp38, 0xCU);
            }
        } else {
            Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x30);
        }
        Actor_MarkForDeath((Actor *) this);
    }
    temp_f0_3 = this->unk_1F8;
    temp_f2 = this->actor.scale.x;
    this->actor.shape.rot.z += 0x1C70;
    this->actor.scale.z = temp_f2;
    this->actor.scale.y = temp_f2;
    EffectSsHahen_SpawnBurst(globalCtx, (Vec3f *) &this->actor.home, temp_f0_3 * 3.0f, 0, (s16) (s32) (temp_f0_3 * 12.0f), (s16) (s32) (temp_f0_3 * 5.0f), (s16) 1, (s16) -1, (s16) 0xA, NULL);
}

void func_808B39AC(EnDekubaba *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;

    temp_v0 = arg0->unk_23C.elements;
    temp_v1 = 3 << 6;
    (temp_v0 + 0x40)->unk_16 = (s8) (temp_v0[1].info.bumperFlags | 1);
    temp_v0_2 = arg0->unk_23C.elements;
    (temp_v0_2 + 0x40)->unk_56 = (s8) (temp_v0_2[2].info.bumperFlags | 1);
    temp_v0_3 = arg0->unk_23C.elements + temp_v1;
    temp_v0_3->unk_16 = (u8) (temp_v0_3->unk_16 | 1);
    temp_v0_4 = arg0->unk_23C.elements + temp_v1;
    temp_v0_4->unk_56 = (u8) (temp_v0_4->unk_56 | 1);
    temp_v0_5 = arg0->unk_23C.elements + temp_v1;
    temp_v0_5->unk_96 = (u8) (temp_v0_5->unk_96 | 1);
    temp_v0_6 = arg0->unk_23C.elements + temp_v1;
    temp_v0_6->unk_D6 = (u8) (temp_v0_6->unk_D6 | 1);
    if (arg0->unk_18E == 1) {
        SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, 4.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), (u8) 0, -3.0f);
        arg0->unk_18E = 0x28;
    } else {
        SkelAnime_ChangeAnim(arg0 + 0x144, &D_060002B8, 0.0f, 0.0f, (f32) SkelAnime_GetFrameCount((AnimationHeaderCommon *) &D_060002B8), (u8) 0, -3.0f);
        if (arg0->unk_18E == 2) {
            arg0->unk_18E = 0x28;
        } else {
            arg0->unk_18E = 0x28;
        }
    }
    arg0->actor.world.pos.x = arg0->actor.home.pos.x;
    arg0->actionFunc = func_808B3B48;
    arg0->actor.world.pos.z = arg0->actor.home.pos.z;
    arg0->actor.world.pos.y = arg0->actor.home.pos.y + (60.0f * arg0->unk_1F8);
}

void func_808B3B48(EnDekubaba *this, GlobalContext *globalCtx) {
    EnDekubaba *temp_a0_2;
    EnDekubaba *temp_a1;
    SkelAnime *temp_a0;
    s16 temp_v0;

    temp_a0 = &this->unk_144;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a1 = this;
    temp_v0 = temp_a1->unk_18E;
    temp_a0_2 = temp_a1;
    if (temp_v0 != 0) {
        temp_a1->unk_18E = temp_v0 - 1;
    }
    if (temp_a1->unk_18E == 0) {
        this = temp_a1;
        func_808B1530(temp_a0_2, temp_a1);
        if (this->actor.xzDistToPlayer < (80.0f * this->unk_1F8)) {
            func_808B2890(this, (s16) this);
            return;
        }
        func_808B3044(this, this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_808B3BE4(Actor *arg0) {
    arg0[1].focus.rot.z = -0x6000;
    arg0[1].unk_52 = -0x5000;
    arg0[1].sfx = -0x4800;
    func_808B1530();
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x23);
    arg0[1].focus.pos.z = (bitwise f32) func_808B3C50;
    arg0->unk_24D = (u8) (arg0->unk_24D & 0xFFFE);
}

void func_808B3C50(EnDekubaba *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s32 phi_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    Math_ScaledStepToS((s16 *) &this->actor.shape, this->unk_192, 0x71C);
    Math_ScaledStepToS(&this->unk_192, this->unk_194, 0x71C);
    Math_ScaledStepToS(&this->unk_194, this->unk_196, 0x71C);
    if (Math_ScaledStepToS(&this->unk_196, this->unk_190, 0x71C) != 0) {
        this->unk_190 = -0x4000 - (s32) ((f32) (this->unk_190 + 0x4000) * 0.8f);
    }
    temp_v0 = this->unk_190 + 0x4000;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 < 0x100) {
        this->unk_23C.base.acFlags |= 1;
        if (this->actor.xzDistToPlayer < (80.0f * this->unk_1F8)) {
            func_808B2890(this);
        } else {
            func_808B3044(this);
        }
    }
    func_808B15B8(this);
}

void func_808B3D74(Actor *arg0) {
    func_808B1798(arg0);
    arg0[1].focus.pos.z = (bitwise f32) func_808B3DA8;
}

void func_808B3DA8(EnDekubaba *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    if (this->unk_18E == 0) {
        func_808B1814();
        if (this->actor.colChkInfo.health == 0) {
            func_808B3768(this);
            return;
        }
        if (this->actor.xzDistToPlayer < (80.0f * this->unk_1F8)) {
            func_808B2890(this);
            return;
        }
        func_808B3044(this);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void func_808B3E40(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    temp_a0 = arg0;
    arg0 = arg0;
    Actor_SetScale(temp_a0, 0.03f);
    arg0->shape.rot.x += -0x4000;
    arg0->shape.yOffset = 1000.0f;
    arg0->gravity = 0.0f;
    arg0->velocity.y = 0.0f;
    arg0->shape.shadowScale = 3.0f;
    func_800BC154(arg1, arg1 + 0x1CA0, arg0, 8U);
    arg0->flags &= -0x21;
    arg0[1].focus.rot.y = 0xC8;
    arg0[1].focus.pos.z = (bitwise f32) func_808B3EE8;
    arg0->unk_1FC = 0.0f;
}

void func_808B3EE8(EnDekubaba *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk_18E;
    if (temp_v0 != 0) {
        this->unk_18E = temp_v0 - 1;
    }
    if ((Actor_HasParent((Actor *) this, globalCtx) != 0) || (this->unk_18E == 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    func_800B8B84(this, globalCtx, 0x19);
}

void func_808B3F50(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 sp20;
    f32 temp_v0_5;
    s16 temp_v0_7;
    s32 temp_a2;
    u8 temp_v0;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_6;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_a2;
    s32 phi_a2_2;
    void *phi_v0_2;

    temp_v0 = arg0->unk_24D;
    if ((temp_v0 & 2) != 0) {
        arg0->unk_24D = (u8) (temp_v0 & 0xFFFD);
        func_800BE2B8(arg0, arg0 + 0x23C);
        if ((arg0->unk_250 != 0xC) && (phi_a2 = 0, (arg0->colChkInfo.damageEffect != 0xD))) {
            phi_v0 = arg0->unk_258;
loop_4:
            phi_a2_2 = phi_a2;
            phi_v0_2 = phi_v0;
            if ((phi_v0->unk_16 & 2) == 0) {
                temp_a2 = phi_a2 + 1;
                temp_v0_2 = phi_v0 + 0x40;
                phi_v0 = temp_v0_2;
                phi_a2 = temp_a2;
                phi_a2_2 = temp_a2;
                phi_v0_2 = temp_v0_2;
                if (temp_a2 != 7) {
                    goto loop_4;
                }
            }
            if ((phi_a2_2 != 7) && ((arg0->unk_18C != 0xA) || ((*phi_v0_2->unk_24 & 0xDB0B3) == 0))) {
                sp20 = phi_a2_2;
                func_808B1814(arg0, arg1, phi_a2_2);
                sp24 = arg0->colChkInfo.health - arg0->colChkInfo.damage;
                if (func_808B3B48 != (bitwise s32) arg0[1].focus.pos.z) {
                    temp_v0_3 = arg0->colChkInfo.damageEffect;
                    if (temp_v0_3 == 3) {
                        func_808B3D74(arg0);
                    } else if (temp_v0_3 == 5) {
                        func_808B3170(arg0, 3, phi_a2_2);
                    } else if (temp_v0_3 == 1) {
                        func_808B3170(arg0, 2, phi_a2_2);
                    } else {
                        func_808B16BC(arg0, arg1, phi_a2_2);
                        if (func_808B2CB8 == (bitwise s32) arg0[1].focus.pos.z) {
                            if (sp24 <= 0) {
                                sp24 = 1;
                            }
                            func_808B3170(arg0, 1);
                        } else {
                            func_808B3170(arg0, 0);
                        }
                    }
                } else {
                    temp_v0_4 = arg0->colChkInfo.damageEffect;
                    if (temp_v0_4 == 0xF) {
                        if (sp24 > 0) {
                            func_808B3BE4(arg0);
                        } else {
                            func_808B3390(arg0);
                        }
                    } else if (temp_v0_4 == 5) {
                        func_808B3170(arg0, 3, phi_a2_2);
                    } else if (temp_v0_4 == 1) {
                        func_808B3170(arg0, 2, phi_a2_2);
                    } else if (temp_v0_4 == 3) {
                        func_808B3D74(arg0);
                    } else {
                        func_808B16BC(arg0, arg1, phi_a2_2);
                        func_808B3170(arg0, 0);
                    }
                }
                if (sp24 < 0) {
                    arg0->colChkInfo.health = 0;
                } else {
                    arg0->colChkInfo.health = (u8) sp24;
                }
                goto block_42;
            }
            /* Duplicate return node #54. Try simplifying control flow for better match */
            return;
        }
        /* Duplicate return node #54. Try simplifying control flow for better match */
        return;
    }
    if ((arg1->actorCtx.unk2 != 0) && (arg0->xyzDistToPlayerSq < 40000.0f) && (arg0->unk_250 != 0xC) && (temp_v0_5 = arg0[1].focus.pos.z, (func_808B3B48 != (bitwise s32) temp_v0_5)) && (func_808B3280 != (bitwise s32) temp_v0_5) && (temp_v0_6 = arg0->colChkInfo.health, (temp_v0_6 != 0))) {
        arg0->colChkInfo.health = temp_v0_6 - 1;
        arg0->dropFlag = 0;
        func_808B3170(arg0, 1);
block_42:
        if (arg0->colChkInfo.health != 0) {
            temp_v0_7 = arg0[1].focus.rot.y;
            if ((temp_v0_7 == 2) || (temp_v0_7 == 3)) {
                Audio_PlayActorSound2(arg0, 0x389EU);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x385EU);
            return;
        }
        Enemy_StartFinishingBlow(arg1, arg0);
        if (arg0->unk_18C == 0xA) {
            arg0[1].focus.rot.y = 3;
            arg0->unk_24D = (u8) (arg0->unk_24D & 0xFFFE);
        } else if (arg0->unk_1FC > 1.5f) {
            arg0->unk_1FC = 1.5f;
        }
        if (arg0->params == 1) {
            Audio_PlayActorSound2(arg0, 0x385FU);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3862U);
        /* Duplicate return node #54. Try simplifying control flow for better match */
    }
}

void EnDekubaba_Update(Actor *thisx, GlobalContext *globalCtx) {
    void (*sp2C)(EnDekubaba *, GlobalContext *);
    f32 temp_f0;
    u8 temp_v0;
    void (*temp_v0_2)(EnDekubaba *, GlobalContext *);
    EnDekubaba *this = (EnDekubaba *) thisx;

    temp_v0 = this->unk_23C.base.atFlags;
    if ((temp_v0 & 2) != 0) {
        this->unk_23C.base.atFlags = temp_v0 & 0xFFFD;
        func_808B3044(this);
    }
    func_808B3F50((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    temp_v0_2 = this->actionFunc;
    if (func_808B3404 == temp_v0_2) {
        Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, this->unk_1F8 * 15.0f, 10.0f, 5U);
    } else if (func_808B3EE8 != temp_v0_2) {
        sp2C = func_808B3EE8;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
        if (this->unk_238 == 0) {
            this->unk_238 = this->actor.floorPoly;
        }
    }
    if (func_808B29C4 == this->actionFunc) {
        sp2C = func_808B3EE8;
        CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_23C);
        this->actor.flags |= 0x1000000;
    }
    if ((this->unk_23C.base.acFlags & 1) != 0) {
        sp2C = func_808B3EE8;
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_23C);
    }
    if (func_808B3EE8 != this->actionFunc) {
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk_23C);
    }
    if (this->unk_1FC > 0.0f) {
        if (this->unk_18C != 0xA) {
            Math_StepToF(&this->unk_1FC, 0.0f, 0.05f);
            temp_f0 = (this->unk_1FC + 1.0f) * 0.375f;
            this->unk_200 = temp_f0;
            if (temp_f0 > 0.75f) {
                this->unk_200 = 0.75f;
                return;
            }
            this->unk_200 = this->unk_200;
            return;
        }
        if (Math_StepToF(&this->unk_204, 0.75f, 0.01875f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #20. Try simplifying control flow for better match */
    }
}

void func_808B4548(Actor *arg0, GraphicsContext **arg1) {
    f32 sp2C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    s32 temp_s0_2;
    Vec3f *phi_s1;
    s32 phi_s0;

    temp_f0 = arg0->unk_1F8;
    temp_s0 = *arg1;
    sp2C = temp_f0 * 0.01f;
    SysMatrix_InsertTranslation(arg0->home.pos.x, arg0->home.pos.y + (-6.0f * temp_f0), arg0->home.pos.z, 0);
    SysMatrix_InsertRotation(arg0[1].focus.unk_12, arg0->shape.rot.y, 0, 1);
    Matrix_Scale(sp2C, sp2C, sp2C, 1);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06001330;
    phi_s1 = arg0 + 0x214;
    phi_s0 = 0xC;
    do {
        SysMatrix_GetStateTranslation(phi_s1);
        temp_s0_2 = phi_s0 + 0xC;
        phi_s1 = &phi_s1[1];
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 != 0x30);
    Actor_SetHeight(arg0, 0.0f);
}

void func_808B465C(EnDekubaba *arg0, GraphicsContext **arg1) {
    f32 spD8;
    f32 spD4;
    f32 spD0;
    ? spA0;
    s32 sp90;
    ColliderJntSph *sp6C;
    void *sp5C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_fp;
    Vec3f *temp_s3;
    f32 temp_f20;
    f32 temp_f20_2;
    EnDekubaba *phi_s2;
    u32 *phi_s4;
    s32 phi_s5;
    s32 phi_s6;
    s32 phi_s7;
    Vec3f *phi_s3;

    temp_fp = *arg1;
    if (func_808B3404 == arg0->actionFunc) {
        sp90 = 2;
    } else {
        sp90 = 3;
    }
    temp_f20 = arg0->unk_1F8 * 0.01f;
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, 0);
    Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
    SysMatrix_CopyCurrentState((MtxF *) &spA0);
    phi_s2 = arg0;
    phi_s4 = D_808B4EA0;
    if (sp90 > 0) {
        sp6C = arg0 + 0x23C;
        sp5C = (sp90 * 0xC) + arg0 + 0x214;
        phi_s5 = 0x33;
        phi_s6 = 0x34;
        phi_s7 = 0;
        phi_s3 = arg0 + 0x214;
        do {
            spD4 += 20.0f * Math_SinS(phi_s2->unk_192) * arg0->unk_1F8;
            temp_f20_2 = Math_CosS(phi_s2->unk_192) * 20.0f * arg0->unk_1F8;
            spD0 -= temp_f20_2 * Math_SinS(arg0->actor.shape.rot.y);
            spD8 -= temp_f20_2 * Math_CosS(arg0->actor.shape.rot.y);
            SysMatrix_SetCurrentState((MtxF *) &spA0);
            SysMatrix_InsertRotation(phi_s2->unk_192, arg0->actor.shape.rot.y, 0, 1);
            temp_v0 = temp_fp->polyOpa.p;
            temp_fp->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_2 = temp_fp->polyOpa.p;
            temp_fp->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = *phi_s4;
            Collider_UpdateSpheres(phi_s5, sp6C);
            Collider_UpdateSpheres(phi_s6, sp6C);
            if (phi_s7 == 0) {
                if (func_808B3C50 != arg0->actionFunc) {
                    arg0->actor.focus.pos.x = spD0;
                    arg0->actor.focus.pos.y = spD4;
                    arg0->actor.focus.pos.z = spD8;
                } else {
                    arg0->actor.focus.pos.x = arg0->actor.home.pos.x;
                    arg0->actor.focus.pos.z = arg0->actor.home.pos.z;
                    arg0->actor.focus.pos.y = arg0->actor.home.pos.y + (40.0f * arg0->unk_1F8);
                }
            }
            SysMatrix_GetStateTranslation(phi_s3);
            temp_s3 = &phi_s3[1];
            phi_s2 += 2;
            phi_s4 += 4;
            phi_s5 += 2;
            phi_s6 += 2;
            phi_s7 += 0xC;
            phi_s3 = temp_s3;
        } while (temp_s3 != sp5C);
    }
}

void func_808B48FC(EnDekubaba *arg0, GraphicsContext **arg1) {
    GraphicsContext *sp2C;
    Gfx *sp24;
    ColliderJntSph *sp1C;
    ColliderJntSph *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_t0;

    temp_t0 = *arg1;
    sp2C = temp_t0;
    SysMatrix_InsertRotation(arg0->unk_196, arg0->actor.shape.rot.y, 0, 1);
    temp_v0 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp2C = temp_t0;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_t0->polyOpa.p;
    temp_t0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06001828;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_a1 = arg0 + 0x23C;
    sp1C = temp_a1;
    Collider_UpdateSpheres(0x37, temp_a1);
    Collider_UpdateSpheres(0x38, temp_a1);
    SysMatrix_GetStateTranslation(arg0 + 0x22C);
}

void func_808B49C8(EnDekubaba *arg0, GraphicsContext **arg1) {
    ? sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C448(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w1 = 0xFF;
    temp_v0->words.w0 = 0xFA000000;
    func_800C0094(arg0->unk_238, arg0->actor.home.pos.x, arg0->actor.home.pos.y, arg0->actor.home.pos.z, (MtxF *) &sp48);
    SysMatrix_InsertMatrix((MtxF *) &sp48, 0);
    temp_f12 = arg0->unk_1F8 * 0.15f;
    Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDA380003;
    temp_v0_2->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_3->words.w1 = (u32) D_04076BC0;
}

void func_808B4ABC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 1) {
        Collider_UpdateSpheres(arg1, arg4 + 0x23C);
    }
}

void EnDekubaba_Draw(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp50;
    Gfx *sp44;
    Gfx *sp3C;
    Vec3f *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    Vec3f *temp_a0_2;
    s16 temp_v0_3;
    EnDekubaba *this = (EnDekubaba *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_a0_2 = &this->unk_208;
    sp30 = temp_a0_2;
    Math_Vec3f_Copy(temp_a0_2, (Vec3f *) &this->actor.world);
    if (func_808B3EE8 != this->actionFunc) {
        SkelAnime_Draw(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, NULL, func_808B4ABC, (Actor *) this);
        if (func_808B1B14 == this->actionFunc) {
            func_808B4548((Actor *) this, (GraphicsContext **) globalCtx);
        } else {
            func_808B465C(this, (GraphicsContext **) globalCtx);
        }
        sp50 = this->unk_1F8 * 0.01f;
        SysMatrix_InsertTranslation(this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, 0);
        Matrix_RotateY(this->actor.home.rot.y, 1U);
        Matrix_Scale(sp50, sp50, sp50, 1);
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp44 = temp_v0;
        sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_060010F0;
        temp_v0_2->words.w0 = 0xDE000000;
        if (func_808B3404 == this->actionFunc) {
            func_808B48FC(this, (GraphicsContext **) globalCtx);
        }
        if (this->unk_238 != 0) {
            func_808B49C8(this, (GraphicsContext **) globalCtx);
        }
    } else {
        temp_v0_3 = this->unk_18E;
        if (((s32) temp_v0_3 >= 0x29) || ((temp_v0_3 & 1) != 0)) {
            SysMatrix_InsertTranslation(0.0f, 0.0f, 200.0f, 1);
            temp_v0_4 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDA380003;
            sp3C = temp_v0_4;
            sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_5 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w1 = (u32) &D_06003070;
            temp_v0_5->words.w0 = 0xDE000000;
        }
    }
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) sp30, 4, this->unk_200 * this->unk_1F8, this->unk_204, this->unk_1FC, (u8) (s32) this->unk_18C);
}
