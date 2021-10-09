typedef struct EnFuKago {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(EnFuKago *, GlobalContext *);
    /* 0x160 */ ColliderSphere unk160;              /* inferred */
    /* 0x1B8 */ char pad1B8[0x38];
    /* 0x1F0 */ s16 unk1F0;                         /* inferred */
    /* 0x1F2 */ char pad1F2[0x148];                 /* maybe part of unk1F0[165]? */
    /* 0x33A */ s16 unk33A;                         /* inferred */
    /* 0x33C */ s16 unk33C;                         /* inferred */
    /* 0x33E */ char pad33E[0x2];
} EnFuKago;                                         /* size = 0x340 */

struct _mips2c_stack_EnFuKago_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFuKago_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnFuKago_Init {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ CollisionHeader *sp34;               /* inferred */
    /* 0x38 */ char pad38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnFuKago_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACF8B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACF994 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACF9A8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACF9DC {};              /* size 0x0 */

struct _mips2c_stack_func_80ACF9FC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACFA78 {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ Vec3f *sp74;                         /* inferred */
    /* 0x78 */ char pad78[0x10];                    /* maybe part of sp74[5]? */
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x8];
    /* 0x90 */ ? sp90;                              /* inferred */
    /* 0x90 */ char pad90[0x2];
    /* 0x92 */ s16 sp92;                            /* inferred */
    /* 0x94 */ char pad94[0x4];                     /* maybe part of sp92[3]? */
    /* 0x98 */ ? sp98;                              /* inferred */
    /* 0x98 */ char pad98[0x10];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_80ACFDAC {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80AD0028 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ char pad38[0x4];
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80AD0274 {};              /* size 0x0 */

struct _mips2c_stack_func_80AD0288 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AD0340 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ Vec3s *sp44;                         /* inferred */
    /* 0x48 */ char pad48[0x28];
};                                                  /* size = 0x70 */

s32 func_80ACF8B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACF994(EnFuKago *arg0);                 /* static */
void func_80ACF9A8(Actor *arg0);                    /* static */
void func_80ACF9DC(Actor *arg0);                    /* static */
void func_80ACF9FC(void *arg0);                     /* static */
void func_80ACFA78(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80ACFDAC(EnFuKago *arg0, GlobalContext *arg1, Vec3f *arg2); /* static */
void func_80AD0028(EnFuKago *arg0, GlobalContext *arg1); /* static */
void func_80AD0274(EnFuKago *arg0);                 /* static */
void func_80AD0288(Actor *arg0, ? arg1);            /* static */
void func_80AD0340(s32 arg0, GraphicsContext **arg1); /* static */
extern ? D_060006A0;
extern ? D_06000740;
extern ? D_060007E0;
extern ? D_06000880;
extern ? D_06000920;
extern ? D_060009C0;
extern CollisionHeader D_060015C0;
static ColliderSphereInit D_80AD05F0 = {
    {0xA, 0, 0, 0x3D, 0x10, 4},
    {4, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0xC8}, 0x64},
};
static u32 D_80AD061C[6] = {0x60006A0, 0x6000740, 0x60007E0, 0x6000880, 0x6000920, 0x60009C0};
static ? D_80AD0634;                                /* unable to generate initializer */
static ? D_80AD067C;                                /* unable to generate initializer */
static f32 D_80AD06C4[18] = {
    -13.7f,
    9.0f,
    15.5f,
    13.7f,
    9.0f,
    15.5f,
    13.7f,
    9.0f,
    0.0f,
    13.7f,
    9.0f,
    -15.5f,
    -13.7f,
    9.0f,
    -15.5f,
    -13.7f,
    9.0f,
    0.0f,
};
static ? D_80AD070C;                                /* unable to generate initializer */
static Vec3f D_80AD0714 = {0.0f, 0.0f, 0.0f};

void EnFuKago_Init(EnFuKago *this, GlobalContext *globalCtx) {
    CollisionHeader *sp34;
    Actor *temp_s0;
    Actor *temp_s0_2;
    ColliderSphere *temp_s0_3;
    Actor *phi_s0;
    Actor *phi_s0_2;
    EnFuKago *this = (EnFuKago *) thisx;

    sp34 = NULL;
    temp_s0 = globalCtx->actorCtx.actorList[4].first;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck_RelocateMeshHeader(&D_060015C0, &sp34);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp34);
    Actor_SetScale((Actor *) this, 0.1f);
    phi_s0 = temp_s0;
    phi_s0_2 = temp_s0;
    if (temp_s0 != 0) {
loop_1:
        phi_s0_2 = phi_s0;
        if (phi_s0->id == 0xB5) {
            this->actor.parent = phi_s0;
        } else {
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s0_2 = temp_s0_2;
            if (temp_s0_2 != 0) {
                goto loop_1;
            }
        }
    }
    if (phi_s0_2 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_s0_3 = &this->unk160;
    Collider_InitSphere(globalCtx, temp_s0_3);
    Collider_SetSphere(globalCtx, temp_s0_3, (Actor *) this, &D_80AD05F0);
    this->unk160.dim.worldSphere.radius = 0xA;
    this->unk33A = 0;
    this->unk33C = 0;
    this->actor.colChkInfo.health = 1;
    func_80ACF994(this);
}

void EnFuKago_Destroy(EnFuKago *this, GlobalContext *globalCtx) {
    EnFuKago *this = (EnFuKago *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

s32 func_80ACF8B8(Actor *arg0, GlobalContext *arg1) {
    s16 *temp_v1;
    s16 temp_a0;
    u8 temp_v0;

    temp_v0 = arg0->unk172;
    arg0->unk1A8 = (s16) (s32) arg0->world.pos.x;
    arg0->unk1AC = (s16) (s32) arg0->world.pos.z;
    arg0->unk1AA = (s16) (s32) (arg0->world.pos.y + 10.0f);
    if ((temp_v0 & 2) != 0) {
        temp_v1 = arg0->unk16C;
        arg0->unk172 = (u8) (temp_v0 & 0xFFFD);
        temp_a0 = *temp_v1;
        if (temp_a0 == 9) {
            arg0->child = temp_v1;
            Audio_PlayActorSound2(arg0, 0x4807U);
            return 1;
        }
        if (temp_a0 == 0) {
            func_80ACFA78(arg0, arg1, arg0);
        }
        goto block_8;
    }
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x160);
block_8:
    return 0;
}

void func_80ACF994(EnFuKago *arg0) {
    arg0->actionFunc = func_80ACF9A8;
}

void func_80ACF9A8(Actor *arg0) {
    if (func_80ACF8B8(arg0) != 0) {
        func_80ACF9DC(arg0);
    }
}

void func_80ACF9DC(Actor *arg0) {
    arg0->child->unk1F0 = 0x14;
    arg0->unk15C = func_80ACF9FC;
}

void func_80ACF9FC(void *arg0) {
    EnFuKago *temp_a2;
    EnFuKago *temp_v0;
    void *temp_v1;

    temp_v0 = arg0->unk124;
    temp_v1 = arg0->unk120;
    temp_a2 = temp_v0;
    if (temp_v0->actor.update == 0) {
        arg0->unk124 = NULL;
        func_80ACF994(temp_a2);
        return;
    }
    if (temp_a2->unk1F0 == 1) {
        temp_v1->unk548 = (s16) (temp_v1->unk548 + 1);
        func_80ACFA78((Actor *) temp_a2);
        return;
    }
    temp_v0->actor.world.pos.x = arg0->unk24;
    arg0->unk124->actor.world.pos.z = arg0->unk2C;
}

void func_80ACFA78(Actor *arg0, GlobalContext *arg1) {
    ? sp98;
    ? sp90;
    ? sp88;
    Vec3f *sp74;
    Vec3f *temp_v1;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    void *temp_s0;
    void *phi_s0;
    ? *phi_s2;
    ? *phi_s3;
    f32 *phi_s4;

    temp_v1 = arg0 + 0x24;
    sp88.unk0 = (s32) D_80AD070C.unk0;
    sp88.unk4 = (u16) D_80AD070C.unk4;
    arg0->colChkInfo.health = 0;
    sp98.unk0 = (f32) temp_v1->x;
    sp98.unk4 = (f32) temp_v1->y;
    sp98.unk8 = (f32) temp_v1->z;
    sp90.unk0 = (s32) (unaligned s32) arg0->unkBC;
    sp90.unk4 = (u16) arg0->shape.rot.z;
    sp74 = temp_v1;
    phi_s0 = arg0 + 0x1B8;
    phi_s2 = &D_80AD0634;
    phi_s3 = &D_80AD067C;
    phi_s4 = D_80AD06C4;
    do {
        phi_s0->unk0 = (f32) sp98.unk0;
        phi_s0->unk4 = (f32) sp98.unk4;
        phi_s0->unk8 = (f32) sp98.unk8;
        phi_s0->unk30 = (unaligned s32) sp88.unk0;
        phi_s0->unk34 = (u16) sp88.unk4;
        temp_f20 = Math_CosS(sp92);
        phi_s0->unkC = (f32) ((phi_s2->unk8 * Math_SinS(sp92)) + (temp_f20 * phi_s2->unk0));
        phi_s0->unk10 = (f32) (Rand_Centered() + phi_s2->unk4);
        temp_f20_2 = Math_CosS(sp92);
        phi_s0->unk14 = (f32) ((temp_f20_2 * phi_s2->unk8) - (phi_s2->unk0 * Math_SinS(sp92)));
        temp_f20_3 = Math_CosS(sp92);
        phi_s0->unk18 = (f32) ((phi_s3->unk8 * Math_SinS(sp92)) + (temp_f20_3 * phi_s3->unk0));
        phi_s0->unk1C = (f32) phi_s3->unk4;
        temp_f20_4 = Math_CosS(sp92);
        phi_s0->unk20 = (f32) ((temp_f20_4 * phi_s3->unk8) - (phi_s3->unk0 * Math_SinS(sp92)));
        phi_s0->unk36 = (s16) ((s32) Rand_Next() >> 5);
        phi_s0->unk38 = 0;
        phi_s0->unk3A = (s16) ((s32) Rand_Next() >> 5);
        temp_s4 = phi_s4 + 0xC;
        phi_s0->unk24 = (f32) *phi_s4;
        temp_s0 = phi_s0 + 0x40;
        temp_s0->unk-18 = (f32) temp_s4->unk-8;
        temp_s0->unk-4 = 0;
        temp_s0->unk-40 = (f32) (phi_s0->unk0 + (18.0f * phi_s0->unkC));
        temp_s0->unk-14 = (f32) temp_s4->unk-4;
        temp_s0->unk-3C = (f32) (phi_s0->unk4 + (18.0f * phi_s0->unk10));
        temp_s0->unk-38 = (f32) (phi_s0->unk8 + (18.0f * phi_s0->unk14));
        phi_s0 = temp_s0;
        phi_s2 += 0xC;
        phi_s3 += 0xC;
        phi_s4 = temp_s4;
    } while (temp_s4 != &D_80AD070C);
    arg0->freezeTimer = 2;
    EffectSsHahen_SpawnBurst(arg1, sp74, 17.0f, 0, (s16) 0xF, (s16) 0xD, (s16) 0x14, (s16) -1, (s16) 0xA, NULL);
    arg0->unk338 = 0x3C;
    arg0->unk33A = 1;
    Audio_PlayActorSound2(arg0, 0x28AAU);
    func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk144);
    arg0->unk15C = func_80AD0028;
}

void func_80ACFDAC(EnFuKago *arg0, GlobalContext *arg1, Vec3f *arg2) {
    f32 sp38;
    ? sp34;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_cond;
    s32 phi_v1;
    s32 phi_v1_2;

    if (arg2->unk3C == 0) {
        if (arg2->y < 15.0f) {
            sp34.unk0 = (f32) arg2->x;
            sp34.unk4 = (f32) arg2->y;
            sp34.unk8 = (f32) arg2->z;
            sp38 = 30.0f;
            EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp34, NULL, NULL, (s16) 0, (s16) 0x320);
            EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp34, 0xFA, 0x28A, (s16) 0);
            arg2->unk3C = 1;
        }
        Math_SmoothStepToF(arg2 + 0x18, 0.0f, 0.1f, 0.1f, 0.1f);
        Math_SmoothStepToF(arg2 + 0x1C, -1.0f, 0.1f, 0.1f, 0.1f);
        Math_SmoothStepToF(arg2 + 0x20, 0.0f, 0.1f, 0.1f, 0.1f);
        return;
    }
    temp_f0 = Math_Vec3f_DistXZ(arg2, &D_80AD0714);
    temp_cond = temp_f0 < 190.0f;
    arg2->unk18 = (f32) (arg2->unkC * -0.1f);
    arg2->unk1C = (f32) (((15.0f - arg2->y) * 0.1f) - (0.2f * arg2->unk10));
    arg2->unk20 = (f32) (arg2->unk14 * -0.1f);
    if (temp_cond) {
        temp_f2 = 190.0f / temp_f0;
        arg2->x *= temp_f2;
        arg2->z *= temp_f2;
    }
    temp_v0 = arg2->unk36;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    if (phi_v1 >= 0x65) {
        Math_SmoothStepToS(arg2 + 0x36, 0, 0xA, 0x64, (s16) 0xA);
    }
    temp_v0_2 = arg2->unk3A;
    phi_v1_2 = (s32) temp_v0_2;
    if ((s32) temp_v0_2 < 0) {
        phi_v1_2 = -(s32) temp_v0_2;
    }
    if (phi_v1_2 >= 0x65) {
        Math_SmoothStepToS(arg2 + 0x3A, 0, 0xA, 0x64, (s16) 0xA);
    }
    if ((arg1->gameplayFrames & 7) == 0) {
        sp34.unk0 = (f32) arg2->x;
        sp34.unk4 = (f32) arg2->y;
        sp34.unk8 = (f32) arg2->z;
        sp38 = 30.0f;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp34, 0xFA, 0x28A, (s16) 0);
    }
}

void func_80AD0028(EnFuKago *arg0, GlobalContext *arg1) {
    f32 sp34;
    s16 temp_v0;
    s32 temp_s1;
    Vec3f *phi_s0;
    s32 phi_s1;

    phi_s0 = arg0 + 0x1B8;
    phi_s1 = 0;
    do {
        func_80ACFDAC(arg0, arg1, phi_s0);
        phi_s0->unkC = (f32) (phi_s0->unkC + phi_s0->unk18);
        phi_s0->unk10 = (f32) (phi_s0->unk10 + phi_s0->unk1C);
        phi_s0->unk14 = (f32) (phi_s0->unk14 + phi_s0->unk20);
        phi_s0->x += phi_s0->unkC;
        temp_s1 = phi_s1 + 1;
        phi_s0->y += phi_s0->unk10;
        phi_s0->z += phi_s0->unk14;
        phi_s0->unk30 = (s16) (phi_s0->unk30 + phi_s0->unk36);
        phi_s0->unk32 = (s16) (phi_s0->unk32 + phi_s0->unk38);
        phi_s0->unk34 = (s16) (phi_s0->unk34 + phi_s0->unk3A);
        phi_s0 += 0x40;
        phi_s1 = temp_s1;
    } while (temp_s1 != 6);
    temp_v0 = arg0->unk338;
    if (temp_v0 == 0x3B) {
        arg0->unk284 *= -1.0f;
        arg0->unk28C *= -1.0f;
        arg0->unk2C4 *= -1.0f;
        arg0->unk2CC *= -1.0f;
    } else {
        if (temp_v0 == 0x3A) {
            sp34.unk0 = arg0->unk304;
            sp34.unk4 = (s32) arg0->unk308;
            sp34.unk8 = (f32) arg0->unk30C;
            arg0->unk304 = sp3C;
            arg0->unk30C = -sp34;
            sp34.unk0 = arg0->unk244;
            sp34.unk4 = (s32) arg0->unk248;
            sp34.unk8 = (f32) arg0->unk24C;
            arg0->unk244 = -sp3C;
            arg0->unk32E *= -1;
            arg0->unk24C = sp34;
            arg0->unk330 *= -1;
            arg0->unk332 *= -1;
            arg0->unk26E *= -1;
            arg0->unk270 *= -1;
            arg0->unk272 *= -1;
            goto block_8;
        }
        if (temp_v0 == 0) {
            func_80AD0274(arg0);
block_8:
        }
    }
    arg0->unk338 += -1;
}

void func_80AD0274(EnFuKago *arg0) {
    arg0->actionFunc = func_80AD0288;
}

void func_80AD0288(Actor *arg0, GlobalContext *arg1) {
    f32 *sp24;
    f32 *temp_a0;
    f32 temp_f0;

    temp_a0 = arg0 + 0x58;
    sp24 = temp_a0;
    Math_SmoothStepToF(temp_a0, 0.0f, 0.1f, 0.005f, 0.005f);
    temp_f0 = temp_a0->unk0;
    temp_a0->unk8 = temp_f0;
    temp_a0->unk4 = temp_f0;
    if (temp_f0 == 0.0f) {
        Actor_MarkForDeath(arg0);
    }
}

void EnFuKago_Update(EnFuKago *this, GlobalContext *globalCtx) {
    EnFuKago *this = (EnFuKago *) thisx;
    this->actionFunc(this, globalCtx);
    if (this->unk33C == 1) {
        func_80AD0274(this);
    }
}

void func_80AD0340(s32 arg0, GraphicsContext **arg1) {
    Vec3s *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    u32 *temp_s3;
    void *temp_s4;
    void *phi_s0;
    u32 *phi_s3;

    temp_a0 = *arg1;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    sp44 = arg0 + 0xBC;
    temp_s4 = arg0 + 0x58;
    phi_s0 = arg0 + 0x1B8;
    phi_s3 = D_80AD061C;
    do {
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, sp44);
        SysMatrix_InsertTranslation(phi_s0->unk24, phi_s0->unk28, phi_s0->unk2C, 1);
        SysMatrix_InsertRotation(phi_s0->unk30, phi_s0->unk32, phi_s0->unk34, 1);
        SysMatrix_InsertTranslation(-phi_s0->unk24, -phi_s0->unk28, -phi_s0->unk2C, 1);
        Matrix_Scale(temp_s4->unk0, temp_s4->unk4, temp_s4->unk8, 1);
        temp_v0 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s2->polyOpa.p;
        temp_s2->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = *phi_s3;
        SysMatrix_StatePop();
        temp_s3 = phi_s3 + 4;
        phi_s0 += 0x40;
        phi_s3 = temp_s3;
    } while (temp_s3 != &D_80AD0634);
}

void EnFuKago_Draw(EnFuKago *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    EnFuKago *this = (EnFuKago *) thisx;

    if (this->unk33A == 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp24 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = sp24;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_060006A0;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06000740;
        temp_v0_3->words.w0 = 0xDE000000;
        temp_v0_4 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_060007E0;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_5 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_06000880;
        temp_v0_5->words.w0 = 0xDE000000;
        temp_v0_6 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06000920;
        temp_v0_6->words.w0 = 0xDE000000;
        temp_v0_7 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_7 + 8;
        temp_v0_7->words.w1 = (u32) &D_060009C0;
        temp_v0_7->words.w0 = 0xDE000000;
        return;
    }
    func_80AD0340();
}
