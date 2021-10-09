typedef struct BgIkanaMirror {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ ColliderTris unk15C;                /* inferred */
    /* 0x17C */ ColliderTrisElement unk17C;         /* inferred */
    /* 0x1D8 */ char pad1D8[0x2E0];                 /* maybe part of unk17C[9]? */
    /* 0x4B8 */ ColliderQuad unk4B8;                /* inferred */
    /* 0x538 */ char pad538[0x80];
    /* 0x5B8 */ void (*actionFunc)(BgIkanaMirror *, GlobalContext *);
    /* 0x5BC */ void *unk5BC;                       /* inferred */
    /* 0x5C0 */ void *unk5C0;                       /* inferred */
    /* 0x5C4 */ char pad5C4[0x2];
    /* 0x5C6 */ u8 unk5C6;                          /* inferred */
    /* 0x5C7 */ char pad5C7[0x5];                   /* maybe part of unk5C6[6]? */
} BgIkanaMirror;                                    /* size = 0x5CC */

struct _mips2c_stack_BgIkanaMirror_Destroy {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_BgIkanaMirror_Draw {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x10];                    /* maybe part of sp24[5]? */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_BgIkanaMirror_Init {
    /* 0x00 */ char pad0[0x48];
    /* 0x48 */ ColliderTris *sp48;                  /* inferred */
    /* 0x4C */ char pad4C[0x14];                    /* maybe part of sp48[6]? */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad84[0xC];
};                                                  /* size = 0x90 */

struct _mips2c_stack_BgIkanaMirror_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7F730 {
    /* 0x00 */ char pad0[0x60];
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0xC];
    /* 0x78 */ ? sp78;                              /* inferred */
    /* 0x78 */ char pad78[0xC];
    /* 0x84 */ ? sp84;                              /* inferred */
    /* 0x84 */ char pad84[0x14];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80B7FA84 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7FA9C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B7FB84 {};              /* size 0x0 */

struct _mips2c_stack_func_80B7FBA4 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

void func_80B7F730(BgIkanaMirror *arg0);            /* static */
void func_80B7FA84(BgIkanaMirror *arg0, BgIkanaMirror *); /* static */
void func_80B7FA9C(void *arg0, GlobalContext *arg1); /* static */
void func_80B7FB84(void *arg0, s32, void *);        /* static */
void func_80B7FBA4(BgIkanaMirror *arg0, GlobalContext *arg1); /* static */
extern ? D_060014B0;
extern void D_06001678;
extern ? D_06001880;
extern void D_06001AD8;
extern ? D_06001E18;
extern CollisionHeader D_06002358;
static ColliderTrisElementInit D_80B7FF50[9] = {
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 21.6f, 13.7f}, {-25.3f, 6.0f, 8.4f}, {25.3f, 6.0f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {-25.3f, 6.0f, 8.4f}, {0.0f, 21.6f, 13.7f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {0.0f, 21.6f, 13.7f}, {25.3f, 6.0f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {-25.3f, 45.0f, 8.4f}, {-25.3f, 6.0f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {25.3f, 6.0f, 8.4f}, {25.3f, 45.0f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {-17.9f, 64.1f, 8.4f}, {-25.3f, 45.0f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {25.3f, 45.0f, 8.4f}, {17.9f, 64.1f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {0.0f, 72.0f, 8.4f}, {-17.9f, 64.1f, 8.4f}}},
    },
    {
        {4, {0, 0, 0}, {0x200000, 0, 0}, 0, 1, 0},
        {{{0.0f, 45.0f, 13.7f}, {17.9f, 64.1f, 8.4f}, {0.0f, 72.0f, 8.4f}}},
    },
};
static ColliderTrisInit D_80B8016C = {{0xA, 0, 0x29, 0, 0, 2}, 9, &D_80B7FF50};
static ColliderQuadInit D_80B8017C;                 /* type too large by 48; unable to generate initializer */
static Vec3f D_80B8019C = {0.0f, 72.0f, 20.0f};
static Vec3f D_80B801A8 = {0.0f, 72.0f, 240.0f};
static Vec3f D_80B801B4 = {0.0f, 6.0f, 20.0f};
static Vec3f D_80B801C0[7] = {
    {0.0f, 6.0f, 240.0f},
    {7.751868e-33f, 2.75506e-40f, 0.0f},
    {2.938736e-39f, 0.0f, 0.0f},
    {0.0f, 6.617445e-24f, 25.3f},
    {20.0f, 20.0f, 25.3f},
    {20.0f, 240.0f, -25.3f},
    {20.0f, 20.0f, -25.3f},
}; /* extra bytes: 6 */
static InitChainEntry D_80B8021C[5];                /* unable to generate initializer */

void func_80B7F730(BgIkanaMirror *arg0) {
    ? sp84;
    ? sp78;
    ? sp6C;
    ? sp60;
    Vec3f *temp_s0;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    Vec3f *phi_s4;
    Vec3f *phi_s3;
    ColliderQuad *phi_s2;

    SysMatrix_StatePush();
    SysMatrix_SetStateRotationAndTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, arg0 + 0xBC);
    phi_s1 = &D_80B8019C;
    phi_s0 = &D_80B801A8;
    phi_s4 = &D_80B801B4;
    phi_s3 = D_80B801C0;
    phi_s2 = arg0 + 0x4B8;
    do {
        SysMatrix_MultiplyVector3fByState(phi_s1, (Vec3f *) &sp84);
        SysMatrix_MultiplyVector3fByState(phi_s0, (Vec3f *) &sp78);
        SysMatrix_MultiplyVector3fByState(phi_s4, (Vec3f *) &sp6C);
        SysMatrix_MultiplyVector3fByState(phi_s3, (Vec3f *) &sp60);
        Collider_SetQuadVertices(phi_s2, (Vec3f *) &sp84, (Vec3f *) &sp78, (Vec3f *) &sp6C, (Vec3f *) &sp60);
        temp_s0 = phi_s0 + 0x50;
        phi_s1 += 0x50;
        phi_s0 = temp_s0;
        phi_s4 += 0x50;
        phi_s3 += 0x50;
        phi_s2 += 0x80;
    } while (temp_s0 != (&D_80B801A8 + 0xA0));
    SysMatrix_StatePop();
}

void BgIkanaMirror_Init(BgIkanaMirror *this, GlobalContext *globalCtx) {
    ? sp84;
    ? sp78;
    ? sp6C;
    ? sp60;
    ColliderTris *sp48;
    ColliderQuadInit *temp_s0_2;
    ColliderTris *temp_a1;
    Vec3f *temp_s0;
    s32 temp_s3;
    Vec3f *phi_s1;
    Vec3f *phi_s0;
    s32 phi_s3;
    ColliderQuad *phi_s1_2;
    ColliderQuadInit *phi_s0_2;
    s32 phi_s4;
    BgIkanaMirror *this = (BgIkanaMirror *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B8021C);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06002358);
    temp_a1 = &this->unk15C;
    sp48 = temp_a1;
    Collider_InitTris(globalCtx, temp_a1);
    Collider_SetTris(globalCtx, temp_a1, (Actor *) this, &D_80B8016C, &this->unk17C);
    SysMatrix_SetStateRotationAndTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (Vec3s *) &this->actor.shape);
    phi_s3 = 0;
    phi_s4 = 0;
    do {
        phi_s1 = phi_s4 + D_80B8016C.elements + 0x18;
        phi_s0 = (Vec3f *) &sp60;
loop_2:
        SysMatrix_MultiplyVector3fByState(phi_s1, phi_s0);
        temp_s0 = phi_s0 + 0xC;
        phi_s1 += 0xC;
        phi_s0 = temp_s0;
        if (temp_s0 != &sp84) {
            goto loop_2;
        }
        Collider_SetTrisVertices(sp48, phi_s3, (Vec3f *) &sp60, (Vec3f *) &sp6C, (Vec3f *) &sp78);
        temp_s3 = phi_s3 + 1;
        phi_s3 = temp_s3;
        phi_s4 += 0x3C;
    } while (temp_s3 < 9);
    phi_s1_2 = &this->unk4B8;
    phi_s0_2 = &D_80B8017C;
    do {
        Collider_InitQuad(globalCtx, phi_s1_2);
        Collider_SetQuad(globalCtx, phi_s1_2, (Actor *) this, phi_s0_2);
        temp_s0_2 = phi_s0_2 + 0x50;
        phi_s1_2 += 0x80;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 != D_80B8021C);
    func_80B7F730(this);
    this->unk5BC = Lib_SegmentedToVirtual(&D_06001678);
    this->unk5C0 = Lib_SegmentedToVirtual(&D_06001AD8);
    func_80B7FA84(this);
}

void BgIkanaMirror_Destroy(BgIkanaMirror *this, GlobalContext *globalCtx) {
    s32 temp_s0;
    ColliderQuad *phi_s1;
    s32 phi_s0;
    BgIkanaMirror *this = (BgIkanaMirror *) thisx;

    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    Collider_DestroyTris(globalCtx, &this->unk15C);
    phi_s1 = &this->unk4B8;
    phi_s0 = 0;
    do {
        Collider_DestroyQuad(globalCtx, phi_s1);
        temp_s0 = phi_s0 + 0x80;
        phi_s1 += 0x80;
        phi_s0 = temp_s0;
    } while (temp_s0 != 0x100);
}

void func_80B7FA84(BgIkanaMirror *arg0) {
    arg0->unk5C8 = 0;
    arg0->actionFunc = func_80B7FA9C;
}

void func_80B7FA9C(BgIkanaMirror *arg0, GlobalContext *arg1) {
    s16 temp_v1;
    s8 temp_v0_4;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    s32 phi_a2;

    temp_v0 = arg0->unk5C7;
    phi_a2 = 0;
    if ((s32) temp_v0 >= 0x65) {
        arg0->unk5C7 = temp_v0 - 0x64;
    } else {
        arg0->unk5C7 = 0;
    }
    temp_v0_2 = arg0->unk15C.base.acFlags;
    if ((temp_v0_2 & 2) != 0) {
        temp_v1 = arg0->unk5C4;
        arg0->unk15C.base.acFlags = temp_v0_2 & 0xFFFD;
        arg0->unk5C8 = 0;
        if ((s32) temp_v1 < 0x190) {
            arg0->unk5C4 = temp_v1 + 1;
        }
        temp_v0_3 = arg0->unk5C6;
        if ((s32) temp_v0_3 < 0xC3) {
            arg0->unk5C6 = temp_v0_3 + 0x3C;
        } else {
            arg0->unk5C6 = 0xFF;
        }
    } else {
        temp_v0_4 = arg0->unk5C8;
        if ((s32) temp_v0_4 > 0) {
            phi_a2 = 1;
        } else if ((s32) arg0->unk5C4 > 0) {
            arg0->unk5C8 = temp_v0_4 + 1;
        }
    }
    if (phi_a2 != 0) {
        func_80B7FB84(arg0, phi_a2, arg0);
        return;
    }
    CollisionCheck_SetAC(arg1, arg1 + 0x18884, arg0 + 0x15C);
}

void func_80B7FB84(BgIkanaMirror *arg0) {
    arg0->actor.flags |= 0x20;
    arg0->actionFunc = func_80B7FBA4;
}

void func_80B7FBA4(BgIkanaMirror *arg0, GlobalContext *arg1) {
    s16 temp_v0_3;
    s32 temp_s0;
    s32 temp_s0_2;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;
    BgIkanaMirror *phi_v0;
    s32 phi_s0;
    Collider *phi_s1;
    s32 phi_s0_2;

    phi_v0 = arg0;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        temp_v1 = phi_v0->unk4B8.base.atFlags;
        temp_s0 = phi_s0 + 0x80;
        phi_s0 = temp_s0;
        if ((temp_v1 & 2) != 0) {
            phi_v0->unk4B8.base.atFlags = temp_v1 & ~2;
        }
        phi_v0 += 0x80;
    } while (temp_s0 < 0x100);
    temp_v0 = arg0->unk5C7;
    if ((s32) temp_v0 < 0x9B) {
        arg0->unk5C7 = temp_v0 + 0x64;
    } else {
        arg0->unk5C7 = 0xFF;
    }
    temp_v0_2 = arg0->unk5C6;
    phi_s1 = arg0 + 0x4B8;
    if ((s32) temp_v0_2 >= 0x3D) {
        arg0->unk5C6 = temp_v0_2 - 0x3C;
    } else {
        arg0->unk5C6 = 0;
    }
    temp_v0_3 = arg0->unk5C4;
    if ((s32) temp_v0_3 > 0) {
        arg0->unk5C4 = temp_v0_3 - 1;
        do {
            CollisionCheck_SetAT(arg1, arg1 + 0x18884, phi_s1);
            temp_s0_2 = phi_s0_2 + 0x80;
            phi_s1 += 0x80;
            phi_s0_2 = temp_s0_2;
        } while (temp_s0_2 != 0x100);
        return;
    }
    arg0->actor.flags &= -0x21;
    func_80B7FA84(arg0, arg0);
}

void BgIkanaMirror_Update(BgIkanaMirror *this, GlobalContext *globalCtx) {
    BgIkanaMirror *this = (BgIkanaMirror *) thisx;
    this->actionFunc(this, globalCtx);
}

void BgIkanaMirror_Draw(BgIkanaMirror *this, GlobalContext *globalCtx) {
    Gfx *sp4C;
    Gfx *sp40;
    f32 sp38;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f6;
    u8 temp_v0_6;
    f32 phi_f6;
    BgIkanaMirror *this = (BgIkanaMirror *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp4C = temp_v0;
    sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06001E18;
    temp_v0_2->words.w0 = 0xDE000000;
    if ((s32) this->unk5C6 > 0) {
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) this->unk5BC);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000080;
        temp_v0_3->words.w1 = this->unk5C6 | ~0xFF;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDA380003;
        sp40 = temp_v0_4;
        sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_060014B0;
        temp_v0_5->words.w0 = 0xDE000000;
    }
    temp_v0_6 = this->unk5C7;
    if ((s32) temp_v0_6 > 0) {
        temp_f6 = (f32) temp_v0_6;
        phi_f6 = temp_f6;
        if ((s32) temp_v0_6 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_f0 = phi_f6 * 0.003921569f;
        sp38 = temp_f0;
        AnimatedMat_Draw(globalCtx, this->unk5C0);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xFA000080;
        temp_v0_7->words.w1 = ((s32) (temp_f0 * 123.0f) & 0xFF) | ~0xFF;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w0 = 0xFB000000;
        temp_v0_8->words.w1 = ((s32) (temp_f0 * 185.0f) & 0xFF) | 0xD7D7FF00;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_9 + 8;
        temp_v0_9->words.w0 = 0xDA380003;
        sp24 = temp_v0_9;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w1 = (u32) &D_06001880;
        temp_v0_10->words.w0 = 0xDE000000;
    }
}
