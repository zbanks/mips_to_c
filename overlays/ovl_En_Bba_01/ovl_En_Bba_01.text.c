typedef struct EnBba01 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnBba01 *, GlobalContext *);
    /* 0x148 */ void (*unk_148)(EnBba01 *, GlobalContext *); /* inferred */
    /* 0x14C */ char pad_14C[0x2];
    /* 0x14E */ u8 unk_14E;                         /* inferred */
    /* 0x14F */ char pad_14F[0x1];
    /* 0x150 */ void **unk_150;                     /* inferred */
    /* 0x154 */ char pad_154[0x18];                 /* maybe part of unk_150[7]? */
    /* 0x16C */ Vec3s *unk_16C;                     /* inferred */
    /* 0x170 */ char pad_170[0x20];                 /* maybe part of unk_16C[9]? */
    /* 0x190 */ s8 unk_190;                         /* inferred */
    /* 0x191 */ s8 unk_191;                         /* inferred */
    /* 0x192 */ s8 unk_192;                         /* inferred */
    /* 0x193 */ s8 unk_193;                         /* inferred */
    /* 0x194 */ ColliderCylinder unk_194;           /* inferred */
    /* 0x1E0 */ u16 unk_1E0;                        /* inferred */
    /* 0x1E2 */ s8 unk_1E2;                         /* inferred */
    /* 0x1E3 */ s8 unk_1E3;                         /* inferred */
    /* 0x1E4 */ Path *unk_1E4;                      /* inferred */
    /* 0x1E8 */ s16 unk_1E8;                        /* inferred */
    /* 0x1EA */ char pad_1EA[0xDC];                 /* maybe part of unk_1E8[111]? */
    /* 0x2C6 */ ? unk_2C6;                          /* inferred */
    /* 0x2C6 */ char pad_2C6[0x4];
    /* 0x2CA */ u16 unk_2CA;                        /* inferred */
    /* 0x2CC */ ? unk_2CC;                          /* inferred */
    /* 0x2CC */ char pad_2CC[0x4];
    /* 0x2D0 */ u16 unk_2D0;                        /* inferred */
    /* 0x2D2 */ ? unk_2D2;                          /* inferred */
    /* 0x2D2 */ char pad_2D2[0x4];
    /* 0x2D6 */ u16 unk_2D6;                        /* inferred */
    /* 0x2D8 */ ? unk_2D8;                          /* inferred */
    /* 0x2D8 */ char pad_2D8[0x4];
    /* 0x2DC */ u16 unk_2DC;                        /* inferred */
    /* 0x2DE */ ? unk_2DE;                          /* inferred */
    /* 0x2DE */ char pad_2DE[0x4];
    /* 0x2E2 */ u16 unk_2E2;                        /* inferred */
    /* 0x2E4 */ ? unk_2E4;                          /* inferred */
    /* 0x2E4 */ char pad_2E4[0x4];
    /* 0x2E8 */ u16 unk_2E8;                        /* inferred */
    /* 0x2EA */ char pad_2EA[0x42];                 /* maybe part of unk_2E8[34]? */
    /* 0x32C */ ? unk_32C;                          /* inferred */
    /* 0x32C */ char pad_32C[0x2F0];
} EnBba01;                                          /* size = 0x61C */

struct _mips2c_stack_EnBba01_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnBba01_Draw {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnBba01_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnBba01_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809CC060 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809CC1D4 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CC270 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809CC2F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CC370 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809CC3A8 {};              /* size 0x0 */

struct _mips2c_stack_func_809CC3CC {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809CC6F0 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad_24[0x10];                   /* maybe part of sp20[5]? */
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_809CC984 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x14];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809CCA5C {};              /* size 0x0 */

? func_800F09B4(EnBba01 *);                         /* extern */
s32 func_800F0A94(? *, ?);                          /* extern */
s32 func_800F0F28(EnBba01 *, ?);                    /* extern */
? func_800F10AC(EnBba01 *, GlobalContext *);        /* extern */
? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnBba01 *, GlobalContext *, Gfx *); /* extern */
void func_809CC060(EnBba01 *arg0, GlobalContext *arg1); /* static */
s32 func_809CC1D4(Actor *arg0, GlobalContext *arg1); /* static */
? func_809CC270(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_809CC6F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809CC984(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809CCA5C(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_06005EF0;
extern ? D_801BC3F0;
extern ? D_801BC400;
extern ? D_801BC410;
static ColliderCylinderInit D_809CCC80 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_809CCCAC = {0, 0, 0, 0, 0xFF};
static DamageTable D_809CCCB8 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static s16 D_809CCCD8[16] = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_809CCCF8;                                /* unable to generate initializer */
static ? D_809CCD04;                                /* unable to generate initializer */

void func_809CC060(EnBba01 *arg0, GlobalContext *arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    sp3C = temp_v1;
    func_800F09B4(arg0);
    if (func_8013D5E8(arg0->actor.shape.rot.y, 0x36B0, arg0->actor.yawTowardsPlayer) != 0) {
        sp30 = temp_v1->world.pos.x;
        sp34 = temp_v1->unk_C44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2C6, arg0 + 0x2CC, arg0 + 0x2D2, D_809CCCD8);
    } else {
        Math_SmoothStepToS(arg0 + 0x2C6, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2C8, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2CC, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2CE, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2D2, 0, 4, 0x3E8, (s16) 1);
        Math_SmoothStepToS(arg0 + 0x2D4, 0, 4, 0x3E8, (s16) 1);
    }
    func_8013D9C8(arg1, arg0 + 0x2EA, arg0 + 0x30A, 0x10);
    func_800F10AC(arg0, arg1);
}

s32 func_809CC1D4(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    void (*temp_t3)(EnBba01 *, GlobalContext *);
    s32 phi_v1;

    sp1C = 0;
    phi_v1 = sp1C;
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk_2D8 = (unaligned s32) arg0->unk_2C6;
        arg0->unk_2DE = (unaligned s32) arg0->unk_2CC;
        arg0->unk_2E4 = (unaligned s32) arg0->unk_2D2;
        temp_t3 = arg0->unk_144;
        arg0->unk_1E0 = 0x10B9;
        arg0->unk_144 = func_809CC3CC;
        arg0->unk_2DC = (u16) arg0->unk_2CA;
        arg0->unk_2E2 = (u16) arg0->unk_2D0;
        arg0->unk_2E8 = (u16) arg0->unk_2D6;
        arg0->unk_148 = temp_t3;
        phi_v1 = 1;
    }
    return phi_v1;
}

? func_809CC270(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 sp1C;

    func_800B8898(arg1, arg0, &sp1E, &sp1C);
    if ((arg0->unk_1E2 == 0) && (((s32) sp1E >= 0) || ((s32) sp1E < 0x140)) && (((s32) sp1C >= 0) || ((s32) sp1C < 0xF0))) {
        func_800B85E0(arg0, arg1, 30.0f, 0x2E);
    }
    return 1;
}

void func_809CC2F0(EnBba01 *this, GlobalContext *globalCtx) {
    if (func_800F0A94(&D_06005EF0, 6) != 0) {
        this->actor.flags |= 1;
        this->actor.draw = EnBba01_Draw;
        this->unk_1E2 = 0;
        if (((s32) (this->actor.params & 0x7E00) >> 9) == 0x3F) {
            this->actionFunc = func_809CC3A8;
            return;
        }
        this->actionFunc = func_809CC370;
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_809CC370(EnBba01 *this, GlobalContext *globalCtx) {
    if (func_800F0F28(this, 0x3F800000) != 0) {
        this->unk_1E8 = 0;
    }
}

void func_809CC3A8(EnBba01 *this, GlobalContext *globalCtx) {
    this->unk_BC = (unaligned s32) this->unk_30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
}

void func_809CC3CC(EnBba01 *this, GlobalContext *globalCtx) {
    s32 temp_v0_2;
    u8 temp_v0;
    void (*temp_t7)(EnBba01 *, GlobalContext *);
    s32 phi_v1;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xFA0, (s16) 1);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 3) {
        this->unk_1E3 = 1;
    } else {
        this->unk_1E3 = 0;
    }
    if (temp_v0 != 0) {
        if (temp_v0 != 2) {
            return;
        }
        this->unk_2C6 = (unaligned s32) this->unk_2D8;
        this->unk_2CC = (unaligned s32) this->unk_2DE;
        this->unk_2D2 = (unaligned s32) this->unk_2E4;
        temp_t7 = this->unk_148;
        this->actor.textId = 0;
        this->unk_148 = NULL;
        this->unk_2CA = this->unk_2DC;
        this->unk_2D0 = this->unk_2E2;
        this->unk_2D6 = this->unk_2E8;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        this->actionFunc = temp_t7;
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    temp_v0_2 = this->actor.shape.rot.y - this->actor.yawTowardsPlayer;
    phi_v1 = temp_v0_2 << 0x10;
    if (temp_v0_2 < 0) {
        phi_v1 = temp_v0_2 * -0x10000;
    }
    if ((phi_v1 >> 0x10) < 0x64) {
        func_801518B0(globalCtx, this->unk_1E0, NULL);
    }
}

void EnBba01_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    EnBba01 *this = (EnBba01 *) thisx;

    this->unk_193 = func_8013D924(0xDF, globalCtx);
    this->unk_190 = func_8013D924(0xDF, globalCtx);
    this->unk_191 = func_8013D924(0xDF, globalCtx);
    this->unk_192 = func_8013D924(0xDF, globalCtx);
    if (((s32) this->unk_193 < 0) || ((s32) this->unk_190 < 0) || ((s32) this->unk_191 < 0) || ((s32) this->unk_192 < 0)) {
        Actor_MarkForDeath((Actor *) this);
    }
    this->actor.draw = NULL;
    temp_a1 = &this->unk_194;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_809CCC80);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_809CCCB8, &D_809CCCAC);
    this->actor.flags &= -2;
    this->unk_1E4 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    this->unk_1E2 = 1;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = func_809CC2F0;
}

void EnBba01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBba01 *this = (EnBba01 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_194);
}

void EnBba01_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBba01 *this = (EnBba01 *) thisx;
    func_809CC1D4((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_809CC060(this, globalCtx);
    func_809CC270((Actor *) this, globalCtx);
}

s32 func_809CC6F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    ? sp34;
    void *sp20;
    s8 temp_v0;
    u32 *temp_at;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    sp34.unk_0 = (s32) D_809CCCF8.unk_0;
    sp34.unk_4 = (s32) D_809CCCF8.unk_4;
    sp34.unk_8 = (s32) D_809CCCF8.unk_8;
    temp_v0 = *(&D_801BC3F0 + arg1);
    if ((s32) temp_v0 >= 0) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp34, arg5 + (temp_v0 * 0xC) + 0x32C);
    }
    if (arg1 == 0xF) {
        temp_a0 = arg0->state.gfxCtx;
        temp_v1 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDB060018;
        temp_v1->words.w1 = (arg0 + (arg5->unk_190 * 0x44))->unk_17D98;
        temp_at = gSegments + 0x18;
        *temp_at = (arg0 + (arg5->unk_190 * 0x44))->unk_17D98 + 0x80000000;
        *temp_at = (arg0 + (arg5->unk_192 * 0x44))->unk_17D98 + 0x80000000;
    }
    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk_2CE, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2CC * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk_2D4 * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk_2D2 * -1), 1);
    }
    if ((arg1 == 0xF) && (arg5->unk_1E3 != 0) && ((arg0->state.frames & 1) == 0)) {
        SysMatrix_InsertTranslation(40.0f, 0.0f, 0.0f, 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1_2 = arg5 + (arg1 * 2);
        sp20 = temp_v1_2;
        arg4->y += (s32) (Math_SinS(temp_v1_2->unk_2EA) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1_2->unk_30A) * 200.0f);
    }
    return 0;
}

void func_809CC984(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    ? sp2C;
    void *temp_a1;
    void *temp_v1;

    sp2C.unk_0 = (s32) D_809CCD04.unk_0;
    sp2C.unk_4 = (s32) D_809CCD04.unk_4;
    sp2C.unk_8 = (s32) D_809CCD04.unk_8;
    if (arg1 == 7) {
        temp_a1 = *arg0;
        temp_v1 = temp_a1->unk_2B0;
        temp_a1->unk_2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk_0 = 0xDB060018;
        temp_v1->unk_4 = (s32) (arg0 + (arg4->unk_191 * 0x44))->unk_17D98;
        *(gSegments + 0x18) = (arg0 + (arg4->unk_191 * 0x44))->unk_17D98 + 0x80000000;
    }
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp2C, arg4 + 0x3C);
    }
}

void func_809CCA5C(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnBba01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_s7;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    EnBba01 *this = (EnBba01 *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s7 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_s7;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xFF, 0xFF, 0xFF, 0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_v0_2->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0x37, 0x37, 0xFF, 0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0;
    temp_v0_3->words.w0 = 0xE7000000;
    func_801343C0(globalCtx, this->unk_150, this->unk_16C, (s32) this->unk_14E, func_809CC6F0, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_809CC984, func_809CCA5C, (Actor *) this);
    SysMatrix_InsertXRotation_s(0, 0);
    phi_v0 = temp_s7;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_s0_2 = phi_s0 + 1;
        phi_v0->texture.cmd = 0;
        phi_v0 += 1;
        phi_s0 = temp_s0_2;
    } while (temp_s0_2 < 0x1000);
    do {
        func_8013CD64(&this->unk_32C, &this->actor.world, temp_s7, (f32) phi_s0_2 / 5.0f, 0xF, &D_801BC410, &D_801BC400);
        temp_s0_3 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_3;
    } while (temp_s0_3 != 5);
    func_8013CF04(this, globalCtx, temp_s7);
}
