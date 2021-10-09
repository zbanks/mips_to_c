extern Gfx D_06000520;
extern void D_06001788;



void DmStatue_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;
    Actor_SetScale(&this->actor, 10.0f);
}

void DmStatue_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;

}

void DmStatue_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;

}

void DmStatue_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06001788));
    func_800BE03C(globalCtx, &D_06000520);
}

