struct _mips2c_stack_func_80086620 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

s32 func_80086620(OSMesgQueue *param_1, PadMgr *param_2, OSContStatus *param_3) {
    s32 temp_v0;

    param_2->controllers = 0xFF;
    temp_v0 = osContInit(param_1, (u8 *) param_2, param_3);
    if (temp_v0 != 0) {
        return temp_v0;
    }
    if (param_2->controllers == 0xFF) {
        param_2 = param_2;
        if (osContStartQuery(param_1) != 0) {
            return 1;
        }
        param_2 = param_2;
        osRecvMesg(param_1, NULL, 1);
        osContGetQuery(param_3);
        param_2->controllers = 0;
        if ((param_3->errno == 0) && (param_3->type == 5)) {
            param_2->controllers = 1;
        }
        if ((param_3->unk7 == 0) && (param_3->unk4 == 5)) {
            param_2->controllers |= 2;
        }
        if ((param_3->unkB == 0) && (param_3->unk8 == 5)) {
            param_2->controllers |= 4;
        }
        if ((param_3->unkF == 0) && (param_3->unkC == 5)) {
            param_2->controllers |= 8;
        }
        goto block_17;
    }
block_17:
    return 0;
}
