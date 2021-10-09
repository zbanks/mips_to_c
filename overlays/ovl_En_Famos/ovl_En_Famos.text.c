typedef struct EnFamos {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk144;                   /* inferred */
    /* 0x188 */ Vec3s unk188;                       /* inferred */
    /* 0x18E */ char pad18E[0x1E];                  /* maybe part of unk188[6]? */
    /* 0x1AC */ Vec3s unk1AC;                       /* inferred */
    /* 0x1B2 */ char pad1B2[0x1E];                  /* maybe part of unk1AC[6]? */
    /* 0x1D0 */ void (*actionFunc)(EnFamos *, GlobalContext *);
    /* 0x1D4 */ u8 unk1D4;                          /* inferred */
    /* 0x1D5 */ s8 unk1D5;                          /* inferred */
    /* 0x1D6 */ u8 unk1D6;                          /* inferred */
    /* 0x1D7 */ char pad1D7[0x1];
    /* 0x1D8 */ s8 unk1D8;                          /* inferred */
    /* 0x1D9 */ char pad1D9[0x1];
    /* 0x1DA */ s16 unk1DA;                         /* inferred */
    /* 0x1DC */ char pad1DC[0x2];
    /* 0x1DE */ s16 unk1DE;                         /* inferred */
    /* 0x1E0 */ s16 unk1E0;                         /* inferred */
    /* 0x1E2 */ s16 unk1E2;                         /* inferred */
    /* 0x1E4 */ char pad1E4[0x4];                   /* maybe part of unk1E2[3]? */
    /* 0x1E8 */ void *unk1E8;                       /* inferred */
    /* 0x1EC */ f32 unk1EC;                         /* inferred */
    /* 0x1F0 */ f32 unk1F0;                         /* inferred */
    /* 0x1F4 */ char pad1F4[0x18];                  /* maybe part of unk1F0[7]? */
    /* 0x20C */ ColliderCylinder unk20C;            /* inferred */
    /* 0x258 */ ColliderCylinder unk258;            /* inferred */
    /* 0x2A4 */ ColliderJntSph unk2A4;              /* inferred */
    /* 0x2C4 */ ColliderJntSphElement unk2C4;       /* inferred */
    /* 0x304 */ char pad304[0x310];                 /* maybe part of unk2C4[13]? */
} EnFamos;                                          /* size = 0x614 */

struct _mips2c_stack_EnFamos_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFamos_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnFamos_Init {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFamos_Update {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ ColliderCylinder *sp28;              /* inferred */
    /* 0x2C */ CollisionCheckContext *sp2C;         /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808ACB58 {
    /* 0x00 */ char pad0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808ACD2C {
    /* 0x00 */ char pad0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_808ACF1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808ACF98 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AD05C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD170 {};              /* size 0x0 */

struct _mips2c_stack_func_808AD18C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD1F0 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ Vec3f *sp18;                         /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD294 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD31C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Vec3f *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD378 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD3E8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AD42C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808AD54C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AD5B0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808AD66C {};              /* size 0x0 */

struct _mips2c_stack_func_808AD68C {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808AD7EC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AD840 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AD888 {};              /* size 0x0 */

struct _mips2c_stack_func_808AD8B8 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808ADA74 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ SkelAnime *sp24;                     /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808ADAE8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808ADB4C {};              /* size 0x0 */

struct _mips2c_stack_func_808ADB70 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808ADC40 {};              /* size 0x0 */

struct _mips2c_stack_func_808ADC64 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808ADD20 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808ADDA8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808ADE00 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808ADE74 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808ADFA4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808ADFF0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AE030 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808AE304 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AE3A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808AE3FC {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ char pad44[0x4];
    /* 0x48 */ void *sp48;                          /* inferred */
    /* 0x4C */ char pad4C[0x4];
};                                                  /* size = 0x50 */

? func_800DFD04(s32, ?, ?, ?);                      /* extern */
void func_808ACB58(Actor *arg0);                    /* static */
void func_808ACD2C(void *arg0);                     /* static */
s32 func_808ACF1C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808ACF98(Actor *arg0);                    /* static */
void func_808AD05C(Actor *arg0);                    /* static */
void func_808AD170(EnFamos *arg0);                  /* static */
void func_808AD18C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AD1F0(EnFamos *arg0);                  /* static */
void func_808AD294(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AD31C(Actor *arg0);                    /* static */
void func_808AD378(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AD3E8(Actor *arg0);                    /* static */
void func_808AD42C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AD54C(Actor *arg0);                    /* static */
void func_808AD5B0(Actor *arg0, ? arg1);            /* static */
void func_808AD66C(Actor *arg0);                    /* static */
void func_808AD68C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808AD7EC(Actor *arg0);                    /* static */
void func_808AD840(Actor *arg0, ? arg1);            /* static */
void func_808AD888(Actor *arg0);                    /* static */
void func_808AD8B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_808ADA74(Actor *arg0);                    /* static */
void func_808ADAE8(Actor *arg0, ? arg1);            /* static */
void func_808ADB4C(Actor *arg0, Actor *);           /* static */
void func_808ADB70(Actor *arg0, ? arg1);            /* static */
void func_808ADC40(Actor *arg0);                    /* static */
void func_808ADC64(Actor *arg0, GlobalContext *arg1); /* static */
void func_808ADD20(Actor *arg0);                    /* static */
void func_808ADDA8(void *arg0, ? arg1);             /* static */
void func_808ADE00(Actor *arg0);                    /* static */
void func_808ADE74(Actor *arg0, GlobalContext *arg1); /* static */
void func_808ADFA4(Actor *arg0);                    /* static */
void func_808ADFF0(Actor *arg0, ? arg1);            /* static */
void func_808AE030(EnFamos *arg0);                  /* static */
s32 func_808AE304(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_808AE3A8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_808AE3FC(EnFamos *arg0, GraphicsContext **arg1); /* static */
extern AnimationHeader D_060000F8;
extern SkeletonHeader D_06003D38;
extern AnimationHeader D_06003DC8;
static ColliderCylinderInit D_808AE600 = {
    {9, 0x10, 0xD, 0x39, 0x10, 1},
    {2, {0x20000000, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0x14, 0x50, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808AE62C = {
    {0xA, 0x10, 0, 0, 0x10, 1},
    {0, {0xF7CFFFFF, 4, 8}, {0xF7CFFFFF, 0, 0}, 1, 0, 0},
    {0x46, 0xA, 0, {0, 0, 0}},
};
static ColliderJntSphElementInit D_808AE658[2] = {
    {{0, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0}, {2, {{0x9C4, 0, 0}, 0x14}, 0x64}},
    {{0, {0, 0, 0}, {0x2000, 0, 0}, 0, 1, 0}, {2, {{0xFA24, 0, 0}, 0x14}, 0x64}},
};
static ColliderJntSphInit D_808AE6A0 = {{0xA, 0, 9, 0, 0x10, 0}, 2, &D_808AE658};
static void *D_808AE6B0[2] = {(void *)0x6003E30, (void *)0x6003E38};
static InitChainEntry D_808AE6B8[2];                /* unable to generate initializer */
static s32 D_808AE6C0 = 0;

void EnFamos_Init(EnFamos *this, GlobalContext *globalCtx) {
    Path *temp_s0;
    s16 temp_v0;
    s16 temp_v0_2;
    u8 temp_t8;
    void **temp_s0_2;
    void **phi_s0;
    f32 phi_f6;
    EnFamos *this = (EnFamos *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808AE6B8);
    temp_v0 = this->actor.params;
    if (temp_v0 != 0xFF) {
        temp_s0 = &globalCtx->setupPathList[temp_v0];
        this->unk1E8 = Lib_SegmentedToVirtual((void *) temp_s0->points);
        temp_t8 = temp_s0->count;
        this->unk1D6 = temp_t8;
        if ((temp_t8 & 0xFF) == 1) {
            this->unk1E8 = NULL;
            this->unk1D6 = 0;
        }
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B4024, 30.0f);
    SkelAnime_Init(globalCtx, &this->unk144, &D_06003D38, &D_06003DC8, &this->unk188, &this->unk1AC, 6);
    Collider_InitAndSetCylinder(globalCtx, &this->unk20C, (Actor *) this, &D_808AE600);
    Collider_InitAndSetCylinder(globalCtx, &this->unk258, (Actor *) this, &D_808AE62C);
    Collider_InitAndSetJntSph(globalCtx, &this->unk2A4, (Actor *) this, &D_808AE6A0, &this->unk2C4);
    phi_s0 = D_808AE6B0;
    if (D_808AE6C0 == 0) {
        do {
            temp_s0_2 = phi_s0 + 4;
            temp_s0_2->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != D_808AE6B8);
        D_808AE6C0 = 1;
    }
    temp_v0_2 = this->actor.shape.rot.x;
    this->actor.colChkInfo.mass = 0xFA;
    this->unk1EC = this->actor.world.pos.y;
    if ((s32) temp_v0_2 <= 0) {
        phi_f6 = 200.0f;
    } else {
        phi_f6 = (f32) temp_v0_2 * 40.0f * 0.1f;
    }
    this->unk1F0 = phi_f6;
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->unk1D5 = 1;
    this->unk1D8 = 1;
    if (this->unk1E8 != 0) {
        func_808AD1F0(this);
        return;
    }
    func_808AD170(this);
}

void EnFamos_Destroy(EnFamos *this, GlobalContext *globalCtx) {
    EnFamos *this = (EnFamos *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk20C);
    Collider_DestroyCylinder(globalCtx, &this->unk258);
    Collider_DestroyJntSph(globalCtx, &this->unk2A4);
}

void func_808ACB58(Actor *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s1;
    s16 temp_s2;
    s32 temp_s4;
    void *temp_s0;
    void *phi_s0;
    s32 phi_s4;

    arg0->unk1DE = 0x28;
    phi_s0 = arg0 + 0x344;
    phi_s4 = 0;
    do {
        temp_s2 = (s16) (Rand_Next() >> 0x10);
        temp_s1 = Rand_S16Offset(0x1800, 0x2800);
        temp_f22 = Rand_ZeroFloat(5.0f) + 5.0f;
        temp_f20 = Math_CosS(temp_s1);
        phi_s0->unkC = (f32) (Math_SinS(temp_s2) * (temp_f22 * temp_f20));
        phi_s0->unk10 = (f32) ((Math_SinS(temp_s1) * temp_f22) + 3.0f);
        temp_f20_2 = Math_CosS(temp_s1);
        phi_s0->unk14 = (f32) (Math_CosS(temp_s2) * (temp_f22 * temp_f20_2));
        phi_s0->unk18 = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1A = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk0 = (f32) ((Math_SinS(temp_s2) * 20.0f) + arg0->world.pos.x);
        phi_s0->unk4 = (f32) arg0->floorHeight;
        phi_s0->unk8 = (f32) ((Math_CosS(temp_s2) * 20.0f) + arg0->world.pos.z);
        temp_s4 = phi_s4 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-4 = (f32) (Rand_ZeroFloat(0.0015f) + 0.002f);
        phi_s0 = temp_s0;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x14);
}

void func_808ACD2C(void *arg0) {
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    s16 temp_s1;
    s16 temp_s2;
    s32 temp_s4;
    void *temp_s0;
    void *phi_s0;
    s32 phi_s4;

    arg0->unk1DE = 0x28;
    phi_s0 = arg0 + 0x344;
    phi_s4 = 0;
    do {
        temp_s2 = (s16) (Rand_Next() >> 0x10);
        temp_s1 = (s16) (Rand_Next() >> 0x12);
        temp_f22 = Rand_ZeroFloat(6.0f) + 7.0f;
        temp_f20 = Math_CosS(temp_s1);
        phi_s0->unkC = (f32) (Math_SinS(temp_s2) * (temp_f22 * temp_f20));
        phi_s0->unk10 = (f32) ((Math_SinS(temp_s1) * temp_f22) + 4.5f);
        temp_f20_2 = Math_CosS(temp_s1);
        phi_s0->unk14 = (f32) (Math_CosS(temp_s2) * (temp_f22 * temp_f20_2));
        phi_s0->unk18 = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1A = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk1C = (s16) (Rand_Next() >> 0x10);
        phi_s0->unk0 = (f32) ((Math_SinS(temp_s2) * 20.0f) + arg0->unk24);
        phi_s0->unk4 = (f32) (randPlusMinusPoint5Scaled(60.0f) + (arg0->unk28 + 40.0f));
        phi_s0->unk8 = (f32) ((Math_CosS(temp_s2) * 20.0f) + arg0->unk2C);
        temp_s4 = phi_s4 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-4 = (f32) (Rand_ZeroFloat(0.002f) + 0.0025000002f);
        phi_s0 = temp_s0;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x14);
}

s32 func_808ACF1C(Actor *arg0, GlobalContext *arg1) {
    if ((Player_GetMask(arg1) != 0x10) && (Actor_XZDistanceToPoint(arg1->actorCtx.actorList[2].first, arg0 + 0x200) < arg0->unk1F0) && (Actor_IsActorFacingLink(arg0, 0x5000) != 0)) {
        return 1;
    }
    return 0;
}

void func_808ACF98(Actor *arg0) {
    s16 temp_a0;
    s16 temp_v0;
    s32 phi_v1;

    if (arg0->unk1DA == 0) {
        arg0->unk1DA = 0x1E;
    }
    arg0->unk1DA = (s16) (arg0->unk1DA - 1);
    temp_a0 = arg0->unk1DA;
    arg0 = arg0;
    temp_v0 = arg0->unk1E6;
    arg0->world.pos.y = (Math_SinS((s16) (temp_a0 * 0x888)) * 10.0f) + arg0->unk1EC;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x4001) {
        func_800B9010(arg0, 0x3294U);
        return;
    }
    func_800B9010(arg0, 0x3293U);
}

void func_808AD05C(Actor *arg0) {
    s16 temp_v0_2;
    u8 temp_v0;
    u8 phi_v0;

    temp_v0 = arg0->unk2B5;
    if ((temp_v0 & 2) != 0) {
        arg0->unk2B5 = (u8) (temp_v0 & 0xFFFD);
        if (arg0->unk1D5 == 1) {
            if (arg0->unk1D4 != 0) {
                arg0->unk1D4 = 0U;
                Audio_PlayActorSound2(arg0, 0x3A92U);
            } else {
                arg0->unk1D4 = 1U;
                arg0->unk1E0 = 0x64;
                Audio_PlayActorSound2(arg0, 0x3A91U);
                Audio_PlayActorSound2(arg0, 0x3847U);
            }
            goto block_11;
        }
    } else {
        temp_v0_2 = arg0->unk1E0;
        if ((s32) temp_v0_2 > 0) {
            arg0->unk1E0 = (s16) (temp_v0_2 - 1);
            if (arg0->unk1E0 == 0) {
                if (arg0->unk1D4 != 0) {
                    Audio_PlayActorSound2(arg0, 0x3A92U);
                }
                arg0->unk1D4 = 0U;
block_11:
                arg0->unk1D5 = 0U;
            }
        }
    }
    if (arg0->unk1D5 == 0) {
        if (arg0->unk1D4 != 0) {
            phi_v0 = Math_ScaledStepToS(arg0 + 0x1E6, -0x8000, 0x1000);
        } else {
            phi_v0 = Math_ScaledStepToS(arg0 + 0x1E6, 0, 0x1000);
        }
        arg0->unk1D5 = phi_v0;
    }
}

void func_808AD170(EnFamos *arg0) {
    arg0->actionFunc = func_808AD18C;
    arg0->actor.speedXZ = 0.0f;
}

void func_808AD18C(Actor *arg0, GlobalContext *arg1) {
    func_808ACF98(arg0);
    if (arg0->unk1D8 != 0) {
        Math_Vec3f_Copy(arg0 + 0x200, (Vec3f *) &arg0->world);
    }
    if (func_808ACF1C(arg0, arg1) != 0) {
        func_808AD54C(arg0);
    }
}

void func_808AD1F0(Actor *arg0) {
    Vec3f *sp18;
    Vec3f *temp_a0;
    Vec3f *temp_a3;
    s32 temp_t1;
    u8 temp_t8;
    u8 temp_v0;
    u8 phi_v0;

    temp_a3 = arg0 + 0x1F4;
    temp_a0 = temp_a3;
    if (arg0->unk1D8 != 0) {
        temp_t8 = arg0->unk1D7 + 1;
        temp_v0 = temp_t8 & 0xFF;
        arg0->unk1D7 = temp_t8;
        phi_v0 = temp_v0;
        if (arg0->unk1D6 == temp_v0) {
            arg0->unk1D7 = 0U;
            phi_v0 = 0 & 0xFF;
        }
    } else {
        arg0->unk1D8 = 1U;
        phi_v0 = arg0->unk1D7;
    }
    temp_t1 = arg0->unk1E8;
    sp18 = temp_a3;
    arg0 = arg0;
    Math_Vec3s_ToVec3f(temp_a0, temp_t1 + (phi_v0 * 6));
    arg0->unk1E4 = Actor_YawToPoint(arg0, sp18);
    arg0->unk1D0 = func_808AD294;
    arg0->speedXZ = 0.0f;
}

void func_808AD294(Actor *arg0, GlobalContext *arg1) {
    func_808ACF98(arg0);
    if (arg0->unk1D8 != 0) {
        Math_Vec3f_Copy(arg0 + 0x200, (Vec3f *) &arg0->world);
    }
    if (func_808ACF1C(arg0, arg1) != 0) {
        func_808AD54C(arg0);
        return;
    }
    if (Math_ScaledStepToS(&arg0->shape.rot.y, arg0->unk1E4, 0x200) != 0) {
        func_808AD3E8(arg0);
    }
}

void func_808AD31C(Actor *arg0) {
    Vec3f *sp1C;
    Actor *temp_a0;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x200;
    sp1C = temp_a1;
    temp_a0 = arg0;
    arg0 = arg0;
    arg0->unk1E4 = Actor_YawToPoint(temp_a0, temp_a1);
    Math_Vec3f_Copy(arg0 + 0x1F4, temp_a1);
    arg0->unk1D0 = func_808AD378;
    arg0->speedXZ = 0.0f;
}

void func_808AD378(Actor *arg0, GlobalContext *arg1) {
    func_808ACF98(arg0);
    if (func_808ACF1C(arg0, arg1) != 0) {
        func_808AD54C(arg0);
        return;
    }
    if (Math_ScaledStepToS(&arg0->shape.rot.y, arg0->unk1E4, 0x200) != 0) {
        func_808AD3E8(arg0);
    }
}

void func_808AD3E8(Actor *arg0) {
    arg0->world.rot.y = arg0->shape.rot.y;
    arg0->world.rot.x = (s16) -Actor_PitchToPoint(arg0, arg0 + 0x1F4);
    arg0->unk1D0 = func_808AD42C;
}

void func_808AD42C(Actor *arg0, GlobalContext *arg1) {
    f32 sp24;
    Vec3f *sp20;
    Vec3f *temp_a1;

    temp_a1 = arg0 + 0x1F4;
    sp20 = temp_a1;
    sp24 = Actor_XZDistanceToPoint(arg0, temp_a1);
    arg0->shape.rot.y = Actor_YawToPoint(arg0, temp_a1);
    arg0->world.rot.y = arg0->shape.rot.y;
    func_808ACF98(arg0);
    if (arg0->unk1D8 != 0) {
        Math_Vec3f_Copy(arg0 + 0x200, (Vec3f *) &arg0->world);
    }
    if (func_808ACF1C(arg0, arg1) != 0) {
        func_808AD54C(arg0);
        return;
    }
    if (sp24 < 20.0f) {
        if (arg0->unk1E8 != 0) {
            func_808AD1F0((EnFamos *) arg0);
            return;
        }
        func_808AD170((EnFamos *) arg0);
        return;
    }
    if (sp24 < 40.0f) {
        Math_StepToF(&arg0->speedXZ, 0.5f, 0.3f);
        return;
    }
    Math_StepToF(&arg0->speedXZ, 3.0f, 0.3f);
}

void func_808AD54C(Actor *arg0) {
    Actor *temp_a2;
    Actor *phi_a2;

    temp_a2 = arg0;
    temp_a2->unk1DC = 8;
    temp_a2->world.rot.y = temp_a2->shape.rot.y;
    temp_a2->speedXZ = 0.0f;
    phi_a2 = temp_a2;
    if (temp_a2->unk1D8 == 1) {
        temp_a2->unk1D8 = 0U;
        arg0 = temp_a2;
        Math_Vec3f_Copy(temp_a2 + 0x200, temp_a2 + 0x24);
        phi_a2 = arg0;
    }
    phi_a2->unk1D0 = func_808AD5B0;
}

void func_808AD5B0(Actor *arg0, ? arg1) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->unk1E6;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x4001) {
        func_800B9010(arg0, 0x3294U);
    } else {
        func_800B9010(arg0, 0x3293U);
    }
    arg0->unk1DC = (s16) (arg0->unk1DC - 1);
    temp_v0_2 = arg0->unk1DC;
    if (temp_v0_2 == 0) {
        arg0->world.pos.y = arg0->unk1EC;
        func_808AD66C(arg0);
        return;
    }
    arg0->world.pos.y = (Math_SinS((s16) ((s32) (temp_v0_2 << 0x1C) >> 0x10)) * 30.0f) + arg0->unk1EC;
}

void func_808AD66C(Actor *arg0) {
    arg0->unk1DA = 0;
    arg0->unk1D0 = func_808AD68C;
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_808AD68C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Actor *temp_v1;
    u32 temp_v0;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp34 = temp_v1;
    func_808ACF98(arg0);
    Math_ScaledStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 0x800);
    arg0->world.rot.y = arg0->shape.rot.y;
    sp28 = temp_v1->world.pos.x;
    sp2C = temp_v1->world.pos.y + 100.0f;
    sp30 = temp_v1->world.pos.z;
    arg0->world.rot.x = (s16) -Actor_PitchToPoint(arg0, (Vec3f *) &sp28);
    Math_StepToF(&arg0->speedXZ, 6.0f, 0.5f);
    temp_v0 = func_800C9B18(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId);
    if ((arg0->xzDistToPlayer < 30.0f) && (arg0->floorHeight > -32000.0f) && (temp_v0 != 0xC) && (temp_v0 != 0xD)) {
        func_808AD7EC(arg0);
        return;
    }
    if ((Player_GetMask(arg1) == 0x10) || (arg0->unk1F0 < Actor_XZDistanceToPoint(arg1->actorCtx.actorList[2].first, arg0 + 0x200)) || (Actor_IsActorFacingLink(arg0, 0x6000) == 0)) {
        func_808ADC40(arg0);
    }
}

void func_808AD7EC(Actor *arg0) {
    SkelAnime_ChangeAnimDefaultStop(arg0 + 0x144, &D_060000F8);
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x3848U);
    arg0->unk1D0 = func_808AD840;
}

void func_808AD840(Actor *arg0, ? arg1) {
    func_800B9010(arg0, 0x31D7U);
    if (SkelAnime_FrameUpdateMatrix((SkelAnime *) (arg0 + 0x144)) != 0) {
        func_808AD888(arg0);
    }
}

void func_808AD888(Actor *arg0) {
    arg0->world.rot.x = -0x4000;
    arg0->unk21C = (u8) (arg0->unk21C | 1);
    arg0->unk1DC = 4;
    arg0->unk1D0 = func_808AD8B8;
}

void func_808AD8B8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s32 temp_v1;
    u32 temp_v0;

    Math_StepToF(arg0 + 0x70, 20.0f, 2.0f);
    arg0->unk1DC = (s16) (arg0->unk1DC - 1);
    if (arg0->unk1DC == 0) {
        arg0->unk2B5 = (u8) (arg0->unk2B5 & 0xFFFE);
    }
    temp_v0 = func_800C9B18(arg1 + 0x830, arg0->floorPoly, (s32) arg0->floorBgId);
    temp_v1 = arg0->bgCheckFlags & 1;
    if ((temp_v1 != 0) || (arg0->floorHeight == -32000.0f) || (temp_v0 == 0xC) || (temp_v0 == 0xD)) {
        arg0->unk21C = (u8) (arg0->unk21C & 0xFFFE);
        arg0->unk268 = (u8) (arg0->unk268 | 1);
        if (temp_v1 != 0) {
            func_800DFD04((arg1 + (arg1->activeCamera * 4))->unk800, 2, 0xF, 0xA);
            func_8013ECE0(arg0->xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
            func_808ACB58(arg0);
            Actor_SpawnAsChild(arg1 + 0x1CA0, arg0, arg1, 1, arg0->world.pos.x, arg0->floorHeight, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, 0);
            temp_a0 = arg0->child;
            if (temp_a0 != 0) {
                Actor_SetScale(temp_a0, 0.015f);
            }
            if (arg0->unk1D4 != 0) {
                arg0->unk1E2 = 0x46;
                func_808ADD20(arg0);
                return;
            }
            arg0->unk1E2 = 0x14;
            func_808ADA74(arg0);
            return;
        }
        arg0->unk2B5 = (u8) (arg0->unk2B5 | 1);
        func_808ADB4C(arg0);
        return;
    }
    func_800B9010(arg0, 0x31D7U);
}

void func_808ADA74(Actor *arg0) {
    SkelAnime *sp24;
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    sp24 = temp_a0;
    SkelAnime_ChangeAnimDefaultStop(temp_a0, &D_06003DC8);
    SkelAnime_FrameUpdateMatrix(temp_a0);
    arg0->unk2B5 = (u8) (arg0->unk2B5 | 1);
    arg0->unk1DC = 3;
    arg0->speedXZ = 0.0f;
    Audio_PlayActorSound2(arg0, 0x2802U);
    arg0->unk1D0 = func_808ADAE8;
}

void func_808ADAE8(Actor *arg0, ? arg1) {
    SkelAnime *temp_a0;

    temp_a0 = arg0 + 0x144;
    if (arg0->unk1DC == 0) {
        arg0->unk268 = (u8) (arg0->unk268 & 0xFFFE);
    }
    arg0->unk1DC = (s16) (arg0->unk1DC - 1);
    arg0 = arg0;
    if (SkelAnime_FrameUpdateMatrix(temp_a0) != 0) {
        func_808ADB4C(arg0, arg0);
    }
}

void func_808ADB4C(Actor *arg0) {
    arg0->world.rot.x = 0x4000;
    arg0->unk1D0 = func_808ADB70;
    arg0->speedXZ = 0.0f;
}

void func_808ADB70(Actor *arg0, ? arg1) {
    s16 temp_v0;
    s32 phi_v1;

    Math_StepToF(arg0 + 0x70, 5.0f, 0.3f);
    if (arg0->speedXZ > 1.0f) {
        temp_v0 = arg0->unk1E6;
        phi_v1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_v1 = -(s32) temp_v0;
        }
        if (phi_v1 >= 0x4001) {
            func_800B9010(arg0, 0x3294U);
        } else {
            func_800B9010(arg0, 0x3293U);
        }
    }
    if ((arg0->unk1EC < arg0->world.pos.y) || ((arg0->bgCheckFlags & 0x10) != 0)) {
        arg0->speedXZ = 0.0f;
        func_808AD66C(arg0);
    }
}

void func_808ADC40(Actor *arg0) {
    arg0->unk1DC = 0x3C;
    arg0->unk1D0 = func_808ADC64;
    arg0->speedXZ = 0.0f;
}

void func_808ADC64(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    func_808ACF98(arg0);
    arg0->unk1DC = (s16) (arg0->unk1DC - 1);
    if (func_808ACF1C(arg0, arg1) != 0) {
        func_808AD54C(arg0);
        return;
    }
    temp_v0 = arg0->unk1DC;
    if (temp_v0 == 0) {
        func_808AD31C(arg0);
        return;
    }
    arg0->shape.rot.y = (s32) (Math_SinS((s16) (temp_v0 * 0x888)) * 8192.0f) + arg0->world.rot.y;
}

void func_808ADD20(Actor *arg0) {
    arg0->unk2B5 = (u8) (arg0->unk2B5 & 0xFFFE);
    arg0->unk1DC = 0x14;
    arg0->speedXZ = 0.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x14);
    arg0->unk1E0 = -1;
    arg0->world.pos.y = arg0->floorHeight - 60.0f;
    Audio_PlayActorSound2(arg0, 0x3846U);
    arg0->unk1D0 = func_808ADDA8;
}

void func_808ADDA8(void *arg0, ? arg1) {
    if (arg0->unk1DC == 0x11) {
        arg0->unk268 = (u8) (arg0->unk268 & 0xFFFE);
    }
    if (arg0->unk1DC == 0) {
        func_808ADE00();
        return;
    }
    arg0->unk1DC = (s16) (arg0->unk1DC - 1);
}

void func_808ADE00(Actor *arg0) {
    arg0->world.rot.x = 0x4000;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 4);
    arg0->unk1DC = 0x19;
    Math_Vec3f_Copy(arg0 + 0x1F4, (Vec3f *) &arg0->world);
    arg0->flags |= 0x10;
    arg0->unk1D0 = func_808ADE74;
}

void func_808ADE74(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0_2;
    s16 temp_v0;

    Math_StepToF(arg0 + 0x70, 3.0f, 0.3f);
    if (arg0->colorFilterTimer == 0) {
        func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 4);
    }
    arg0->world.pos.x = randPlusMinusPoint5Scaled(5.0f) + arg0->unk1F4;
    temp_v0 = arg0->unk1DC;
    arg0->world.pos.z = randPlusMinusPoint5Scaled(5.0f) + arg0->unk1FC;
    if (temp_v0 == 1) {
        temp_v0_2 = Actor_Spawn(arg1 + 0x1CA0, arg1, 9, arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 0);
        if (temp_v0_2 != 0) {
            temp_v0_2->unk1F0 = 0;
        }
        arg0->unk1DC = (s16) (arg0->unk1DC - 1);
        return;
    }
    if (temp_v0 == 0) {
        Item_DropCollectibleRandom(arg1, arg0, (Vec3f *) &arg0->world, 0xD0);
        func_808ADFA4(arg0);
        return;
    }
    arg0->unk1DC = (s16) (temp_v0 - 1);
}

void func_808ADFA4(Actor *arg0) {
    func_808ACD2C();
    arg0->flags &= -2;
    arg0->shape.shadowDraw = NULL;
    arg0->unk1D0 = func_808ADFF0;
    arg0->speedXZ = 0.0f;
}

void func_808ADFF0(Actor *arg0, ? arg1) {
    void *temp_v0;

    if (arg0->unk1DE == 0) {
        temp_v0 = arg0->child;
        if (temp_v0 != 0) {
            temp_v0->parent = NULL;
        }
        Actor_MarkForDeath(arg0);
    }
}

void func_808AE030(EnFamos *arg0) {
    Vec3f *temp_s0;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x344;
    phi_s1 = 0;
    do {
        phi_s0->unk10 = (f32) (phi_s0->unk10 - 1.0f);
        Math_Vec3f_Sum(phi_s0, phi_s0 + 0xC, phi_s0);
        phi_s0->unk18 = (s16) (phi_s0->unk18 + ((Rand_Next() >> 0x17) + 0x700));
        phi_s0->unk1A = (s16) (phi_s0->unk1A + ((Rand_Next() >> 0x17) + 0x900));
        temp_s1 = phi_s1 + 1;
        temp_s0 = phi_s0 + 0x24;
        temp_s0->unk-8 = (s16) (phi_s0->unk1C + ((Rand_Next() >> 0x17) + 0xB00));
        phi_s0 = temp_s0;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x14);
}

void EnFamos_Update(EnFamos *this, GlobalContext *globalCtx) {
    f32 sp34;
    s32 sp30;
    CollisionCheckContext *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    EnFamos *this = (EnFamos *) thisx;

    temp_v0 = this->unk1DE;
    if (((s32) temp_v0 <= 0) || (this->unk1DE = temp_v0 - 1, func_808AE030(this), (func_808ADFF0 != this->actionFunc))) {
        sp30 = (s32) this->unk1DA;
        func_808AD05C((Actor *) this);
        temp_v0_2 = this->unk1E2;
        if ((s32) temp_v0_2 > 0) {
            this->unk1E2 = temp_v0_2 - 1;
            if (this->unk1E2 == 0) {
                this->actor.child->parent = NULL;
            }
        }
        this->actionFunc(this, globalCtx);
        sp34 = this->actor.world.pos.y;
        Actor_SetVelocityAndMoveXYRotation((Actor *) this);
        if (sp30 != this->unk1DA) {
            this->unk1EC += this->actor.world.pos.y - sp34;
        }
        if ((s32) this->unk1E0 >= 0) {
            Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 35.0f, 30.0f, 80.0f, 0x1FU);
            if ((func_808AD8B8 == this->actionFunc) && (this->unk1D4 != 0) && ((this->actor.bgCheckFlags & 1) != 0)) {
                this->actor.world.pos.y -= 60.0f;
            }
        }
        temp_a1 = &this->unk20C;
        this->actor.focus.rot.y = this->actor.shape.rot.y;
        sp28 = temp_a1;
        Collider_UpdateCylinder((Actor *) this, temp_a1);
        if ((this->unk20C.base.atFlags & 1) != 0) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) sp28);
        }
        temp_a1_2 = &globalCtx->colChkCtx;
        sp2C = temp_a1_2;
        CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp28);
        CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp28);
        if ((this->unk2A4.base.acFlags & 1) != 0) {
            CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) &this->unk2A4);
        }
        temp_a2 = &this->unk258;
        if ((this->unk258.base.atFlags & 1) != 0) {
            sp28 = temp_a2;
            Collider_UpdateCylinder((Actor *) this, temp_a2);
            this->unk258.dim.pos.y = (s16) (s32) this->actor.floorHeight;
            CollisionCheck_SetAT(globalCtx, sp2C, (Collider *) temp_a2);
        }
    }
}

s32 func_808AE304(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 1) {
        SysMatrix_InsertTranslation(0.0f, 4000.0f, 0.0f, 1);
        SysMatrix_InsertZRotation_s(arg5->unk1E6, 1);
        SysMatrix_InsertTranslation(0.0f, -4000.0f, 0.0f, 1);
    } else if (((s32) arg5->unk1E0 < 0) && ((arg1 == 3) || (arg1 == 4) || (arg1 == 5))) {
        *arg2 = NULL;
    }
    return 0;
}

void func_808AE3A8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 2) {
        arg1 = arg1;
        SysMatrix_GetStateTranslation(arg4 + 0x3C);
        Collider_UpdateSpheres(arg1, arg4 + 0x2A4);
    }
}

void func_808AE3FC(EnFamos *arg0, GraphicsContext **arg1) {
    void *sp48;
    GraphicsContext *sp40;
    GraphicsContext *temp_a1;
    f32 temp_f12;
    s32 temp_s2;
    void *temp_v0;
    void *phi_s0;
    void *phi_s1;
    void *phi_s3;
    s32 phi_s2;

    if ((s32) arg0->unk1DE > 0) {
        temp_a1 = *arg1;
        temp_v0 = temp_a1->polyOpa.p;
        temp_v0->words.w0 = 0xDE000000;
        temp_v0->words.w1 = sSetupDL + 0x4B0;
        temp_v0->unk8 = 0xFA000080;
        temp_v0->unkC = -1;
        temp_v0->unk10 = 0xFB000000;
        temp_v0->unk14 = -1;
        sp48 = temp_v0;
        sp40 = temp_a1;
        phi_s0 = arg0 + 0x344;
        phi_s1 = temp_v0;
        phi_s3 = temp_v0 + 0x18;
        phi_s2 = 0;
        do {
            SysMatrix_SetStateRotationAndTranslation(phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, phi_s0 + 0x18);
            temp_f12 = phi_s0->unk20;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            phi_s1->unk18 = 0xDA380003;
            phi_s3->unk4 = Matrix_NewMtx(*arg1);
            phi_s1->unk20 = 0xDE000000U;
            phi_s1->unk24 = &D_0406AB30;
            temp_s2 = phi_s2 + 0x10;
            phi_s0 += 0x24;
            phi_s1 += 0x10;
            phi_s3 += 0x10;
            phi_s2 = temp_s2;
        } while (temp_s2 != 0x140);
        sp40->polyOpa.p = sp48 + 0x158;
    }
}

void EnFamos_Draw(EnFamos *this, GlobalContext *globalCtx) {
    EnFamos *this = (EnFamos *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    if (func_808ADFF0 != this->actionFunc) {
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_808AE6B0[this->unk1D4]);
        SkelAnime_Draw(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, func_808AE304, func_808AE3A8, (Actor *) this);
        if (this->actor.colorFilterTimer != 0) {
            func_800AE5A0(globalCtx);
        }
    }
    func_808AE3FC(this, (GraphicsContext **) globalCtx);
}
