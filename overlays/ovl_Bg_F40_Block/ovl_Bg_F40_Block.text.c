typedef struct BgF40Block {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ Path *unk_15C;                      /* inferred */
    /* 0x160 */ char pad_160[0x8];                  /* maybe part of unk_15C[3]? */
    /* 0x168 */ s32 unk_168;                        /* inferred */
    /* 0x16C */ void (*actionFunc)(BgF40Block *, GlobalContext *);
} BgF40Block;                                       /* size = 0x170 */

struct _mips2c_stack_BgF40Block_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Block_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgF40Block_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgF40Block_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC3980 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC3A2C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC3B00 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BC3CA4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC3D08 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ ? sp54;                              /* inferred */
    /* 0x54 */ char pad_54[0x4];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80BC4038 {};              /* size 0x0 */

struct _mips2c_stack_func_80BC41AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC4228 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC4344 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC4380 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC43CC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC4448 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC44F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC4530 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC457C {};              /* size 0x0 */

s32 func_800C57F8(s32, f32 *, f32 *, f32 *, ? *, s32); /* extern */
? func_80BC3980(BgF40Block *arg0, GlobalContext *arg1); /* static */
? func_80BC3A2C(BgF40Block *arg0, GlobalContext *arg1); /* static */
s32 func_80BC3B00(Actor *arg0);                     /* static */
s32 func_80BC3CA4(Actor *arg0);                     /* static */
s32 func_80BC3D08(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80BC4038(Actor *arg0);                    /* static */
void func_80BC41AC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC4228(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC4344(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC4380(BgF40Block *, GlobalContext *);  /* static */
void func_80BC43CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC4448(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC44F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BC4530(BgF40Block *, GlobalContext *);  /* static */
void func_80BC457C(BgF40Block *, GlobalContext *);  /* static */
extern Gfx D_060043D0;
extern CollisionHeader D_06004640;
static ? D_80BC4620;                                /* unable to generate initializer */
static InitChainEntry D_80BC4668[6];                /* unable to generate initializer */

? func_80BC3980(BgF40Block *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    void *temp_t8;
    void *temp_v0_2;

    arg0->unk_160 = 0;
    temp_v0 = (s32) (arg0->actor.params & 0x1FC) >> 2;
    arg0->unk_164 = 0;
    if (temp_v0 != 0x3F) {
        temp_t8 = arg1->setupPathList + (temp_v0 * 8);
        arg0->unk_15C = temp_t8;
        if (temp_t8 != 0) {
            arg0 = arg0;
            temp_v0_2 = Lib_SegmentedToVirtual(temp_t8->points);
            arg0->actor.world.pos.x = (f32) temp_v0_2->unk_0;
            arg0->actor.world.pos.y = (f32) temp_v0_2->unk_2;
            arg0->actor.world.pos.z = (f32) temp_v0_2->unk_4;
        }
    } else {
        arg0->unk_15C = NULL;
    }
    return 0;
}

? func_80BC3A2C(BgF40Block *arg0, GlobalContext *arg1) {
    s16 *temp_v1_2;
    s32 temp_v1;
    u8 *temp_t2;
    u8 *temp_v0;

    temp_v0 = arg0->unk_15C;
    temp_v1 = (s32) (arg0->actor.params & 0x1FC) >> 2;
    arg0->unk_160 = *temp_v0 - 1;
    arg0->unk_164 = *temp_v0 - 1;
    if (temp_v1 != 0x3F) {
        temp_t2 = arg1->setupPathList + (temp_v1 * 8);
        arg0->unk_15C = temp_t2;
        if (temp_t2 != 0) {
            arg0 = arg0;
            temp_v1_2 = Lib_SegmentedToVirtual(temp_t2->unk_4) + (arg0->unk_164 * 6);
            arg0->actor.world.pos.x = (f32) temp_v1_2->unk_0;
            arg0->actor.world.pos.y = (f32) temp_v1_2->unk_2;
            arg0->actor.world.pos.z = (f32) temp_v1_2->unk_4;
        }
    } else {
        arg0->unk_15C = NULL;
    }
    return 0;
}

s32 func_80BC3B00(Actor *arg0) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f *temp_a0_2;
    f32 *temp_a1;
    f32 temp_a2;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f2;
    s16 *temp_v1_2;
    void *temp_a0;
    void *temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->unk_15C;
    if (temp_v1 == 0) {
        return 1;
    }
    if (arg0->unk_164 == arg0->unk_160) {
        return 1;
    }
    temp_a0 = temp_v1->unk_4;
    arg0 = arg0;
    temp_a1 = &sp28;
    temp_a0_2 = arg0 + 0x24;
    temp_v1_2 = Lib_SegmentedToVirtual(temp_a0) + (arg0->unk_164 * 6);
    sp28 = (f32) temp_v1_2->unk_0;
    sp2C = (f32) temp_v1_2->unk_2;
    sp30 = (f32) temp_v1_2->unk_4;
    if (arg0->unk_168 == 6) {
        temp_f0 = sp28 - arg0->world.pos.x;
        temp_f2 = sp2C - arg0->world.pos.y;
        temp_f14 = sp30 - arg0->world.pos.z;
        if (temp_f0 > 10.0f) {
            arg0->unk_168 = 0;
        }
        if (temp_f2 > 10.0f) {
            arg0->unk_168 = 1;
        }
        if (temp_f14 > 10.0f) {
            arg0->unk_168 = 2;
        }
        if (temp_f0 < -10.0f) {
            arg0->unk_168 = 3;
        }
        if (temp_f2 < -10.0f) {
            arg0->unk_168 = 4;
        }
        if (temp_f14 < -10.0f) {
            arg0->unk_168 = 5;
        }
    }
    temp_a2 = arg0->speedXZ;
    arg0 = arg0;
    phi_v0 = 0;
    if (Math_Vec3f_StepTo(temp_a0_2, (Vec3f *) temp_a1, temp_a2) <= 0.0f) {
        arg0->unk_168 = 6;
        arg0->unk_160 = (s32) arg0->unk_164;
        phi_v0 = 1;
    }
    return phi_v0;
}

s32 func_80BC3CA4(Actor *arg0) {
    s16 temp_a0;
    s8 temp_a2;

    temp_a2 = arg0->cutscene;
    if (temp_a2 == -1) {
        return 1;
    }
    temp_a0 = (s16) temp_a2;
    arg0 = arg0;
    if (ActorCutscene_GetCanPlayNext(temp_a0) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->cutscene, arg0);
        return 1;
    }
    ActorCutscene_SetIntentToPlay((s16) arg0->cutscene);
    return 0;
}

s32 func_80BC3D08(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    ? sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp30;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f6;
    s32 temp_a3;

    temp_a3 = arg0->unk_168;
    if (temp_a3 == 6) {
        goto block_9;
    }
    if (arg2 != 0) {
        temp_f6 = (*(&D_80BC4620 + (temp_a3 * 0xC)) * ((800.0f * arg0->scale.x) - (arg0->speedXZ * 0.5f))) + arg0->world.pos.x;
        sp48 = temp_f6;
        temp_f4 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_4 * ((800.0f * arg0->scale.y) - (arg0->speedXZ * 0.5f))) + arg0->world.pos.y;
        sp4C = temp_f4;
        temp_f16 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_8 * ((800.0f * arg0->scale.z) - (arg0->speedXZ * 0.5f))) + arg0->world.pos.z;
        sp50 = temp_f16;
        sp3C = (*(&D_80BC4620 + (arg0->unk_168 * 0xC)) * arg0->speedXZ) + temp_f6;
        sp40 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_4 * arg0->speedXZ) + temp_f4;
        sp44 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_8 * arg0->speedXZ) + temp_f16;
    } else {
        temp_f4_2 = (*(&D_80BC4620 + (temp_a3 * 0xC)) * 800.0f * arg0->scale.x) + arg0->world.pos.x;
        sp3C = temp_f4_2;
        temp_f10 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_4 * 800.0f * arg0->scale.y) + arg0->world.pos.y;
        sp40 = temp_f10;
        temp_f18 = ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_8 * 800.0f * arg0->scale.z) + arg0->world.pos.z;
        sp44 = temp_f18;
        sp48 = temp_f4_2 - (*(&D_80BC4620 + (arg0->unk_168 * 0xC)) * arg0->speedXZ * 1.5f);
        sp4C = temp_f10 - ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_4 * arg0->speedXZ * 1.5f);
        sp50 = temp_f18 - ((&D_80BC4620 + (arg0->unk_168 * 0xC))->unk_8 * arg0->speedXZ * 1.5f);
    }
    if (func_800C57F8(arg1 + 0x830, &sp48, &sp3C, &sp30, &sp54, 1) != 0) {
        if (arg2 == 0) {
            arg0->world.pos.x -= sp3C - sp30;
            arg0->world.pos.y -= sp40 - sp34;
            arg0->world.pos.z -= sp44 - sp38;
        }
        return 1;
    }
block_9:
    return 0;
}

void func_80BC4038(Actor *arg0) {
    s32 temp_t6;

    temp_t6 = arg0->unk_164;
    arg0->unk_168 = 6;
    arg0->unk_164 = (s32) arg0->unk_160;
    arg0->unk_160 = temp_t6;
}

void BgF40Block_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_v0;
    BgF40Block *this = (BgF40Block *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80BC4668);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06004640);
    temp_v0 = (s32) (this->actor.params & 0x1FC) >> 2;
    if (temp_v0 != 0x3F) {
        this->unk_15C = &globalCtx->setupPathList[temp_v0];
    } else {
        this->unk_15C = NULL;
    }
    if (this->unk_15C != 0) {
        if (Flags_GetSwitch(globalCtx, (s32) (this->actor.params & 0xFE00) >> 9) != 0) {
            this->actionFunc = func_80BC4530;
            this->actor.speedXZ = 40.0f;
            func_80BC3A2C(this, globalCtx);
        } else {
            this->actionFunc = func_80BC4380;
            this->actor.speedXZ = 20.0f;
            func_80BC3980(this, globalCtx);
        }
    } else {
        this->actionFunc = func_80BC457C;
    }
    this->unk_168 = 6;
}

void BgF40Block_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Block *this = (BgF40Block *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80BC41AC(Actor *arg0, GlobalContext *arg1) {
    if (func_80BC3D08(arg0, arg1, 1) != 0) {
        if (Flags_GetSwitch(arg1, (s32) (arg0->params & 0xFE00) >> 9) == 0) {
            func_80BC4038(arg0);
            arg0->unk_16C = func_80BC44F4;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_16C = func_80BC4344;
}

void func_80BC4228(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    u32 temp_t2;

    if (func_80BC3B00(arg0) != 0) {
        temp_v0 = arg0->unk_160;
        arg0->speedXZ = 20.0f;
        if (temp_v0 < (*arg0->unk_15C - 1)) {
            arg0->unk_164 = (s32) (temp_v0 + 1);
        } else {
            arg0->unk_16C = func_80BC4530;
            ActorCutscene_Stop((s16) arg0->cutscene);
            Audio_PlayActorSound2(arg0, 0x29A3U);
        }
    }
    if (func_80BC3D08(arg0, arg1, 0) != 0) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        arg0->unk_16C = (void (*)(BgF40Block *, GlobalContext *)) func_80BC41AC;
        Audio_PlayActorSound2(arg0, 0x29A4U);
        return;
    }
    temp_t2 = arg0->unk_168;
    switch (temp_t2) {
    case 0:
    case 3:
        func_800B9010(arg0, 0x21A0U);
        return;
    case 1:
    case 4:
        func_800B9010(arg0, 0x21A2U);
        return;
    case 2:
    case 5:
        func_800B9010(arg0, 0x21A1U);
        /* fallthrough */
    default:
        return;
    }
}

void func_80BC4344(Actor *arg0, GlobalContext *arg1) {
    if (func_80BC3CA4(arg0) != 0) {
        arg0->unk_16C = func_80BC4228;
    }
}

void func_80BC4380(BgF40Block *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9) != 0) {
        arg0->actionFunc = (void (*)(BgF40Block *, GlobalContext *)) func_80BC4344;
    }
}

void func_80BC43CC(Actor *arg0, GlobalContext *arg1) {
    if (func_80BC3D08(arg0, arg1, 1) != 0) {
        if (Flags_GetSwitch(arg1, (s32) (arg0->params & 0xFE00) >> 9) != 0) {
            func_80BC4038(arg0);
            arg0->unk_16C = func_80BC4344;
            return;
        }
        /* Duplicate return node #4. Try simplifying control flow for better match */
        return;
    }
    arg0->unk_16C = func_80BC44F4;
}

void func_80BC4448(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;

    if (func_80BC3B00(arg0) != 0) {
        temp_v0 = arg0->unk_160;
        arg0->speedXZ = 40.0f;
        if (temp_v0 > 0) {
            arg0->unk_164 = (s32) (temp_v0 - 1);
        } else {
            arg0->unk_16C = func_80BC4380;
            ActorCutscene_Stop((s16) arg0->cutscene);
            Audio_PlayActorSound2(arg0, 0x29A3U);
        }
    }
    if (func_80BC3D08(arg0, arg1, 0) != 0) {
        ActorCutscene_Stop((s16) arg0->cutscene);
        arg0->unk_16C = (void (*)(BgF40Block *, GlobalContext *)) func_80BC43CC;
        Audio_PlayActorSound2(arg0, 0x29A4U);
    }
}

void func_80BC44F4(Actor *arg0, GlobalContext *arg1) {
    if (func_80BC3CA4(arg0) != 0) {
        arg0->unk_16C = func_80BC4448;
    }
}

void func_80BC4530(BgF40Block *arg0, GlobalContext *arg1) {
    if (Flags_GetSwitch(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9) == 0) {
        arg0->actionFunc = (void (*)(BgF40Block *, GlobalContext *)) func_80BC44F4;
    }
}

void func_80BC457C(BgF40Block *arg0, GlobalContext *arg1) {

}

void BgF40Block_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Block *temp_a2;
    BgF40Block *this = (BgF40Block *) thisx;

    temp_a2 = this;
    this = temp_a2;
    temp_a2->actionFunc(temp_a2, globalCtx);
    Math_Vec3f_Copy((Vec3f *) &this->actor.focus, (Vec3f *) &this->actor.world);
}

void BgF40Block_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgF40Block *this = (BgF40Block *) thisx;
    func_800BDFC0(globalCtx, &D_060043D0);
}
