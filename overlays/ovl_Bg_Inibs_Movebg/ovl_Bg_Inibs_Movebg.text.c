typedef struct BgInibsMovebg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ Gfx *unk_15C;                       /* inferred */
    /* 0x160 */ Gfx *unk_160;                       /* inferred */
    /* 0x164 */ void *unk_164;                      /* inferred */
} BgInibsMovebg;                                    /* size = 0x168 */

struct _mips2c_stack_BgInibsMovebg_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_BgInibsMovebg_Draw {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgInibsMovebg_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static ? D_80B96560;                                /* unable to generate initializer */
static ? D_80B96568;                                /* unable to generate initializer */
static ? D_80B96570;                                /* unable to generate initializer */
static InitChainEntry D_80B96578;                   /* unable to generate initializer */

void BgInibsMovebg_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;
    Actor_ProcessInitChain((Actor *) this, &D_80B96578);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    this->unk_15C = *(&D_80B96560 + (((u16) this->actor.params & 0xF) * 4));
    this->unk_160 = *(&D_80B96568 + (((u16) this->actor.params & 0xF) * 4));
    this->unk_164 = *(&D_80B96570 + (((u16) this->actor.params & 0xF) * 4));
}

void BgInibsMovebg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk_144);
}

void BgInibsMovebg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    void *temp_a2;
    BgInibsMovebg *this = (BgInibsMovebg *) thisx;

    temp_a2 = this->unk_164;
    if (temp_a2 != 0) {
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(temp_a2));
    }
    temp_a1 = this->unk_15C;
    if (temp_a1 != 0) {
        func_800BDFC0(globalCtx, temp_a1);
    }
    temp_a1_2 = this->unk_160;
    if (temp_a1_2 != 0) {
        func_800BE03C(globalCtx, temp_a1_2);
    }
}
