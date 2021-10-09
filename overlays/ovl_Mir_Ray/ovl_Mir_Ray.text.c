typedef struct MirRay {
    /* 0x000 */ Actor actor;
    /* 0x144 */ LightInfo unk144;                   /* inferred */
    /* 0x152 */ char pad152[0x12];                  /* maybe part of unk144[2]? */
    /* 0x164 */ ColliderJntSphElement unk164;       /* inferred */
    /* 0x1A4 */ ColliderQuad unk1A4;                /* inferred */
    /* 0x224 */ f32 unk224;                         /* inferred */
    /* 0x228 */ f32 unk228;                         /* inferred */
    /* 0x22C */ f32 unk22C;                         /* inferred */
    /* 0x230 */ char pad230[0x4];
    /* 0x234 */ f32 unk234;                         /* inferred */
    /* 0x238 */ f32 unk238;                         /* inferred */
    /* 0x23C */ char pad23C[0x4];
    /* 0x240 */ f32 unk240;                         /* inferred */
    /* 0x244 */ f32 unk244;                         /* inferred */
    /* 0x248 */ char pad248[0x4];
    /* 0x24C */ f32 unk24C;                         /* inferred */
    /* 0x250 */ f32 unk250;                         /* inferred */
    /* 0x254 */ char pad254[0x4];
    /* 0x258 */ f32 unk258;                         /* inferred */
    /* 0x25C */ f32 unk25C;                         /* inferred */
    /* 0x260 */ char pad260[0x4];
    /* 0x264 */ f32 unk264;                         /* inferred */
    /* 0x268 */ f32 unk268;                         /* inferred */
    /* 0x26C */ char pad26C[0x8];                   /* maybe part of unk268[3]? */
    /* 0x274 */ f32 unk274;                         /* inferred */
    /* 0x278 */ f32 unk278;                         /* inferred */
    /* 0x27C */ f32 unk27C;                         /* inferred */
    /* 0x280 */ f32 unk280;                         /* inferred */
    /* 0x284 */ f32 unk284;                         /* inferred */
    /* 0x288 */ f32 unk288;                         /* inferred */
    /* 0x28C */ s16 unk28C;                         /* inferred */
    /* 0x28E */ s16 unk28E;                         /* inferred */
    /* 0x290 */ char pad290[0x4];                   /* maybe part of unk28E[3]? */
    /* 0x294 */ LightNode *unk294;                  /* inferred */
    /* 0x298 */ LightInfo unk298;                   /* inferred */
    /* 0x2A6 */ u8 unk2A6;                          /* inferred */
    /* 0x2A7 */ char pad2A7[0x1];
} MirRay;                                           /* size = 0x2A8 */

struct _mips2c_stack_MirRay_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MirRay_Draw {
    /* 0x000 */ char pad0[0x74];
    /* 0x074 */ ? sp74;                             /* inferred */
    /* 0x074 */ char pad74[0x4C];
    /* 0x0C0 */ s32 spC0;                           /* inferred */
    /* 0x0C4 */ u8 spC4;                            /* inferred */
    /* 0x0C5 */ char padC5[0x3];                    /* maybe part of spC4[4]? */
    /* 0x0C8 */ ? spC8;                             /* inferred */
    /* 0x0C8 */ char padC8[0x1A4];
    /* 0x26C */ ? sp26C;                            /* inferred */
    /* 0x26C */ char pad26C[0xC];
};                                                  /* size = 0x278 */

struct _mips2c_stack_MirRay_Init {
    /* 0x00 */ char pad0[0x38];
    /* 0x38 */ LightInfo *sp38;                     /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_MirRay_Update {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808E2600 {};              /* size 0x0 */

struct _mips2c_stack_func_808E26C8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ Vec3f *sp34;                         /* inferred */
    /* 0x38 */ Vec3f *sp38;                         /* inferred */
    /* 0x3C */ s16 sp3C;                            /* inferred */
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ s16 sp40;                            /* inferred */
    /* 0x42 */ char pad42[0x2];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x4];
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E2C68 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ void *sp38;                          /* inferred */
    /* 0x3C */ char pad3C[0x10];                    /* maybe part of sp38[5]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808E2E1C {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0xC];
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ f32 sp8C;                            /* inferred */
    /* 0x90 */ f32 sp90;                            /* inferred */
    /* 0x94 */ char pad94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_808E2FF8 {};              /* size 0x0 */

struct _mips2c_stack_func_808E30FC {
    /* 0x000 */ char pad0[0x80];
    /* 0x080 */ f32 sp80;                           /* inferred */
    /* 0x084 */ f32 sp84;                           /* inferred */
    /* 0x088 */ char pad88[0x38];                   /* maybe part of sp84[15]? */
    /* 0x0C0 */ f32 spC0;                           /* inferred */
    /* 0x0C4 */ f32 spC4;                           /* inferred */
    /* 0x0C8 */ f32 spC8;                           /* inferred */
    /* 0x0CC */ f32 spCC;                           /* inferred */
    /* 0x0D0 */ f32 spD0;                           /* inferred */
    /* 0x0D4 */ f32 spD4;                           /* inferred */
    /* 0x0D8 */ char padD8[0x4];
    /* 0x0DC */ f32 spDC;                           /* inferred */
    /* 0x0E0 */ f32 spE0;                           /* inferred */
    /* 0x0E4 */ f32 spE4;                           /* inferred */
    /* 0x0E8 */ f32 spE8;                           /* inferred */
    /* 0x0EC */ f32 spEC;                           /* inferred */
    /* 0x0F0 */ f32 spF0;                           /* inferred */
    /* 0x0F4 */ f32 spF4;                           /* inferred */
    /* 0x0F8 */ f32 spF8;                           /* inferred */
    /* 0x0FC */ f32 spFC;                           /* inferred */
    /* 0x100 */ f32 sp100;                          /* inferred */
    /* 0x104 */ f32 sp104;                          /* inferred */
    /* 0x108 */ f32 sp108;                          /* inferred */
    /* 0x10C */ f32 sp10C;                          /* inferred */
    /* 0x110 */ f32 sp110;                          /* inferred */
    /* 0x114 */ f32 sp114;                          /* inferred */
    /* 0x118 */ f32 sp118;                          /* inferred */
    /* 0x11C */ f32 sp11C;                          /* inferred */
    /* 0x120 */ f32 sp120;                          /* inferred */
    /* 0x124 */ f32 sp124;                          /* inferred */
    /* 0x128 */ f32 sp128;                          /* inferred */
    /* 0x12C */ f32 sp12C;                          /* inferred */
    /* 0x130 */ f32 sp130;                          /* inferred */
    /* 0x134 */ f32 sp134;                          /* inferred */
    /* 0x138 */ f32 sp138;                          /* inferred */
    /* 0x13C */ char pad13C[0xC];
};                                                  /* size = 0x148 */

struct _mips2c_stack_func_808E3984 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ char pad30[0x4];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x8];                     /* maybe part of sp38[3]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ ? sp5C;                              /* inferred */
    /* 0x5C */ char pad5C[0x1C];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ char pad84[0x4];
};                                                  /* size = 0x88 */

s32 func_800C57F8(void *, f32 *, f32 *, ? *, s32 *, s32); /* extern */
s32 func_80124088(GlobalContext *);                 /* extern */
s32 func_8017D2FC(f32, f32, f32, f32, f32 *, f32 *, f32 *, s32); /* extern */
void func_808E2600(MirRay *arg0);                   /* static */
void func_808E26C8(MirRay *arg0, GlobalContext *arg1); /* static */
void func_808E2C68(MirRay *arg0, GlobalContext *arg1); /* static */
void func_808E2E1C(MirRay *arg0, GlobalContext *arg1, ? *arg2); /* static */
void func_808E2FF8(? *arg0);                        /* static */
void func_808E30FC(MirRay *arg0, GlobalContext *arg1, ? *arg2); /* static */
s32 func_808E3984(Vec3f *arg0, Vec3f *arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, s32 arg6); /* static */
extern ? D_06000168;
extern void D_060003F8;
extern ? D_060004B0;
static u8 D_808E3BF0 = 0;
static ColliderQuadInit D_808E3BF4 = {
    {0xA, 9, 0, 0, 0, 3},
    {0, {0x200000, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static ColliderJntSphElementInit D_808E3C44 = {{0, {0x200000, 0, 0}, {0, 0, 0}, 1, 0, 0}, {0, {{0, 0, 0}, 0x32}, 0x64}};
static ColliderJntSphInit D_808E3C68 = {{0xA, 9, 0, 0, 0, 0}, 1, &D_808E3C44};
static ? D_808E3C78;                                /* unable to generate initializer */
static ? D_808E3C97;                                /* unable to generate initializer */
static InitChainEntry D_808E3DB8[6];                /* unable to generate initializer */

void func_808E2600(MirRay *arg0) {
    f32 temp_f12;
    f32 temp_f2;
    void *temp_v0;
    void *temp_v1;

    temp_f2 = arg0->unk274;
    temp_v0 = (arg0->actor.params << 5) + &D_808E3C78;
    temp_f12 = temp_v0->unk10;
    arg0->unk160->unk30 = (s16) (s32) (temp_f2 + ((arg0->unk280 - temp_f2) * temp_f12));
    arg0->unk160->unk32 = (s16) (s32) (arg0->unk278 + ((arg0->unk284 - arg0->unk278) * temp_f12));
    arg0->unk160->unk34 = (s16) (s32) (arg0->unk27C + ((arg0->unk288 - arg0->unk27C) * temp_f12));
    temp_v1 = arg0->unk160;
    temp_v1->unk36 = (s16) (s32) ((f32) temp_v0->unk14 * temp_v1->unk38);
}

void func_808E26C8(MirRay *arg0, GlobalContext *arg1) {
    void *sp54;
    f32 sp44;
    s16 sp40;
    s16 sp3E;
    s16 sp3C;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    temp_a0 = arg0 + 0x274;
    temp_a1 = arg0 + 0x280;
    temp_s1 = (arg0->actor.params << 5) + &D_808E3C78;
    sp34 = temp_a1;
    sp38 = temp_a0;
    sp54 = temp_v1;
    if (func_808E3984(temp_a0, temp_a1, temp_v1->world.pos.x, temp_v1->world.pos.y + 30.0f, temp_v1->world.pos.z, (s32) arg0->unk28C, (s32) arg0->unk28E) != 0) {
        if ((temp_s1->unk1F & 8) != 0) {
            Math_Vec3f_Diff(temp_v1 + 0x24, sp38, (Vec3f *) &sp44);
        } else {
            Math_Vec3f_Diff(sp34, sp38, (Vec3f *) &sp44);
        }
        temp_f0 = temp_s1->unk18;
        sp3C = (s16) (s32) ((temp_f0 * sp44) + arg0->unk274);
        sp3E = (s16) (s32) ((temp_f0 * sp48) + arg0->unk278);
        sp40 = (s16) (s32) ((temp_f0 * sp4C) + arg0->unk27C);
        Math_StepToS(arg0 + 0x290, temp_s1->unk16, 6);
        Lights_PointNoGlowSetInfo(arg0 + 0x298, sp3C, sp3E, sp40, (u8) (s32) temp_s1->unk1C, (u8) (s32) temp_s1->unk1D, (u8) (s32) temp_s1->unk1E, (s16) (s32) arg0->unk290);
        return;
    }
    Math_StepToS(arg0 + 0x290, 0, 6);
    Lights_PointSetColorAndRadius(arg0 + 0x298, temp_s1->unk1C, temp_s1->unk1D, temp_s1->unk1E, (s16) (s32) arg0->unk290);
}

void MirRay_Init(MirRay *this, GlobalContext *globalCtx) {
    LightInfo *sp38;
    ColliderQuad *temp_s1_2;
    LightInfo *temp_a0;
    LightInfo *temp_a1;
    s16 temp_v1;
    void *temp_s1;
    MirRay *this = (MirRay *) thisx;

    temp_s1 = (this->actor.params << 5) + &D_808E3C78;
    Actor_ProcessInitChain((Actor *) this, D_808E3DB8);
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    if ((s32) this->actor.params >= 0xA) {
        Actor_MarkForDeath((Actor *) this);
    }
    temp_a0 = &this->unk298;
    this->unk274 = (f32) temp_s1->unk0;
    this->unk278 = (f32) temp_s1->unk2;
    this->unk27C = (f32) temp_s1->unk4;
    this->unk28C = temp_s1->unkC;
    this->unk280 = (f32) temp_s1->unk6;
    this->unk284 = (f32) temp_s1->unk8;
    this->unk288 = (f32) temp_s1->unkA;
    this->unk28E = temp_s1->unkE;
    sp38 = temp_a0;
    Lights_PointNoGlowSetInfo(temp_a0, (s16) (s32) this->unk274, (s16) (s32) this->unk278, (s16) (s32) this->unk27C, (u8) 0xFF, (u8) 0xFF, (u8) 0xFF, (s16) 0x64);
    this->unk294 = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, sp38);
    this->unk228 = -536.0f;
    this->unk22C = -939.0f;
    this->unk240 = -536.0f;
    this->unk238 = 0.0f;
    this->unk234 = -1690.0f;
    this->unk244 = 938.0f;
    this->unk258 = 758.0f;
    this->unk264 = 758.0f;
    this->unk250 = 0.0f;
    this->unk24C = 921.0f;
    this->unk25C = 800.0f;
    this->unk268 = -800.0f;
    temp_a1 = &this->unk144;
    if ((temp_s1->unk1F & 2) != 0) {
        sp38 = temp_a1;
        Collider_InitJntSph(globalCtx, (ColliderJntSph *) temp_a1);
        Collider_SetJntSph(globalCtx, (ColliderJntSph *) temp_a1, (Actor *) this, &D_808E3C68, &this->unk164);
        if ((temp_s1->unk1F & 4) == 0) {
            func_808E2600(this);
        }
    }
    temp_s1_2 = &this->unk1A4;
    Collider_InitQuad(globalCtx, temp_s1_2);
    Collider_SetQuad(globalCtx, temp_s1_2, (Actor *) this, &D_808E3BF4);
    temp_v1 = this->actor.params;
    if ((temp_v1 == 5) || (temp_v1 == 7) || (temp_v1 == 8)) {
        this->actor.room = -1;
    }
}

void MirRay_Destroy(MirRay *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    LightContext *temp_a1;
    MirRay *this = (MirRay *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->lightCtx;
    globalCtx = globalCtx;
    LightContext_RemoveLight(temp_a0, temp_a1, this->unk294);
    if ((*(&D_808E3C97 + (this->actor.params << 5)) & 2) != 0) {
        Collider_DestroyJntSph(globalCtx, (ColliderJntSph *) &this->unk144);
    }
    Collider_DestroyQuad(globalCtx, this + 0x1A4);
}

void MirRay_Update(MirRay *this, GlobalContext *globalCtx) {
    Actor *sp24;
    u8 temp_v0;
    MirRay *this = (MirRay *) thisx;

    D_808E3BF0 = 0;
    sp24 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk2A6 == 0) {
        temp_v0 = *(&D_808E3C97 + (this->actor.params << 5));
        if ((temp_v0 & 2) != 0) {
            if ((temp_v0 & 4) != 0) {
                func_808E2600(this);
            }
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk144);
        }
        if (this->unk224 > 0.0f) {
            CollisionCheck_SetAT(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk1A4);
        }
        func_808E26C8(this, globalCtx);
        if (this->unk224 > 0.0f) {
            func_800B8F98(sp24, 0x1049U);
        }
    }
}

void func_808E2C68(MirRay *arg0, GlobalContext *arg1) {
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    void *sp38;
    f32 sp30;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0->unk224 = 0.0f;
    sp38 = temp_v1;
    if (func_808E3984(arg0 + 0x274, arg0 + 0x280, temp_v1->unkD34, temp_v1->unkD38, temp_v1->unkD3C, (s32) arg0->unk28C, (s32) arg0->unk28E) != 0) {
        temp_v0 = temp_v1 + 0xD04;
        temp_f2 = temp_v0->unk20;
        temp_f12 = temp_v0->unk24;
        temp_f14 = temp_v0->unk28;
        temp_f0 = sqrtf((temp_f14 * temp_f14) + ((temp_f2 * temp_f2) + (temp_f12 * temp_f12)));
        if (temp_f0 == 0.0f) {
            arg0->unk270 = 1.0f;
        } else {
            arg0->unk270 = 1.0f / temp_f0;
        }
        if ((*(&D_808E3C97 + (arg0->actor.params << 5)) & 1) != 0) {
            arg0->unk224 = 1.0f;
            return;
        }
        sp4C = arg0->unk280 - arg0->unk274;
        sp50 = arg0->unk284 - arg0->unk278;
        sp54 = arg0->unk288 - arg0->unk27C;
        sp30 = sp4C;
        temp_f2_2 = ((-temp_v0->unk20 * sp4C) - (temp_v0->unk24 * sp50)) - (sp54 * temp_v0->unk28);
        if (temp_f2_2 < 0.0f) {
            temp_f0_2 = sqrtf((sp54 * sp54) + ((sp30 * sp30) + (sp50 * sp50)));
            if ((temp_f0 != 0.0f) && (temp_f0_2 != 0.0f)) {
                arg0->unk224 = -temp_f2_2 / (temp_f0 * temp_f0_2);
            }
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_808E2E1C(MirRay *arg0, GlobalContext *arg1, ? *arg2) {
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    ? sp70;
    s32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 *temp_a1;
    f32 *temp_a2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    s32 temp_s3;
    void *temp_s0;
    void *temp_v0;
    MirRay *phi_s1;
    ? *phi_s2;
    s32 phi_s3;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_s0 = temp_v0 + 0xD04;
    sp60 = -(temp_v0->unkD24 * arg0->unk270) * arg0->unk224 * 400.0f;
    sp64 = -(temp_v0->unkD28 * arg0->unk270) * arg0->unk224 * 400.0f;
    sp68 = -(temp_v0->unkD2C * arg0->unk270) * arg0->unk224 * 400.0f;
    phi_s1 = arg0;
    phi_s2 = arg2;
    phi_s3 = 0;
    do {
        temp_a1 = &sp88;
        temp_a2 = &sp7C;
        temp_f4 = (temp_s0->unk10 * phi_s1->unk22C) + (temp_s0->unk30 + (phi_s1->unk228 * temp_s0->unk0));
        sp88 = temp_f4;
        temp_f16 = (temp_s0->unk14 * phi_s1->unk22C) + (temp_s0->unk34 + (phi_s1->unk228 * temp_s0->unk4));
        sp8C = temp_f16;
        temp_f18 = (temp_s0->unk18 * phi_s1->unk22C) + (temp_s0->unk38 + (phi_s1->unk228 * temp_s0->unk8));
        sp90 = temp_f18;
        sp7C = sp60 + temp_f4;
        sp80 = sp64 + temp_f16;
        sp84 = sp68 + temp_f18;
        phi_s1 += 0xC;
        if (func_800C57F8(arg1 + 0x830, temp_a1, temp_a2, &sp70, &sp6C, 1) != 0) {
            phi_s2->unk4C = sp6C;
        } else {
            phi_s2->unk4C = 0;
        }
        temp_s3 = phi_s3 + 0x54;
        phi_s2 += 0x54;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x1F8);
}

void func_808E2FF8(? *arg0) {
    s32 temp_a0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t1_3;
    s32 temp_v1;
    void *temp_a3;
    void *temp_t0;
    void *temp_v0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_t2;
    s32 phi_t2_2;
    s32 phi_t2_3;

    phi_v0 = 0;
    do {
        temp_a0 = phi_v0 + 1;
        phi_v1 = temp_a0;
        if (temp_a0 < 6) {
            do {
                temp_v0 = (arg0 + (phi_v0 * 0x54))->unk4C;
                if (temp_v0 != 0) {
                    temp_a3 = arg0 + (phi_v1 * 0x54);
                    temp_t0 = temp_a3->unk4C;
                    if (temp_t0 != 0) {
                        temp_t1 = temp_v0->unk8 - temp_t0->unk8;
                        phi_t2 = -temp_t1;
                        if (temp_t1 >= 0) {
                            phi_t2 = temp_t1;
                        }
                        if (phi_t2 < 0x64) {
                            temp_t1_2 = temp_v0->unkA - temp_t0->unkA;
                            phi_t2_2 = -temp_t1_2;
                            if (temp_t1_2 >= 0) {
                                phi_t2_2 = temp_t1_2;
                            }
                            if (phi_t2_2 < 0x64) {
                                temp_t1_3 = temp_v0->unkC - temp_t0->unkC;
                                phi_t2_3 = -temp_t1_3;
                                if (temp_t1_3 >= 0) {
                                    phi_t2_3 = temp_t1_3;
                                }
                                if ((phi_t2_3 < 0x64) && (temp_v0->unkE == temp_t0->unkE)) {
                                    temp_a3->unk4C = NULL;
                                }
                            }
                        }
                    }
                }
                temp_v1 = phi_v1 + 1;
                phi_v1 = temp_v1;
            } while (temp_v1 != 6);
        }
        phi_v0 = temp_a0;
    } while (temp_a0 != 6);
}

void func_808E30FC(MirRay *arg0, GlobalContext *arg1, ? *arg2) {
    f32 sp138;
    f32 sp134;
    f32 sp130;
    f32 sp12C;
    f32 sp128;
    f32 sp124;
    f32 sp118;
    f32 sp114;
    f32 sp110;
    f32 sp10C;
    f32 sp108;
    f32 sp104;
    f32 sp100;
    f32 spF4;
    f32 spF0;
    f32 spEC;
    f32 spE8;
    f32 spE4;
    f32 spE0;
    f32 spDC;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 sp84;
    f32 sp80;
    f32 *temp_a1;
    f32 *temp_a3;
    f32 *temp_fp;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f16_3;
    f32 temp_f18;
    f32 temp_f18_2;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f8;
    f32 temp_f8_2;
    s32 temp_s2;
    u8 temp_t3;
    void *temp_s1;
    void *temp_s3;
    void *temp_v0;
    ? *phi_s0;
    f32 phi_f18;
    s32 phi_s2;

    temp_fp = &sp130;
    temp_s3 = arg1->actorCtx.actorList[2].first;
    temp_f4 = -(temp_s3->unkD24 * arg0->unk270) * arg0->unk224 * 400.0f;
    spE8 = temp_f4;
    temp_f16 = -(temp_s3->unkD28 * arg0->unk270) * arg0->unk224 * 400.0f;
    spEC = temp_f16;
    temp_f10 = -(temp_s3->unkD2C * arg0->unk270) * arg0->unk224 * 400.0f;
    spF0 = temp_f10;
    temp_f18 = temp_s3->unkD34;
    sp130 = temp_f18;
    sp134 = temp_s3->unkD38;
    temp_f8 = temp_f4 + temp_f18;
    sp138 = temp_s3->unkD3C;
    sp124 = temp_f8;
    temp_f4_2 = temp_f16 + sp134;
    temp_f10_2 = temp_f10 + sp138;
    sp128 = temp_f4_2;
    sp12C = temp_f10_2;
    sp80 = temp_f18;
    sp84 = temp_f8;
    temp_a1 = &spCC;
    temp_a3 = &spC0;
    spCC = (temp_s3->unkD04 * 300.0f) + sp80;
    spD0 = (temp_s3->unkD08 * 300.0f) + sp134;
    spD4 = (temp_s3->unkD0C * 300.0f) + sp138;
    spC0 = (temp_s3->unkD04 * 300.0f) + sp84;
    spC4 = (temp_s3->unkD08 * 300.0f) + temp_f4_2;
    spC8 = (temp_s3->unkD0C * 300.0f) + temp_f10_2;
    Collider_SetQuadVertices(arg0 + 0x1A4, (Vec3f *) temp_a1, (Vec3f *) temp_fp, (Vec3f *) temp_a3, (Vec3f *) &sp124);
    temp_s5 = &sp100;
    temp_s4 = &sp10C;
    phi_s0 = arg2;
    phi_s2 = 0;
    do {
        temp_v0 = phi_s0->unk4C;
        if (temp_v0 != 0) {
            temp_f12 = (f32) temp_v0->unk8 * 0.00003051851f;
            spDC = temp_f12;
            temp_f14 = (f32) phi_s0->unk4C->unkA * 0.00003051851f;
            spE0 = temp_f14;
            temp_f6 = (f32) phi_s0->unk4C->unkC * 0.00003051851f;
            spE4 = temp_f6;
            if (func_8017D2FC(temp_f12, temp_f14, temp_f6, (f32) phi_s0->unk4C->unkE, temp_fp, &sp124, &sp118, 1) != 0) {
                phi_s0->unk0 = sp118;
                temp_s1 = temp_s3 + 0xD04;
                phi_s0->unk4 = sp11C;
                phi_s0->unk8 = sp120;
                temp_f2 = sp118 - sp130;
                temp_f12_2 = sp11C - sp134;
                temp_f14_2 = sp120 - sp138;
                temp_f0 = sqrtf((temp_f2 * temp_f2) + (temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2));
                if (temp_f0 < (arg0->unk224 * 600.0f)) {
                    phi_s0->unk50 = 0xC8U;
                } else {
                    phi_s0->unk50 = (u8) (s32) (800.0f - temp_f0);
                }
                temp_t3 = phi_s0->unk50;
                temp_f18_2 = (f32) temp_t3;
                phi_f18 = temp_f18_2;
                if ((s32) temp_t3 < 0) {
                    phi_f18 = temp_f18_2 + 4294967296.0f;
                }
                phi_s0->unk50 = (u8) (s32) (phi_f18 * 1.275f);
                temp_f16_2 = (temp_s1->unk0 * 100.0f) + sp130;
                sp10C = temp_f16_2;
                temp_f8_2 = (temp_s1->unk4 * 100.0f) + sp134;
                sp110 = temp_f8_2;
                temp_f4_3 = (temp_s1->unk8 * 100.0f) + sp138;
                sp114 = temp_f4_3;
                sp100 = (spE8 * 4.0f) + temp_f16_2;
                sp104 = (spEC * 4.0f) + temp_f8_2;
                sp108 = (spF0 * 4.0f) + temp_f4_3;
                phi_s0->unkC = 1.0f;
                phi_s0->unk20 = 1.0f;
                phi_s0->unk34 = 1.0f;
                phi_s0->unk48 = 1.0f;
                phi_s0->unk10 = 0.0f;
                phi_s0->unk14 = 0.0f;
                phi_s0->unk18 = 0.0f;
                phi_s0->unk1C = 0.0f;
                phi_s0->unk24 = 0.0f;
                phi_s0->unk28 = 0.0f;
                phi_s0->unk2C = 0.0f;
                phi_s0->unk30 = 0.0f;
                phi_s0->unk38 = 0.0f;
                phi_s0->unk3C = 0.0f;
                phi_s0->unk40 = 0.0f;
                phi_s0->unk44 = 0.0f;
                if (func_8017D2FC(spDC, spE0, spE4, (f32) phi_s0->unk4C->unkE, temp_s4, temp_s5, &spF4, 1) != 0) {
                    phi_s0->unkC = (f32) (spF4 - sp118);
                    phi_s0->unk10 = (f32) (spF8 - sp11C);
                    phi_s0->unk14 = (f32) (spFC - sp120);
                }
                temp_f16_3 = (temp_s1->unk10 * 100.0f) + sp130;
                sp10C = temp_f16_3;
                temp_f6_2 = (temp_s1->unk14 * 100.0f) + sp134;
                sp110 = temp_f6_2;
                temp_f4_4 = (temp_s1->unk18 * 100.0f) + sp138;
                sp114 = temp_f4_4;
                sp100 = (spE8 * 4.0f) + temp_f16_3;
                sp104 = (spEC * 4.0f) + temp_f6_2;
                sp108 = (spF0 * 4.0f) + temp_f4_4;
                if (func_8017D2FC(spDC, spE0, spE4, (f32) phi_s0->unk4C->unkE, temp_s4, temp_s5, &spF4, 1) != 0) {
                    phi_s0->unk1C = (f32) (spF4 - sp118);
                    phi_s0->unk20 = (f32) (spF8 - sp11C);
                    phi_s0->unk24 = (f32) (spFC - sp120);
                }
            } else {
                phi_s0->unk4C = NULL;
            }
        }
        temp_s2 = phi_s2 + 0x54;
        phi_s0 += 0x54;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x1F8);
}

void MirRay_Draw(MirRay *this, GlobalContext *globalCtx) {
    ? sp26C;
    ? spC8;
    u8 spC4;
    ? sp74;
    ? *temp_s0_2;
    ? *temp_s0_3;
    Actor *temp_s0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    u8 temp_v0_4;
    ? *phi_s0;
    ? *phi_s0_2;
    MirRay *this = (MirRay *) thisx;

    temp_s0 = globalCtx->actorCtx.actorList[2].first;
    this->unk224 = 0.0f;
    if ((D_808E3BF0 == 0) && (this->unk2A6 == 0) && (func_80124088(globalCtx) != 0)) {
        SysMatrix_InsertMatrix(temp_s0 + 0xD04, 0);
        func_808E2C68(this, globalCtx);
        if (!(this->unk224 <= 0.0f)) {
            temp_a0 = globalCtx->state.gfxCtx;
            temp_s2 = temp_a0;
            func_8012C2DC(temp_a0);
            Matrix_Scale(1.0f, 1.0f, this->unk224, 1);
            temp_v0 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xFA000000;
            temp_v0_2->words.w1 = ((s32) (this->unk224 * 100.0f) & 0xFF) | ~0xFF;
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060003F8));
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_3->words.w1 = (u32) &D_06000168;
            func_808E2E1C(this, globalCtx, &sp74);
            func_808E2FF8(&sp74);
            func_808E30FC(this, globalCtx, &sp74);
            phi_s0 = &spC8;
            if (spC0 == 0) {
                spC4 = 0;
            }
            do {
                if (phi_s0->unk4C != 0) {
                    temp_v0_4 = phi_s0->unk50;
                    if ((s32) spC4 < (s32) temp_v0_4) {
                        spC4 = temp_v0_4;
                    }
                }
                temp_s0_2 = phi_s0 + 0x54;
                phi_s0 = temp_s0_2;
            } while ((u32) temp_s0_2 < (u32) &sp26C);
            phi_s0_2 = &sp74;
            do {
                if (phi_s0_2->unk4C != 0) {
                    SysMatrix_InsertTranslation(phi_s0_2->unk0, phi_s0_2->unk4, phi_s0_2->unk8, 0);
                    Matrix_Scale(0.01f, 0.01f, 0.01f, 1);
                    SysMatrix_InsertMatrix(phi_s0_2 + 0xC, 1);
                    temp_v0_5 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_5 + 8;
                    temp_v0_5->words.w0 = 0xDA380003;
                    temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                    temp_v0_6 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_6 + 8;
                    temp_v0_6->words.w0 = 0xE200001C;
                    temp_v0_6->words.w1 = 0xC8104DD8;
                    temp_v0_7 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_7 + 8;
                    temp_v0_7->words.w0 = 0xFA000000;
                    temp_v0_7->words.w1 = spC4 | ~0xFF;
                    temp_v0_8 = temp_s2->polyXlu.p;
                    temp_s2->polyXlu.p = temp_v0_8 + 8;
                    temp_v0_8->words.w1 = (u32) &D_060004B0;
                    temp_v0_8->words.w0 = 0xDE000000;
                }
                temp_s0_3 = phi_s0_2 + 0x54;
                phi_s0_2 = temp_s0_3;
            } while (temp_s0_3 != &sp26C);
            D_808E3BF0 = 1;
        }
    }
}

s32 func_808E3984(Vec3f *arg0, Vec3f *arg1, f32 arg2, f32 arg3, f32 arg4, s16 arg5, s16 arg6) {
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    ? sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    f32 sp20;
    Vec3f *temp_a1;
    f32 *temp_a1_2;
    f32 *temp_a1_3;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    f32 temp_f8;
    s32 phi_v0;

    temp_f16 = arg0->x;
    temp_f18 = arg0->y;
    temp_f2 = arg1->x - temp_f16;
    sp38 = arg0->z;
    temp_f12 = arg1->y - temp_f18;
    temp_f14 = arg1->z - sp38;
    temp_f10 = (temp_f2 * temp_f2) + (temp_f12 * temp_f12) + (temp_f14 * temp_f14);
    sp34 = temp_f10;
    if (temp_f10 == 0.0f) {
        return 0;
    }
    sp20 = arg2;
    sp24 = arg3;
    temp_a1 = arg0;
    sp28 = arg4;
    temp_f0 = (((arg2 - temp_f16) * temp_f2) + ((arg3 - temp_f18) * temp_f12) + ((arg4 - sp38) * temp_f14)) / sp34;
    temp_f10_2 = (temp_f2 * temp_f0) + temp_f16;
    sp80 = temp_f10_2;
    sp2C = temp_f10_2;
    temp_f8 = (temp_f12 * temp_f0) + temp_f18;
    temp_f6 = (temp_f14 * temp_f0) + sp38;
    sp7C = temp_f8;
    sp78 = temp_f6;
    temp_f2_2 = ((f32) (arg6 - arg5) * temp_f0) + (f32) arg5;
    temp_f12_2 = sp2C - sp20;
    temp_f14_2 = temp_f8 - sp24;
    temp_f16_2 = temp_f6 - sp28;
    phi_v0 = 0;
    if (((temp_f12_2 * temp_f12_2) + (temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2)) <= (temp_f2_2 * temp_f2_2)) {
        arg0 = arg0;
        Math_Vec3f_Diff(arg1, temp_a1, (Vec3f *) &sp5C);
        temp_a1_2 = &sp50;
        sp50 = arg2 - arg0->x;
        sp54 = arg3 - arg0->y;
        sp58 = arg4 - arg0->z;
        if ((bitwise f32) Math3D_Parallel((Vec3f *) &sp5C, (Vec3f *) temp_a1_2) < 0.0f) {
            return 0;
        }
        temp_a1_3 = &sp44;
        sp44 = arg2 - arg1->x;
        sp48 = arg3 - arg1->y;
        sp4C = arg4 - arg1->z;
        if ((bitwise f32) Math3D_Parallel((Vec3f *) &sp5C, (Vec3f *) temp_a1_3) > 0.0f) {
            return 0;
        }
        phi_v0 = 1;
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return phi_v0;
    }
    return phi_v0;
}
