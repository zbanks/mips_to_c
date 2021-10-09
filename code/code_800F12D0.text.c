struct _mips2c_stack_func_800F12D0 {};              /* size 0x0 */

struct _mips2c_stack_func_800F1304 {};              /* size 0x0 */

struct _mips2c_stack_func_800F1374 {};              /* size 0x0 */

struct _mips2c_stack_func_800F13E8 {};              /* size 0x0 */

void func_800F12D0(GlobalContext *globalCtx) {
    s32 temp_v0;
    s32 phi_v0;

    phi_v0 = 0;
    do {
        temp_v0 = (phi_v0 + 1) & 0xFF;
        globalCtx->envFlags[phi_v0] = 0;
        phi_v0 = temp_v0;
    } while (temp_v0 < 0x14);
}

void func_800F1304(GlobalContext *globalCtx, s16 param_2) {
    s32 temp_t6;

    temp_t6 = (s32) param_2 / 0x10;
    globalCtx->envFlags[(s16) temp_t6] |= 1 << (s16) ((s32) param_2 % 0x10);
}

void func_800F1374(s32 param_1, s16 param_2) {
    void *temp_v0;

    temp_v0 = param_1 + ((s16) ((s32) param_2 / 0x10) * 2);
    temp_v0->unk18B20 = (u16) (temp_v0->unk18B20 & ((1 << (s16) ((s32) param_2 % 0x10)) ^ 0xFFFF));
}

s16 func_800F13E8(GlobalContext *globalCtx, s16 param_2) {
    return globalCtx->envFlags[(s16) ((s32) param_2 / 0x10)] & (s16) (1 << (s16) ((s32) param_2 % 0x10));
}
