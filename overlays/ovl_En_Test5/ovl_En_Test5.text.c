typedef struct EnTest5 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ Vec3f unk144;                      /* inferred */
    /* 0x0150 */ f32 unk150;                        /* inferred */
    /* 0x0154 */ f32 unk154;                        /* inferred */
    /* 0x0158 */ void (*actionFunc)(EnTest5 *, GlobalContext *);
} EnTest5;                                          /* size 0x15C */

void EnTest5_SetupAction(EnTest5 *this, void (*actionFunc)(EnTest5 *, GlobalContext *)) {
    EnTest5 *self = (EnTest5 *) this;
    self->actionFunc = actionFunc;
}

void EnTest5_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTest5 *this = (EnTest5 *) thisx;
    WaterBox *sp2C;
    f32 sp28;

    if (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp28, &sp2C) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Math_Vec3s_ToVec3f(&this->unk144, (Vec3s *) sp2C);
    this->unk150 = (f32) sp2C->xLength;
    this->unk154 = (f32) sp2C->zLength;
    EnTest5_SetupAction(this, func_80A90478);
}

void EnTest5_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest5 *this = (EnTest5 *) thisx;

}

void func_80A90478(EnTest5 *this, GlobalContext *globalCtx) {
    Actor *sp3C;
    Vec3f sp30;
    Actor *temp_v0;

    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        return;
    }
    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((temp_v0->unk388 == 0) || (temp_v0->unk384 != 0xBA)) {
        sp3C = temp_v0;
        Math_Vec3f_DistXYZAndStoreDiff(&this->unk144, &temp_v0->world.pos, &sp30);
        if ((sp30.x >= 0.0f) && (sp30.x <= this->unk150) && (sp30.z >= 0.0f) && (sp30.z <= this->unk154) && (fabsf(sp30.y) < 100.0f) && (temp_v0->yDistToWater > 12.0f)) {
            func_800B8A1C(&this->actor, globalCtx, 0xBA, this->actor.xzDistToPlayer, fabsf(this->actor.yDistToPlayer));
        }
    }
}

void EnTest5_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTest5 *this = (EnTest5 *) thisx;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    s32 sp40;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 temp_f2;

    this->actionFunc(this, globalCtx);
    if ((this->actor.params != 0) && ((globalCtx->state.frames & 3) == 0)) {
        sp44 = (Rand_ZeroOne() * this->unk150) + this->unk144.x;
        sp48 = this->unk144.y + 100.0f;
        sp4C = (Rand_ZeroOne() * this->unk154) + this->unk144.z;
        temp_f2 = this->unk144.y;
        if ((func_800C4000(globalCtx, &globalCtx->colCtx, &sp40, (Vec3f *) &sp44) + 10.0f) < temp_f2) {
            sp48 = temp_f2 + 10.0f;
            sp30 = 0.0f;
            sp38 = 0.0f;
            sp34 = 0.5f;
            EffectSsIceSmoke_Spawn(globalCtx, (Vec3f *) &sp44, (Vec3f *) &sp30, &D_801D15B0, (s16) (-0xC8 - (s32) (Rand_ZeroOne() * 50.0f)));
        }
    }
}

