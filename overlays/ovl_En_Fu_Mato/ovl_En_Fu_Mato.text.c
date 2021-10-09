typedef struct EnFuMato {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(EnFuMato *, GlobalContext *);
    /* 0x160 */ ColliderSphere unk160;              /* inferred */
    /* 0x1B8 */ char pad1B8[0x138];                 /* maybe part of unk160[4]? */
    /* 0x2F0 */ s32 unk2F0;                         /* inferred */
    /* 0x2F4 */ s32 unk2F4;                         /* inferred */
    /* 0x2F8 */ s32 unk2F8;                         /* inferred */
    /* 0x2FC */ char pad2FC[0x6];                   /* maybe part of unk2F8[2]? */
    /* 0x302 */ s16 unk302;                         /* inferred */
    /* 0x304 */ s16 unk304;                         /* inferred */
    /* 0x306 */ char pad306[0x4];                   /* maybe part of unk304[3]? */
    /* 0x30A */ s16 unk30A;                         /* inferred */
} EnFuMato;                                         /* size = 0x30C */

struct _mips2c_stack_EnFuMato_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFuMato_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnFuMato_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderSphere *sp20;                /* inferred */
    /* 0x24 */ char pad24[0x8];                     /* maybe part of sp20[3]? */
    /* 0x2C */ CollisionHeader *sp2C;               /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnFuMato_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACE4B4 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACE4C8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80ACE508 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACE51C {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80ACE680 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80ACE718 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0xC];
    /* 0x3C */ ? sp3C;                              /* inferred */
    /* 0x3C */ char pad3C[0xC];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80ACE850 {
    /* 0x00 */ char pad0[0x78];
    /* 0x78 */ void *sp78;                          /* inferred */
    /* 0x7C */ char pad7C[0x1C];
};                                                  /* size = 0x98 */

struct _mips2c_stack_func_80ACEB2C {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x30];                    /* maybe part of sp18[13]? */
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0x34];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80ACECFC {
    /* 0x00 */ char pad0[0x60];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80ACEFC4 {};              /* size 0x0 */

struct _mips2c_stack_func_80ACEFD8 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ f32 *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80ACF04C {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Collider *sp1C;                      /* inferred */
    /* 0x20 */ CollisionCheckContext *sp20;         /* inferred */
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80ACF1F4 {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80ACF3F4 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

void func_80ACE4B4(EnFuMato *arg0);                 /* static */
void func_80ACE4C8(void *arg0, ? arg1);             /* static */
void func_80ACE508(void *arg0);                     /* static */
void func_80ACE51C(Actor *arg0, ? arg1);            /* static */
void func_80ACE680(Actor *arg0);                    /* static */
void func_80ACE718(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACE850(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACEB2C(Actor *arg0);                    /* static */
void func_80ACECFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80ACEFC4(Actor *arg0);                    /* static */
void func_80ACEFD8(Actor *arg0, ? arg1);            /* static */
? func_80ACF04C(Actor *arg0, GlobalContext *arg1);  /* static */
void func_80ACF1F4(EnFuMato *arg0, GraphicsContext **arg1, EnFuMato *, GraphicsContext *); /* static */
void func_80ACF3F4(EnFuMato *arg0, GraphicsContext **arg1, EnFuMato *, GraphicsContext *); /* static */
extern CollisionHeader D_060023D4;
extern ? D_06002720;
static ColliderSphereInit D_80ACF610 = {
    {3, 0, 9, 0x39, 0x10, 4},
    {4, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0, {{0, 0, 0}, 0xC8}, 0x64},
};
static u32 D_80ACF63C[6] = {0x6001C80, 0x6001D68, 0x6001E50, 0x6001F38, 0x6002020, 0x6002108};
static ? D_80ACF654;                                /* unable to generate initializer */
static ? D_80ACF684;                                /* unable to generate initializer */
static ? D_80ACF690;                                /* unable to generate initializer */

void EnFuMato_Init(EnFuMato *this, GlobalContext *globalCtx) {
    CollisionHeader *sp2C;
    ColliderSphere *sp20;
    Actor *temp_s0;
    Actor *temp_s0_2;
    Actor *temp_v0;
    ColliderSphere *temp_a1;
    Actor *phi_s0;
    Actor *phi_s0_2;
    EnFuMato *this = (EnFuMato *) thisx;

    sp2C = NULL;
    temp_s0 = globalCtx->actorCtx.actorList[4].first;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 3);
    BgCheck_RelocateMeshHeader(&D_060023D4, &sp2C);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp2C);
    Actor_SetScale((Actor *) this, 0.1f);
    temp_a1 = &this->unk160;
    sp20 = temp_a1;
    Collider_InitSphere(globalCtx, temp_a1);
    Collider_SetSphere(globalCtx, temp_a1, (Actor *) this, &D_80ACF610);
    this->unk160.dim.worldSphere.radius = 0x14;
    phi_s0_2 = temp_s0;
    if (temp_s0 != 0) {
        phi_s0 = temp_s0;
loop_2:
        phi_s0_2 = phi_s0;
        if (phi_s0->id == 0xB5) {
            this->actor.parent = phi_s0;
        } else {
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s0_2 = temp_s0_2;
            if (temp_s0_2 != 0) {
                goto loop_2;
            }
        }
    }
    if (phi_s0_2 == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_v0 = this->actor.parent;
    if (temp_v0->unk542 == 2) {
        this->unk160.info.elemType = 0;
        this->unk160.dim.worldSphere.radius = 0x1E;
    } else {
        this->unk160.dim.worldSphere.radius = 0x11;
        this->unk2F8 = temp_v0->unk538;
        this->unk2F0 = (s32) this->actor.params;
        this->unk2F4 = temp_v0->unk520;
    }
    this->unk302 = 0;
    this->unk304 = 0;
    func_80ACE4B4(this);
}

void EnFuMato_Destroy(EnFuMato *this, GlobalContext *globalCtx) {
    DynaCollisionContext *temp_a1;
    GlobalContext *temp_a0;
    EnFuMato *this = (EnFuMato *) thisx;

    temp_a0 = globalCtx;
    temp_a1 = &globalCtx->colCtx.dyna;
    globalCtx = globalCtx;
    BgCheck_RemoveActorMesh(temp_a0, temp_a1, this->unk144);
    Collider_DestroySphere(globalCtx, &this->unk160);
}

void func_80ACE4B4(EnFuMato *arg0) {
    arg0->actionFunc = func_80ACE4C8;
}

void func_80ACE4C8(EnFuMato *arg0, GlobalContext *arg1) {
    void *temp_v0;

    temp_v0 = arg0->actor.parent;
    if ((temp_v0->unk54A == 0) && (temp_v0->unk542 == 0)) {
        func_80ACE508();
    }
}

void func_80ACE508(void *arg0) {
    arg0->unk15C = func_80ACE51C;
}

void func_80ACE51C(Actor *arg0, ? arg1) {
    void *sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    Vec3f *temp_s1;
    f32 *temp_a1;
    s32 temp_v0;

    temp_s1 = arg0 + 0x24;
    sp3C = arg0->parent;
    temp_a1 = &sp30;
    sp30 = (f32) *(arg0->unk2F8 + (arg0->unk2F0 * 6));
    sp34 = (f32) (arg0->unk2F8 + (arg0->unk2F0 * 6))->unk2;
    sp38 = (f32) (arg0->unk2F8 + (arg0->unk2F0 * 6))->unk4;
    sp2C = Math_Vec3f_DistXZ(temp_s1, (Vec3f *) temp_a1);
    arg0->world.rot.y = Math_Vec3f_Yaw(temp_s1, (Vec3f *) &sp30);
    arg0->world.rot.x = Math_Vec3f_Pitch(temp_s1, (Vec3f *) &sp30);
    if (sp2C < 10.0f) {
        temp_v0 = arg0->unk2F0;
        if (temp_v0 < (arg0->unk2F4 - 1)) {
            arg0->unk2F0 = (s32) (temp_v0 + 1);
        } else {
            arg0->unk2F0 = 0;
        }
    }
    arg0->speedXZ = 2.0f;
    arg0->shape.rot.y = Math_Vec3f_Yaw(temp_s1, arg0->parent + 0x24);
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if (sp3C->unk54A != 0) {
        func_80ACE4B4((EnFuMato *) arg0);
    }
}

void func_80ACE680(Actor *arg0) {
    arg0->gravity = -0.5f;
    arg0->velocity.y = 1.0f;
    arg0->velocity.x = 2.0f * Rand_Centered();
    arg0->velocity.z = 2.0f * Rand_Centered();
    arg0->unk2FC = (s16) (Rand_Next() & 0xFFF);
    arg0->unk2FE = (s16) (Rand_Next() & 0xFFF);
    arg0->unk300 = (s16) (Rand_Next() & 0xFFF);
    arg0->unk302 = 3;
    Audio_PlayActorSound2(arg0, 0x28B4U);
    arg0->unk15C = func_80ACE718;
}

void func_80ACE718(Actor *arg0, GlobalContext *arg1) {
    ? sp3C;
    ? sp30;

    arg0->shape.rot.x += arg0->unk2FC;
    arg0->shape.rot.y += arg0->unk2FE;
    arg0->shape.rot.z += arg0->unk300;
    arg0->velocity.y += arg0->gravity;
    Actor_ApplyMovement(arg0);
    Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 30.0f, 60.0f, 5U);
    if (((arg0->bgCheckFlags & 1) != 0) || (arg0->world.pos.y < -500.0f)) {
        sp3C.unk0 = (s32) D_80ACF684.unk0;
        sp3C.unk4 = (s32) D_80ACF684.unk4;
        sp3C.unk8 = (s32) D_80ACF684.unk8;
        sp30.unk0 = (s32) D_80ACF690.unk0;
        sp30.unk4 = (s32) D_80ACF690.unk4;
        sp30.unk8 = (s32) D_80ACF690.unk8;
        func_800B3030(arg1, (Vec3f *) &arg0->world, (Vec3f *) &sp3C, (Vec3f *) &sp30, (s16) 0x14, (s16) 0x28, 2);
        Actor_MarkForDeath(arg0);
    }
}

void func_80ACE850(Actor *arg0, GlobalContext *arg1) {
    void *sp78;
    Vec3f *temp_fp;
    f32 temp_f4;
    s16 temp_s4;
    s32 temp_s3;
    void *temp_s1;
    void *phi_s0;
    s16 phi_s2;
    s32 phi_s3;

    temp_s4 = arg0->shape.rot.y;
    arg0->unk308 = (s16) (Rand_Next() % 6U);
    arg0->unk302 = 1;
    arg0->gravity = -1.0f;
    arg0->velocity.y = Rand_ZeroOne();
    sp78 = arg0 + 0xBC;
    temp_fp = arg0 + 0x24;
    phi_s0 = arg0 + 0x1B8;
    phi_s2 = arg0->unk308;
    phi_s3 = 0;
    do {
        phi_s0->unk0 = (f32) temp_fp->x;
        phi_s0->unk4 = (f32) temp_fp->y;
        phi_s0->unk8 = (f32) temp_fp->z;
        temp_s1 = &D_80ACF654 + (phi_s2 * 8);
        phi_s0->unkC = (f32) (temp_s1->unk0 * Math_CosS(temp_s4));
        phi_s0->unk10 = (f32) temp_s1->unk4;
        phi_s0->unk14 = (f32) (temp_s1->unk0 * -Math_SinS(temp_s4));
        phi_s0->unkC = (f32) (phi_s0->unkC + Rand_Centered());
        phi_s0->unk10 = (f32) (phi_s0->unk10 + (Rand_ZeroOne() * 0.5f));
        temp_f4 = phi_s0->unk14 + Rand_Centered();
        phi_s0->unk18 = 0.0f;
        phi_s0->unk1C = -1.0f;
        phi_s0->unk14 = temp_f4;
        phi_s0->unk20 = 0.0f;
        phi_s0->unk0 = (f32) (phi_s0->unk0 + (9.0f * phi_s0->unkC));
        phi_s0->unk4 = (f32) (phi_s0->unk4 + (9.0f * phi_s0->unk10));
        phi_s0->unk8 = (f32) (phi_s0->unk8 + (9.0f * phi_s0->unk14));
        phi_s0->unk24 = (unaligned s32) sp78->unk0;
        phi_s0->unk28 = (u16) sp78->unk4;
        phi_s0->unk2A = (s16) ((s32) Rand_Next() >> 6);
        phi_s0->unk2C = (s16) ((s32) Rand_Next() >> 6);
        temp_s3 = phi_s3 + 1;
        phi_s0->unk2E = (s16) ((s32) Rand_Next() >> 6);
        phi_s0->unk30 = 1;
        phi_s0 += 0x34;
        phi_s2 = (s16) ((s32) (phi_s2 + 3) % 6);
        phi_s3 = temp_s3;
    } while (temp_s3 != 2);
    arg0->freezeTimer = 2;
    EffectSsHahen_SpawnBurst(arg1, temp_fp, 13.0f, 0, (s16) 7, (s16) 8, (s16) 0x14, (s16) -1, (s16) 0xA, NULL);
    Audio_PlayActorSound2(arg0, 0x293AU);
    arg0->unk15C = func_80ACECFC;
}

void func_80ACEB2C(Actor *arg0) {
    ? sp4C;
    s32 sp18;
    ? *temp_t4;
    Actor *temp_t9;
    Actor *temp_t9_2;
    s32 *temp_a2;
    s32 *temp_t4_2;
    s32 *temp_t6;
    s32 *temp_t7_2;
    s32 *temp_t8_2;
    void *temp_t3;
    void *temp_t7;
    void *temp_t8;
    Actor *phi_t9;
    s32 *phi_t6;
    Actor *phi_t9_2;
    ? *phi_t4;
    s16 phi_v0;
    s32 *phi_t4_2;
    void *phi_t8;
    s32 *phi_a2;
    s32 *phi_t8_2;
    void *phi_t7;
    s32 *phi_t7_2;
    void *phi_t3;
    s32 phi_v1;
    s32 phi_a1;

    phi_t9 = arg0;
    phi_t6 = &sp18;
    phi_v0 = arg0->unk308;
    do {
        temp_t9 = phi_t9 + 0xC;
        temp_t6 = phi_t6 + 0xC;
        temp_t6->unk-C = (s32) phi_t9->unk1B8;
        temp_t6->unk-8 = (s32) temp_t9->unk1B0;
        temp_t6->unk-4 = (s32) temp_t9->unk1B4;
        phi_t9 = temp_t9;
        phi_t6 = temp_t6;
    } while (temp_t9 != (arg0 + 0x30));
    temp_t6->unk0 = temp_t9->unk1B8;
    phi_t9_2 = arg0;
    phi_t4 = &sp4C;
    do {
        temp_t9_2 = phi_t9_2 + 0xC;
        temp_t4 = phi_t4 + 0xC;
        temp_t4->unk-C = (s32) phi_t9_2->unk1EC;
        temp_t4->unk-8 = (s32) temp_t9_2->unk1E4;
        temp_t4->unk-4 = (s32) temp_t9_2->unk1E8;
        phi_t9_2 = temp_t9_2;
        phi_t4 = temp_t4;
    } while (temp_t9_2 != (arg0 + 0x30));
    temp_t4->unk0 = (s32) temp_t9_2->unk1EC;
    phi_a2 = &sp18;
    do {
        phi_v1 = phi_v0 - 1;
        if (phi_v0 == 0) {
            phi_v1 = 5;
        }
        phi_a1 = phi_v0 + 1;
        if (phi_v0 == 5) {
            phi_a1 = 0;
        }
        phi_t4_2 = phi_a2;
        phi_t8 = arg0 + (phi_v0 * 0x34);
loop_10:
        temp_t4_2 = phi_t4_2 + 0xC;
        temp_t8 = phi_t8 + 0xC;
        temp_t8->unk1AC = (s32) *phi_t4_2;
        temp_t8->unk1B0 = (s32) temp_t4_2->unk-8;
        temp_t8->unk1B4 = (s32) temp_t4_2->unk-4;
        phi_t4_2 = temp_t4_2;
        phi_t8 = temp_t8;
        if (temp_t4_2 != (phi_a2 + 0x30)) {
            goto loop_10;
        }
        temp_t8->unk1B8 = (s32) temp_t4_2->unk0;
        phi_t8_2 = phi_a2;
        phi_t7 = arg0 + (phi_v1 * 0x34);
loop_12:
        temp_t8_2 = phi_t8_2 + 0xC;
        temp_t7 = phi_t7 + 0xC;
        temp_t7->unk1AC = (s32) *phi_t8_2;
        temp_t7->unk1B0 = (s32) temp_t8_2->unk-8;
        temp_t7->unk1B4 = (s32) temp_t8_2->unk-4;
        phi_t8_2 = temp_t8_2;
        phi_t7 = temp_t7;
        if (temp_t8_2 != (phi_a2 + 0x30)) {
            goto loop_12;
        }
        temp_t7->unk1B8 = (s32) temp_t8_2->unk0;
        phi_t7_2 = phi_a2;
        phi_t3 = arg0 + (phi_a1 * 0x34);
loop_14:
        temp_t7_2 = phi_t7_2 + 0xC;
        temp_t3 = phi_t3 + 0xC;
        temp_t3->unk1AC = (s32) *phi_t7_2;
        temp_t3->unk1B0 = (s32) temp_t7_2->unk-8;
        temp_t3->unk1B4 = (s32) temp_t7_2->unk-4;
        phi_t7_2 = temp_t7_2;
        phi_t3 = temp_t3;
        if (temp_t7_2 != (phi_a2 + 0x30)) {
            goto loop_14;
        }
        temp_a2 = phi_a2 + 0x34;
        temp_t3->unk1B8 = (s32) temp_t7_2->unk0;
        phi_v0 = (s16) ((s32) (phi_v0 + 3) % 6);
        phi_a2 = temp_a2;
    } while (temp_a2 != &arg0);
    arg0->unk302 = 2;
    arg0->unk15C = func_80ACECFC;
}

void func_80ACECFC(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    s16 temp_v0;
    s32 temp_s1;
    s32 phi_s3;
    void *phi_s0;
    s32 phi_s1;

    arg0->velocity.y += arg0->gravity;
    Actor_ApplyMovement(arg0);
    phi_s3 = 6;
    phi_s0 = arg0 + 0x1B8;
    if (arg0->world.pos.y < -500.0f) {
        arg0->world.pos.y = -500.0f;
    }
    if (arg0->unk302 == 1) {
        phi_s3 = 2;
    }
    phi_s1 = 0;
    if (phi_s3 > 0) {
        do {
            temp_f2 = phi_s0->unkC;
            temp_f0 = phi_s0->unk10;
            temp_f12 = phi_s0->unk14;
            phi_s0->unk0 = (f32) (phi_s0->unk0 + temp_f2);
            phi_s0->unk4 = (f32) (phi_s0->unk4 + temp_f0);
            phi_s0->unk8 = (f32) (phi_s0->unk8 + temp_f12);
            phi_s0->unkC = (f32) (temp_f2 + phi_s0->unk18);
            phi_s0->unk10 = (f32) (temp_f0 + phi_s0->unk1C);
            phi_s0->unk14 = (f32) (temp_f12 + phi_s0->unk20);
            phi_s0->unk24 = (s16) (phi_s0->unk24 + phi_s0->unk2A);
            phi_s0->unk26 = (s16) (phi_s0->unk26 + phi_s0->unk2C);
            phi_s0->unk28 = (s16) (phi_s0->unk28 + phi_s0->unk2E);
            if ((arg0->unk302 == 2) && (phi_s0->unk30 == 1) && (phi_s0->unk4 < (arg0->floorHeight + 10.0f))) {
                temp_f0_2 = phi_s0->unk10;
                if (temp_f0_2 < 0.0f) {
                    phi_s0->unk10 = (f32) -temp_f0_2;
                } else {
                    phi_s0->unk10 = temp_f0_2;
                }
                phi_s0->unk10 = (f32) (phi_s0->unk10 * 0.5f);
                phi_s0->unkC = (f32) (phi_s0->unkC * ((Rand_Centered() * 1.5f) + 2.0f));
                phi_s0->unk14 = (f32) (phi_s0->unk14 * ((Rand_Centered() * 1.5f) + 2.0f));
                phi_s0->unk2A = (s16) ((s32) Rand_Next() >> 5);
                phi_s0->unk2C = (s16) ((s32) Rand_Next() >> 5);
                phi_s0->unk2E = (s16) ((s32) Rand_Next() >> 5);
                phi_s0->unk30 = 0;
            }
            temp_s1 = phi_s1 + 1;
            phi_s0 += 0x34;
            phi_s1 = temp_s1;
        } while (temp_s1 != phi_s3);
    }
    if (arg0->unk302 == 1) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 30.0f, 60.0f, 5U);
        if ((arg0->bgCheckFlags & 1) != 0) {
            func_80ACEB2C(arg0);
        }
    }
    temp_v0 = arg0->unk304;
    if ((s32) temp_v0 < 0x3C) {
        arg0->unk304 = (s16) (temp_v0 + 1);
        return;
    }
    func_80ACEFC4(arg0);
}

void func_80ACEFC4(Actor *arg0) {
    arg0->unk15C = func_80ACEFD8;
}

void func_80ACEFD8(Actor *arg0, ? arg1) {
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

? func_80ACF04C(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    CollisionCheckContext *sp20;
    Collider *sp1C;
    Actor *temp_a3;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_a0;
    void *temp_v1;

    temp_a3 = arg0;
    temp_v1 = temp_a3->parent;
    temp_a2 = temp_a3 + 0x160;
    temp_a3->unk1A8 = (s16) (s32) temp_a3->world.pos.x;
    temp_a3->unk1AA = (s16) (s32) temp_a3->world.pos.y;
    temp_a3->unk1AC = (s16) (s32) temp_a3->world.pos.z;
    if (temp_a3->unk302 == 0) {
        temp_a0 = temp_v1->unk542;
        if ((temp_a0 != 0) || ((temp_a3->unk171 & 2) == 0)) {
            if ((temp_a0 == 2) && ((temp_a3->unk172 & 2) != 0)) {
                goto block_6;
            }
            goto block_10;
        }
block_6:
        temp_a3->unk171 = (u8) (temp_a3->unk171 & 0xFFFD);
        temp_a3->unk172 = (u8) (temp_a3->unk172 & 0xFFFD);
        arg0 = temp_a3;
        sp24 = temp_v1;
        Audio_PlayActorSound2(temp_a3, 0x4807U);
        temp_v1->unk548 = (s16) (temp_v1->unk548 + 1);
        if ((temp_v1->unk542 == 2) || (gSaveContext.playerForm == 3)) {
            temp_v1->unk546 = 1;
            func_80ACE680(arg0);
            return 1;
        }
        func_80ACE850(arg0, arg1);
        return 1;
    }
block_10:
    temp_a1 = &arg1->colChkCtx;
    sp20 = temp_a1;
    sp1C = temp_a2;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
    return 0;
}

void EnFuMato_Update(EnFuMato *this, GlobalContext *globalCtx) {
    EnFuMato *this = (EnFuMato *) thisx;
    this->actionFunc(this, globalCtx);
    func_80ACF04C((Actor *) this, globalCtx);
    if (this->unk30A == 1) {
        func_80ACEFC4((Actor *) this);
    }
}

void func_80ACF1F4(EnFuMato *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s16 temp_s4;
    s32 temp_s5;
    void *temp_a0_2;
    void *phi_s3;
    s16 phi_s4;
    s32 phi_s5;

    temp_s4 = arg0->unk308;
    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s3 = arg0 + 0x1B8;
    phi_s4 = temp_s4;
    phi_s5 = 0;
    do {
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(phi_s3->unk0, phi_s3->unk4, phi_s3->unk8, phi_s3 + 0x24);
        Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
        temp_v0 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        temp_v0->words.w1 = Matrix_NewMtx(*arg1);
        temp_v0_2 = temp_s0->polyOpa.p;
        temp_a0_2 = D_80ACF63C + (phi_s4 * 4);
        temp_s0->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_2->words.w1 = temp_a0_2->unk0;
        if (phi_s4 != 0) {
            if (phi_s4 != 5) {
                temp_v0_3 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDE000000;
                temp_v0_3->words.w1 = temp_a0_2->unk-4;
                temp_v0_4 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDE000000;
                temp_v0_4->words.w1 = temp_a0_2->unk4;
            } else {
                temp_v0_5 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDE000000;
                temp_v0_5->words.w1 = temp_a0_2->unk-4;
                temp_v0_6 = temp_s0->polyOpa.p;
                temp_s0->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w0 = 0xDE000000;
                temp_v0_6->words.w1 = D_80ACF63C->unk0;
            }
        } else {
            temp_v0_7 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDE000000;
            temp_v0_7->words.w1 = D_80ACF63C->unk14;
            temp_v0_8 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xDE000000;
            temp_v0_8->words.w1 = temp_a0_2->unk4;
        }
        SysMatrix_StatePop();
        temp_s5 = phi_s5 + 1;
        phi_s3 += 0x34;
        phi_s4 = (s16) ((s32) (phi_s4 + 3) % 6);
        phi_s5 = temp_s5;
    } while (temp_s5 != 2);
}

void func_80ACF3F4(EnFuMato *arg0, GraphicsContext **arg1) {
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
    temp_s4 = arg0 + 0x58;
    phi_s0 = arg0 + 0x1B8;
    phi_s3 = D_80ACF63C;
    do {
        SysMatrix_StatePush();
        SysMatrix_SetStateRotationAndTranslation(phi_s0->unk0, phi_s0->unk4, phi_s0->unk8, phi_s0 + 0x24);
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
        phi_s0 += 0x34;
        phi_s3 = temp_s3;
    } while (temp_s3 != &D_80ACF654);
}

void EnFuMato_Draw(EnFuMato *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    s16 temp_v0_2;
    EnFuMato *this = (EnFuMato *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    this = this;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    this = this;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = this->unk302;
    if ((temp_v0_2 == 0) || (temp_v0_2 == 3)) {
        temp_v0_3 = sp24->polyOpa.p;
        sp24->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = (u32) &D_06002720;
        temp_v0_3->words.w0 = 0xDE000000;
        return;
    }
    if (temp_v0_2 == 1) {
        func_80ACF1F4(this, (GraphicsContext **) globalCtx, this, sp24);
        return;
    }
    func_80ACF3F4(this, (GraphicsContext **) globalCtx, this, sp24);
}
