struct _mips2c_stack_DmStatue_Destroy {};           /* size 0x0 */

struct _mips2c_stack_DmStatue_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmStatue_Init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmStatue_Update {};            /* size 0x0 */

extern Gfx D_06000520;
extern void D_06001788;

void DmStatue_Init(DmStatue *this, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;
    Actor_SetScale((Actor *) this, 10.0f);
}

void DmStatue_Destroy(DmStatue *this, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;

}

void DmStatue_Update(DmStatue *this, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;

}

void DmStatue_Draw(DmStatue *this, GlobalContext *globalCtx) {
    DmStatue *this = (DmStatue *) thisx;
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06001788));
    func_800BE03C(globalCtx, &D_06000520);
}
