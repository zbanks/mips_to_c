? func_800BDAA0(GlobalContext *, SkelAnime *, ?, void (*)(GlobalContext *), EnZow *, s32); /* extern */
void func_80BDC270(ColliderCylinder *arg1, void *arg2, void *arg3, u8 arg4, ColliderCylinder *, void *, s32); /* static */
void func_80BDC2D8(EnZow *arg0, ColliderCylinder *arg1, f32 *arg2); /* static */
void func_80BDC3C0(ColliderCylinder *arg0, f32 *arg1, f32 *arg2, Actor *arg3); /* static */
void func_80BDC50C(ColliderCylinder *arg0);         /* static */
void func_80BDC5C8(EnZow *arg0, ColliderCylinder *arg1); /* static */
void func_80BDC6F8(EnZow *arg0, ColliderCylinder *arg1); /* static */
void func_80BDC830(ColliderCylinder *arg0, GraphicsContext **arg1); /* static */
void func_80BDC9DC(ColliderCylinder *arg0, GraphicsContext **arg1); /* static */
void func_80BDCB84(ColliderCylinder *arg0, GraphicsContext **arg1); /* static */
void func_80BDCD38(EnZow *arg0, void *arg1, ColliderCylinder *arg2, void *arg3, u8 arg4); /* static */
void func_80BDCDA8(EnZow *arg0, ColliderCylinder *arg1); /* static */
void func_80BDD04C(EnZow *arg0, s16 arg1, u8 arg2); /* static */
s32 func_80BDD154(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BDD1E0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BDD490(EnZow *arg0, GlobalContext *arg1); /* static */
Gfx *func_80BDDA7C(GraphicsContext *arg0, GraphicsContext *); /* static */
void func_80BDDAA0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BDDAE0(GlobalContext *arg4);            /* static */
extern ? D_060029F0;
extern ? D_06002A50;
extern ? D_06002BA0;
extern ? D_06002C10;
extern AnimationHeader D_06003610;
extern AnimationHeader D_06004248;
extern FlexSkeletonHeader D_0600D208;
extern ? D_0600D220;
extern ? D_0600D288;
static ColliderCylinderInit D_80BDDCF0 = {
    {0xA, 0, 0x11, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static ? D_80BDDD1C;                                /* unable to generate initializer */
static ? D_80BDDD28;                                /* unable to generate initializer */
static ? D_80BDDD34;                                /* unable to generate initializer */
static f32 D_80BDDD3C = 0.0f;
static ? D_80BDDD40;                                /* unable to generate initializer */
static Vec3f D_80BDDD4C = {400.0f, 0.0f, 0.0f};
static ? D_80BDDD58;                                /* unable to generate initializer */
static void *D_80BDDD84 = (void *)0x3D75C28F;       /* const */
static void *D_80BDDD8C = (void *)0x3D75C28F;       /* const */

typedef struct EnZow {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ ColliderCylinder unk188;           /* inferred */
    /* 0x01D4 */ Vec3s unk1D4;                      /* inferred */
    /* 0x01DA */ char pad1DA[0x72];                 /* maybe part of unk1D4[20]? */
    /* 0x024C */ Vec3s unk24C;                      /* inferred */
    /* 0x0252 */ char pad252[0x72];                 /* maybe part of unk24C[20]? */
    /* 0x02C4 */ s16 unk2C4;                        /* inferred */
    /* 0x02C6 */ s16 unk2C6;                        /* inferred */
    /* 0x02C8 */ s16 unk2C8;                        /* inferred */
    /* 0x02CA */ u16 unk2CA;                        /* inferred */
    /* 0x02CC */ s16 unk2CC;                        /* inferred */
    /* 0x02CE */ s16 unk2CE;                        /* inferred */
    /* 0x02D0 */ ColliderCylinder unk2D0;           /* inferred */
    /* 0x031C */ char pad31C[0x2FC];
    /* 0x0618 */ void (*actionFunc)(EnZow *, GlobalContext *);
} EnZow;                                            /* size 0x61C */

void func_80BDC270(void *arg0, ColliderCylinder *arg1, void *arg2, void *arg3, u8 arg4) {
    s16 temp_v0;
    void *phi_a0;
    s16 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a0->unk0 == 0) {
        phi_a0->unk0 = 1U;
        phi_a0->unk14 = (s32) arg1->base.actor;
        phi_a0->unk18 = (s32) arg1->base.at;
        phi_a0->unk4 = arg2;
        phi_a0->unk8 = arg3;
        phi_a0->unk1C = (s32) arg1->base.ac;
        phi_a0->unkF = arg4;
        return;
    }
    phi_a0 += 0x38;
    if ((s32) temp_v0 >= 0xF) {
        return;
    }
    goto loop_1;
}

void func_80BDC2D8(EnZow *arg0, ColliderCylinder *arg1, f32 *arg2) {
    s16 temp_v0;
    ColliderCylinder *phi_a1;
    s16 phi_v0;

    phi_a1 = arg1;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if ((phi_a1->unk0 == 0) && !((arg0->actor.world.pos.y + arg0->actor.yDistToWater) <= arg2->unk4)) {
        phi_a1->unk0 = 3U;
        phi_a1->unk14 = (s32) arg2->unk0;
        phi_a1->info.toucher.dmgFlags = arg2->unk4;
        phi_a1->unk1C = (s32) arg2->unk8;
        phi_a1->info.bumper.dmgFlags = arg2->unk0;
        phi_a1->unk24 = (f32) arg2->unk4;
        phi_a1->unk28 = (s32) arg2->unk8;
        phi_a1->unk2C = (s32) D_80BDDD1C.unk0;
        phi_a1->info.atHit = D_80BDDD1C.unk4;
        phi_a1->info.acHit = D_80BDDD1C.unk8;
        arg1 = phi_a1;
        arg1->base.at = ((Rand_ZeroOne() - 0.5f) * 0.02f) + 0.12f;
        return;
    }
    phi_a1 += 0x38;
    if ((s32) temp_v0 >= 0xF) {
        return;
    }
    goto loop_1;
}

void func_80BDC3C0(ColliderCylinder *arg0, f32 *arg1, f32 *arg2, f32 arg3) {
    s16 temp_v0;
    ColliderCylinder *phi_a0;
    s16 phi_v0;

    phi_a0 = arg0;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_a0->unk0 != 2) {
        phi_a0->unk0 = 2U;
        phi_a0->unk14 = (s32) arg1->unk0;
        phi_a0->info.toucher.dmgFlags = arg1->unk4;
        phi_a0->unk1C = (s32) arg1->unk8;
        phi_a0->info.bumper.dmgFlags = D_80BDDD28.unk0;
        phi_a0->unk24 = (s32) D_80BDDD28.unk4;
        phi_a0->unk28 = (s32) D_80BDDD28.unk8;
        phi_a0->unk2C = (s32) arg2->unk0;
        phi_a0->info.atHit = arg2->unk4;
        phi_a0->info.acHit = arg2->unk8;
        arg0 = phi_a0;
        arg0->unkF = (s8) (u32) ((Rand_ZeroOne() * 100.0f) + 100.0f);
        arg0->base.at = arg3;
        return;
    }
    phi_a0 += 0x38;
    if ((s32) temp_v0 >= 0xF) {
        return;
    }
    goto loop_1;
}

void func_80BDC50C(ColliderCylinder *arg0) {
    s16 temp_s1;
    u8 temp_v0;
    ColliderCylinder *phi_s0;
    s16 phi_s1;

    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        if (phi_s0->unk0 == 1) {
            Math_ApproachF(phi_s0 + 4, phi_s0->base.ac, 0.2f, 0.8f);
            temp_v0 = phi_s0->unkF;
            if ((s32) temp_v0 >= 0x15) {
                phi_s0->unkF = (u8) (temp_v0 - 0x14);
            } else {
                phi_s0->unkF = 0U;
            }
            if (phi_s0->unkF == 0) {
                phi_s0->unk0 = 0U;
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0xF);
}

void func_80BDC5C8(EnZow *arg0, ColliderCylinder *arg1) {
    f32 temp_f2;
    f32 temp_f6;
    s16 temp_s1;
    ColliderCylinder *phi_s0;
    s16 phi_s1;

    phi_s0 = arg1;
    phi_s1 = 0;
    do {
        if (phi_s0->unk0 == 3) {
            phi_s0->unk14 = (f32) (((Rand_ZeroOne() * 0.5f) - 0.25f) + phi_s0->info.bumper.dmgFlags);
            temp_f6 = ((Rand_ZeroOne() * 0.5f) - 0.25f) + phi_s0->unk28;
            phi_s0->info.toucher.dmgFlags += phi_s0->info.atHit;
            phi_s0->unk1C = temp_f6;
            temp_f2 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
            if (temp_f2 <= phi_s0->info.toucher.dmgFlags) {
                phi_s0->unk0 = 0U;
                phi_s0->info.toucher.dmgFlags = temp_f2;
                func_80BDC270(phi_s0, phi_s0 + 0x14, (void *)0x3D75C28F, (u8) 0.12f, (ColliderCylinder *)0xC8);
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0xF);
}

void func_80BDC6F8(EnZow *arg0, ColliderCylinder *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_s1;
    ColliderCylinder *phi_s0;
    s16 phi_s1;

    phi_s0 = arg1;
    phi_s1 = 0;
    do {
        if (phi_s0->unk0 == 2) {
            temp_f0 = phi_s0->info.atHit;
            phi_s0->unk14 = (f32) (phi_s0->unk14 + phi_s0->unk2C);
            phi_s0->info.toucher.dmgFlags += temp_f0;
            phi_s0->unk1C = (f32) (phi_s0->unk1C + phi_s0->info.acHit);
            if (temp_f0 >= -20.0f) {
                phi_s0->info.atHit = temp_f0 + phi_s0->unk24;
            } else {
                phi_s0->info.atHit = -20.0f;
                phi_s0->unk24 = 0.0f;
            }
            temp_f0_2 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
            if (phi_s0->info.toucher.dmgFlags < temp_f0_2) {
                phi_s0->unk0 = 0U;
                phi_s0->info.toucher.dmgFlags = temp_f0_2;
                func_80BDC270(phi_s0, phi_s0 + 0x14, (void *)0x3D75C28F, (u8) 0.12f, (ColliderCylinder *)0xC8);
            }
        }
        temp_s1 = phi_s1 + 1;
        phi_s0 += 0x38;
        phi_s1 = temp_s1;
    } while ((s32) temp_s1 < 0xF);
}

void func_80BDC830(ColliderCylinder *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    ColliderCylinder *phi_s2;
    s32 phi_s6;
    s16 phi_s3;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s6 = 0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk0 == 1) {
            if (phi_s6 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = 0;
                temp_v0->words.w0 = 0xE7000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_0600D220;
                temp_v0_2->words.w0 = 0xDE000000;
                temp_v0_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0x9B9B9B00;
                temp_v0_3->words.w0 = 0xFB000000;
                phi_s6 = 1;
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = phi_s2->unkF | ~0xFF;
            SysMatrix_InsertTranslation(phi_s2->unk14, phi_s2->info.toucher.dmgFlags, phi_s2->unk1C, 0);
            temp_f12 = phi_s2->base.at;
            Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_0600D288;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xF);
}

void func_80BDC9DC(ColliderCylinder *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    ColliderCylinder *phi_s2;
    s32 phi_s6;
    s16 phi_s3;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s6 = 0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk0 == 3) {
            if (phi_s6 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_060029F0;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0;
                temp_v0_2->words.w0 = 0xE7000000;
                temp_v0_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0x96969600;
                temp_v0_3->words.w0 = 0xFB000000;
                temp_v0_4 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = -1;
                temp_v0_4->words.w0 = 0xFA000000;
                phi_s6 = 1;
            }
            SysMatrix_InsertTranslation(phi_s2->unk14, phi_s2->info.toucher.dmgFlags, phi_s2->unk1C, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->base.at;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06002A50;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xF);
}

void func_80BDCB84(ColliderCylinder *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    s16 temp_s3;
    ColliderCylinder *phi_s2;
    s32 phi_s6;
    s16 phi_s3;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_s6 = 0;
    phi_s3 = 0;
    do {
        if (phi_s2->unk0 == 2) {
            if (phi_s6 == 0) {
                temp_v0 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = (u32) &D_06002BA0;
                temp_v0->words.w0 = 0xDE000000;
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0;
                temp_v0_2->words.w0 = 0xE7000000;
                temp_v0_3 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w1 = 0xC8C8C800;
                temp_v0_3->words.w0 = 0xFB000000;
                phi_s6 = 1;
            }
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFA000000;
            temp_v0_4->words.w1 = phi_s2->unkF | 0xB4B4B400;
            SysMatrix_InsertTranslation(phi_s2->unk14, phi_s2->info.toucher.dmgFlags, phi_s2->unk1C, 0);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_f12 = phi_s2->base.at;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06002C10;
            temp_v0_6->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s2 += 0x38;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0xF);
}

void func_80BDCD38(EnZow *arg0, void *arg1, ColliderCylinder *arg2, void *arg3, u8 arg4) {
    D_80BDDD3C = arg0->actor.world.pos.x;
    D_80BDDD3C = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
    D_80BDDD3C = arg0->actor.world.pos.z;
    func_80BDC270(arg2, arg3, arg1, (u8) &D_80BDDD34, arg2, arg3, (s32) arg4);
}

void func_80BDCDA8(EnZow *arg0, ColliderCylinder *arg1) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 *temp_a1;
    f32 *temp_s5;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f4;
    s32 temp_s0;
    void *temp_s3;
    s32 phi_s0;

    temp_s3 = arg0 + 0x24;
    temp_s5 = &sp78;
    phi_s0 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 1.5f) + 0.5f;
        temp_f22 = Rand_ZeroOne() * 6.28f;
        sp7C = (Rand_ZeroOne() * 3.0f) + 3.0f;
        sp78 = __sinf(temp_f22) * temp_f20;
        temp_f18 = __cosf(temp_f22) * temp_f20;
        temp_a1 = &sp84;
        sp80 = temp_f18;
        sp84.unk0 = temp_s3->unk0;
        sp84.unk4 = (s32) temp_s3->unk4;
        sp84.unk8 = (s32) temp_s3->unk8;
        temp_f4 = sp8C + (temp_f18 * 6.0f);
        sp84 += sp78 * 6.0f;
        sp8C = temp_f4;
        sp88 += arg0->actor.yDistToWater;
        func_80BDC3C0(arg1, temp_a1, temp_s5, (Actor *)0x3DA3D70A);
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xA);
}

void EnZow_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnZow *this = (EnZow *) thisx;
    SkelAnime *sp34;
    SkelAnime *temp_a1;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80BDD79C;
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_0600D208, &D_06004248, &this->unk1D4, &this->unk24C, 0x14);
    SkelAnime_ChangeAnimDefaultStop(sp34, &D_06003610);
    this->unk2C8 = 1;
    Collider_InitAndSetCylinder(globalCtx, &this->unk188, &this->actor, &D_80BDDCF0);
    this->actor.shape.rot.z = 0;
    this->unk2CA = 0;
    this->unk2CC = 0;
    this->unk2CE = 0;
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.textId = 0;
    this->actor.flags &= -2;
    this->actor.world.rot.z = this->actor.shape.rot.z;
}

void EnZow_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnZow *this = (EnZow *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk188);
}

void func_80BDD04C(EnZow *arg0, s16 arg1, u8 arg2) {
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    AnimationHeaderCommon **temp_v1_2;

    if (((s32) arg1 >= 0) && ((s32) arg1 < 3)) {
        if ((s32) arg1 < 2) {
            temp_v1 = (arg1 * 4) + &D_80BDDD40;
            sp30 = temp_v1;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1, 1.0f, 0.0f, (f32) SkelAnime_GetFrameCount(*temp_v1), (u8) (s32) arg2, -5.0f);
        } else {
            temp_v1_2 = (arg1 * 4) + &D_80BDDD40;
            sp30 = temp_v1_2;
            SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_v1_2, -1.0f, (f32) SkelAnime_GetFrameCount(*temp_v1_2), 0.0f, (u8) (s32) arg2, 0.0f);
        }
        arg0->unk2C8 = arg1;
    }
}

s32 func_80BDD154(Actor *arg0, GlobalContext *arg1) {
    if ((Actor_IsLinkFacingActor(arg0, 0x3000, arg1) != 0) && (Actor_IsActorFacingLink(arg0, 0x3000) != 0) && (arg0->xzDistToPlayer < 170.0f) && (fabsf(arg0->yDistToPlayer) < 100.0f)) {
        return 1;
    }
    return 0;
}

void func_80BDD1E0(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v0_5;
    u16 phi_a1;

    if ((arg0->params & 0xF) == 1) {
        if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
            if (gSaveContext.playerForm == 2) {
                temp_v0 = gSaveContext.weekEventReg[78];
                phi_a1 = 0x12FAU;
                if ((temp_v0 & 4) != 0) {
                    phi_a1 = 0x12FDU;
                } else {
                    gSaveContext.weekEventReg[78] = temp_v0 | 4;
                }
            } else {
                temp_v0_2 = gSaveContext.weekEventReg[78];
                if ((temp_v0_2 & 0x10) != 0) {
                    phi_a1 = 0x1301U;
                } else {
                    gSaveContext.weekEventReg[78] = temp_v0_2 | 0x10;
                    phi_a1 = 0x12FFU;
                }
            }
        } else if (gSaveContext.playerForm == 2) {
            temp_v0_3 = gSaveContext.weekEventReg[78];
            phi_a1 = 0x12F3U;
            if ((temp_v0_3 & 8) != 0) {
                phi_a1 = 0x12F8U;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0_3 | 8;
            }
        } else {
            temp_v0_4 = gSaveContext.weekEventReg[78];
            if ((temp_v0_4 & 0x10) != 0) {
                phi_a1 = 0x1301U;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0_4 | 0x10;
                phi_a1 = 0x12FFU;
            }
        }
    } else if ((gSaveContext.weekEventReg[55] & 0x80) != 0) {
        if (gSaveContext.playerForm == 2) {
            phi_a1 = 0x12ECU;
        } else {
            phi_a1 = 0x12F1U;
        }
    } else {
        phi_a1 = 0x12EFU;
        if (gSaveContext.playerForm == 2) {
            temp_v0_5 = gSaveContext.weekEventReg[78];
            phi_a1 = 0x12E8U;
            if ((temp_v0_5 & 2) != 0) {
                phi_a1 = 0x12EBU;
            } else {
                gSaveContext.weekEventReg[78] = temp_v0_5 | 2;
            }
        }
    }
    func_801518B0(arg1, phi_a1, arg0);
}

void func_80BDD350(EnZow *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    if ((this->unk2CA & 2) != 0) {
        Audio_PlayActorSound2(&this->actor, 0x2809U);
        func_80BDCDA8(this, &this->unk2D0);
        this->actor.flags &= -2;
        this->unk144.animPlaybackSpeed = 0.0f;
        this->actor.velocity.y = -4.0f;
    }
    if (this->actor.yDistToWater > 120.0f) {
        Math_ApproachF(&this->actor.velocity.y, 0.0f, 0.4f, 0.6f);
        if (this->actor.velocity.y > -0.1f) {
            this->actor.velocity.y = 0.0f;
            this->actionFunc = func_80BDD79C;
        }
    }
    if (((this->actor.bgCheckFlags & 1) != 0) || (this->actor.yDistToWater > 180.0f)) {
        this->actor.velocity.y = 0.0f;
        this->actionFunc = func_80BDD79C;
    }
    if (this->unk144.animPlaybackSpeed <= 0.0f) {
        temp_v0 = this->unk2CE;
        if ((s32) temp_v0 >= 6) {
            this->unk2CE = temp_v0 - 5;
            return;
        }
        this->unk2CE = 0;
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

void func_80BDD490(EnZow *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    arg0->actor.velocity.y = 0.0f;
    if (arg0->actor.xzDistToPlayer > 440.0f) {
        arg0->actionFunc = func_80BDD350;
        func_80BDD04C(arg0, 2, 2U);
    } else if ((arg0->unk2CA & 2) != 0) {
        func_80BDD04C(arg0, 0, 0U);
    }
    if ((arg1->gameplayFrames & 7) == 0) {
        func_80BDCD38(arg0, arg0 + 0x2D0, (ColliderCylinder *)0x3E4CCCCD, (void *)0x3F800000, (u8) 0xC8);
    }
    temp_v0 = arg0->unk2CE;
    if ((s32) temp_v0 < 0xF5) {
        arg0->unk2CE = temp_v0 + 0xA;
        return;
    }
    arg0->unk2CE = 0xFF;
}

void func_80BDD570(EnZow *this, GlobalContext *globalCtx) {
    u16 temp_v0_2;
    u8 temp_v0;

    func_80BDD490(this, globalCtx);
    temp_v0 = func_80152498(&globalCtx->msgCtx);
    if (temp_v0 != 2) {
        if ((temp_v0 == 5) && (func_80147624(globalCtx) != 0)) {
            temp_v0_2 = globalCtx->msgCtx.unk11F04;
            switch (temp_v0_2) {
            case 4840:
            case 4841:
            case 4844:
            case 4845:
            case 4847:
            case 4849:
            case 4851:
            case 4852:
            case 4853:
            case 4854:
            case 4856:
            case 4858:
            case 4859:
            case 4861:
            case 4863:
                func_80151938(globalCtx, (temp_v0_2 + 1) & 0xFFFF);
                return;
            default:
                func_801477B4(globalCtx);
                return;
            }
        } else {
            // Duplicate return node #8. Try simplifying control flow for better match
        }
    } else {
        this->actionFunc = func_80BDD634;
    }
}

void func_80BDD634(EnZow *this, GlobalContext *globalCtx) {
    func_80BDD490(this, globalCtx);
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        this->actionFunc = func_80BDD570;
        func_80BDD1E0(&this->actor, globalCtx);
        return;
    }
    if (func_80BDD154(&this->actor, globalCtx) != 0) {
        func_800B8614(&this->actor, globalCtx, 180.0f);
    }
}

void func_80BDD6BC(EnZow *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    temp_v0 = this->unk2CE;
    if ((s32) temp_v0 < 0xF5) {
        this->unk2CE = temp_v0 + 0xA;
    } else {
        this->unk2CE = 0xFF;
    }
    temp_f0 = this->actor.yDistToWater;
    if (temp_f0 < 54.0f) {
        Audio_PlayActorSound2(&this->actor, 0x2808U);
        func_80BDCDA8(this, &this->unk2D0);
        func_80BDD04C(this, 1, 2U);
        this->actor.flags |= 1;
        this->actionFunc = func_80BDD634;
        this->actor.velocity.y = 0.0f;
        return;
    }
    if (temp_f0 < 80.0f) {
        Math_ApproachF(&this->actor.velocity.y, 2.0f, 0.4f, 0.6f);
    }
}

void func_80BDD79C(EnZow *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    if (this->actor.xzDistToPlayer < 400.0f) {
        this->actionFunc = func_80BDD6BC;
        this->actor.velocity.y = 4.0f;
    }
    temp_v0 = this->unk2CE;
    if ((s32) temp_v0 >= 6) {
        this->unk2CE = temp_v0 - 5;
    } else {
        this->unk2CE = 0;
    }
    temp_f0 = this->actor.yDistToWater;
    if (temp_f0 > 180.0f) {
        this->actor.world.pos.y = this->actor.world.pos.y + -180.0f + temp_f0;
    }
}

void EnZow_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnZow *this = (EnZow *) thisx;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a0;
    ColliderCylinder *temp_a2;
    s16 temp_v1;
    s16 phi_v0;
    s16 phi_v1;

    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    temp_a2 = &this->unk188;
    sp28 = temp_a2;
    Collider_UpdateCylinder(&this->actor, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 15.0f, 30.0f, 5U);
    if (this->unk2CE != 0) {
        this->unk2CA &= 0xFFFD;
        if (SkelAnime_FrameUpdateMatrix(&this->unk144) != 0) {
            this->unk2CA |= 2;
        }
    } else {
        this->unk2CA |= 2;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0x800, (s16) 0x100);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->actionFunc(this, globalCtx);
    if (this->unk2CE != 0) {
        if ((globalCtx->state.frames & 8) != 0) {
            sp34.unk0 = this->actor.world.pos.x;
            sp34.unk4 = (f32) this->actor.world.pos.y;
            sp34.unk8 = (f32) this->actor.world.pos.z;
            sp38 += ((Rand_ZeroOne() - 0.5f) * 10.0f) + 18.0f;
            sp34 += (Rand_ZeroOne() - 0.5f) * 28.0f;
            sp3C += (Rand_ZeroOne() - 0.5f) * 28.0f;
            func_80BDC2D8(this, &this->unk2D0, &sp34);
        }
        temp_v1 = this->unk2C6;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            this->unk2C6 = temp_v1 - 1;
            phi_v0 = this->unk2C6;
        }
        phi_v1 = this->unk2C6;
        if (phi_v0 == 0) {
            this->unk2C6 = Rand_S16Offset(0x3C, 0x3C);
            phi_v1 = this->unk2C6;
        }
        this->unk2C4 = phi_v1;
        if ((s32) this->unk2C4 >= 3) {
            this->unk2C4 = 0;
        }
    }
    temp_a0 = &this->unk2D0;
    this->actor.shape.shadowAlpha = (u8) this->unk2CE;
    sp28 = temp_a0;
    func_80BDC50C(temp_a0);
    func_80BDC5C8(this, sp28);
    func_80BDC6F8(this, sp28);
}

void *func_80BDDA7C(GraphicsContext *arg0) {
    void *temp_v1;

    temp_v1 = arg0->polyOpa.d - 0x10;
    arg0->polyOpa.d = temp_v1;
    temp_v1->words.w0 = 0xDF000000;
    temp_v1->words.w1 = 0;
    return temp_v1;
}

void func_80BDDAA0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 0xF) {
        SysMatrix_MultiplyVector3fByState(&D_80BDDD4C, arg4 + 0x3C);
    }
}

void func_80BDDAE0(GlobalContext *arg4) {
    func_80BDDAA0(arg4);
}

void EnZow_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnZow *this = (EnZow *) thisx;
    ? sp54;
    GraphicsContext *sp4C;
    Gfx *sp40;
    Gfx *sp3C;
    Gfx *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0_2;
    s16 temp_v0;

    sp54.unk0 = (s32) D_80BDDD58.unk0;
    sp54.unk4 = (s32) D_80BDDD58.unk4;
    sp54.unk8 = (s32) D_80BDDD58.unk8;
    SysMatrix_StatePush();
    temp_a0 = &this->unk2D0;
    sp34 = temp_a0;
    func_80BDC830(temp_a0, &globalCtx->state.gfxCtx);
    func_80BDC9DC(temp_a0, &globalCtx->state.gfxCtx);
    func_80BDCB84(temp_a0, &globalCtx->state.gfxCtx);
    SysMatrix_StatePop();
    temp_v0 = this->unk2CE;
    if (temp_v0 != 0) {
        temp_a0_2 = globalCtx->state.gfxCtx;
        if ((s32) temp_v0 >= 0xFF) {
            sp4C = temp_a0_2;
            func_8012C28C(temp_a0_2);
            temp_v0_2 = sp4C->polyOpa.p;
            sp4C->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w1 = 0xFF;
            temp_v0_2->words.w0 = 0xFB000000;
            temp_v0_3 = sp4C->polyOpa.p;
            sp4C->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            sp4C = sp4C;
            sp40 = temp_v0_3;
            sp40->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk2C4 * 4))->unk54);
            temp_v0_4 = sp4C->polyOpa.p;
            sp4C->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060030;
            sp3C = temp_v0_4;
            sp3C->words.w1 = func_80BDDA7C(globalCtx->state.gfxCtx, sp4C);
            SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80BDDAA0, &this->actor);
            return;
        }
        temp_v0_5 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDB060020;
        sp38 = temp_v0_5;
        sp38->words.w1 = Lib_SegmentedToVirtual((sp + (this->unk2C4 * 4))->unk54);
        func_800BDAA0(globalCtx, &this->unk144, 0, func_80BDDAE0, this, (s32) this->unk2CE);
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

