CRASHED

/*
Failed to decompile function func_80AF7354:

Label L80AF73D4 refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).
*/
s32 func_8013E07C(GlobalContext *, EnDno_ActorUnkStruct *); /* extern */
s32 func_80AF6DE0(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1); /* static */
void func_80AF6EA8(BgDanpeiMovebg *, GlobalContext *); /* static */
u16 func_80AF705C(DynaPolyActor *arg0, u16 arg1);   /* static */
void func_80AF70FC(BgDanpeiMovebg *, GlobalContext *); /* static */
void func_80AF71FC(BgDanpeiMovebg *, GlobalContext *); /* static */
void func_80AF72F8(BgDanpeiMovebg *, GlobalContext *); /* static */
void func_80AF7354(BgDanpeiMovebg *, GlobalContext *); /* static */
void func_80AF746C(BgDanpeiMovebg *, GlobalContext *); /* static */
void func_80AF74CC(Actor *this, GlobalContext *globalCtx); /* static */
static ? D_80AF7530;                                /* unable to generate initializer */
static ? D_80AF7534;                                /* unable to generate initializer */
static ? D_80AF7538;                                /* unable to generate initializer */
static InitChainEntry D_80AF753C;                   /* unable to generate initializer */

typedef struct BgDanpeiMovebg {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ void (*actionFunc)(BgDanpeiMovebg *, GlobalContext *);
    /* 0x0160 */ EnDno_ActorUnkStruct unk160;       /* inferred */
    /* 0x01CC */ u16 unk1CC;                        /* inferred */
    /* 0x01CE */ u16 unk1CE;                        /* inferred */
    /* 0x01D0 */ s32 unk1D0;                        /* inferred */
    /* 0x01D4 */ s8 unk1D4;                         /* inferred */
    /* 0x01D5 */ char pad1D5[0x3];                  /* maybe part of unk1D4[4]? */
} BgDanpeiMovebg;                                   /* size 0x1D8 */

s32 func_80AF6DE0(GlobalContext *arg0, EnDno_ActorUnkStruct *arg1) {
    f32 temp_f0;
    void *temp_v0;
    s32 phi_v1;

    temp_v0 = arg1->unk_48;
    temp_f0 = temp_v0->speedXZ;
    phi_v1 = 0;
    if (arg1->unk_50 < (temp_f0 * temp_f0)) {
        phi_v1 = 1;
    } else {
        temp_v0->world.rot.x = arg1->unk_54;
        temp_v0->world.rot.y = arg1->unk_56;
    }
    return phi_v1;
}

void BgDanpeiMovebg_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgDanpeiMovebg *this = (BgDanpeiMovebg *) thisx;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    this->unk1D4 = func_8013D924((s32) *(&D_80AF7530 + ((((s32) this->actor.params >> 0xE) & 3) * 2)), globalCtx);
    if ((s32) this->unk1D4 < 0) {
        Actor_MarkForDeath(&this->actor);
    }
    this->actionFunc = func_80AF6EA8;
}

void func_80AF6EA8(BgDanpeiMovebg *arg0, GlobalContext *arg1) {
    if (func_8013D8DC(arg0->unk1D4, arg1) != 0) {
        *(gSegments + 0x18) = (u32) (arg1->objectCtx.status[arg0->unk1D4].segment + 0x80000000);
        arg0->actor.draw = func_80AF74CC;
        arg0->actor.objBankIndex = arg0->unk1D4;
        Actor_ProcessInitChain(&arg0->actor, &D_80AF753C);
        BgCheck3_LoadMesh(arg1, (DynaPolyActor *) arg0, *(&D_80AF7538 + ((((s32) arg0->actor.params >> 0xE) & 3) * 4)));
        arg0->unk1D0 = *(&D_80AF7534 + ((((s32) arg0->actor.params >> 0xE) & 3) * 4));
        if ((((s32) arg0->actor.params >> 0xE) & 3) == 0) {
            arg0->actor.gravity = 0.0f;
            arg0->actor.speedXZ = 1.0f;
            func_8013DCE0(arg1, &arg0->actor.world.pos, &arg0->actor, &arg0->unk160, arg1->setupPathList, arg0->actor.params & 0x7F, 0, 0, 0, 0);
            arg0->actionFunc = func_80AF70FC;
        }
    }
}

void BgDanpeiMovebg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgDanpeiMovebg *this = (BgDanpeiMovebg *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void BgDanpeiMovebg_Update(Actor *thisx, GlobalContext *globalCtx) {
    BgDanpeiMovebg *this = (BgDanpeiMovebg *) thisx;
    u16 temp_v0;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk1CC;
    this->unk1CC = temp_v0 & 0xFFFE;
    this->unk1CE = temp_v0;
}

u16 func_80AF705C(DynaPolyActor *arg0, u16 arg1) {
    u16 sp1E;
    s32 sp18;
    u16 temp_v1;
    u16 phi_v1;
    u16 phi_v1_2;
    s32 phi_v1_3;

    temp_v1 = arg1 & 0xFFFF & ~0x1C;
    sp1E = temp_v1;
    sp18 = (s32) temp_v1;
    phi_v1 = temp_v1;
    if ((func_800CAF4C(arg0) != 0) && ((arg0->unk1CC & 1) != 0)) {
        phi_v1 = (sp18 | 4) & 0xFFFF;
    }
    sp1E = phi_v1;
    phi_v1_2 = phi_v1;
    if (func_800CAF70(arg0) != 0) {
        if (gSaveContext.playerForm == 3) {
            phi_v1_3 = phi_v1 | 8;
        } else {
            phi_v1_3 = phi_v1 | 0x10;
        }
        phi_v1_2 = phi_v1_3 & 0xFFFF;
    }
    return phi_v1_2;
}

void func_80AF70FC(BgDanpeiMovebg *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u16 temp_v0;

    temp_v0 = func_80AF705C((DynaPolyActor *) arg0, arg0->unk1CC);
    temp_v1 = temp_v0 & 0xFFFF;
    arg0->unk1CC = temp_v0;
    if ((temp_v1 & 0xC) != 0) {
        if ((temp_v1 & 4) != 0) {
            arg0->unk1CC = temp_v1 | 2;
        }
        arg0->actionFunc = func_80AF71FC;
        return;
    }
    if ((temp_v1 & 0x10) != 0) {
        if ((arg0->unk1CE & 0x10) == 0) {
            Audio_PlayActorSound2(&arg0->actor, 0x2979U);
        }
        Math_SmoothStepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y - 8.0f, 1.0f, 2.0f, 0.01f);
        return;
    }
    if ((arg0->unk1CE & 0x10) != 0) {
        Audio_PlayActorSound2(&arg0->actor, 0x297AU);
    }
    Math_SmoothStepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y, 1.0f, 2.0f, 0.01f);
}

void func_80AF71FC(BgDanpeiMovebg *arg0, GlobalContext *arg1) {
    s32 temp_v1_2;
    u16 temp_v0;
    u16 temp_v1;

    func_8013DE04(arg1, &arg0->unk160, func_8013DF3C, func_80AF6DE0, func_8013E07C, func_8013E0A4);
    func_800B9010(&arg0->actor, 0x2103U);
    if ((arg0->unk160.unk_1C & 0x80) != 0) {
        temp_v1 = arg0->unk1CC;
        if ((temp_v1 & 2) != 0) {
            arg0->unk1CC = temp_v1 & 0xFFFD;
        }
        arg0->actionFunc = func_80AF72F8;
        return;
    }
    temp_v0 = func_80AF705C((DynaPolyActor *) arg0, arg0->unk1CC);
    temp_v1_2 = temp_v0 & 0xFFFF;
    arg0->unk1CC = temp_v0;
    if (((temp_v1_2 & 0x10) != 0) || ((temp_v1_2 & 0xC) == 0xC)) {
        arg0->actionFunc = func_80AF746C;
        return;
    }
    if ((temp_v1_2 & 0x1C) == 0) {
        arg0->unk160.unk_1C |= 8;
        arg0->actionFunc = func_80AF7354;
        arg0->actor.speedXZ = 2.0f;
    }
}

void func_80AF72F8(BgDanpeiMovebg *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    temp_v0 = func_80AF705C((DynaPolyActor *) arg0->unk1CC);
    arg0->unk1CC = temp_v0;
    if ((temp_v0 & 0x1C) == 0) {
        arg0->unk160.unk_1C |= 8;
        arg0->actionFunc = func_80AF7354;
        arg0->actor.speedXZ = 2.0f;
    }
}



void func_80AF746C(BgDanpeiMovebg *arg0, GlobalContext *arg1) {
    u16 temp_v0;

    temp_v0 = func_80AF705C((DynaPolyActor *) arg0->unk1CC);
    arg0->unk1CC = temp_v0;
    if ((temp_v0 & 0x18) == 0) {
        if ((arg0->unk160.unk_1C & 8) != 0) {
            arg0->actionFunc = func_80AF7354;
            return;
        }
        arg0->actionFunc = func_80AF71FC;
        // Duplicate return node #4. Try simplifying control flow for better match
    }
}

void func_80AF74CC(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_a2;

    temp_a2 = this->unk1D0;
    if (temp_a2 != 0) {
        func_800BDFC0(globalCtx, temp_a2);
    }
}

