? func_8013E4B0(Vec3f *, ? *, void *, f32 *);       /* extern */
s32 func_8017D2FC(f32, f32, s32, s32, Vec3f *, Vec3f *, Vec3f *, s32); /* extern */
void func_80AC0A54(EnTwig *arg0, GlobalContext *arg1); /* static */
void func_80AC0A6C(EnTwig *arg0, GlobalContext *arg1); /* static */
void func_80AC0A7C(EnTwig *arg0, GlobalContext *arg1); /* static */
void func_80AC0AC8(EnTwig *arg0, GlobalContext *arg1); /* static */
void func_80AC0CC4(EnTwig *arg0, GlobalContext *arg1); /* static */
void func_80AC0D2C(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060014C8;
extern Gfx D_06001C38;
static ? D_80AC10B0;                                /* unable to generate initializer */
static s16 D_80AC10BC = 0;
static InitChainEntry D_80AC10C0;                   /* unable to generate initializer */
static ? D_80AC10D0;                                /* unable to generate initializer */
static Vec3f D_80AC10DC = {0.0f, -0.05f, 0.0f};
static Vec3f D_80AC10E8 = {0.0f, -0.025f, 0.0f};
static Color_RGBA8 D_80AC10F4 = {0xFF, 0xFF, 0xFF, 0x82};
static Color_RGBA8 D_80AC10F8 = {0xFF, 0xFF, 0, 0};
static s32 D_80AC1230;
static s16 D_80AC1234;
static s16 D_80AC1238;

typedef struct EnTwig {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(EnTwig *, GlobalContext *);
    /* 0x0160 */ s32 unk160;                        /* inferred */
    /* 0x0164 */ char pad164[0x8];                  /* maybe part of unk160[3]? */
    /* 0x016C */ s32 unk16C;                        /* inferred */
    /* 0x0170 */ f32 unk170;                        /* inferred */
    /* 0x0174 */ f32 unk174;                        /* inferred */
    /* 0x0178 */ s16 unk178;                        /* inferred */
    /* 0x017A */ u16 unk17A;                        /* inferred */
    /* 0x017C */ char pad17C[0x10];                 /* maybe part of unk17A[9]? */
} EnTwig;                                           /* size 0x18C */

void EnTwig_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTwig *this = (EnTwig *) thisx;
    CollisionHeader *temp_a2;
    f32 temp_f0;
    f32 temp_f0_2;
    s16 temp_a0;
    s32 temp_v0_2;
    u32 temp_v0;
    s16 *phi_v0;

    Actor_ProcessInitChain(&this->actor, &D_80AC10C0);
    this->unk160 = this->actor.params & 0xF;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    temp_a2 = *(&D_80AC10B0 + (this->unk160 * 4));
    if (temp_a2 != 0) {
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, temp_a2);
    }
    this->actor.bgCheckFlags |= 0x400;
    if (this->unk160 != 0) {
        if (this->unk160 != 1) {
            if (this->unk160 != 2) {
                return;
            }
            Actor_SetScale(&this->actor, 1.0f);
            temp_f0 = this->actor.scale.x * 880.0f;
            this->actor.uncullZoneDownward = temp_f0;
            this->actor.uncullZoneScale = temp_f0;
            func_80AC0A54(this, globalCtx);
            return;
        }
        if (D_80AC10BC == 0) {
            if ((gSaveContext.weekEventReg[24] & 4) != 0) {
                D_80AC1234 = 0x19;
            } else {
                D_80AC1234 = 0x14;
            }
            temp_a0 = D_80AC1234;
            phi_v0 = &D_80AC1238;
            if ((s32) temp_a0 > 0) {
                do {
                    temp_v0 = phi_v0 + 2;
                    temp_v0->unk-2 = 0;
                    phi_v0 = (s16 *) temp_v0;
                } while (temp_v0 < (u32) ((temp_a0 * 2) + &D_80AC1238));
            }
            D_80AC10BC = 1;
        }
        temp_v0_2 = gSaveContext.weekEventReg[24] & 4;
        if ((((s32) this->actor.params >> 4) & 0x1F) != 0) {
            if (temp_v0_2 == 0) {
                Actor_MarkForDeath(&this->actor);
                return;
            }
            goto block_20;
        }
        if (temp_v0_2 != 0) {
            Actor_MarkForDeath(&this->actor);
            return;
        }
block_20:
        Actor_SetScale(&this->actor, 4.2f);
        temp_f0_2 = this->actor.scale.x * 60.0f;
        this->actor.uncullZoneDownward = temp_f0_2;
        this->actor.uncullZoneScale = temp_f0_2;
        func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
        func_80AC0A7C(this, globalCtx);
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void EnTwig_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTwig *this = (EnTwig *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80AC0A54(EnTwig *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80AC0A6C;
}

void func_80AC0A6C(EnTwig *arg0, GlobalContext *arg1) {

}

void func_80AC0A7C(EnTwig *arg0, GlobalContext *arg1) {
    EnTwig *temp_a2;

    temp_a2 = arg0;
    arg0 = temp_a2;
    Math_Vec3f_Copy(temp_a2 + 0x180, arg1->actorCtx.actorList[2].first + 0xBEC);
    arg0->unk178 = 0;
    arg0->unk17A = 0;
    arg0->actionFunc = func_80AC0AC8;
}

void func_80AC0AC8(EnTwig *arg0, GlobalContext *arg1) {
    s32 sp5C;
    f32 sp4C;
    Vec3f sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    Vec3f *sp34;
    Vec3f *temp_a0;
    Vec3f *temp_v0_2;
    Vec3f *temp_v1;
    f32 temp_f0;
    f32 temp_f2;
    s16 temp_v0_3;
    u16 temp_v0;

    sp5C = arg1->actorCtx.actorList[2].first;
    temp_a0 = arg0 + 0x24;
    if (D_80AC1230 == (((s32) arg0->actor.params >> 9) & 0x7F)) {
        temp_v0 = arg0->unk17A;
        if (temp_v0 == 3) {
            arg0->unk17A = 0;
            arg0->actor.shape.rot.z += 0x2000;
        } else {
            arg0->unk17A = temp_v0 + 1;
        }
    }
    sp3C = temp_a0;
    func_8013E4B0(temp_a0, &D_80AC10D0, arg0 + 0xBC, &sp4C);
    if ((D_80AC1230 == (((s32) arg0->actor.params >> 9) & 0x7F)) && (temp_v0_2 = arg0 + 0x180, temp_v1 = sp5C + 0xBEC, sp34 = temp_v1, sp38 = temp_v0_2, (func_8017D2FC(sp4C, sp50, sp54, sp58, temp_v0_2, temp_v1, &sp40, 0) != 0))) {
        temp_f2 = arg0->actor.scale.x * 0.345f * 40.0f;
        if (Math3D_DistanceSquared(sp3C, &sp40) <= (temp_f2 * temp_f2)) {
            func_80AC0CC4(arg0, arg1);
            return;
        }
        goto block_13;
    }
    sp34 = sp5C + 0xBEC;
    sp38 = arg0 + 0x180;
    temp_f0 = (arg0->actor.scale.x * 40.0f) + 40.0f;
    if (arg0->actor.xyzDistToPlayerSq <= (temp_f0 * temp_f0)) {
        func_800C6314(arg1, arg1 + 0x880, arg0->unk144);
    } else {
        func_800C62BC(arg1, arg1 + 0x880, arg0->unk144);
    }
    if ((arg0->actor.scale.x * 10.0f * 40.0f * 40.0f) <= arg0->actor.xyzDistToPlayerSq) {
        temp_v0_3 = arg0->actor.yawTowardsPlayer;
        arg0->actor.shape.rot.y = temp_v0_3;
        arg0->actor.world.rot.y = temp_v0_3;
    }
block_13:
    Math_Vec3f_Copy(sp38, sp34);
}

void func_80AC0CC4(EnTwig *arg0, GlobalContext *arg1) {
    s32 temp_a2;

    arg0->unk170 = 3458.0f;
    arg0->unk16C |= 1;
    arg0->unk174 = 0.2f;
    temp_a2 = arg0->unk144;
    arg0 = arg0;
    func_800C62BC(arg1, arg1 + 0x880, temp_a2);
    arg0->actionFunc = func_80AC0D2C;
}

void func_80AC0D2C(Actor *arg0, GlobalContext *arg1) {
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 *temp_s2;
    f32 temp_f2;
    s16 temp_a0;
    s32 temp_s0_2;
    s32 temp_v1;
    void *temp_s0;
    s32 phi_s0;
    s16 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_s0 = arg1->actorCtx.actorList[2].first;
    Math_SmoothStepToF(arg0 + 0x24, temp_s0->unkBEC, 0.5f, 100.0f, 0.01f);
    Math_SmoothStepToF(arg0 + 0x28, temp_s0->unkBF0, 0.5f, 100.0f, 0.01f);
    Math_SmoothStepToF(arg0 + 0x2C, temp_s0->unkBF4, 0.5f, 100.0f, 0.01f);
    arg0->scale.x -= arg0->unk174;
    temp_f2 = arg0->scale.x;
    arg0->shape.rot.z += (s32) arg0->unk170;
    if (temp_f2 < 0.0f) {
        Actor_SetScale(arg0, 0.0f);
    } else {
        Actor_SetScale(arg0, temp_f2);
    }
    phi_s0 = 0;
    if (arg0->scale.x <= 0.0f) {
        temp_s2 = &sp6C;
        do {
            sp6C = (Rand_Centered() * 10.0f) + arg0->world.pos.x;
            sp70 = (Rand_Centered() * 10.0f) + arg0->world.pos.y;
            sp74 = (Rand_Centered() * 10.0f) + arg0->world.pos.z;
            EffectSsKiraKira_SpawnDispersed(arg1, (Vec3f *) temp_s2, &D_80AC10DC, &D_80AC10E8, &D_80AC10F4, &D_80AC10F8, (s16) 0x3E8, (s32) (Rand_ZeroOne() * 10.0f) + 0x14);
            temp_s0_2 = phi_s0 + 1;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 != 7);
        play_sound(0x4824U);
        arg1->interfaceCtx.unk_25C += -1;
        *(&D_80AC1238 + ((((s32) arg0->params >> 9) & 0x7F) * 2)) = 1;
        if (D_80AC1230 == (((s32) arg0->params >> 9) & 0x7F)) {
            temp_a0 = D_80AC1234;
            phi_v0 = &D_80AC1238;
            phi_v1 = 0;
            phi_v1_2 = 0;
            if ((s32) temp_a0 > 0) {
loop_8:
                phi_v1_2 = phi_v1;
                if (*phi_v0 == 0) {
                    D_80AC1230 = phi_v1;
                } else {
                    temp_v1 = phi_v1 + 1;
                    phi_v0 += 2;
                    phi_v1 = temp_v1;
                    phi_v1_2 = temp_v1;
                    if (temp_v1 < (s32) temp_a0) {
                        goto loop_8;
                    }
                }
            }
            if (phi_v1_2 == temp_a0) {
                D_80AC1230 = -1;
            }
        }
        Actor_MarkForDeath(arg0);
        return;
    }
    arg0->unk170 = (f32) (arg0->unk170 + 0.002746582f);
    arg0->unk174 = (f32) (arg0->unk174 + 0.15f);
}

void EnTwig_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTwig *this = (EnTwig *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnTwig_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTwig *this = (EnTwig *) thisx;
    s32 temp_v0;

    temp_v0 = this->unk160;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return;
        }
        func_800BDFC0(globalCtx, &D_060014C8);
        return;
    }
    func_800BDFC0(globalCtx, &D_06001C38);
}

