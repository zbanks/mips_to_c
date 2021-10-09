static InitChainEntry D_80AF0110;                   /* unable to generate initializer */
static ? D_80AF0120;                                /* unable to generate initializer */
static ? D_80AF0128;                                /* unable to generate initializer */



void BgMarketStep_Init(Actor *thisx, GlobalContext *globalCtx) {
    BgMarketStep *this = (BgMarketStep *) thisx;
    Actor_ProcessInitChain(&this->actor, &D_80AF0110);
}

void BgMarketStep_Draw(Actor *thisx, GlobalContext *globalCtx) {
    BgMarketStep *this = (BgMarketStep *) thisx;
    s32 sp18;
    s32 temp_v1;

    temp_v1 = (this->actor.params & 1) * 4;
    sp18 = temp_v1;
    func_800BDFC0(globalCtx, *(&D_80AF0120 + temp_v1));
    func_800BDFC0(globalCtx, *(&D_80AF0128 + temp_v1));
}

