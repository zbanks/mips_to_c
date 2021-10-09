typedef struct EnPaper {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnPaper *, GlobalContext *);
    /* 0x148 */ Vec3f unk148;                       /* inferred */
    /* 0x154 */ char pad154[0xC24];                 /* maybe part of unk148[260]? */
    /* 0xD78 */ s32 unkD78;                         /* inferred */
    /* 0xD7C */ s32 unkD7C;                         /* inferred */
    /* 0xD80 */ s32 unkD80;                         /* inferred */
    /* 0xD84 */ s16 unkD84;                         /* inferred */
    /* 0xD86 */ char padD86[0x2];
} EnPaper;                                          /* size = 0xD88 */

struct _mips2c_stack_EnPaper_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EnPaper_Draw {
    /* 0x00 */ char pad0[0x68];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnPaper_Init {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnPaper_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1F46C {};              /* size 0x0 */

struct _mips2c_stack_func_80C1F480 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1F4E8 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1F4FC {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C1F55C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ s32 sp2C;                            /* inferred */
    /* 0x30 */ s32 sp30;                            /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C1F6E0 {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ f32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1F87C {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad24[0x4];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

? func_8017842C(Gfx *, f32, f32, f32, s32, f32, f32, f32, f32, f32, f32); /* extern */
void func_80C1F46C(EnPaper *arg0);                  /* static */
void func_80C1F4E8(EnPaper *arg0);                  /* static */
void func_80C1F55C(EnPaper *arg0, Vec3f *arg1);     /* static */
void func_80C1F6E0(EnPaper *arg0, Vec3f *arg1);     /* static */
void func_80C1F87C(EnPaper *arg0);                  /* static */
extern ? D_0600D5A0;
static Vec3f D_80C1FC60 = {0.0f, 0.0f, 1.0f};

void EnPaper_Init(EnPaper *this, GlobalContext *globalCtx) {
    EnPaper *this = (EnPaper *) thisx;
    Actor_SetScale((Actor *) this, 0.01f);
    this->unkD84 = 0x46;
    this->unkD78 = D_80C1FC60.x;
    this->unkD7C = D_80C1FC60.y;
    this->unkD80 = D_80C1FC60.z;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    func_80C1F46C(this);
}

void EnPaper_Destroy(EnPaper *this, GlobalContext *globalCtx) {
    EnPaper *this = (EnPaper *) thisx;

}

void func_80C1F46C(EnPaper *arg0) {
    arg0->actionFunc = func_80C1F480;
}

void func_80C1F480(EnPaper *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    phi_s1 = &this->unk148;
    phi_s0 = 0;
    do {
        func_80C1F55C(this, phi_s1);
        temp_s0 = phi_s0 + 0x34;
        phi_s1 += 0x34;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xC30);
    func_80C1F4E8(this);
}

void func_80C1F4E8(EnPaper *arg0) {
    arg0->actionFunc = func_80C1F4FC;
}

void func_80C1F4FC(EnPaper *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    Vec3f *phi_s1;
    s32 phi_s0;

    phi_s1 = &this->unk148;
    phi_s0 = 0;
    do {
        func_80C1F6E0(this, phi_s1);
        temp_s0 = phi_s0 + 0x34;
        phi_s1 += 0x34;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0xC30);
}

void func_80C1F55C(EnPaper *arg0, Vec3f *arg1) {
    s32 sp30;
    s32 sp2C;
    Vec3f *sp24;
    Vec3f *temp_a1;

    sp2C = Rand_Next();
    sp30 = Rand_Next();
    SysMatrix_InsertRotation(unksp2E, unksp32, Rand_Next(), 0);
    temp_a1 = arg1 + 0xC;
    sp24 = temp_a1;
    SysMatrix_MultiplyVector3fByState(&D_80C1FC60, temp_a1);
    arg1->unk18 = (f32) arg0->actor.world.pos.x;
    arg1->unk1C = (f32) arg0->actor.world.pos.y;
    arg1->unk20 = (f32) arg0->actor.world.pos.z;
    arg1->unk18 = (f32) (arg1->unk18 + (Rand_Centered() * 4.0f));
    arg1->unk1C = (f32) (arg1->unk1C + (Rand_Centered() * 4.0f));
    arg1->unk20 = (f32) (arg1->unk20 + (Rand_Centered() * 4.0f));
    arg1->unk24 = (f32) arg0->actor.velocity.x;
    arg1->unk28 = (f32) arg0->actor.velocity.y;
    arg1->unk2C = (f32) arg0->actor.velocity.z;
    arg1->unk24 = (f32) (arg1->unk24 + (Rand_Centered() * 9.0f));
    arg1->unk28 = (f32) (arg1->unk28 + (Rand_ZeroOne() * 6.0f));
    arg1->unk2C = (f32) (arg1->unk2C + (Rand_Centered() * 9.0f));
    arg1->unk30 = Rand_Next();
    arg1->unk32 = (s16) ((Rand_Next() >> 4) + 0x16C);
    SysMatrix_InsertRotationAroundUnitVector_s(arg1->unk30, temp_a1, 0);
    SysMatrix_MultiplyVector3fByState(&D_80C1FC60, arg1);
}

void func_80C1F6E0(EnPaper *arg0, Vec3f *arg1) {
    f32 sp1C;
    f32 sp18;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;

    arg0 = arg0;
    sp1C = Math_CosS(arg1->unk30);
    sp18 = Math_SinS(arg1->unk30);
    temp_f16 = 1.0f - sp1C;
    if (!(arg1->unk1C < (arg0->actor.floorHeight - 40.0f))) {
        temp_f12 = arg1->unk24;
        temp_f0 = fabsf(arg1->x);
        arg1->unk28 = (f32) (arg1->unk28 + arg0->actor.gravity);
        temp_f2 = arg1->unk28;
        temp_f14 = arg1->unk2C;
        temp_f6 = 0.2f * fabsf(arg1->y);
        temp_f0_2 = fabsf(arg1->z);
        temp_f12_2 = arg1->unk14;
        arg1->unk24 = (f32) (temp_f12 - (0.2f * temp_f0 * (temp_f12 + arg0->unkD78)));
        temp_f0_3 = arg1->unkC;
        temp_f2_2 = arg1->unk10;
        arg1->unk28 = (f32) (temp_f2 - (temp_f6 * (temp_f2 + arg0->unkD7C)));
        arg1->unk30 = (s16) (arg1->unk30 + arg1->unk32);
        arg1->unk2C = (f32) (temp_f14 - (0.2f * temp_f0_2 * (temp_f14 + arg0->unkD80)));
        arg1->unk18 = (f32) (arg1->unk18 + arg1->unk24);
        arg1->unk1C = (f32) (arg1->unk1C + arg1->unk28);
        arg1->unk20 = (f32) (arg1->unk20 + arg1->unk2C);
        arg1->x = (temp_f0_3 * temp_f16 * temp_f12_2) - (temp_f2_2 * sp18);
        arg1->y = (temp_f2_2 * temp_f16 * temp_f12_2) + (temp_f0_3 * sp18);
        arg1->z = (temp_f12_2 * temp_f16 * temp_f12_2) + sp1C;
    }
}

void func_80C1F87C(EnPaper *arg0) {
    f32 sp2C;
    f32 sp28;
    f32 sp20;
    f32 temp_f2;
    s16 temp_v1;
    s32 phi_v0;

    sp2C = (Rand_Centered() * 4.0f) + 6.0f;
    temp_f2 = -sp2C;
    arg0->unkD7C = Math_SinS(arg0->actor.shape.rot.x) * temp_f2;
    sp20 = temp_f2;
    sp28 = Math_CosS(arg0->actor.shape.rot.x) * temp_f2;
    arg0->unkD78 = Math_SinS(arg0->actor.shape.rot.y) * sp28;
    arg0->unkD80 = Math_CosS(arg0->actor.shape.rot.y) * sp28;
    arg0->actor.shape.rot.x += Rand_Next() >> 8;
    temp_v1 = arg0->actor.shape.rot.x;
    arg0->actor.shape.rot.y += Rand_Next() >> 6;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    } else {
        phi_v0 = (s32) temp_v1;
    }
    if (phi_v0 >= 0x1556) {
        if ((s32) temp_v1 > 0) {
            arg0->actor.shape.rot.x = 0x1555;
            return;
        }
        arg0->actor.shape.rot.x = -0x1555;
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void EnPaper_Update(EnPaper *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnPaper *this = (EnPaper *) thisx;

    this->actionFunc(this, globalCtx);
    func_80C1F87C(this);
    temp_v0 = this->unkD84;
    if (temp_v0 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unkD84 = temp_v0 - 1;
}

void EnPaper_Draw(EnPaper *this, GlobalContext *globalCtx) {
    Gfx *temp_s0;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    GraphicsContext *temp_s2;
    Vec3f *temp_s3;
    s32 temp_s4;
    s32 phi_s4;
    Vec3f *phi_s3;
    EnPaper *this = (EnPaper *) thisx;

    temp_s3 = &this->unk148;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C5B0(temp_a0);
    temp_v0 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xE200001C;
    temp_v0->words.w1 = 0xC8112078;
    temp_v0_2 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFCFFFE60;
    temp_v0_2->words.w1 = 0xFFFE79F8;
    temp_v0_3 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xD9000000;
    temp_v0_3->words.w1 = 0x230405;
    phi_s4 = 0;
    phi_s3 = temp_s3;
    do {
        if (phi_s4 == 0) {
            temp_v0_4 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = -1;
            temp_v0_4->words.w0 = 0xFA000000;
        } else if (phi_s4 == 0x1E) {
            temp_v0_5 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = 0xFF2020FF;
            temp_v0_5->words.w0 = 0xFA000000;
        } else if (phi_s4 == 0x28) {
            temp_v0_6 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = 0x4080FFFF;
            temp_v0_6->words.w0 = 0xFA000000;
        } else if (phi_s4 == 0x32) {
            temp_v0_7 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w1 = 0x40FF80FF;
            temp_v0_7->words.w0 = 0xFA000000;
        }
        if ((this->actor.floorHeight - 40.0f) < phi_s3->unk1C) {
            temp_s1 = globalCtx->state.gfxCtx;
            temp_s0 = temp_s1->polyOpa.d - 0x40;
            temp_s1->polyOpa.d = temp_s0;
            func_8017842C(temp_s0, this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, (s32) phi_s3->unk30, phi_s3->unkC, phi_s3->unk10, phi_s3->unk14, phi_s3->unk18, phi_s3->unk1C, phi_s3->unk20);
            temp_v0_8 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_8 + 8;
            temp_v0_8->words.w1 = (u32) temp_s0;
            temp_v0_8->words.w0 = 0xDA380003;
            temp_v0_9 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = (u32) &D_0600D5A0;
            temp_v0_9->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 1;
        phi_s4 = temp_s4;
        phi_s3 += 0x34;
    } while (temp_s4 != 0x3C);
}
