struct _mips2c_stack_Text_GetFaceReaction {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

static ? D_801BC41E;                                /* unable to generate initializer */

u16 Text_GetFaceReaction(GlobalContext *globalCtx, u32 reactionSet) {
    if ((Player_GetMask(globalCtx) > 0) && (Player_GetMask(globalCtx) < 0x14)) {
        return *(&D_801BC41E + ((reactionSet * 0x26) + (Player_GetMask(globalCtx) * 2)));
    }
    return 0U;
}
