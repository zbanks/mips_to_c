void func_80AAB4A0(SkelAnime *arg0, ? *arg1, s32 arg2); /* static */
void func_80AAB710(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AAB838(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AAB974(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80AAB990(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80AAB9A8(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80AABA84(GlobalContext *arg0, DmChar03 *arg1); /* static */
extern FlexSkeletonHeader D_06020550;
static ? D_80AABB80;                                /* unable to generate initializer */

typedef struct DmChar03 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(DmChar03 *, GlobalContext *);
    /* 0x018C */ s16 unk18C;                        /* inferred */
    /* 0x018E */ u8 unk18E;                         /* inferred */
    /* 0x018F */ u8 unk18F;                         /* inferred */
    /* 0x0190 */ f32 unk190;                        /* inferred */
    /* 0x0194 */ f32 unk194;                        /* inferred */
    /* 0x0198 */ f32 unk198;                        /* inferred */
} DmChar03;                                         /* size 0x19C */

void func_80AAB4A0(SkelAnime *arg0, ? *arg1, s32 arg2) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    temp_s0 = arg1 + ((arg2 & 0xFFFF) * 0x18);
    temp_f0 = temp_s0->unkC;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg0, (AnimationHeader *) temp_s0->unk0, temp_s0->unk4, temp_s0->unk8, phi_f2, (u8) (s32) temp_s0->unk10, temp_s0->unk14);
}

void DmChar03_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar03 *this = (DmChar03 *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    this->unk18C = 0;
    this->unk18E = 0;
    this->actor.targetArrowOffset = 3000.0f;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
    temp_a1 = &this->unk144;
    sp30 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_06020550, NULL, NULL, NULL, 0);
    func_80AAB4A0(sp30, &D_80AABB80, 0);
    Actor_SetScale(&this->actor, 0.01f);
    this->actionFunc = func_80AAB700;
}

void DmChar03_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar03 *this = (DmChar03 *) thisx;

}

void func_80AAB5F8(DmChar03 *this, GlobalContext *globalCtx) {
    s32 temp_v0;

    temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x1BD);
    if (temp_v0 >= 0) {
        this->unk18F = (s8) temp_v0;
        this->actionFunc = func_80AAB644;
    }
}

void func_80AAB644(DmChar03 *this, GlobalContext *globalCtx) {
    u32 temp_v0;
    void *temp_v1;

    this = this;
    if (func_800EE29C(globalCtx, 0x88U) != 0) {
        this = this;
        temp_v0 = func_800EE200(globalCtx, 0x88U);
        temp_v1 = globalCtx + (temp_v0 * 4);
        if (globalCtx->csCtx.npcActions[temp_v0]->unk0 == 4) {
            this->unk18E = 1;
            this->unk190 = (f32) temp_v1->unk1F4C->unkC;
            this->unk194 = (f32) temp_v1->unk1F4C->unk10;
            this->unk198 = (f32) temp_v1->unk1F4C->unk14;
        }
    }
}

void func_80AAB700(DmChar03 *this, GlobalContext *globalCtx) {

}

void func_80AAB710(Actor *arg0, GlobalContext *arg1) {
    u8 sp27;
    u32 sp20;
    s32 temp_t6;
    u16 temp_v1;
    u32 temp_v0;
    void *temp_a0;
    u8 phi_a2;

    sp27 = 1;
    phi_a2 = 1U;
    if (func_800EE29C(arg1, 0x88U) != 0) {
        sp27 = 1;
        temp_v0 = func_800EE200(arg1, 0x88U);
        temp_t6 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_a0 = (arg1 + temp_t6)->unk1F4C;
        if (arg1->csCtx.frames == temp_a0->unk2) {
            temp_v1 = temp_a0->unk0;
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                    if (temp_v1 != 3) {
                        if (temp_v1 != 4) {
                            phi_a2 = 0U;
                        } else {
                            Item_Give(arg1, 0x32U);
                            arg0->unk188 = func_80AAB5F8;
                            phi_a2 = 0U;
                        }
                    } else {
                        arg0->unk18E = 0;
                        sp27 = 0;
                        Actor_MarkForDeath(arg0);
                        phi_a2 = sp27;
                    }
                } else {
                    arg0->unk18C = 0;
                }
            } else {
                phi_a2 = 0U;
            }
            if (phi_a2 != 0) {
                func_80AAB4A0((SkelAnime *) (arg0 + 0x144), (arg0->unk18C * 0x18) + &D_80AABB80, 0);
            }
        }
        func_800EDF24(arg0, arg1, sp20);
    }
}

void func_80AAB838(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *temp_s0;

    temp_s0 = arg0 + 0x144;
    if (func_801378B8(temp_s0, 5.0f) != 0) {
        Audio_PlayActorSound2(arg0, 0x185FU);
        return;
    }
    if ((func_801378B8(temp_s0, 10.0f) != 0) || (func_801378B8(temp_s0, 18.0f) != 0) || (func_801378B8(temp_s0, 30.0f) != 0) || (func_801378B8(temp_s0, 38.0f) != 0)) {
        Audio_PlayActorSound2(arg0, 0x1860U);
    }
}

void DmChar03_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar03 *this = (DmChar03 *) thisx;
    if ((func_800EE29C(globalCtx, 0x88U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x88U)]->unk0 == 2)) {
        SkelAnime_FrameUpdateMatrix(&this->unk144);
    }
    this->actionFunc(this, globalCtx);
    func_80AAB710(&this->actor, globalCtx);
    func_80AAB838(&this->actor, globalCtx);
}

s32 func_80AAB974(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80AAB990(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80AAB9A8(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void DmChar03_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar03 *this = (DmChar03 *) thisx;
    if (this->unk18E == 0) {
        if ((func_800EE29C(globalCtx, 0x88U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x88U)]->unk0 != 1)) {
            func_8012C28C(globalCtx->state.gfxCtx);
            func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80AAB974, func_80AAB990, func_80AAB9A8, &this->actor);
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    func_80AABA84(globalCtx, this);
}

void func_80AABA84(GlobalContext *arg0, DmChar03 *arg1) {
    if (arg1->unk18F == arg1->actor.objBankIndex) {
        SysMatrix_InsertTranslation(arg1->unk190, arg1->unk194, arg1->unk198, 0);
        SysMatrix_InsertRotation(0, (s16) (arg0->gameplayFrames * 0x3E8), 0, 1);
        Matrix_Scale(0.2f, 0.2f, 0.2f, 1);
        GetItem_Draw(arg0, 0x5B);
    }
    if (Object_IsLoaded(&arg0->objectCtx, (s32) arg1->unk18F) != 0) {
        arg1->actor.objBankIndex = (s8) arg1->unk18F;
    }
}

