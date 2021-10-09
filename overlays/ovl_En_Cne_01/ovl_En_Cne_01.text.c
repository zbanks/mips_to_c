? func_800F09B4(EnCne01 *);                         /* extern */
s32 func_800F0A94(? *, ?);                          /* extern */
s32 func_800F0F28(EnCne01 *, ?);                    /* extern */
? func_800F10AC(EnCne01 *, GlobalContext *);        /* extern */
? func_8013CD64(? *, PosRot *, Gfx *, f32, s32, ? *, ? *); /* extern */
? func_8013CF04(EnCne01 *, GlobalContext *, Gfx *); /* extern */
void func_809CB290(EnCne01 *arg0, GlobalContext *arg1); /* static */
s32 func_809CB404(Actor *arg0, GlobalContext *arg1); /* static */
? func_809CB4A0(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_809CB920(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_809CBBC8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_809CBCA0(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern ? D_060000F0;
extern Gfx D_06001300;
extern ? D_801BC3F0;
extern ? D_801BC400;
extern ? D_801BC410;
static ColliderCylinderInit D_809CBF00 = {
    {0, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x12, 0x40, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_809CBF2C = {0, 0, 0, 0, 0xFF};
static DamageTable D_809CBF38 = {
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
static s16 D_809CBF58 = {0xFA0, 4, 1, 3, 0x1770, 4, 1, 6, 0xFA0, 4, 1, 3, 0x1770, 4, 1, 6};
static ? D_809CBF78;                                /* unable to generate initializer */
static ? D_809CBF84;                                /* unable to generate initializer */

typedef struct EnCne01 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(EnCne01 *, GlobalContext *);
    /* 0x0148 */ void (*unk148)(EnCne01 *, GlobalContext *); /* inferred */
    /* 0x014C */ char pad14C[0x2];
    /* 0x014E */ u8 unk14E;                         /* inferred */
    /* 0x014F */ char pad14F[0x1];                  /* maybe part of unk14E[2]? */
    /* 0x0150 */ void **unk150;                     /* inferred */
    /* 0x0154 */ char pad154[0x18];                 /* maybe part of unk150[7]? */
    /* 0x016C */ Vec3s *unk16C;                     /* inferred */
    /* 0x0170 */ char pad170[0x20];                 /* maybe part of unk16C[9]? */
    /* 0x0190 */ s8 unk190;                         /* inferred */
    /* 0x0191 */ s8 unk191;                         /* inferred */
    /* 0x0192 */ s8 unk192;                         /* inferred */
    /* 0x0193 */ s8 unk193;                         /* inferred */
    /* 0x0194 */ ColliderCylinder unk194;           /* inferred */
    /* 0x01E0 */ u16 unk1E0;                        /* inferred */
    /* 0x01E2 */ s8 unk1E2;                         /* inferred */
    /* 0x01E3 */ s8 unk1E3;                         /* inferred */
    /* 0x01E4 */ Path *unk1E4;                      /* inferred */
    /* 0x01E8 */ s16 unk1E8;                        /* inferred */
    /* 0x01EA */ char pad1EA[0xDC];                 /* maybe part of unk1E8[111]? */
    /* 0x02C6 */ ? unk2C6;                          /* inferred */
    /* 0x02C7 */ char pad2C7[0x3];
    /* 0x02CA */ u16 unk2CA;                        /* inferred */
    /* 0x02CC */ ? unk2CC;                          /* inferred */
    /* 0x02CD */ char pad2CD[0x3];
    /* 0x02D0 */ u16 unk2D0;                        /* inferred */
    /* 0x02D2 */ ? unk2D2;                          /* inferred */
    /* 0x02D3 */ char pad2D3[0x3];
    /* 0x02D6 */ u16 unk2D6;                        /* inferred */
    /* 0x02D8 */ ? unk2D8;                          /* inferred */
    /* 0x02D9 */ char pad2D9[0x3];
    /* 0x02DC */ u16 unk2DC;                        /* inferred */
    /* 0x02DE */ ? unk2DE;                          /* inferred */
    /* 0x02DF */ char pad2DF[0x3];
    /* 0x02E2 */ u16 unk2E2;                        /* inferred */
    /* 0x02E4 */ ? unk2E4;                          /* inferred */
    /* 0x02E5 */ char pad2E5[0x3];
    /* 0x02E8 */ u16 unk2E8;                        /* inferred */
    /* 0x02EA */ char pad2EA[0x42];                 /* maybe part of unk2E8[34]? */
    /* 0x032C */ ? unk32C;                          /* inferred */
    /* 0x032D */ char pad32D[0x2EF];
} EnCne01;                                          /* size 0x61C */

void func_809CB290(EnCne01 *arg0, GlobalContext *arg1) {
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
        sp34 = temp_v1->unkC44 + 3.0f;
        sp38 = temp_v1->world.pos.z;
        func_8013D2E0((Vec3f *) &sp30, arg0 + 0x3C, arg0 + 0xBC, arg0 + 0x2C6, arg0 + 0x2CC, arg0 + 0x2D2, &D_809CBF58);
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

s32 func_809CB404(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    void (*temp_t3)(EnCne01 *, GlobalContext *);
    s32 phi_v1;

    sp1C = 0;
    phi_v1 = sp1C;
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk2D8 = (unaligned s32) arg0->unk2C6;
        arg0->unk2DE = (unaligned s32) arg0->unk2CC;
        arg0->unk2E4 = (unaligned s32) arg0->unk2D2;
        temp_t3 = arg0->unk144;
        arg0->unk1E0 = 0x10B9;
        arg0->unk144 = func_809CB5FC;
        arg0->unk2DC = (u16) arg0->unk2CA;
        arg0->unk2E2 = (u16) arg0->unk2D0;
        arg0->unk2E8 = (u16) arg0->unk2D6;
        arg0->unk148 = temp_t3;
        phi_v1 = 1;
    }
    return phi_v1;
}

? func_809CB4A0(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 sp1C;

    func_800B8898(arg1, arg0, &sp1E, &sp1C);
    if ((arg0->unk1E2 == 0) && (((s32) sp1E >= 0) || ((s32) sp1E < 0x140)) && (((s32) sp1C >= 0) || ((s32) sp1C < 0xF0))) {
        func_800B85E0(arg0, arg1, 30.0f, 0x2E);
    }
    return 1;
}

void func_809CB520(EnCne01 *this, GlobalContext *globalCtx) {
    if (func_800F0A94(&D_060000F0, 0xB) != 0) {
        this->actor.flags |= 1;
        this->actor.draw = EnCne01_Draw;
        this->unk1E2 = 0;
        if (((s32) (this->actor.params & 0x7E00) >> 9) == 0x3F) {
            this->actionFunc = func_809CB5D8;
            return;
        }
        this->actionFunc = func_809CB5A0;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_809CB5A0(EnCne01 *this, GlobalContext *globalCtx) {
    if (func_800F0F28(this, 0x3F800000) != 0) {
        this->unk1E8 = 0;
    }
}

void func_809CB5D8(EnCne01 *this, GlobalContext *globalCtx) {
    this->unkBC = (unaligned s32) this->unk30;
    this->actor.shape.rot.z = (s16) (u16) this->actor.world.rot.z;
}

void func_809CB5FC(EnCne01 *this, GlobalContext *globalCtx) {
    s32 temp_v0_2;
    u8 temp_v0;
    void (*temp_t7)(EnCne01 *, GlobalContext *);
    s32 phi_v1;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 4, 0xFA0, (s16) 1);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 == 3) {
        this->unk1E3 = 1;
    } else {
        this->unk1E3 = 0;
    }
    if (temp_v0 != 0) {
        if (temp_v0 != 2) {
            return;
        }
        this->unk2C6 = (unaligned s32) this->unk2D8;
        this->unk2CC = (unaligned s32) this->unk2DE;
        this->unk2D2 = (unaligned s32) this->unk2E4;
        temp_t7 = this->unk148;
        this->actor.textId = 0;
        this->unk148 = NULL;
        this->unk2CA = this->unk2DC;
        this->unk2D0 = this->unk2E2;
        this->unk2D6 = this->unk2E8;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        this->actionFunc = temp_t7;
        // Duplicate return node #11. Try simplifying control flow for better match
        return;
    }
    temp_v0_2 = this->actor.shape.rot.y - this->actor.yawTowardsPlayer;
    phi_v1 = temp_v0_2 << 0x10;
    if (temp_v0_2 < 0) {
        phi_v1 = temp_v0_2 * -0x10000;
    }
    if ((phi_v1 >> 0x10) < 0x64) {
        func_801518B0(globalCtx, this->unk1E0, NULL);
    }
}

void EnCne01_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnCne01 *this = (EnCne01 *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    this->unk193 = func_8013D924(0x9D, globalCtx);
    this->unk190 = func_8013D924(0xDA, globalCtx);
    this->unk191 = func_8013D924(0xDA, globalCtx);
    this->unk192 = func_8013D924(0xDA, globalCtx);
    if (((s32) this->unk193 < 0) || ((s32) this->unk190 < 0) || ((s32) this->unk191 < 0) || ((s32) this->unk192 < 0)) {
        Actor_MarkForDeath(&this->actor);
    }
    this->actor.draw = NULL;
    temp_a1 = &this->unk194;
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_809CBF00);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_809CBF38, &D_809CBF2C);
    this->actor.flags &= -2;
    this->unk1E4 = func_8013D648(globalCtx, (s16) ((s32) (this->actor.params & 0x7E00) >> 9), 0x3F);
    this->unk1E2 = 1;
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_809CB520;
}

void EnCne01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnCne01 *this = (EnCne01 *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk194);
}

void EnCne01_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnCne01 *this = (EnCne01 *) thisx;
    func_809CB404(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 0.0f, 0.0f, 0.0f, 4U);
    func_809CB290(this, globalCtx);
    func_809CB4A0(&this->actor, globalCtx);
}

s32 func_809CB920(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    Vec3f sp34;
    void *sp20;
    s8 temp_v0;
    u32 *temp_at;
    void *temp_a0;
    void *temp_v1;
    void *temp_v1_2;

    sp34.x = D_809CBF78.unk0;
    sp34.y = D_809CBF78.unk4;
    sp34.z = D_809CBF78.unk8;
    temp_v0 = *(&D_801BC3F0 + arg1);
    if ((s32) temp_v0 >= 0) {
        SysMatrix_MultiplyVector3fByState(&sp34, arg5 + (temp_v0 * 0xC) + 0x32C);
    }
    if (arg1 == 0xF) {
        temp_a0 = arg0->state.gfxCtx;
        temp_v1 = temp_a0->polyOpa.p;
        temp_a0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w0 = 0xDB060018;
        temp_v1->words.w1 = (arg0 + (arg5->unk190 * 0x44))->unk17D98;
        temp_at = gSegments + 0x18;
        *temp_at = (arg0 + (arg5->unk190 * 0x44))->unk17D98 + 0x80000000;
        *arg2 = &D_06001300;
        *temp_at = (arg0 + (arg5->unk192 * 0x44))->unk17D98 + 0x80000000;
    }
    if (arg1 == 0xF) {
        SysMatrix_InsertTranslation(1500.0f, 0.0f, 0.0f, 1);
        SysMatrix_InsertXRotation_s(arg5->unk2CE, 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2CC * -1), 1);
        SysMatrix_InsertTranslation(-1500.0f, 0.0f, 0.0f, 1);
    }
    if (arg1 == 8) {
        SysMatrix_InsertXRotation_s((s16) ((s32) arg5->unk2D4 * -1), 1);
        SysMatrix_InsertZRotation_s((s16) ((s32) arg5->unk2D2 * -1), 1);
    }
    if ((arg1 == 0xF) && (arg5->unk1E3 != 0) && ((arg0->state.frames & 1) == 0)) {
        SysMatrix_InsertTranslation(40.0f, 0.0f, 0.0f, 1);
    }
    if ((arg1 == 8) || (arg1 == 9) || (arg1 == 0xC)) {
        temp_v1_2 = arg5 + (arg1 * 2);
        sp20 = temp_v1_2;
        arg4->y += (s32) (Math_SinS(temp_v1_2->unk2EA) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1_2->unk30A) * 200.0f);
    }
    return 0;
}

void func_809CBBC8(void **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp2C;
    void *temp_a1;
    void *temp_v1;

    sp2C.x = D_809CBF84.unk0;
    sp2C.y = D_809CBF84.unk4;
    sp2C.z = D_809CBF84.unk8;
    if (arg1 == 7) {
        temp_a1 = *arg0;
        temp_v1 = temp_a1->unk2B0;
        temp_a1->unk2B0 = (void *) (temp_v1 + 8);
        temp_v1->unk0 = 0xDB060018;
        temp_v1->unk4 = (s32) (arg0 + (arg4->unk191 * 0x44))->unk17D98;
        *(gSegments + 0x18) = (arg0 + (arg4->unk191 * 0x44))->unk17D98 + 0x80000000;
    }
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&sp2C, arg4 + 0x3C);
    }
}

void func_809CBCA0(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void EnCne01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnCne01 *this = (EnCne01 *) thisx;
    Gfx *temp_s7;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    GraphicsContext *temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    Gfx *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s7 = temp_a0->polyOpa.d - 0x1000;
    temp_a0->polyOpa.d = temp_s7;
    temp_a0_2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xA0, 0xB4, 0xFF, 0);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060024;
    temp_v0_2->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xA0, 0xB4, 0xFF, 0);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDB060028;
    temp_v0_3->words.w1 = Gfx_EnvColor(globalCtx->state.gfxCtx, 0xA0, 0xB4, 0xFF, 0);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = 0;
    temp_v0_4->words.w0 = 0xE7000000;
    func_801343C0(globalCtx, this->unk150, this->unk16C, (s32) this->unk14E, func_809CB920, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *)) func_809CBBC8, func_809CBCA0, &this->actor);
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
        func_8013CD64(&this->unk32C, &this->actor.world, temp_s7, (f32) phi_s0_2 / 5.0f, 0xF, &D_801BC410, &D_801BC400);
        temp_s0_3 = phi_s0_2 + 1;
        phi_s0_2 = temp_s0_3;
    } while (temp_s0_3 != 5);
    func_8013CF04(this, globalCtx, temp_s7);
}

