struct _mips2c_stack_static_context_init {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

GameInfo *gGameInfo;

void static_context_init(void) {
    GameInfo *temp_v0;
    s32 temp_v0_2;
    s32 phi_v0;

    temp_v0 = SystemArena_Malloc(0x15D4U);
    gGameInfo = temp_v0;
    temp_v0->unk0 = 0;
    gGameInfo->unk1 = 0;
    gGameInfo->unk2 = 0;
    gGameInfo->unk4 = 0;
    gGameInfo->unk3 = 0;
    phi_v0 = 0;
    do {
        (gGameInfo + phi_v0)->unk14 = 0;
        (gGameInfo + phi_v0)->unk16 = 0;
        (gGameInfo + phi_v0)->unk18 = 0;
        temp_v0_2 = phi_v0 + 8;
        (gGameInfo + phi_v0)->unk1A = 0;
        phi_v0 = temp_v0_2;
    } while (temp_v0_2 != 0x15C0);
}
