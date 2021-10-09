struct _mips2c_stack_DmNb_Destroy {};               /* size 0x0 */

struct _mips2c_stack_DmNb_Draw {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_DmNb_Init {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DmNb_UnkActorDraw {};          /* size 0x0 */

struct _mips2c_stack_DmNb_Update {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C1DED0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C1DF18 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ u32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x4];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad2C[0x14];
};                                                  /* size = 0x40 */

void DmNb_UnkActorDraw(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
s32 func_80C1DED0(Actor *arg0, s32 arg1, u32, Actor *); /* static */
void func_80C1DF18(Actor *arg0, GlobalContext *arg1); /* static */
extern FlexSkeletonHeader D_06008C40;
static ActorAnimationEntryS D_80C1E200 = {(AnimationHeader *)0x6000990, 1.0f, 0, 0xFFFF, 0, 0};
static ? D_80C1E210;                                /* unable to generate initializer */

s32 func_80C1DED0(Actor *arg0, s32 arg1) {
    s32 phi_v1;

    phi_v1 = 0;
    if (arg1 != arg0->unk1F0) {
        arg0->unk1F0 = arg1;
        phi_v1 = func_8013BC6C(arg0 + 0x144, &D_80C1E200, arg1);
    }
    return phi_v1;
}

void func_80C1DF18(Actor *arg0, GlobalContext *arg1) {
    ? sp2C;
    u32 sp24;
    Actor *temp_a0;
    Actor *temp_a3;
    u16 temp_v1;
    u32 temp_a2;
    u32 temp_v0;
    Actor *phi_a3;
    u32 phi_a2;

    sp2C.unk0 = (s32) D_80C1E210.unk0;
    sp2C.unk4 = (s32) D_80C1E210.unk4;
    sp2C.unk8 = (s32) D_80C1E210.unk8;
    sp2C.unkC = (s32) D_80C1E210.unkC;
    sp2C.unk10 = (s32) D_80C1E210.unk10;
    if (arg1->csCtx.state != 0) {
        if (arg0->unk1F8 == 0) {
            arg0->unk1EC = 0xFFU;
            arg0->unk1F8 = 1;
            arg0->unk1F4 = (s32) arg0->unk1F0;
        }
        arg0 = arg0;
        if (func_800EE29C(arg1, 0x232U) != 0) {
            arg0 = arg0;
            temp_v0 = func_800EE200(arg1, 0x232U);
            temp_a3 = arg0;
            temp_a2 = temp_v0;
            temp_v1 = arg1->csCtx.npcActions[temp_v0]->unk0;
            temp_a0 = temp_a3;
            phi_a3 = temp_a3;
            phi_a2 = temp_a2;
            if ((temp_v1 & 0xFF) != temp_a3->unk1EC) {
                temp_a3->unk1EC = (u8) temp_v1;
                arg0 = temp_a3;
                sp24 = temp_v0;
                func_80C1DED0(temp_a0, (sp + (temp_v1 * 4))->unk2C, temp_a2, temp_a3);
                phi_a3 = arg0;
                phi_a2 = sp24;
            }
            func_800EDF24(phi_a3, arg1, phi_a2);
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return;
    }
    if (arg0->unk1F8 != 0) {
        arg0->unk1F8 = 0;
        func_80C1DED0(arg0, arg0->unk1F4, (u32) arg0);
    }
}

void DmNb_Init(DmNb *this, GlobalContext *globalCtx) {
    DmNb *this = (DmNb *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, NULL, 0.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06008C40, NULL, this->limbDrawTable, this->transitionDrawTable, 8);
    this->unk1F0 = -1;
    func_80C1DED0((Actor *) this, 0);
    this->actor.flags &= -2;
    Actor_SetScale((Actor *) this, 0.01f);
    this->actionFunc = (void (*)(DmNb *, GlobalContext *)) func_80C1DF18;
}

void DmNb_Destroy(DmNb *this, GlobalContext *globalCtx) {
    DmNb *this = (DmNb *) thisx;

}

void DmNb_Update(DmNb *this, GlobalContext *globalCtx) {
    DmNb *this = (DmNb *) thisx;
    this->actionFunc(this, globalCtx);
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, 12.0f, 0.0f, 4U);
}

void DmNb_UnkActorDraw(GlobalContext *arg0, s32 arg1, Actor *arg2) {

}

void DmNb_Draw(DmNb *this, GlobalContext *globalCtx) {
    DmNb *this = (DmNb *) thisx;
    func_8012C5B0(globalCtx->state.gfxCtx);
    func_801343C0(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, NULL, NULL, DmNb_UnkActorDraw, (Actor *) this);
}
