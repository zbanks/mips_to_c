? func_800DFFAC(Camera *, BgOpenShutter *, s16, ?, s32, s32, s32); /* extern */
f32 func_80ACAB10(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_80ACABA8(Actor *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
extern Gfx D_060003E8;
extern CollisionHeader D_06001640;
static InitChainEntry D_80ACB140;                   /* unable to generate initializer */

typedef struct BgOpenShutter {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ char pad15E[0x2];                  /* maybe part of unk15C[2]? */
    /* 0x0160 */ void (*actionFunc)(BgOpenShutter *, GlobalContext *);
    /* 0x0164 */ s32 unk164;                        /* inferred */
} BgOpenShutter;                                    /* size 0x168 */

f32 func_80ACAB10(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f sp1C;
    f32 *temp_a2;
    void *temp_v0;
    f32 phi_f0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_a2 = &sp28;
    sp28 = temp_v0->world.pos.x;
    sp2C = temp_v0->world.pos.y + arg2;
    sp30 = temp_v0->world.pos.z;
    Actor_CalcOffsetOrientedToDrawRotation(arg1, &sp1C, (Vec3f *) temp_a2);
    if ((arg3 < fabsf(sp1C.x)) || (phi_f0 = sp1C.z, (arg4 < fabsf(sp1C.y)))) {
        phi_f0 = 3.4028235e38f;
    }
    return phi_f0;
}

s32 func_80ACABA8(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 temp_f0;
    s16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if ((func_801233E4(arg1) == 0) && (arg0->xzDistToPlayer < 100.0f) && (temp_f0 = func_80ACAB10(arg1, arg0, 0.0f, 65.0f, 15.0f), (fabsf(temp_f0) < 50.0f))) {
        temp_v0 = sp24->shape.rot.y - arg0->shape.rot.y;
        phi_v0 = (s32) temp_v0;
        if (temp_f0 > 0.0f) {
            phi_v0 = (s32) (s16) (0x8000 - temp_v0);
        }
        phi_v1 = phi_v0;
        if (phi_v0 < 0) {
            phi_v1 = -phi_v0;
        }
        if (phi_v1 < 0x3000) {
            if (temp_f0 > 1.0f) {
                return 1;
            }
            if (temp_f0 < -1.0f) {
                return -1;
            }
            goto block_12;
        }
        goto block_12;
    }
block_12:
    return 0;
}

void BgOpenShutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenShutter *this = (BgOpenShutter *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_80ACB140);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06001640);
    this->actionFunc = func_80ACAD88;
}

void BgOpenShutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenShutter *this = (BgOpenShutter *) thisx;
    TransitionActorEntry *temp_v0;

    temp_v0 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
    temp_v0->id = (s16) -(s32) temp_v0->id;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80ACAD88(BgOpenShutter *this, GlobalContext *globalCtx) {
    Actor *sp38;
    Actor *sp34;
    Actor *temp_a2;
    Actor *temp_t7;
    s32 temp_v0;

    if (this->unk15C != 0) {
        temp_t7 = globalCtx->actorCtx.actorList[2].first;
        globalCtx = globalCtx;
        sp38 = temp_t7;
        Audio_PlayActorSound2(&this->actor, 0x2814U);
        func_800DFFAC(globalCtx->cameraPtrs[0], this, sp38->unk3BA, 0, 0xC, 0xF, 0xA);
        this->unk164 = 0;
        this->actionFunc = func_80ACAE5C;
        this->actor.velocity.y = 0.0f;
        return;
    }
    temp_a2 = globalCtx->actorCtx.actorList[2].first;
    sp34 = temp_a2;
    temp_v0 = func_80ACABA8(&this->actor, globalCtx, temp_a2, globalCtx);
    if (temp_v0 > 0) {
        temp_a2->unk37C = 2;
        temp_a2->unk37D = (s8) temp_v0;
        temp_a2->unk380 = this;
        func_80122F28((Player *) temp_a2, MIPS2C_ERROR(Read from unset register $a1), temp_a2);
    }
}

void func_80ACAE5C(BgOpenShutter *this, GlobalContext *globalCtx) {
    Math_StepToF(&this->actor.velocity.y, 15.0f, 3.0f);
    if (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y + 120.0f, this->actor.velocity.y) != 0) {
        this->unk164 += 1;
    }
    if (this->unk164 >= 0xA) {
        Audio_PlayActorSound2(&this->actor, 0x281CU);
        this->actionFunc = func_80ACAEF0;
    }
}

void func_80ACAEF0(BgOpenShutter *this, GlobalContext *globalCtx) {
    s16 sp3A;
    s16 temp_v0;
    s32 temp_a0;

    Math_StepToF(&this->actor.velocity.y, 20.0f, 8.0f);
    if (Math_StepToF(&this->actor.world.pos.y, this->actor.home.pos.y, this->actor.velocity.y) != 0) {
        this->actor.floorHeight = this->actor.home.pos.y;
        func_800BBDAC(globalCtx, &this->actor, &this->actor.world.pos, 60.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 1);
        Audio_PlayActorSound2(&this->actor, 0x281DU);
        temp_v0 = Quake_Add(Play_GetCamera(globalCtx, 0), 3U);
        temp_a0 = temp_v0 << 0x10;
        sp3A = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), -0x7F18);
        Quake_SetQuakeValues(sp3A, 2, 0, 0, (s16) 0);
        Quake_SetCountdown(sp3A, 0xA);
        func_8013ECE0(this->actor.xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
        this->unk15C = 0;
        this->actionFunc = func_80ACAD88;
    }
}

void BgOpenShutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenShutter *this = (BgOpenShutter *) thisx;
    u16 temp_v1;

    if (func_800EE29C(globalCtx, 0x7CU) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x7CU)]->unk0;
        if (temp_v1 == 1) {
            if (func_80ACAD88 == this->actionFunc) {
                Audio_PlayActorSound2(&this->actor, 0x2814U);
                this->actionFunc = func_80ACAE5C;
                this->actor.velocity.y = 0.0f;
            }
            this->unk164 = 0;
            this->actionFunc(this, globalCtx);
            return;
        }
        if ((temp_v1 == 2) && (func_80ACAE5C == this->actionFunc)) {
            Audio_PlayActorSound2(&this->actor, 0x281CU);
            this->actionFunc = func_80ACAEF0;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        this->actionFunc(this, globalCtx);
        return;
    }
    this->actionFunc(this, globalCtx);
}

void BgOpenShutter_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgOpenShutter *this = (BgOpenShutter *) thisx;
    func_800BDFC0(globalCtx, &D_060003E8);
}

