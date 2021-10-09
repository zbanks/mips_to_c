struct _mips2c_stack_BgMarketStep_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s32 sp18;                            /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_BgMarketStep_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

static InitChainEntry D_80AF0110[4];                /* unable to generate initializer */
static ? D_80AF0120;                                /* unable to generate initializer */
static ? D_80AF0128;                                /* unable to generate initializer */

void BgMarketStep_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgMarketStep *this = (BgMarketStep *) thisx;
    Actor_ProcessInitChain((Actor *) this, D_80AF0110);
}

void BgMarketStep_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp18;
    s32 temp_v1;
    BgMarketStep *this = (BgMarketStep *) thisx;

    temp_v1 = (this->actor.params & 1) * 4;
    sp18 = temp_v1;
    func_800BDFC0(globalCtx, *(&D_80AF0120 + temp_v1));
    func_800BDFC0(globalCtx, *(&D_80AF0128 + temp_v1));
}
