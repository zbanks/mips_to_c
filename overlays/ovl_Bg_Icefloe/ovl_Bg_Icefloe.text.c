? EffectSsIceBlock_Spawn(s32, f32 *, f32 *, ? *, s32); /* extern */
void func_80AC4A80(BgIcefloe *arg0, GlobalContext *arg1, s32); /* static */
void func_80AC4AE8(void *arg0, s32 arg1);           /* static */
void func_80AC4C18(void *arg0);                     /* static */
void func_80AC4C34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AC4CF0(Actor *arg0);                    /* static */
void func_80AC4D2C(Actor *arg0, GlobalContext *arg1); /* static */
extern Gfx D_060001E0;
extern CollisionHeader D_06000C90;
static Actor *D_80AC4F30 = NULL;
static BgIcefloe *D_80AC4F38 = NULL;
static InitChainEntry D_80AC4F3C;                   /* unable to generate initializer */
static ? D_80AC4F40;                                /* unable to generate initializer */
static s32 D_80AC5060;

typedef struct BgIcefloe {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(BgIcefloe *, GlobalContext *);
    /* 0x0160 */ char pad160[0x4];                  /* maybe part of actionFunc[2]? */
} BgIcefloe;                                        /* size 0x164 */

void BgIcefloe_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgIcefloe *this = (BgIcefloe *) thisx;
    Actor **temp_v0;
    Actor *temp_a0;
    s32 temp_a2;
    Actor **phi_v0;
    s32 phi_a2;

    Actor_ProcessInitChain(&this->actor, &D_80AC4F3C);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06000C90);
    temp_a2 = D_80AC5060;
    phi_a2 = temp_a2;
    phi_a2 = temp_a2;
    if (temp_a2 >= 3) {
        temp_a0 = D_80AC4F30;
        if ((temp_a0 != 0) && (temp_a0->update != 0) && (func_80AC4D2C != temp_a0->unk15C)) {
            func_80AC4CF0(temp_a0);
            phi_a2 = D_80AC5060;
        }
        phi_v0 = &D_80AC4F30;
        do {
            temp_v0 = phi_v0 + 4;
            temp_v0->unk-4 = (s32) phi_v0->unk4;
            phi_v0 = temp_v0;
        } while (temp_v0 != &D_80AC4F38);
        D_80AC4F38 = this;
    } else {
        *(&D_80AC4F30 + (temp_a2 * 4)) = this;
    }
    D_80AC5060 = phi_a2 + 1;
    this->actor.world.pos.y = this->actor.home.pos.y + 10.0f;
    func_80AC4A80(this, globalCtx, phi_a2);
}

void BgIcefloe_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgIcefloe *this = (BgIcefloe *) thisx;
    Actor **temp_v0;
    s32 temp_a2;
    Actor **phi_v0;

    temp_a2 = this->unk144;
    this = this;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    D_80AC5060 += -1;
    phi_v0 = &D_80AC4F30;
loop_1:
    if (this == *phi_v0) {
        *phi_v0 = NULL;
        return;
    }
    temp_v0 = phi_v0 + 4;
    phi_v0 = temp_v0;
    if (temp_v0 == &D_80AC4F3C) {
        return;
    }
    goto loop_1;
}

void func_80AC4A80(Actor *arg0, GlobalContext *arg1) {
    arg0->unk160 = 0x14;
    SkinMatrix_Vec3fMtxFMultXYZW(arg1 + 0x187B0, arg0 + 0x24, arg0 + 0xEC, arg0 + 0xF8);
    Audio_PlayActorSound2(arg0, 0x2862U);
    arg0->unk15C = func_80AC4AE8;
}

void func_80AC4AE8(void *arg0, s32 arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 temp_t7;

    sp3C = randPlusMinusPoint5Scaled(6.0f);
    sp44 = randPlusMinusPoint5Scaled(6.0f);
    sp40 = Rand_ZeroFloat(4.0f) + 4.0f;
    arg0->unk58 = (f32) (arg0->unk58 + 0.0064999997f);
    arg0->unk60 = (f32) (arg0->unk60 + 0.0064999997f);
    arg0->unk5C = (f32) (arg0->unk5C + 0.0064999997f);
    sp30 = arg0->unk24 + (sp3C * arg0->unk58 * 75.0f);
    sp38 = arg0->unk2C + (sp44 * arg0->unk60 * 75.0f);
    sp34 = arg0->unk28 + (300.0f * arg0->unk5C);
    EffectSsIceBlock_Spawn(arg1, &sp30, &sp3C, &D_80AC4F40, Rand_S16Offset(0xA, 0xA));
    temp_t7 = arg0->unk160 - 1;
    arg0->unk160 = temp_t7;
    if (temp_t7 == 0) {
        func_80AC4C18(arg0);
    }
}

void func_80AC4C18(void *arg0) {
    arg0->unk15C = func_80AC4C34;
    arg0->unk160 = (s32) arg0->unk1C;
}

void func_80AC4C34(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp2C;
    s32 temp_t7;

    temp_t7 = arg0->unk160 - 1;
    arg0->unk160 = temp_t7;
    if ((temp_t7 == 0) || (func_800CA1E8(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, arg0 + 0xC, &sp2C) == 0)) {
        func_80AC4CF0(arg0);
        return;
    }
    arg0->world.pos.y = (sin_rad((f32) arg0->unk160 * 0.10471976f) * 3.0f) + (arg0->home.pos.y + 10.0f);
}

void func_80AC4CF0(Actor *arg0) {
    arg0->unk160 = 0x32;
    Audio_PlayActorSound2(arg0, 0x2944U);
    arg0->unk15C = func_80AC4D2C;
}

void func_80AC4D2C(Actor *arg0, GlobalContext *arg1) {
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f6;
    s32 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk160 - 1;
    arg0->unk160 = temp_v0;
    phi_v0 = temp_v0;
    if (temp_v0 >= 0x26) {
        phi_v0 = temp_v0;
        if ((temp_v0 % 2) == 0) {
            sp40 = (f32) (temp_v0 - 0x26) * 0.083333336f;
            sp3C = randPlusMinusPoint5Scaled(1.5f) * sp40;
            temp_f6 = randPlusMinusPoint5Scaled(1.5f) * sp40;
            sp40 += 0.8f;
            sp44 = temp_f6;
            sp30 = arg0->world.pos.x + (2.0f * sp3C);
            sp38 = arg0->world.pos.z + (2.0f * sp44);
            sp34 = arg0->world.pos.y + 3.0f;
            EffectSsIceSmoke_Spawn(arg1, (Vec3f *) &sp30, (Vec3f *) &sp3C, &D_801D15B0, (s16) 0xC8);
            phi_v0 = arg0->unk160;
        }
    }
    if (phi_v0 < 0x19) {
        arg0->scale.x -= 0.0052f;
        arg0->scale.z -= 0.0052f;
    }
    arg0->scale.y -= 0.0026f;
    if (arg0->scale.y <= 0.0f) {
        Actor_MarkForDeath(arg0);
    }
}

void BgIcefloe_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgIcefloe *this = (BgIcefloe *) thisx;
    if (func_801690CC(globalCtx) == 0) {
        this->actionFunc(this, globalCtx);
    }
}

void BgIcefloe_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgIcefloe *this = (BgIcefloe *) thisx;
    func_800BDFC0(globalCtx, &D_060001E0);
}

