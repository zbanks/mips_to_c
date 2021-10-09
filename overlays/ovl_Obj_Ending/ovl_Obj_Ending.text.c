struct _mips2c_stack_ObjEnding_Draw {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjEnding_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjEnding_Update {};           /* size 0x0 */

static InitChainEntry D_80C25CF8;                   /* unable to generate initializer */
static ? sModelInfo;                                /* unable to generate initializer */

void ObjEnding_Init(Actor *thisx, GlobalContext *globalCtx) {
    AnimatedMaterial *temp_a0_2;
    ObjEnding *temp_a0;
    ObjEndingModelInfo *temp_t9;
    ObjEnding *this = (ObjEnding *) thisx;

    temp_a0 = this;
    this = this;
    Actor_ProcessInitChain((Actor *) temp_a0, &D_80C25CF8);
    temp_t9 = (this->actor.params * 0xC) + &sModelInfo;
    this->modelInfo = temp_t9;
    temp_a0_2 = temp_t9->animMat;
    if (temp_a0_2 != 0) {
        this = this;
        this->animMat = Lib_SegmentedToVirtual((void *) temp_a0_2);
    }
}

void ObjEnding_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjEnding *this = (ObjEnding *) thisx;

}

void ObjEnding_Draw(Actor *thisx, GlobalContext *globalCtx) {
    AnimatedMaterial *temp_a1;
    AnimatedMaterial *temp_a3;
    Gfx *temp_a1_2;
    Gfx *temp_a1_3;
    ObjEndingModelInfo *temp_v0;
    ObjEndingModelInfo *phi_v0;
    ObjEnding *this = (ObjEnding *) thisx;

    temp_a3 = this->animMat;
    temp_a1 = temp_a3;
    if (temp_a3 != 0) {
        this = this;
        AnimatedMat_Draw(globalCtx, temp_a1);
    }
    temp_v0 = this->modelInfo;
    temp_a1_2 = temp_v0->dLists[0];
    phi_v0 = temp_v0;
    if (temp_a1_2 != 0) {
        this = this;
        func_800BDFC0(globalCtx, temp_a1_2);
        phi_v0 = this->modelInfo;
    }
    temp_a1_3 = phi_v0->dLists[1];
    if (temp_a1_3 != 0) {
        func_800BE03C(globalCtx, temp_a1_3);
    }
}
