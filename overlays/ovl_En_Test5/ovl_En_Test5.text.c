typedef struct EnTest5 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ Vec3f unk_144;                      /* inferred */
    /* 0x150 */ f32 unk_150;                        /* inferred */
    /* 0x154 */ f32 unk_154;                        /* inferred */
    /* 0x158 */ void (*actionFunc)(EnTest5 *, GlobalContext *);
} EnTest5;                                          /* size = 0x15C */

struct _mips2c_stack_EnTest5_Destroy {};            /* size 0x0 */

struct _mips2c_stack_EnTest5_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTest5_SetupAction {};        /* size 0x0 */

struct _mips2c_stack_EnTest5_Update {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ s32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_80A90478 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

void EnTest5_SetupAction(EnTest5 *this, void (*actionFunc)(EnTest5 *, GlobalContext *)) {
    this->actionFunc = actionFunc;
}

void EnTest5_Init(Actor *thisx, GlobalContext *globalCtx) {
    WaterBox *sp2C;
    f32 sp28;
    EnTest5 *this = (EnTest5 *) thisx;

    if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp28, &sp2C) == 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Math_Vec3s_ToVec3f(&this->unk_144, (Vec3s *) sp2C);
    this->unk_150 = (f32) sp2C->xLength;
    this->unk_154 = (f32) sp2C->zLength;
    EnTest5_SetupAction(this, func_80A90478);
}

void EnTest5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest5 *this = (EnTest5 *) thisx;

}

void func_80A90478(EnTest5 *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    f32 sp30;
    Actor *temp_v0;

    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        return;
    }
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0->unk_388 == 0) || (temp_v0->unk_384 != 0xBA)) {
        sp3C = temp_v0;
        Math_Vec3f_DistXYZAndStoreDiff(&this->unk_144, (Vec3f *) &temp_v0->world, (Vec3f *) &sp30);
        if ((sp30 >= 0.0f) && (sp30 <= this->unk_150) && (sp38 >= 0.0f) && (sp38 <= this->unk_154) && (fabsf(sp34) < 100.0f) && (temp_v0->yDistToWater > 12.0f)) {
            func_800B8A1C((Actor *) this, globalCtx, 0xBA, this->actor.xzDistToPlayer, fabsf(this->actor.yDistToPlayer));
        }
    }
}

void EnTest5_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f2;
    EnTest5 *this = (EnTest5 *) thisx;

    this->actionFunc(this, globalCtx);
    if ((this->actor.params != 0) && ((globalCtx->state.frames & 3) == 0)) {
        sp44 = (Rand_ZeroOne() * this->unk_150) + this->unk_144.x;
        sp48 = this->unk_144.y + 100.0f;
        sp4C = (Rand_ZeroOne() * this->unk_154) + this->unk_144.z;
        temp_f2 = this->unk_144.y;
        if ((func_800C4000(globalCtx, &globalCtx->colCtx, &sp40, (Vec3f *) &sp44) + 10.0f) < temp_f2) {
            sp48 = temp_f2 + 10.0f;
            sp30 = 0.0f;
            sp38 = 0.0f;
            sp34 = 0.5f;
            EffectSsIceSmoke_Spawn(globalCtx, (Vec3f *) &sp44, (Vec3f *) &sp30, &D_801D15B0, (s16) (-0xC8 - (s32) (Rand_ZeroOne() * 50.0f)));
        }
    }
}
