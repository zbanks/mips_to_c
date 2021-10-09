CRASHED

typedef struct ObjHunsui {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjHunsui *, GlobalContext *);
    /* 0x160 */ s16 unk_160;                        /* inferred */
    /* 0x162 */ char pad_162[0x2];
    /* 0x164 */ s32 unk_164;                        /* inferred */
    /* 0x168 */ s32 unk_168;                        /* inferred */
    /* 0x16C */ s8 unk_16C;                         /* inferred */
    /* 0x16D */ s8 unk_16D;                         /* inferred */
    /* 0x16E */ s8 unk_16E;                         /* inferred */
    /* 0x16F */ char pad_16F[0x1];
    /* 0x170 */ s16 unk_170;                        /* inferred */
    /* 0x172 */ u16 unk_172;                        /* inferred */
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ f32 unk_178;                        /* inferred */
    /* 0x17C */ s16 unk_17C;                        /* inferred */
    /* 0x17E */ char pad_17E[0x2];
    /* 0x180 */ s32 unk_180;                        /* inferred */
    /* 0x184 */ s16 unk_184;                        /* inferred */
    /* 0x186 */ s16 unk_186;                        /* inferred */
    /* 0x188 */ s16 unk_188;                        /* inferred */
    /* 0x18A */ s16 unk_18A;                        /* inferred */
    /* 0x18C */ s16 unk_18C;                        /* inferred */
    /* 0x18E */ char pad_18E[0x2];
    /* 0x190 */ f32 unk_190;                        /* inferred */
    /* 0x194 */ f32 unk_194;                        /* inferred */
    /* 0x198 */ f32 unk_198;                        /* inferred */
    /* 0x19C */ char pad_19C[0x1C];                 /* maybe part of unk_198[8]? */
} ObjHunsui;                                        /* size = 0x1B8 */

struct _mips2c_stack_ObjHunsui_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHunsui_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjHunsui_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjHunsui_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9C450 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B9C5E8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x2];
    /* 0x3E */ s16 sp3E;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80B9CE64 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B9D094 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B9D0FC {};              /* size 0x0 */

struct _mips2c_stack_func_80B9D120 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B9D288 {};              /* size 0x0 */

struct _mips2c_stack_func_80B9D2BC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9D334 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ ? sp74;                              /* inferred */
    /* 0x74 */ char pad_74[0x4];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ char pad_7C[0x4];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80B9D4D0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B9D714 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x2];
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80B9DA60 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ Gfx *sp48;                           /* inferred */
    /* 0x4C */ char pad_4C[0x4];
    /* 0x50 */ GraphicsContext *sp50;               /* inferred */
    /* 0x54 */ char pad_54[0xC];
};                                                  /* size = 0x60 */

s32 func_8013E640(GlobalContext *, ObjHunsui *, ?, ?, s32, s32, ? (*)(s32, ?, void *, ?)); /* extern */
s32 func_80B9C450(GlobalContext *arg0, s32 arg1, s32 arg2, ObjHunsui *); /* static */
void func_80B9C5E8(DynaPolyActor *arg0, GlobalContext *arg1); /* static */
void func_80B9CE64(ObjHunsui *, GlobalContext *);   /* static */
void func_80B9D094(Actor *arg0, GlobalContext *arg1, s16, GlobalContext *); /* static */
void func_80B9D0FC(ObjHunsui *arg0, GlobalContext *arg1); /* static */
void func_80B9D120(Actor *arg0, GlobalContext *arg1); /* static */
? func_80B9D288(s32 arg0, ? arg1, void *arg2, ? arg3); /* static */
void func_80B9D2BC(ObjHunsui *arg0, GlobalContext *arg1); /* static */
void func_80B9D334(ObjHunsui *arg0, GlobalContext *arg1); /* static */
void func_80B9D4D0(ObjHunsui *arg0, GlobalContext *arg1); /* static */
? func_80B9D508();                                  /* static */
void func_80B9D714(ObjHunsui *, GlobalContext *);   /* static */
void func_80B9DA60(Actor *this, GlobalContext *globalCtx); /* static */
extern Gfx D_06000220;
extern void D_06000BF0;
extern CollisionHeader D_06000C74;
extern Gfx D_06000EC0;
extern void D_06001888;
static ? D_80B9DC70;                                /* unable to generate initializer */
static InitChainEntry D_80B9DCAC[5];                /* unable to generate initializer */
static void *D_80B9DED0;
static void *D_80B9DED4;
static u8 D_80B9DED8;
static s8 D_80B9DED9;
static s8 D_80B9DEDA;

s32 func_80B9C450(GlobalContext *arg0, s32 arg1, s32 arg2) {
    s32 sp2C;
    s32 temp_s0_2;
    u8 temp_s0;
    void *temp_v1;
    s32 phi_s0;
    s32 phi_s1;

    sp2C = 1;
    if (arg2 < 0xE) {
        temp_v1 = (arg2 * 2) + &D_80B9DC70;
        temp_s0 = temp_v1->unk_0;
        temp_s0_2 = temp_s0 - 1;
        phi_s0 = temp_s0_2;
        if (temp_s0 != 0) {
            phi_s1 = arg1 + temp_s0_2;
loop_3:
            if (((1 << phi_s0) & temp_v1->unk_1) != 0) {
                if (Flags_GetSwitch(arg0, phi_s1) == 0) {
                    sp2C = 0;
                } else {
                    goto block_8;
                }
            } else if (Flags_GetSwitch(arg0, phi_s1) != 0) {
                sp2C = 0;
            } else {
block_8:
                phi_s0 += -1;
                phi_s1 += -1;
                if (phi_s0 == 0) {

                } else {
                    goto loop_3;
                }
            }
        }
    } else {
        sp2C = 0;
        if (arg2 != 0xE) {
            if (arg2 != 0xF) {

            } else if ((Flags_GetSwitch(arg0, arg1) == 0) || ((Flags_GetSwitch(arg0, arg1 + 1) != 0) && (Flags_GetSwitch(arg0, arg1 + 2) != 0) && (Flags_GetSwitch(arg0, arg1 + 3) != 0))) {
                sp2C = 1;
            }
        } else {
            if (Flags_GetSwitch(arg0, arg1) == 0) {
                sp2C = 1;
            }
            if ((Flags_GetSwitch(arg0, arg1 + 1) != 0) && (Flags_GetSwitch(arg0, arg1 + 2) != 0) && (Flags_GetSwitch(arg0, arg1 + 3) != 0)) {
                sp2C += 2;
            }
        }
    }
    return sp2C;
}

void func_80B9C5E8(DynaPolyActor *arg0, GlobalContext *arg1) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    f32 sp38;
    f32 temp_f10;
    f32 temp_f16;
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;
    void *temp_s1;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    if ((arg0->actor.xzDistToPlayer < (45.0f * arg0->actor.scale.x * 10.0f)) && (arg0->actor.yDistToPlayer < -21.0f)) {
        if (func_800CAF70(arg0) != 0) {
            arg0->unk_18C = (s16) (arg0->unk_18C + 1);
            arg0->unk_172 = (u16) (arg0->unk_172 & 0xFFF7);
            arg0->unk_19C = 0.0f;
            arg0->unk_1A0 = 0.0f;
            if ((s32) arg0->unk_18C >= 3) {
                arg0->unk_18C = 0;
                Math_Vec3f_Copy((Vec3f *) &sp40, temp_s1 + 0x24);
                sp40 += randPlusMinusPoint5Scaled(10.0f);
                sp48 += randPlusMinusPoint5Scaled(10.0f);
                sp44 += Rand_ZeroFloat(2.0f);
                EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp40, NULL, NULL, (s16) (s32) (2.0f * Rand_ZeroOne()), (s16) 1);
                return;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return;
        }
        arg0->unk_18C = (s16) (arg0->unk_18C + 1);
        arg0->unk_172 = (u16) (arg0->unk_172 | 8);
        if ((s32) arg0->unk_18C >= 3) {
            Math_Vec3f_Copy((Vec3f *) &sp40, temp_s1 + 0x24);
            arg0->unk_18C = 0;
            sp40 += randPlusMinusPoint5Scaled(10.0f);
            sp48 += randPlusMinusPoint5Scaled(10.0f);
            sp44 += Rand_ZeroFloat(45.0f);
            EffectSsGSplash_Spawn(arg1, (Vec3f *) &sp40, NULL, NULL, (s16) 1, (s16) 1);
        }
        temp_s1->gravity = 0.0f;
        temp_s1->velocity.y = 0.0f;
        temp_v0 = arg0->unk_160;
        temp_t0 = (temp_s1->world.rot.y - arg0->actor.yawTowardsPlayer) + 0x8000;
        if ((temp_v0 != 5) && (temp_v0 != 6)) {
            sp3E = temp_t0;
            Math_SmoothStepToF(temp_s1 + 0x28, arg0->actor.world.pos.y, 0.5f, 4.0f, 1.0f);
        }
        if (((s32) temp_t0 < 0x4000) && ((s32) temp_t0 >= -0x3FFF)) {
            temp_f16 = arg0->actor.xzDistToPlayer;
            arg0->unk_1A4 = (s16) (temp_s1->world.rot.y + 0x8000);
            temp_f10 = 45.0f * arg0->actor.scale.x * 10.0f;
            if ((temp_f16 / temp_f10) > 1.0f) {

            }
            temp_s1->unk_AD0 = (f32) (temp_s1->unk_AD0 * (temp_f16 / temp_f10));
            temp_v0_2 = arg0->unk_160;
            if ((temp_v0_2 == 5) || (temp_v0_2 == 6)) {
                sp38 = temp_f16 / temp_f10;
                Math_ApproachF(arg0 + 0x1A0, 4.5f, 2.0f, 1.0f);
                Math_ApproachF(arg0 + 0x19C, arg0->unk_1A0, 2.0f, 0.3f * (temp_f16 / temp_f10));
            } else {
                sp38 = temp_f16 / temp_f10;
                Math_ApproachF(arg0 + 0x1A0, 3.0f, 1.0f, 1.0f);
                Math_ApproachF(arg0 + 0x19C, arg0->unk_1A0, 1.0f, 0.3f * (temp_f16 / temp_f10));
            }
        } else {
            arg0->unk_1A4 = temp_s1->world.rot.y;
            temp_s1->unk_AD0 = (f32) (temp_s1->unk_AD0 * 0.5f);
            Math_ApproachF(arg0 + 0x1A0, 3.0f, 1.0f, 1.0f);
            Math_ApproachF(arg0 + 0x19C, arg0->unk_1A0, 1.0f, 0.1f);
        }
        temp_s1->unk_B84 = (s16) arg0->unk_1A4;
        temp_s1->unk_B80 = (f32) arg0->unk_19C;
        return;
    }
    if ((arg0->unk_172 & 8) != 0) {
        temp_s1->unk_AD0 = (f32) (arg0->unk_19C + temp_s1->unk_AD0);
        temp_s1->unk_AD4 = (s16) arg0->unk_1A4;
    }
    arg0->unk_1A0 = 0.0f;
    arg0->unk_19C = 0.0f;
    arg0->unk_172 = (u16) (arg0->unk_172 & 0xFFF7);
}

void ObjHunsui_Init(Actor *thisx, GlobalContext *globalCtx) {
    s16 temp_t3;
    s16 temp_t8;
    s16 temp_v1;
    s16 temp_v1_2;
    s8 temp_t2;
    s8 temp_t7;
    s8 temp_t8_2;
    u32 phi_v1;
    u32 phi_v1_2;
    ObjHunsui *this = (ObjHunsui *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B9DCAC);
    this->unk_160 = ((s32) this->actor.params >> 0xC) & 0xF;
    this->unk_164 = ((s32) this->actor.params >> 7) & 0x1F;
    this->unk_168 = this->actor.params & 0x7F;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_v1 = this->unk_160;
    if ((temp_v1 != 5) && (temp_v1 != 6)) {
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000C74);
    }
    D_80B9DED0 = Lib_SegmentedToVirtual(&D_06000BF0);
    D_80B9DED4 = Lib_SegmentedToVirtual(&D_06001888);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_170, 1);
    temp_v1_2 = this->unk_160;
    this->unk_18C = 0;
    switch (temp_v1_2) {                            /* switch 1 */
        this->actor.uncullZoneScale = 900.0f;
        this->actor.uncullZoneDownward = 90.0f;
        this->actor.uncullZoneForward = 4000.0f;
        break;
    }
    phi_v1 = (u32) this->unk_160;
    if (this->unk_160 != 5) {
        if (this->unk_160 != 6) {
            goto block_15;
        }
        if (D_80B9DED8.unk_2 == 0) {
            D_80B9DED8.unk_2 = 1U;
            temp_t2 = this->actor.room;
            temp_t3 = this->actor.world.rot.z;
            this->actor.world.rot.z = 0;
            this->actor.shape.rot.z = 0;
            this->actor.room = -1;
            this->unk_16C = temp_t2;
            this->unk_16D = (s8) temp_t3;
            phi_v1 = (u32) this->unk_160;
            goto block_15;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (D_80B9DED8.unk_1 == 0) {
        D_80B9DED8.unk_1 = 1U;
        temp_t7 = this->actor.room;
        temp_t8 = this->actor.world.rot.z;
        this->actor.world.rot.z = 0;
        this->actor.shape.rot.z = 0;
        this->actor.room = -1;
        this->unk_16C = temp_t7;
        this->unk_16D = (s8) temp_t8;
        phi_v1 = (u32) this->unk_160;
block_15:
        phi_v1_2 = phi_v1;
        switch (phi_v1) {                           /* switch 2 */
        case 0:                                     /* switch 2 */
            if (D_80B9DED8.unk_0 == 0) {
                D_80B9DED8.unk_0 = 1;
                temp_t8_2 = this->actor.room;
                this->actionFunc = func_80B9D714;
                this->actor.room = -1;
                this->unk_16C = temp_t8_2;
                this->unk_16D = (s8) this->unk_164;
                return;
            }
            Actor_MarkForDeath((Actor *) this);
            return;
        case 2:                                     /* switch 2 */
            this->unk_172 |= 1;
            /* fallthrough */
        case 1:                                     /* switch 2 */
            this->actor.draw = func_80B9DA60;
            if (((this->unk_172 & 1) != 0) && (func_80B9C450(globalCtx, this->unk_168, this->unk_164) != 0)) {
                this->unk_172 |= 4;
                this->unk_184 = 0xFF0;
                this->unk_174 = 240.0f;
            } else {
                this->unk_172 |= 2;
                this->unk_184 = 0;
                this->unk_174 = -30.0f;
            }
            this->unk_178 = this->unk_174;
            this->unk_180 = func_80B9C450(globalCtx, this->unk_168, this->unk_164);
            this->actionFunc = func_80B9CE64;
            return;
        case 4:                                     /* switch 2 */
            this->unk_172 |= 1;
            phi_v1_2 = (u32) this->unk_160;
            /* fallthrough */
        case 3:                                     /* switch 2 */
        case 5:                                     /* switch 2 */
        case 6:                                     /* switch 2 */
            this->actor.draw = func_80B9DA60;
            if ((phi_v1_2 == 5) || (phi_v1_2 == 6)) {
                func_80B9D2BC(this, globalCtx);
                this->unk_178 = this->unk_174;
                return;
            }
            if (((this->unk_172 & 1) != 0) || (func_80B9C450(globalCtx, this->unk_168, this->unk_164) != 0)) {
                func_80B9D4D0(this, globalCtx);
            } else {
                func_80B9D0FC(this, globalCtx);
            }
            this->unk_178 = this->unk_174;
        default:                                    /* switch 2 */
            return;
        }
    } else {
        Actor_MarkForDeath((Actor *) this);
    }
}

void ObjHunsui_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHunsui *this = (ObjHunsui *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void ObjHunsui_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHunsui *temp_a0;
    f32 temp_f0;
    s16 temp_a1;
    ObjHunsui *phi_a0;
    ObjHunsui *this = (ObjHunsui *) thisx;

    this->actionFunc(this, globalCtx);
    temp_a0 = this;
    phi_a0 = temp_a0;
    if ((temp_a0->unk_172 & 0x40) != 0) {
        temp_a1 = temp_a0->unk_17C;
        this = temp_a0;
        phi_a0 = this;
        if (func_8013E2D4((Actor *) temp_a0, temp_a1, -1, 0) != 0) {
            this->unk_172 &= 0xFFBF;
        }
    }
    temp_f0 = phi_a0->unk_1AC;
    if (temp_f0 > 1024.0f) {
        phi_a0->unk_1AC = temp_f0 - 1024.0f;
    }
    if (phi_a0->unk_1AC <= 0.0f) {
        phi_a0->unk_1AC += 1024.0f;
    }
}

void func_80B9CE64(ObjHunsui *arg0, GlobalContext *arg1) {
    s32 sp2C;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_a0;
    s32 temp_v0;
    u16 temp_t2;
    u16 temp_t2_2;
    u16 temp_t3;
    u16 temp_v1;
    u16 temp_v1_2;
    s32 phi_a0;
    u16 phi_v1;

    if ((arg0->unk_172 & 2) == 0) {
        func_80B9C5E8((DynaPolyActor *) arg0, arg1);
    }
    arg0->unk_18A += 0x71C;
    Math_SmoothStepToF(&arg0->unk_190, arg0->unk_194, 1.0f, 0.2f, 0.01f);
    temp_v0 = func_80B9C450(arg1, arg0->unk_168, arg0->unk_164);
    sp2C = temp_v0;
    temp_v1 = arg0->unk_172;
    temp_a0 = temp_v1 & 1;
    phi_a0 = temp_a0;
    phi_v1 = temp_v1;
    if (temp_a0 == 0) {
        temp_t2 = temp_v1 | 0x40;
        if (temp_v0 != arg0->unk_180) {
            temp_v1_2 = temp_t2 & 0xFFFF;
            arg0->unk_172 = temp_t2;
            arg0->unk_17C = arg0->unk_170;
            phi_a0 = temp_v1_2 & 1;
            phi_v1 = temp_v1_2;
        }
    }
    if ((phi_a0 != 0) || (temp_v0 != 0)) {
        temp_t3 = phi_v1 & ~2;
        arg0->unk_172 = temp_t3;
        if (arg0->unk_186 == 0) {
            arg0->unk_172 = temp_t3 | 0x10;
            arg0->unk_174 = 240.0f;
            if (arg0->unk_178 == 240.0f) {
                temp_v0_2 = arg0->unk_188;
                arg0->unk_188 = temp_v0_2 + 1;
                if ((((s32) temp_v0_2 < 0x29) ^ 1) != 0) {
                    arg0->unk_188 = 0;
                    arg0->unk_186 = 1;
                    arg0->unk_194 = 0.0f;
                } else {
                    arg0->unk_194 = 8.0f;
                }
            }
        } else {
            arg0->unk_174 = 30.0f;
            if (arg0->unk_178 == 30.0f) {
                temp_v0_3 = arg0->unk_188;
                arg0->unk_188 = temp_v0_3 + 1;
                if ((((s32) temp_v0_3 < 0x29) ^ 1) != 0) {
                    arg0->unk_188 = 0;
                    arg0->unk_186 = 0;
                    arg0->unk_194 = 0.0f;
                } else {
                    arg0->unk_194 = 8.0f;
                }
            }
        }
    } else {
        arg0->unk_174 = -30.0f;
        if (arg0->unk_178 == -30.0f) {
            temp_t2_2 = arg0->unk_172 & 0xFFEF;
            arg0->unk_172 = temp_t2_2;
            arg0->unk_172 = temp_t2_2 | 2;
        }
    }
    arg0->unk_198 = arg0->unk_190 * Math_SinS(arg0->unk_18A);
    if ((arg0->unk_172 & 0x40) == 0) {
        Math_SmoothStepToF(&arg0->unk_178, arg0->unk_174, 0.6f, 10.5f, 0.05f);
    }
    arg0->actor.world.pos.y = arg0->unk_198 + (arg0->actor.home.pos.y + arg0->unk_178);
    arg0->unk_180 = sp2C;
}

void func_80B9D094(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_18A = (s16) (arg0->unk_18A + 0x71C);
    Math_SmoothStepToF(arg0 + 0x190, arg0->unk_194, 1.0f, 0.2f, 0.01f);
    arg0->unk_198 = (f32) (arg0->unk_190 * Math_SinS(arg0->unk_18A));
}

void func_80B9D0FC(ObjHunsui *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80B9D120;
    arg0->unk_174 = -30.0f;
}

void func_80B9D120(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a1_2;
    GlobalContext *temp_a3;
    f32 temp_f0;
    s16 temp_a2;
    s8 temp_a0;
    s8 temp_a1;
    s8 temp_v0;
    s8 temp_v1;
    u16 temp_t1;

    temp_a3 = arg1;
    temp_a2 = arg0->unk_160;
    if (((temp_a2 == 5) || (temp_a2 == 6)) && (temp_v1 = temp_a3->roomCtx.currRoom.num, temp_a0 = arg0->unk_16C, (temp_v1 != temp_a0)) && (temp_a1 = temp_a3->roomCtx.prevRoom.num, (temp_a1 != temp_a0)) && (temp_v0 = arg0->unk_16D, (temp_v1 != temp_v0)) && (temp_a1 != temp_v0)) {
        if (temp_a2 != 5) {
            if (temp_a2 != 6) {

            } else {
                D_80B9DEDA = 0;
            }
        } else {
            D_80B9DED9 = 0;
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_a1_2 = temp_a3;
    arg1 = temp_a3;
    func_80B9D094(arg0, temp_a1_2, temp_a2, temp_a3);
    if ((arg0->unk_172 & 0x40) == 0) {
        Math_SmoothStepToF(arg0 + 0x178, arg0->unk_174, 0.6f, 10.5f, 0.05f);
    }
    temp_f0 = arg0->unk_178;
    arg0->world.pos.y = arg0->unk_198 + (arg0->home.pos.y + temp_f0);
    if (arg0->unk_174 == temp_f0) {
        temp_t1 = arg0->unk_172 & 0xFFEF;
        arg0->unk_172 = temp_t1;
        arg0->unk_172 = (u16) (temp_t1 | 2);
    }
    if (func_80B9C450(arg1, arg0->unk_168, arg0->unk_164) != 0) {
        arg0->unk_172 = (u16) (arg0->unk_172 | 0x40);
        arg0->unk_17C = (s16) arg0->unk_170;
        func_80B9D4D0((ObjHunsui *) arg0, arg1);
    }
}

? func_80B9D288(s32 arg0, ? arg1, void *arg2, ? arg3) {
    ? phi_v1;

    phi_v1 = 0;
    if ((arg2->unk_1C & 0xF) == 8) {
        phi_v1 = 1;
    }
    return phi_v1;
}

void func_80B9D2BC(ObjHunsui *arg0, GlobalContext *arg1) {
    ObjHunsui *temp_a3;
    s32 temp_a1;
    s32 temp_a2;
    ObjHunsui *phi_a3;

    temp_a3 = arg0;
    phi_a3 = temp_a3;
    if (((temp_a3->unk_172 & 1) != 0) || (temp_a1 = temp_a3->unk_168, temp_a2 = temp_a3->unk_164, arg0 = temp_a3, phi_a3 = arg0, (func_80B9C450(arg1, temp_a1, temp_a2, temp_a3) != 0))) {
        func_80B9D4D0(phi_a3, arg1);
        return;
    }
    arg0->unk_172 |= 2;
    func_80B9D0FC(arg0, arg1);
}

void func_80B9D334(ObjHunsui *arg0, GlobalContext *arg1) {
    ? sp74;
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 phi_s2;
    s32 phi_s0;
    s32 phi_s3;

    temp_v0 = arg0->unk_160;
    phi_s2 = 0;
    if (temp_v0 != 5) {
        if (temp_v0 != 6) {

        }
    } else {
        phi_s2 = 1;
    }
    if (arg0->unk_1B4 != 0) {
        phi_s0 = 0;
        phi_s3 = 0;
        do {
            temp_v0_2 = arg0->unk_1B4;
            if ((phi_s2 + 1) == (temp_v0_2 + (phi_s2 * 8) + phi_s0)->unk_300) {
                Math_Vec3f_Copy((Vec3f *) &sp74, temp_v0_2 + (phi_s2 * 0x60) + (phi_s0 * 0xC) + 0x238);
                arg0->unk_174 = sp78 - arg0->actor.home.pos.y;
                phi_s3 = 1;
                if (arg0->unk_174 > 240.0f) {
                    arg0->unk_174 = 240.0f;
                }
                arg0->unk_190 = 0.0f;
                arg0->unk_198 = 0.0f;
                arg0->unk_18A = 0;
            }
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 8);
        if (phi_s3 == 0) {
            arg0->unk_174 = 240.0f;
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    temp_v0_3 = func_8013E640(arg1, arg0, 0, 1, 0x174, 0, func_80B9D288);
    if (temp_v0_3 != 0) {
        arg0->unk_1B4 = temp_v0_3;
        func_80B9D2BC(arg0, arg1);
    }
}

void func_80B9D4D0(ObjHunsui *arg0, GlobalContext *arg1) {
    u16 temp_t8;

    temp_t8 = arg0->unk_172 & 0xFFFD;
    arg0->unk_172 = temp_t8;
    arg0->unk_172 = temp_t8 | 0x10;
    arg0->actionFunc = func_80B9D508;
    arg0->unk_174 = 240.0f;
}

/*
Failed to decompile function func_80B9D508:

Label L80B9D5E4 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/

void func_80B9D714(ObjHunsui *arg0, GlobalContext *arg1) {
    Actor *sp30;
    s16 sp2E;
    f32 sp28;
    GlobalContext *temp_a3;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f18;
    f32 temp_f2;
    s8 temp_a0;
    s8 temp_a0_2;
    s8 temp_a2;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 temp_v1;
    u16 temp_t7;
    u16 temp_t9;
    s8 phi_v1;

    temp_a3 = arg1;
    sp30 = temp_a3->actorCtx.actorList[2].first;
    temp_v1 = temp_a3->roomCtx.currRoom.num;
    temp_a2 = arg0->unk_16C;
    if ((temp_v1 != temp_a2) && (temp_a0 = temp_a3->roomCtx.prevRoom.num, (temp_a0 != temp_a2)) && (temp_v0 = arg0->unk_16D, (temp_v1 != temp_v0)) && (temp_a0 != temp_v0)) {
        Actor_MarkForDeath((Actor *) arg0);
    } else {
        arg1 = temp_a3;
        if (Flags_GetSwitch(temp_a3, arg0->unk_168) != 0) {
            temp_v0_2 = arg0->unk_16E;
            temp_a0_2 = arg0->actor.cutscene;
            temp_t9 = arg0->unk_172 & 0xFFFD;
            arg0->unk_172 = temp_t9;
            arg0->unk_172 = temp_t9 | 0x10;
            if (temp_v0_2 == 0) {
                if (((s32) temp_a0_2 >= 0) && (sp2E = (s16) temp_a0_2, (ActorCutscene_GetCanPlayNext((s16) temp_a0_2) == 0))) {
                    ActorCutscene_SetIntentToPlay((s16) temp_a0_2);
                } else if ((s32) arg0->actor.cutscene >= 0) {
                    ActorCutscene_StartAndSetUnkLinkFields((s16) (s32) arg0->actor.cutscene, (Actor *) arg0);
                    arg0->unk_16E = -1;
                } else {
                    arg0->unk_16E = 0x28;
                }
            } else if ((s32) temp_v0_2 < 0) {
                if (func_800F22C4((s16) temp_a0_2, (Actor *) arg0) != 0) {
                    arg0->unk_16E = 0x28;
                }
            } else {
                if (Math_SmoothStepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y + 800.0f, 0.1f, 8.0f, 1.0f) < 0.5f) {
                    temp_v0_3 = arg0->unk_16E;
                    if (temp_v0_3 == 0) {
                        phi_v1 = 0;
                    } else {
                        arg0->unk_16E = temp_v0_3 - 1;
                        phi_v1 = arg0->unk_16E;
                    }
                    if (phi_v1 == 0) {
                        Actor_UnsetSwitchFlag(arg1, arg0->unk_168);
                    }
                }
                arg0->actor.velocity.y = arg0->actor.world.pos.y - arg0->actor.prevPos.y;
            }
        } else {
            Math_StepToF(&arg0->actor.velocity.y, -10.0f, 4.0f);
            temp_f0 = arg0->actor.home.pos.y;
            arg0->actor.world.pos.y += arg0->actor.velocity.y;
            if (arg0->actor.world.pos.y < temp_f0) {
                arg0->actor.world.pos.y = temp_f0;
                temp_t7 = arg0->unk_172 & 0xFFEF;
                arg0->unk_172 = temp_t7;
                arg0->unk_172 = temp_t7 | 2;
            }
        }
    }
    if (func_800CAF70((DynaPolyActor *) arg0) == 0) {
        temp_f0_2 = arg0->actor.xzDistToPlayer;
        if (temp_f0_2 < 45.0f) {
            temp_f2 = arg0->actor.yDistToPlayer;
            if ((temp_f2 < -arg0->actor.velocity.y) && (temp_f2 >= -800.0f)) {
                temp_f18 = (45.0f - temp_f0_2) * 0.5f;
                sp28 = temp_f18;
                sp30->world.pos.x += sp28 * Math_SinS(arg0->actor.yawTowardsPlayer);
                sp30->world.pos.z += temp_f18 * Math_CosS(arg0->actor.yawTowardsPlayer);
            }
        }
    }
}

void ObjHunsui_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHunsui *temp_a3;
    f32 temp_f8;
    u16 temp_v0;
    u16 phi_v0;
    ObjHunsui *this = (ObjHunsui *) thisx;

    temp_a3 = this;
    temp_v0 = temp_a3->unk_172;
    phi_v0 = temp_v0;
    if ((temp_v0 & 0x10) != 0) {
        temp_f8 = temp_a3->actor.world.pos.y - temp_a3->actor.home.pos.y;
        this = temp_a3;
        func_8019FAD8(&temp_a3->actor.projectedPos, 0x216EU, 1.0f + (temp_f8 / 800.0f));
        phi_v0 = this->unk_172;
    }
    if ((phi_v0 & 2) == 0) {
        AnimatedMat_Draw(globalCtx, (AnimatedMaterial *) D_80B9DED0);
        func_800BE03C(globalCtx, &D_06000220);
    }
}

void func_80B9DA60(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp50;
    Gfx *sp48;
    Gfx *sp44;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_t0;
    s16 temp_v0;
    s32 temp_v1;

    if ((this->unk_172 & 0x10) != 0) {
        func_8019FAD8(&this->projectedPos, 0x216EU, 1.0f + (((this->unk_178 - 240.0f) / 270.0f) + 1.0f));
    }
    if (((this->flags & 0x40) != 0) && ((this->unk_172 & 2) == 0)) {
        temp_v0 = this->unk_160;
        if ((temp_v0 == 6) || (temp_v0 == 5)) {
            temp_t0 = globalCtx->state.gfxCtx;
            temp_v0_2 = temp_t0->polyXlu.p;
            temp_t0->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060020;
            temp_v1 = globalCtx->gameplayFrames & 0x7F;
            sp50 = temp_t0;
            sp48 = temp_v0_2;
            sp48->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, temp_v1 * -9, 0x20, 0x20, 1, 0U, temp_v1 * -8, 0x20, 0x20);
            temp_v0_3 = temp_t0->polyXlu.p;
            temp_t0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060024;
            sp44 = temp_v0_3;
            sp44->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, (u32) (s32) this->unk_1AC, 0x20, 0x20, 1, 0U, (u32) (s32) this->unk_1B0, 0x20, 0x20);
        } else {
            AnimatedMat_DrawXlu(globalCtx, (AnimatedMaterial *) D_80B9DED4);
        }
        temp_a0 = globalCtx->state.gfxCtx;
        temp_v1_2 = temp_a0->polyXlu.p;
        temp_a0->polyXlu.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = -0x81;
        temp_v1_2->words.w0 = 0xFA00007F;
        func_800BE03C(globalCtx, &D_06000EC0);
    }
}
