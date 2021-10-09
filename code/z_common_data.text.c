struct _mips2c_stack_func_800E9360 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

SaveContext gSaveContext;

u8 func_800E9360(void) {
    bzero((void *) &gSaveContext, 0x48E8);
    gSaveContext.playerForm = 0;
    gSaveContext.seqIndex = 0xFF;
    gSaveContext.nightSeqIndex = 0xFF;
    gSaveContext.unk_3F46 = 0;
    gSaveContext.nextCutsceneIndex = 0xFFEF;
    gSaveContext.cutsceneTrigger = 0;
    gSaveContext.unk_3F4D = 0;
    gSaveContext.nextDayTime = 0xFFFF;
    gSaveContext.environmentTime = 0;
    gSaveContext.dogIsLost = 1;
    gSaveContext.nextTransition = 0xFF;
    gSaveContext.unk_3F26 = 0x32;
    gSaveContext.language = 1;
    gSaveContext.audioSetting = 0;
    gSaveContext.zTargetSetting = 0;
    return 0xFFU;
}
