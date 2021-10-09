typedef struct ObjDanpeilift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjDanpeilift *, GlobalContext *);
    /* 0x160 */ f32 unk_160;                        /* inferred */
    /* 0x164 */ s32 unk_164;                        /* inferred */
    /* 0x168 */ s32 unk_168;                        /* inferred */
    /* 0x16C */ s32 unk_16C;                        /* inferred */
    /* 0x170 */ void *unk_170;                      /* inferred */
    /* 0x174 */ s32 unk_174;                        /* inferred */
    /* 0x178 */ s32 unk_178;                        /* inferred */
    /* 0x17C */ f32 unk_17C;                        /* inferred */
    /* 0x180 */ f32 unk_180;                        /* inferred */
    /* 0x184 */ s16 unk_184;                        /* inferred */
    /* 0x186 */ s16 unk_186;                        /* inferred */
    /* 0x188 */ s16 unk_188;                        /* inferred */
    /* 0x18A */ char pad_18A[0x2];
} ObjDanpeilift;                                    /* size = 0x18C */

struct _mips2c_stack_ObjDanpeilift_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDanpeilift_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjDanpeilift_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_ObjDanpeilift_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1ADC0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1AF84 {};              /* size 0x0 */

struct _mips2c_stack_func_80C1AF94 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Vec3f *sp28;                         /* inferred */
    /* 0x2C */ char pad_2C[0x18];                   /* maybe part of sp28[7]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ ? sp48;                              /* inferred */
    /* 0x48 */ char pad_48[0x10];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80C1B210 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1B26C {};              /* size 0x0 */

void func_80C1ADC0(ObjDanpeilift *arg0, s32 arg1, s32); /* static */
void func_80C1AF84(ObjDanpeilift *, GlobalContext *); /* static */
void func_80C1AF94(ObjDanpeilift *, GlobalContext *); /* static */
void func_80C1B210(ObjDanpeilift *, GlobalContext *); /* static */
void func_80C1B26C(ObjDanpeilift *, GlobalContext *); /* static */
extern Gfx D_06000180;
extern CollisionHeader D_06000BA0;
static InitChainEntry D_80C1B540[4];                /* unable to generate initializer */

void func_80C1ADC0(ObjDanpeilift *arg0, s32 arg1) {
    Math_Vec3s_ToVec3f(arg0 + 0x24, arg0->unk_170 + (arg1 * 6));
}

void ObjDanpeilift_Init(Actor *thisx, GlobalContext *globalCtx) {
    Path *temp_v0;
    f32 temp_f0;
    s16 temp_v1;
    void (*phi_t8)(ObjDanpeilift *, GlobalContext *);
    ObjDanpeilift *this = (ObjDanpeilift *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80C1B540);
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000BA0);
    if (this->unk_144 == 0x32) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_160 = (f32) this->actor.home.rot.z * 0.1f;
    temp_f0 = this->unk_160;
    phi_t8 = func_80C1AF84;
    if (temp_f0 < 0.0f) {
        this->unk_160 = -temp_f0;
    }
    if (this->unk_160 < 0.01f) {

    } else {
        temp_v1 = this->actor.params;
        this->unk_168 = ((s32) temp_v1 >> 7) & 0x1F;
        temp_v0 = &globalCtx->setupPathList[temp_v1 & 0x7F];
        this->unk_16C = 1;
        this->unk_164 = temp_v0->count - 1;
        this->unk_170 = Lib_SegmentedToVirtual((void *) temp_v0->points);
        func_80C1ADC0(this, this->unk_168);
        phi_t8 = func_80C1AF94;
    }
    this->actionFunc = phi_t8;
}

void ObjDanpeilift_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjDanpeilift *this = (ObjDanpeilift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void func_80C1AF84(ObjDanpeilift *arg0, GlobalContext *arg1) {

}

void func_80C1AF94(ObjDanpeilift *arg0, GlobalContext *arg1) {
    ? sp48;
    f32 sp44;
    Vec3f *sp28;
    Vec3f *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_v1;
    void *temp_v0;
    void *temp_v1_2;
    f32 phi_f0;
    f32 phi_f12;
    s32 phi_a2;

    Math_Vec3s_ToVec3f((Vec3f *) &sp48, arg0->unk_170 + (arg0->unk_168 * 6) + (arg0->unk_16C * 6));
    temp_a2 = &arg0->actor.velocity;
    sp28 = temp_a2;
    Math_Vec3f_Diff((Vec3f *) &sp48, (Vec3f *) &arg0->actor.world, temp_a2);
    temp_f0 = Math3D_Vec3fMagnitude(sp28);
    temp_f2 = arg0->unk_160;
    if ((temp_f0 < (temp_f2 * 8.0f)) && (temp_f2 > 2.0f)) {
        phi_f0 = ((temp_f2 - 2.0f) * 0.1f) + 2.0f;
        phi_f12 = temp_f2 * 0.03f;
    } else {
        phi_f0 = temp_f2;
        phi_f12 = temp_f2 * 0.16f;
    }
    sp44 = temp_f0;
    Math_StepToF(&arg0->actor.speedXZ, phi_f0, phi_f12);
    temp_f0_2 = arg0->actor.speedXZ;
    if ((temp_f0_2 + 0.05f) < temp_f0) {
        Math_Vec3f_Scale(sp28, temp_f0_2 / temp_f0);
        arg0->actor.world.pos.x += arg0->actor.velocity.x;
        arg0->actor.world.pos.y += arg0->actor.velocity.y;
        arg0->actor.world.pos.z += arg0->actor.velocity.z;
        return;
    }
    temp_v1 = arg0->unk_168 + arg0->unk_16C;
    arg0->unk_168 = temp_v1;
    temp_a0 = arg0->unk_164;
    arg0->actor.speedXZ *= 0.4f;
    phi_a2 = 1;
    if (((temp_v1 >= temp_a0) && (arg0->unk_16C > 0)) || ((temp_v1 <= 0) && (arg0->unk_16C < 0))) {
        if ((((s32) arg0->actor.params >> 0xC) & 1) == 0) {
            arg0->unk_16C = -arg0->unk_16C;
            arg0->unk_186 = 0xA;
            arg0->actionFunc = func_80C1B26C;
        } else {
            temp_v1_2 = arg0->unk_170 + (temp_a0 * 6);
            if (arg0->unk_16C > 0) {
                arg0->unk_168 = 0;
            } else {
                arg0->unk_168 = temp_a0;
            }
            temp_v0 = arg0->unk_170;
            if ((temp_v1_2->unk_0 != temp_v0->unk_0) || (temp_v1_2->unk_2 != temp_v0->unk_2) || (temp_v1_2->unk_4 != temp_v0->unk_4)) {
                arg0->actionFunc = func_80C1B210;
                func_800C62BC(arg1, &arg1->colCtx.dyna, arg0->unk_144);
                phi_a2 = 0;
            }
        }
    }
    if (phi_a2 != 0) {
        func_80C1ADC0(arg0, arg0->unk_168, phi_a2);
    }
}

void func_80C1B210(ObjDanpeilift *arg0, GlobalContext *arg1) {
    if (func_800CAF70((DynaPolyActor *) arg0) == 0) {
        func_80C1ADC0(arg0, arg0->unk_168);
        func_800C6314(arg1, &arg1->colCtx.dyna, arg0->unk_144);
        arg0->actionFunc = func_80C1AF94;
    }
}

void func_80C1B26C(ObjDanpeilift *arg0, GlobalContext *arg1) {
    arg0->unk_186 += -1;
    if ((s32) arg0->unk_186 <= 0) {
        arg0->actionFunc = func_80C1AF94;
        arg0->actor.speedXZ = 0.0f;
    }
}

void ObjDanpeilift_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s16 temp_v0;
    f32 phi_f0;
    f32 phi_f2;
    ObjDanpeilift *this = (ObjDanpeilift *) thisx;

    this->actionFunc(this, globalCtx);
    Actor_SetHeight((Actor *) this, 10.0f);
    temp_v0 = this->unk_188;
    if ((s32) temp_v0 > 0) {
        this->unk_188 = temp_v0 - 1;
        if (this->unk_188 == 0) {
            ActorCutscene_Stop((s16) this->actor.cutscene);
        }
    }
    if ((((s32) this->actor.params >> 0xE) & 1) != 0) {
        this->unk_178 = this->unk_174;
        if (func_800CAF70((DynaPolyActor *) this) != 0) {
            this->unk_174 = 1;
        } else {
            this->unk_174 = 0;
        }
        if ((this->unk_178 != this->unk_174) && (this->unk_180 < 1.0f)) {
            this->unk_184 = -0x8000;
            this->unk_180 = 6.0f;
        }
        this->unk_184 += 0xCE4;
        Math_StepToF(&this->unk_180, 0.0f, 0.12f);
        if (this->unk_174 != 0) {
            phi_f2 = Math_CosS((s16) (s32) (fabsf(this->unk_17C) * 2048.0f)) + 0.02f;
        } else {
            phi_f2 = Math_SinS((s16) (s32) (fabsf(this->unk_17C) * 2048.0f)) + 0.02f;
        }
        if (this->unk_174 != 0) {
            phi_f0 = -8.0f;
        } else {
            phi_f0 = 0.0f;
        }
        Math_StepToF(&this->unk_17C, phi_f0, phi_f2);
        this->actor.shape.yOffset = ((Math_SinS(this->unk_184) * this->unk_180) + this->unk_17C) * 10.0f;
    }
    if (((((s32) this->actor.params >> 0xF) & 1) == 1) && (temp_v0_2 = this->actor.child, (temp_v0_2 != 0))) {
        if (temp_v0_2->update == 0) {
            this->actor.child = NULL;
            return;
        }
        temp_v0_2->world.pos.x = this->actor.world.pos.x;
        this->actor.child->world.pos.y = this->actor.world.pos.y + (this->actor.shape.yOffset * this->actor.scale.y);
        this->actor.child->world.pos.z = this->actor.world.pos.z;
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void ObjDanpeilift_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjDanpeilift *this = (ObjDanpeilift *) thisx;
    func_800BDFC0(globalCtx, &D_06000180);
}
