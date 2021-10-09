typedef struct BgInibsMovebg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ Gfx *unk15C;                        /* inferred */
    /* 0x160 */ Gfx *unk160;                        /* inferred */
    /* 0x164 */ void *unk164;                       /* inferred */
} BgInibsMovebg;                                    /* size = 0x168 */

struct _mips2c_stack_BgInibsMovebg_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgInibsMovebg_Draw {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgInibsMovebg_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static ? D_80B96560;                                /* unable to generate initializer */
static ? D_80B96568;                                /* unable to generate initializer */
static ? D_80B96570;                                /* unable to generate initializer */
static InitChainEntry D_80B96578;                   /* unable to generate initializer */

void BgInibsMovebg_Init(BgInibsMovebg *this, GlobalContext *globalCtx) {
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80B96578);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    this->unk15C = *(&D_80B96560 + (((u16) this->actor.params & 0xF) * 4));
    this->unk160 = *(&D_80B96568 + (((u16) this->actor.params & 0xF) * 4));
    this->unk164 = *(&D_80B96570 + (((u16) this->actor.params & 0xF) * 4));
}

void BgInibsMovebg_Destroy(BgInibsMovebg *this, GlobalContext *globalCtx) {
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void BgInibsMovebg_Draw(BgInibsMovebg *this, GlobalContext *globalCtx) {
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    void *temp_a2;
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;

    temp_a2 = this->unk164;
    if (temp_a2 != 0) {
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(temp_a2));
    }
    temp_a1 = this->unk15C;
    if (temp_a1 != 0) {
        func_800BDFC0(globalCtx, temp_a1);
    }
    temp_a1_2 = this->unk160;
    if (temp_a1_2 != 0) {
        func_800BE03C(globalCtx, temp_a1_2);
    }
}
