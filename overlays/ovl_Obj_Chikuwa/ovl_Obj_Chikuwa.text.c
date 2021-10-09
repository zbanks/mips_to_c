typedef struct ObjChikuwa {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ? unk_15C;                          /* inferred */
    /* 0x15C */ char pad_15C[0x140];
    /* 0x29C */ s16 unk_29C;                        /* inferred */
    /* 0x29E */ s16 unk_29E;                        /* inferred */
    /* 0x2A0 */ s16 unk_2A0;                        /* inferred */
    /* 0x2A2 */ char pad_2A2[0x704];                /* maybe part of unk_2A0[899]? */
    /* 0x9A6 */ u8 unk_9A6;                         /* inferred */
    /* 0x9A7 */ char pad_9A7[0x1];
} ObjChikuwa;                                       /* size = 0x9A8 */

struct _mips2c_stack_ObjChikuwa_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjChikuwa_Draw {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_ObjChikuwa_Init {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_ObjChikuwa_Update {
    /* 0x00 */ char pad_0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_809B1550 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ f32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809B17D0 {
    /* 0x00 */ char pad_0[0x78];
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_809B1AA0 {};              /* size 0x0 */

void func_809B1550(ObjChikuwa *arg0, GlobalContext *arg1); /* static */
void func_809B17D0(GlobalContext *arg0, ObjChikuwa *arg1, Vec3f *arg2); /* static */
void func_809B1AA0(ObjChikuwa *arg0);               /* static */
extern ? D_06000D10;
extern CollisionHeader D_06000F00;
static InitChainEntry D_809B1FC0[4];                /* unable to generate initializer */
static Vec3f D_809B1FD0 = {0.0f, -0.3f, 0.0f};
static Vec3f D_809B1FDC = {0.0f, 0.7f, 0.0f};

void func_809B1550(ObjChikuwa *arg0, GlobalContext *arg1) {
    f32 sp18;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v1;

    temp_v0 = arg0->unk_2A0;
    temp_v1 = arg0->unk_29C;
    if ((s32) temp_v0 < (s32) temp_v1) {
        arg0->actor.scale.z = (f32) (temp_v1 - temp_v0) * 0.05f;
        sp18 = (f32) (((arg0->unk_29C + arg0->unk_2A0) * 0x3C) - 0x3C) * 0.5f;
        temp_a0 = arg0->actor.shape.rot.y;
        arg0 = arg0;
        arg0->actor.world.pos.x = (Math_SinS(temp_a0) * sp18) + arg0->actor.home.pos.x;
        arg0->actor.world.pos.z = (Math_CosS(arg0->actor.shape.rot.y) * sp18) + arg0->actor.home.pos.z;
        return;
    }
    func_800C62BC(arg1, arg1 + 0x880, arg0->unk_144);
}

void ObjChikuwa_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f20;
    f32 temp_f8;
    s16 temp_v0;
    s32 temp_s3;
    s32 phi_s4;
    ? *phi_s0;
    s32 phi_s2;
    s32 phi_s3;
    ObjChikuwa *this = (ObjChikuwa *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_809B1FC0);
    this->actor.scale.x = 0.15f;
    this->actor.scale.y = 0.2f;
    this->actor.scale.z = 0.05f;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000F00);
    this->unk_29C = 0x14;
    this->actor.home.rot.y += 0x2000;
    this->actor.home.rot.y &= 0xC000;
    temp_v0 = this->actor.home.rot.y;
    this->actor.shape.rot.y = temp_v0;
    this->actor.world.rot.y = temp_v0;
    phi_s4 = 0;
    phi_s2 = 0;
    phi_s3 = 0;
    if ((s32) this->unk_29C > 0) {
        phi_s0 = &this->unk_15C;
        do {
            temp_f20 = (f32) phi_s4;
            phi_s0->unk_0 = (f32) ((Math_SinS(this->actor.shape.rot.y) * temp_f20) + this->actor.home.pos.x);
            phi_s0->unk_4 = (f32) this->actor.home.pos.y;
            temp_f8 = Math_CosS(this->actor.shape.rot.y) * temp_f20;
            phi_s0->unk_C = (s16) (phi_s2 + 0x64);
            temp_s3 = phi_s3 + 1;
            phi_s0->unk_8 = (f32) (temp_f8 + this->actor.home.pos.z);
            phi_s4 += 0x3C;
            phi_s0 += 0x10;
            phi_s2 += 7;
            phi_s3 = temp_s3;
        } while (temp_s3 < (s32) this->unk_29C);
    }
    func_809B1550(this, globalCtx);
}

void ObjChikuwa_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjChikuwa *this = (ObjChikuwa *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_809B17D0(GlobalContext *arg0, ObjChikuwa *arg1, Vec3f *arg2) {
    Vec3f *temp_s0;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f20_2;
    s32 temp_s2;
    f32 phi_f24;
    s32 phi_s2;

    phi_f24 = -78.75f;
    phi_s2 = 0;
    do {
        temp_s0 = arg1 + (arg1->unk_9A4 * 0x38) + 0x2A4;
        temp_s0->x = (Rand_ZeroOne() * 0.05f) + 0.01f;
        temp_s0->y = (Rand_ZeroOne() * 0.16f) + 0.04f;
        temp_s0->z = (Rand_ZeroOne() * 0.05f) + 0.01f;
        temp_s0->unk_C = (f32) ((Math_CosS(arg1->actor.shape.rot.y) * phi_f24) + arg2->x);
        temp_s0->unk_10 = (f32) arg2->y;
        temp_s0->unk_14 = (f32) ((Math_SinS(arg1->actor.shape.rot.y) * phi_f24) + arg2->z);
        temp_s0->unk_18 = (f32) ((2.0f * Rand_ZeroOne()) - 1.0f);
        temp_s0->unk_1C = (f32) ((Rand_ZeroOne() * 4.0f) - 1.0f);
        temp_s0->unk_20 = (f32) ((2.0f * Rand_ZeroOne()) - 1.0f);
        temp_f20 = Math3D_Vec3fMagnitude(temp_s0);
        temp_s0->unk_24 = (f32) ((-Rand_ZeroOne() * 0.5f) - (temp_f20 * 25.0f));
        temp_s0->unk_28 = (s16) arg1->actor.shape.rot.x;
        temp_s0->unk_2A = (s16) arg1->actor.shape.rot.y;
        temp_s0->unk_2C = (s16) arg1->actor.shape.rot.z;
        temp_s0->unk_2E = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 5000.0f);
        temp_s0->unk_30 = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 5000.0f);
        temp_f18 = Rand_ZeroOne() - 0.5f;
        temp_s0->unk_34 = 0x50;
        temp_s0->unk_32 = (s16) (s32) (temp_f18 * 5000.0f);
        temp_f20_2 = Rand_ZeroOne();
        func_800B1210(arg0, temp_s0 + 0xC, &D_809B1FDC, &D_809B1FD0, (s16) (s32) ((temp_f20_2 * 60.0f) + 80.0f), (s16) (s32) ((Rand_ZeroOne() * 30.0f) + 60.0f));
        temp_s2 = phi_s2 + 1;
        arg1->unk_9A4 = (arg1->unk_9A4 + 1) & 0x1F;
        phi_f24 += 22.5f;
        phi_s2 = temp_s2;
    } while (temp_s2 != 8);
}

void func_809B1AA0(ObjChikuwa *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    ObjChikuwa *phi_a1;
    s32 phi_v1;

    arg0->unk_9A6 = 0;
    phi_a1 = arg0;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 0x70;
        temp_v0 = phi_a1 + 0x2A4;
        phi_v1 = temp_v1;
        if ((s32) phi_a1->unk_2D8 > 0) {
            temp_v0->unk_34 = (s16) (temp_v0->unk_34 - 1);
            arg0->unk_9A6 = 1;
            temp_v0->unk_1C = (f32) (temp_v0->unk_1C + temp_v0->unk_24);
            temp_v0->unk_C = (f32) (temp_v0->unk_C + temp_v0->unk_18);
            temp_v0->unk_10 = (f32) (temp_v0->unk_10 + temp_v0->unk_1C);
            temp_v0->unk_14 = (f32) (temp_v0->unk_14 + temp_v0->unk_20);
            temp_v0->unk_28 = (s16) (temp_v0->unk_28 + temp_v0->unk_2E);
            temp_v0->unk_2A = (s16) (temp_v0->unk_2A + temp_v0->unk_30);
            temp_v0->unk_2C = (s16) (temp_v0->unk_2C + temp_v0->unk_32);
        }
        temp_v0_2 = phi_a1 + 0x2DC;
        if ((s32) phi_a1->unk_310 > 0) {
            temp_v0_2->unk_34 = (s16) (temp_v0_2->unk_34 - 1);
            arg0->unk_9A6 = 1;
            temp_v0_2->unk_1C = (f32) (temp_v0_2->unk_1C + temp_v0_2->unk_24);
            temp_v0_2->unk_C = (f32) (temp_v0_2->unk_C + temp_v0_2->unk_18);
            temp_v0_2->unk_28 = (s16) (temp_v0_2->unk_28 + temp_v0_2->unk_2E);
            temp_v0_2->unk_2A = (s16) (temp_v0_2->unk_2A + temp_v0_2->unk_30);
            temp_v0_2->unk_2C = (s16) (temp_v0_2->unk_2C + temp_v0_2->unk_32);
            temp_v0_2->unk_14 = (f32) (temp_v0_2->unk_14 + temp_v0_2->unk_20);
            temp_v0_2->unk_10 = (f32) (temp_v0_2->unk_10 + temp_v0_2->unk_1C);
        }
        phi_a1 += 0x70;
    } while (temp_v1 != 0x700);
}

void ObjChikuwa_Update(Actor *thisx, GlobalContext *globalCtx) {
    Vec3f *temp_s0;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_s0_2;
    s32 temp_s5;
    u8 temp_v0;
    ObjChikuwa *phi_s4;
    s16 phi_s2;
    s32 phi_s5;
    ObjChikuwa *this = (ObjChikuwa *) thisx;

    this->unk_29E += 1;
    phi_s5 = 0;
    if ((s32) this->unk_29C > 0) {
        phi_s4 = this;
        do {
            temp_s0 = phi_s4 + 0x15C;
            if ((s32) this->unk_29E >= (s32) phi_s4->unk_168) {
                temp_v0 = temp_s0->unk_E;
                if ((temp_v0 & 1) == 0) {
                    temp_s0->unk_E = (u8) (temp_v0 | 1);
                    this->unk_2A0 += 1;
                    func_809B1550(this, globalCtx);
                    func_809B17D0(globalCtx, this, temp_s0);
                    temp_f0 = Math3D_DistanceSquared(temp_s0, (Vec3f *) &globalCtx->actorCtx.actorList[2].first->world);
                    temp_f20 = temp_f0;
                    if (temp_f0 < 57600.0f) {
                        temp_s0_2 = Quake_Add(globalCtx->cameraPtrs[globalCtx->activeCamera], 3U);
                        if (temp_f20 < 14400.0f) {
                            phi_s2 = 4;
                        } else {
                            phi_s2 = 3;
                        }
                        Quake_SetSpeed(temp_s0_2, 0x4350);
                        Quake_SetQuakeValues(temp_s0_2, phi_s2, 0, 0, (s16) 0);
                        Quake_SetCountdown(temp_s0_2, 7);
                    }
                }
            }
            temp_s5 = phi_s5 + 1;
            phi_s4 += 0x10;
            phi_s5 = temp_s5;
        } while (temp_s5 < (s32) this->unk_29C);
    }
    func_809B1AA0(this);
}

void ObjChikuwa_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    s16 temp_v0;
    s32 temp_s4;
    s32 temp_s6;
    void *temp_s0;
    void *temp_v0_2;
    ObjChikuwa *phi_s2;
    s32 phi_s4;
    ObjChikuwa *phi_s2_2;
    s32 phi_s6;
    ObjChikuwa *this = (ObjChikuwa *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = this->unk_29C;
    if ((s32) this->unk_2A0 < (s32) temp_v0) {
        phi_s4 = 0;
        if ((s32) temp_v0 > 0) {
            phi_s2 = this;
            do {
                temp_v0_2 = phi_s2 + 0x15C;
                if ((phi_s2->unk_16A & 1) == 0) {
                    SysMatrix_SetStateRotationAndTranslation(temp_v0_2->unk_0, temp_v0_2->unk_4, temp_v0_2->unk_8, (Vec3s *) &this->actor.shape);
                    Matrix_Scale(0.15f, 0.2f, 0.05f, 1);
                    temp_v0_3 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_3 + 8;
                    temp_v0_3->words.w0 = 0xDA380003;
                    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                    temp_v0_4 = temp_s1->polyOpa.p;
                    temp_s1->polyOpa.p = temp_v0_4 + 8;
                    temp_v0_4->words.w1 = (u32) &D_06000D10;
                    temp_v0_4->words.w0 = 0xDE000000;
                }
                temp_s4 = phi_s4 + 1;
                phi_s2 += 0x10;
                phi_s4 = temp_s4;
            } while (temp_s4 < (s32) this->unk_29C);
        }
    }
    if (this->unk_9A6 != 0) {
        phi_s2_2 = this;
        phi_s6 = 0;
        do {
            temp_s0 = phi_s2_2 + 0x2A4;
            if ((s32) phi_s2_2->unk_2D8 > 0) {
                SysMatrix_SetStateRotationAndTranslation(temp_s0->unk_C, temp_s0->unk_10, temp_s0->unk_14, temp_s0 + 0x28);
                Matrix_Scale(temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, 1);
                temp_v0_5 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w0 = 0xDA380003;
                temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_6 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = (u32) &D_06000D10;
                temp_v0_6->words.w0 = 0xDE000000;
            }
            temp_s6 = phi_s6 + 0x38;
            phi_s2_2 += 0x38;
            phi_s6 = temp_s6;
        } while (temp_s6 != 0x700);
    }
}
