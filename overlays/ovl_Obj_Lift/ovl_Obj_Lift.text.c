typedef struct ObjLift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjLift *, GlobalContext *);
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ s16 unk_162;                        /* inferred */
    /* 0x164 */ s16 unk_164;                        /* inferred */
    /* 0x166 */ s16 unk_166;                        /* inferred */
    /* 0x168 */ char pad_168[0x10];                 /* maybe part of unk_166[9]? */
    /* 0x178 */ s16 unk_178;                        /* inferred */
    /* 0x17A */ char pad_17A[0x2];
} ObjLift;                                          /* size = 0x17C */

struct _mips2c_stack_ObjLift_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLift_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLift_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjLift_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8093D3C0 {
    /* 0x00 */ char pad_0[0xB0];
    /* 0xB0 */ f32 spB0;                            /* inferred */
    /* 0xB4 */ f32 spB4;                            /* inferred */
    /* 0xB8 */ f32 spB8;                            /* inferred */
    /* 0xBC */ f32 spBC;                            /* inferred */
    /* 0xC0 */ f32 spC0;                            /* inferred */
    /* 0xC4 */ f32 spC4;                            /* inferred */
};                                                  /* size = 0xC8 */

struct _mips2c_stack_func_8093D760 {};              /* size 0x0 */

struct _mips2c_stack_func_8093D7A0 {
    /* 0x00 */ char pad_0[0x2A];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8093D88C {};              /* size 0x0 */

struct _mips2c_stack_func_8093D8B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093D9C0 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x8];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093DA48 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8093DB70 {};              /* size 0x0 */

struct _mips2c_stack_func_8093DB90 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ ? sp18;                              /* inferred */
    /* 0x18 */ char pad_18[0x8];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8093DC90 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s16 sp20;                            /* inferred */
    /* 0x22 */ s16 sp22;                            /* inferred */
    /* 0x24 */ s16 sp24;                            /* inferred */
    /* 0x26 */ char pad_26[0x2];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

void func_8093D3C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093D760(ObjLift *arg0);                  /* static */
void func_8093D7A0(DynaPolyActor *arg0, void *arg1); /* static */
void func_8093D88C(DynaPolyActor *arg0);            /* static */
void func_8093D8B4(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_8093D9C0(DynaPolyActor *arg0);            /* static */
void func_8093DA48(Actor *arg0, GlobalContext *arg1); /* static */
void func_8093DB70(Actor *arg0);                    /* static */
void func_8093DB90(ObjLift *arg0, GlobalContext *arg1); /* static */
void func_8093DC90(void *arg0, GlobalContext *arg1); /* static */
extern Gfx D_06000D10;
extern CollisionHeader D_06000F00;
static ? D_8093DD50;                                /* unable to generate initializer */
static ? D_8093DD60;                                /* unable to generate initializer */
static InitChainEntry D_8093DD84[5];                /* unable to generate initializer */
static ? D_8093DD98;                                /* unable to generate initializer */
static ? D_8093DDA0;                                /* unable to generate initializer */

void func_8093D3C0(Actor *arg0, GlobalContext *arg1) {
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    ? *temp_s0;
    Vec3f *temp_s3;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f0;
    s32 temp_v0;
    ? *phi_s0;
    s32 phi_s1;

    temp_s3 = arg0 + 0x24;
    temp_s5 = &spB0;
    temp_s4 = &spBC;
    phi_s0 = &D_8093DD60;
    do {
        temp_f0 = (f32) phi_s0->unk_0;
        spBC = (temp_f0 * arg0->scale.x) + temp_s3->x;
        spC0 = temp_s3->y;
        spC4 = ((f32) phi_s0->unk_2 * arg0->scale.z) + temp_s3->z;
        spB0 = temp_f0 * arg0->scale.x * 0.8f;
        spB4 = (Rand_ZeroOne() * 10.0f) + 6.0f;
        spB8 = (f32) phi_s0->unk_2 * arg0->scale.z * 0.8f;
        phi_s1 = 0x20;
        if (Rand_Next() > 0) {
            phi_s1 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, temp_s3, (s16) -0x100, (s16) phi_s1, (s16) 0xF, (s16) 0xF, (s16) 0, (s16) (s32) (((Rand_ZeroOne() * 50.0f) + 50.0f) * arg0->scale.x), (s16) 0, (s16) 0x20, 0x32, (s16) -1, (s16) 0xED, &D_06000D10);
        temp_s0 = phi_s0 + 4;
        phi_s0 = temp_s0;
    } while (temp_s0 != D_8093DD84);
    temp_v0 = arg0->params & 1;
    if (temp_v0 == 0) {
        func_800BBFB0(arg1, temp_s3, 120.0f, 0xC, (s16) 0x78, (s16) 0x64, (u8) 1);
        return;
    }
    if (temp_v0 == 1) {
        func_800BBFB0(arg1, temp_s3, 60.0f, 8, (s16) 0x3C, (s16) 0x64, (u8) 1);
    }
}

void ObjLift_Init(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;
    ObjLift *this = (ObjLift *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_8093DD84);
    temp_f0 = *(&D_8093DD98 + ((this->actor.params & 1) * 4));
    this->actor.scale.z = temp_f0;
    this->actor.scale.x = temp_f0;
    this->actor.shape.rot.z = 0;
    temp_v0 = this->actor.shape.rot.z;
    this->unk_178 = this->actor.home.rot.z;
    this->actor.scale.y = 0.055555556f;
    this->actor.world.rot.z = temp_v0;
    this->actor.home.rot.z = temp_v0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    if (((s32) this->unk_178 <= 0) && (Flags_GetSwitch(globalCtx, ((s32) this->actor.params >> 1) & 0x7F) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000F00);
    this->unk_160 = (s16) (Rand_Next() >> 0x10);
    this->unk_162 = (s16) (Rand_Next() >> 0x10);
    this->unk_164 = (s16) (Rand_Next() >> 0x10);
    func_8093D760(this);
}

void ObjLift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_8093D760(ObjLift *arg0) {
    arg0->actionFunc = func_8093D7A0;
    arg0->actor.draw = ObjLift_Draw;
    arg0->unk_166 = *(&D_8093DD50 + ((((s32) arg0->actor.params >> 8) & 7) * 2));
}

void func_8093D7A0(DynaPolyActor *arg0, GlobalContext *arg1) {
    s16 sp2A;
    s16 temp_v0;
    s32 temp_a0;

    if (func_800CAF70(arg0) != 0) {
        if ((s32) arg0->unk_166 <= 0) {
            if ((((s32) arg0->actor.params >> 8) & 7) == 7) {
                func_8093D9C0(arg0);
                return;
            }
            temp_v0 = Quake_Add((arg1 + (arg1->activeCamera * 4))->unk_800, 1U);
            temp_a0 = temp_v0 << 0x10;
            sp2A = temp_v0;
            Quake_SetSpeed((s16) (temp_a0 >> 0x10), 0x2710);
            Quake_SetQuakeValues(sp2A, 2, 0, 0, (s16) 0);
            Quake_SetCountdown(sp2A, 0x14);
            func_8093D88C(arg0);
            return;
        }
        /* Duplicate return node #6. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_166 = (s16) *(&D_8093DD50 + ((((s32) arg0->actor.params >> 8) & 7) * 2));
}

void func_8093D88C(DynaPolyActor *arg0) {
    arg0->unk_166 = 0x14;
    arg0->unk_15C = func_8093D8B4;
    arg0->actor.draw = func_8093DC90;
}

void func_8093D8B4(DynaPolyActor *arg0, GlobalContext *arg1) {
    f32 temp_f16;

    if ((s32) arg0->unk_166 <= 0) {
        func_8093D9C0(arg0);
    } else {
        arg0->unk_160 = (s16) (arg0->unk_160 + 0x2710);
        arg0->unk_174 = (s16) (s32) (Math_SinS(arg0->unk_160) * 300.0f);
        temp_f16 = Math_CosS(arg0->unk_160) * 300.0f;
        arg0->unk_162 = (s16) (arg0->unk_162 + 0x4650);
        arg0->unk_176 = (s16) (s32) temp_f16;
        arg0->unk_16C = Math_SinS(arg0->unk_162);
        arg0->unk_164 = (s16) (arg0->unk_164 + 0x4650);
        arg0->unk_168 = (f32) (Math_SinS(arg0->unk_164) * 3.0f);
        arg0->unk_170 = (f32) (Math_CosS(arg0->unk_164) * 3.0f);
    }
    if ((arg0->unk_166 & 3) == 3) {
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->actor.world, 0x10, 0x2838U);
    }
}

void func_8093D9C0(DynaPolyActor *arg0) {
    ? sp18;
    DynaPolyActor *temp_a2;

    temp_a2 = arg0;
    temp_a2->unk_15C = func_8093DA48;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x24, temp_a2 + 8);
    sp18.unk_0 = (s32) (unaligned s32) arg0->unk_14;
    sp18.unk_4 = (u16) arg0->actor.home.rot.z;
    arg0->unk_30 = (unaligned s32) sp18.unk_0;
    arg0->actor.world.rot.z = sp18.unk_4;
    arg0->unk_BC = (unaligned s32) sp18.unk_0;
    arg0->actor.draw = ObjLift_Draw;
    arg0->actor.shape.rot.z = sp18.unk_4;
}

void func_8093DA48(Actor *arg0, GlobalContext *arg1) {
    s32 sp38;
    f32 sp30;
    ? sp2C;
    f32 temp_f0;

    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    Math_Vec3f_Copy((Vec3f *) &sp2C, &arg0->prevPos);
    sp30 += *(&D_8093DDA0 + ((arg0->params & 1) * 4));
    temp_f0 = func_800C411C(arg1 + 0x830, &arg0->floorPoly, &sp38, arg0, (Vec3f *) &sp2C);
    arg0->floorHeight = temp_f0;
    if ((*(&D_8093DDA0 + ((arg0->params & 1) * 4)) - 0.001f) <= (temp_f0 - arg0->world.pos.y)) {
        func_8093D3C0(arg0, arg1);
        Audio_PlaySoundAtPosition(arg1, (Vec3f *) &arg0->world, 0x14, 0x2839U);
        if ((s32) arg0->unk_178 > 0) {
            func_8093DB70(arg0);
            func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk_144);
            return;
        }
        Actor_SetSwitchFlag(arg1, ((s32) arg0->params >> 1) & 0x7F);
        Actor_MarkForDeath(arg0);
        /* Duplicate return node #4. Try simplifying control flow for better match */
    }
}

void func_8093DB70(Actor *arg0) {
    arg0->unk_15C = func_8093DB90;
    arg0->draw = NULL;
    arg0->unk_166 = (s16) arg0->unk_178;
}

void func_8093DB90(ObjLift *arg0, GlobalContext *arg1) {
    ? sp18;
    Vec3f *temp_a0;
    Vec3f *temp_a1;

    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 8;
    if ((s32) arg0->unk_166 <= 0) {
        arg0 = arg0;
        Math_Vec3f_Copy(temp_a0, temp_a1);
        sp18.unk_0 = (s32) (unaligned s32) arg0->unk_14;
        sp18.unk_4 = (u16) arg0->actor.home.rot.z;
        arg0->unk_BC = (unaligned s32) sp18.unk_0;
        arg0->actor.shape.rot.z = sp18.unk_4;
        arg0->unk_30 = (unaligned s32) sp18.unk_0;
        arg0->actor.world.rot.z = sp18.unk_4;
        func_800C6314(arg1, arg1 + 0x880, arg0->unk_144);
        func_8093D760(arg0);
    }
}

void ObjLift_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_v0;
    ObjLift *this = (ObjLift *) thisx;

    temp_v0 = this->unk_166;
    if ((s32) temp_v0 > 0) {
        this->unk_166 = temp_v0 - 1;
    }
    this->actionFunc(this, globalCtx);
}

void ObjLift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjLift *this = (ObjLift *) thisx;
    func_800BDFC0(globalCtx, &D_06000D10);
}

void func_8093DC90(Actor *arg0, GlobalContext *arg1) {
    f32 sp28;
    s16 sp24;
    s16 sp22;
    s16 sp20;

    Math_Vec3f_Sum(arg0 + 0x24, arg0 + 0x168, (Vec3f *) &sp28);
    sp20 = arg0->unk_174 + arg0->home.rot.x;
    sp22 = arg0->home.rot.y;
    sp24 = arg0->unk_176 + arg0->home.rot.z;
    SysMatrix_SetStateRotationAndTranslation(sp28, sp2C, sp30, (Vec3s *) &sp20);
    Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    func_800BDFC0(arg1, &D_06000D10);
}
