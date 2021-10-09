void func_80AAAE30(SkelAnime *arg0, ? *arg1, s32 arg2, u32); /* static */
void func_80AAAECC(Actor *arg0, void *arg1);        /* static */
void func_80AAAF2C(DmChar02 *arg1, GlobalContext *); /* static */
s32 func_80AAB23C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80AAB258(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *actor); /* static */
void func_80AAB270(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_0600AD68;
static ? D_80AAB3B0;                                /* unable to generate initializer */

typedef struct DmChar02 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ char pad188[0x108];
    /* 0x0290 */ void (*actionFunc)(DmChar02 *, GlobalContext *);
    /* 0x0294 */ char pad294[0x4C];                 /* maybe part of actionFunc[20]? */
    /* 0x02E0 */ s16 unk2E0;                        /* inferred */
    /* 0x02E2 */ char pad2E2[0xE];                  /* maybe part of unk2E0[8]? */
    /* 0x02F0 */ s32 unk2F0;                        /* inferred */
} DmChar02;                                         /* size 0x2F4 */

void func_80AAAE30(SkelAnime *arg0, ? *arg1, s32 arg2) {
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

void func_80AAAECC(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk1F34;
    if (temp_v0 != 0x5F) {
        if ((temp_v0 != 0x65) && (temp_v0 != 0x69) && (temp_v0 != 0x70)) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x292BU);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x292AU);
}

void func_80AAAF2C(DmChar02 *arg1) {
    if ((arg1->unk1F2C != 0) && (arg1->unkA4 == 0x19) && (arg1->unk1F36 == 1)) {
        func_80AAAECC();
    }
}

void DmChar02_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar02 *this = (DmChar02 *) thisx;
    SkelAnime *sp30;
    SkelAnime *temp_a1;

    if (gSaveContext.inventory.items[0] == 0xFF) {
        this->unk2E0 = 0;
        this->actor.targetArrowOffset = 3000.0f;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
        temp_a1 = &this->unk144;
        sp30 = temp_a1;
        SkelAnime_InitSV(globalCtx, temp_a1, &D_0600AD68, NULL, NULL, NULL, 0);
        func_80AAAE30(sp30, &D_80AAB3B0, 0);
        Actor_SetScale(&this->actor, 0.01f);
        this->actionFunc = func_80AAB04C;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void DmChar02_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar02 *this = (DmChar02 *) thisx;

}

void func_80AAB04C(DmChar02 *this, GlobalContext *globalCtx) {
    u8 sp2F;
    u32 sp28;
    SkelAnime *sp20;
    CsCmdActorAction *temp_a0;
    SkelAnime *temp_a0_2;
    s16 temp_v0_2;
    u16 temp_v1;
    u32 temp_ret;
    u32 temp_v0;

    sp2F = 1;
    if (func_800EE29C(globalCtx, 0x83U) != 0) {
        temp_ret = func_800EE200(globalCtx, 0x83U);
        temp_v0 = temp_ret;
        temp_a0 = globalCtx->csCtx.npcActions[temp_v0];
        if (globalCtx->csCtx.frames == temp_a0->startFrame) {
            temp_v1 = temp_a0->unk0;
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                    if (temp_v1 != 4) {
                        this->unk2E0 = 0;
                        sp2F = 0;
                    } else {
                        this->unk2E0 = 3;
                    }
                } else {
                    this->unk2E0 = 1;
                }
            } else {
                this->unk2E0 = 0;
            }
            if (sp2F != 0) {
                sp28 = temp_v0;
                func_80AAAE30(&this->unk144, (this->unk2E0 * 0x18) + &D_80AAB3B0, 0, temp_v0);
            }
        }
        func_800EDF24(&this->actor, globalCtx, temp_ret);
    }
    temp_a0_2 = &this->unk144;
    sp20 = temp_a0_2;
    if (func_801378B8(temp_a0_2, this->unk144.animFrameCount) != 0) {
        temp_v0_2 = this->unk2E0;
        if (temp_v0_2 == 1) {
            this->unk2E0 = temp_v0_2 + 1;
            func_80AAAE30(temp_a0_2, (this->unk2E0 * 0x18) + &D_80AAB3B0, 0);
        }
    }
}

void DmChar02_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar02 *this = (DmChar02 *) thisx;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    this->unk2F0 = this->unk2F0;
    this->actionFunc(this, globalCtx);
    if (Actor_HasParent(&this->actor, globalCtx) == 0) {
        func_800B8A1C(&this->actor, globalCtx, 0x4C, 30.0f, 80.0f);
    } else {
        gSaveContext.playerForm = 4;
        Actor_MarkForDeath(&this->actor);
    }
    func_80AAAF2C(this, globalCtx);
}

s32 func_80AAB23C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80AAB258(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3) {

}

void func_80AAB270(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void DmChar02_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar02 *this = (DmChar02 *) thisx;
    s32 sp30;
    u16 temp_v1;
    s32 phi_a2;

    phi_a2 = 0;
    if ((globalCtx->csCtx.state == 0) && (this->actor.world.pos.y < 100.0f)) {
        goto block_7;
    }
    sp30 = 0;
    if ((func_800EE29C(globalCtx, 0x6BU) != 0) && ((sp30 = 0, temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x6BU)]->unk0, (temp_v1 == 0x17)) || (temp_v1 == 0x1C) || (temp_v1 == 0x26))) {
block_7:
        phi_a2 = 1;
    }
    if (phi_a2 != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80AAB23C, func_80AAB258, func_80AAB270, &this->actor);
    }
}

