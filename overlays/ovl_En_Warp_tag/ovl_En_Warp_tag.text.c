typedef struct EnWarptag {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ s8 unk15C;                          /* inferred */
    /* 0x15D */ char pad15D[0x1];
    /* 0x15E */ s16 unk15E;                         /* inferred */
    /* 0x160 */ void (*actionFunc)(EnWarptag *, GlobalContext *);
} EnWarptag;                                        /* size = 0x164 */

struct _mips2c_stack_EnWarptag_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnWarptag_Init {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnWarptag_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C085C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C08E0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C09A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C0A20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809C0AB4 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ void *sp34;                          /* inferred */
    /* 0x38 */ char pad38[0xC];                     /* maybe part of sp34[4]? */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad50[0x8];                     /* maybe part of sp4C[3]? */
    /* 0x58 */ s32 sp58;                            /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ s32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x14];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_809C0E30 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809C0F3C {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

s32 func_800B8718(EnWarptag *, GlobalContext *);    /* extern */
? func_800B8804(EnWarptag *, GlobalContext *, ?, GlobalContext *); /* extern */
? func_80165658(u32);                               /* extern */
? func_8016566C(?);                                 /* extern */
? func_80165690();                                  /* extern */
? func_801A4058(?);                                 /* extern */
void func_809C0F3C(Actor *this, GlobalContext *globalCtx); /* static */
extern ? D_05021EF0;
static ? D_809C1000;                                /* unable to generate initializer */
static InitChainEntry D_809C1008[2];                /* unable to generate initializer */

void EnWarptag_Init(EnWarptag *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_v0_2;
    EnWarptag *this = (EnWarptag *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_809C1008);
    Actor_SetHeight((Actor *) this, 0.0f);
    temp_v0 = this->actor.params;
    if ((temp_v0 & 0x3C0) == 0x3C0) {
        this->actor.flags &= -2;
        if ((s32) temp_v0 < 0) {
            this->actionFunc = func_809C08E0;
            return;
        }
        temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, 3);
        this->unk15C = temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            Actor_MarkForDeath((Actor *) this);
        }
        this->actionFunc = func_809C085C;
        return;
    }
    this->actionFunc = func_809C09A0;
}

void EnWarptag_Destroy(EnWarptag *this, GlobalContext *globalCtx) {
    EnWarptag *this = (EnWarptag *) thisx;
    if (this->actor.draw != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_809C085C(EnWarptag *this, GlobalContext *globalCtx) {
    if (Object_IsLoaded(&globalCtx->objectCtx, (s32) this->unk15C) != 0) {
        this->actionFunc = func_809C08E0;
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_0502324C);
        this->actor.draw = func_809C0F3C;
        this->actor.objBankIndex = this->unk15C;
    }
}

void func_809C08E0(EnWarptag *this, GlobalContext *globalCtx) {
    this = this;
    if ((func_801233E4(globalCtx) == 0) && (this->actor.xzDistToPlayer <= 30.0f) && (this->actor.yDistToPlayer <= 10.0f)) {
        if ((s32) this->actor.params < 0) {
            this = this;
            func_800B7298(globalCtx, NULL, 0x51U);
            this->actionFunc = func_809C0E30;
            return;
        }
        this = this;
        func_800B7298(globalCtx, NULL, 0xFU);
        this->actionFunc = func_809C0AB4;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_809C09A0(EnWarptag *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a1;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (func_800B8718(this, temp_a1) != 0) {
        func_80152434(globalCtx, (u16) *(&D_809C1000 + (((s32) this->actor.params >> 6) & 0xF)));
        this->actionFunc = func_809C0A20;
        return;
    }
    func_800B8804(this, globalCtx, 0x42480000, globalCtx);
}

void func_809C0A20(EnWarptag *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    temp_v0 = globalCtx->msgCtx.unk1202A;
    if (temp_v0 == 9) {
        func_800B7298(globalCtx, NULL, 7U);
        this->actionFunc = func_809C0AB4;
        ActorCutscene_Stop(ActorCutscene_GetCurrentIndex());
        return;
    }
    if ((s32) temp_v0 >= 2) {
        globalCtx->msgCtx.unk1202A = 4;
        this->actionFunc = func_809C09A0;
    }
}

void func_809C0AB4(EnWarptag *this, GlobalContext *globalCtx) {
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;
    s32 sp58;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    void *sp34;
    Actor *temp_s1;
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f2;
    s16 temp_a0;
    s32 temp_t0;
    s32 temp_t4;
    s32 temp_v0_2;
    void *temp_t1;
    void *temp_v0;
    f32 phi_f2;
    u8 phi_v1;
    s32 phi_v1_2;
    s32 phi_v0;

    temp_t1 = globalCtx + 0x18000;
    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    if (((s32) globalCtx->unk_1879C[4] >= 0) && (sp34 = temp_t1, temp_a0 = globalCtx->unk_1879C[4], (ActorCutscene_GetCurrentIndex() != temp_a0))) {
        sp34 = temp_t1;
        if (ActorCutscene_GetCanPlayNext(temp_a0) == 0) {
            ActorCutscene_SetIntentToPlay(globalCtx->unk_1879C[4]);
            return;
        }
        ActorCutscene_StartAndSetUnkLinkFields(globalCtx->unk_1879C[4], (Actor *) this);
        func_800B8E58(temp_s1, 0x9A7U);
        func_8016566C(0);
        return;
    }
    temp_f16 = this->actor.world.pos.x;
    temp_f12 = temp_s1->world.pos.x - temp_f16;
    temp_f14 = temp_s1->world.pos.z - this->actor.world.pos.z;
    temp_f0 = sqrtf((temp_f12 * temp_f12) + (temp_f14 * temp_f14));
    phi_f2 = temp_f0;
    if (temp_f0 != 0.0f) {
        temp_f2 = (temp_f0 - 1.0f) / temp_f0;
        phi_f2 = temp_f2;
        if (temp_f2 < 0.0f) {
            phi_f2 = 0.0f;
        }
    }
    temp_s1->world.pos.x = temp_f16 + (temp_f12 * phi_f2);
    temp_s1->world.pos.z = this->actor.world.pos.z + (temp_f14 * phi_f2);
    sp34 = globalCtx + 0x18000;
    if (Math_StepToS(&this->unk15E, 0x2710, 0xC8) != 0) {
        temp_s1->unkA74 = (s32) (temp_s1->unkA74 | 1);
        temp_s1->gravity = -0.5f;
        if (this->actor.yDistToPlayer < -80.0f) {
            temp_t4 = this->actor.params & 0x3F;
            sp58 = temp_t4;
            sp68 = temp_t4;
            sp5C = (s32) this->actor.world.rot.x;
            sp60 = (s32) this->actor.world.rot.y;
            sp64 = (s32) this->actor.world.rot.z;
            if (this->actor.draw != 0) {
                phi_v1 = 0U;
            } else {
                phi_v1 = temp_s1->unk14B;
            }
            temp_t0 = (sp + (phi_v1 * 4))->unk58;
            temp_v0 = (globalCtx + 0x18000)->unk850 + (temp_t0 * 0x10);
            sp44 = (f32) temp_v0->unk2;
            sp48 = (f32) temp_v0->unk4;
            sp4C = (f32) temp_v0->unk6;
            phi_v1_2 = 0x8FF;
            if ((this->actor.params & 0x3C0) == 0x3C0) {
                phi_v1_2 = 0x9FF;
            }
            func_80169DCC(globalCtx, 0, gSaveContext.entranceIndex & 0xFFFF, (s32) ((globalCtx + 0x18000)->unk85C + (temp_t0 * 2))->unk1, phi_v1_2, (Vec3f *) &sp44, (s16) (s32) (((f32) (((s32) temp_v0->unkA >> 7) & 0x1FF) / 180.0f) * 32768.0f));
            func_80169EFC(globalCtx);
            gSaveContext.respawnFlag = -5;
            func_80165690();
        }
    }
    temp_s1->shape.rot.y += this->unk15E;
    temp_v0_2 = this->unk15E - 0xFA0;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 < 0) {
        phi_v0 = 0;
    }
    func_80165658((u32) ((f32) phi_v0 * 0.04f));
}

void func_809C0E30(EnWarptag *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_a0;

    temp_a0 = this->actor.cutscene;
    if (ActorCutscene_GetCurrentIndex() != temp_a0) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        } else {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        }
    }
    temp_v0 = this->unk15E;
    this->unk15E = temp_v0 + 1;
    if (temp_v0 == 0xA) {
        globalCtx->nextEntranceIndex = globalCtx->setupExitList[this->actor.params & 0x3F];
        Scene_SetExitFade(globalCtx);
        globalCtx->sceneLoadFlag = 0x14;
        func_8019F128(0x5805U);
        func_801A4058(5);
        gSaveContext.seqIndex = 0xFF;
        gSaveContext.nightSeqIndex = 0xFF;
    }
}

void EnWarptag_Update(EnWarptag *this, GlobalContext *globalCtx) {
    EnWarptag *this = (EnWarptag *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_809C0F3C(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual((void *) &D_05023008));
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_05021EF0;
    temp_v0_2->words.w0 = 0xDE000000;
}
