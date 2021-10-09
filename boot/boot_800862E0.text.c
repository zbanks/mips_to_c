CRASHED

/*
Failed to decompile function func_800864EC:

Label L8008653C_before refers to a delay slot; this is currently not supported.
Please modify the assembly to work around it (e.g. copy the instruction
to all jump sources and move the label, or add a nop to the delay slot).

This label was auto-generated as the target for a branch-likely
instruction (e.g. beql); you can also try to turn that into a non-likely
branch if that's equivalent in this context, i.e., if it's okay to
execute its delay slot unconditionally.
*/
u32 func_8008641C(u32 arg0, s32 arg1, s32 arg2, ? (*arg3)(u32, ?, ?, ?, s32, s32, s32, s32, s32)); /* static */
void func_80086588();                               /* static */
static ? *D_80097500 = {
    NULL,
    NULL,
    NULL,
    NULL,
    (? *)0x7F800000,
    (? *)0xFF800000,
    NULL,
    (? *)0x80000000,
};
static Arena gSystemArena;



void *SystemArena_MallocMin1(u32 size) {
    u32 phi_a1;

    phi_a1 = size;
    if (size == 0) {
        phi_a1 = 1U;
    }
    return __osMalloc(&gSystemArena, phi_a1);
}

void SystemArena_FreeNull(void *pvParm1) {
    if (pvParm1 != 0) {
        __osFree(&gSystemArena, pvParm1);
    }
}

void func_8008633C(u32 param_1, s32 param_2, s32 param_3, void *param_4) {
    u32 temp_s0;
    u32 temp_s1;
    u32 phi_s0;

    temp_s1 = param_1 + (param_2 * param_3);
    phi_s0 = param_1;
    if (param_1 < temp_s1) {
        do {
            ((? (*)(u32)) param_4)(phi_s0);
            temp_s0 = phi_s0 + param_3;
            phi_s0 = temp_s0;
        } while (temp_s0 < temp_s1);
    }
}

void func_800863AC(u32 param_1, s32 param_2, s32 param_3, void *param_4) {
    u32 temp_s0;
    u32 temp_s1;
    u32 phi_s0;

    temp_s1 = param_1 + (param_2 * param_3);
    phi_s0 = param_1;
    if (param_1 < temp_s1) {
        do {
            ((? (*)(u32, ?)) param_4)(phi_s0, 2);
            temp_s0 = phi_s0 + param_3;
            phi_s0 = temp_s0;
        } while (temp_s0 < temp_s1);
    }
}

u32 func_8008641C(u32 arg0, s32 arg1, s32 arg2, ? (*arg3)(u32, ?, ?, ?, s32, s32, s32, s32, s32)) {
    u32 temp_s0;
    u32 temp_s1;
    u32 phi_s4;
    u32 phi_s0;

    phi_s4 = arg0;
    if (arg0 == 0) {
        phi_s4 = SystemArena_MallocMin1(arg1 * arg2);
    }
    if ((phi_s4 != 0) && (arg3 != 0)) {
        temp_s1 = phi_s4 + (arg1 * arg2);
        phi_s0 = phi_s4;
        if (phi_s4 < temp_s1) {
            do {
                arg3(phi_s0, 0, 0, 0, 0, 0, 0, 0, 0);
                temp_s0 = phi_s0 + arg2;
                phi_s0 = temp_s0;
            } while (temp_s0 < temp_s1);
        }
    }
    return phi_s4;
}



void func_80086588(void) {
    ? (*temp_v1)();
    ? *temp_s0;
    ? *temp_v0;
    ? *temp_v0_2;
    ? *phi_s0;
    ? *phi_v0;
    ? *phi_s1;
    ? *phi_s1_2;

    temp_v0 = D_80097500;
    phi_s0 = &D_80097500;
    phi_v0 = temp_v0;
    phi_s1 = NULL;
    phi_s1_2 = NULL;
    if (temp_v0 != 0) {
        do {
            temp_s0 = phi_s0 + phi_v0;
            temp_v1 = temp_s0->unk4;
            phi_s0 = temp_s0;
            if (temp_v1 != 0) {
                temp_v1();
            }
            temp_v0_2 = temp_s0->unk0;
            temp_s0->unk0 = phi_s1;
            phi_v0 = temp_v0_2;
            phi_s1 = temp_s0;
            phi_s1_2 = temp_s0;
        } while (temp_v0_2 != 0);
    }
    D_80097500 = phi_s1_2;
}

void SystemArena_Init(u32 base, u32 size) {
    SystemArena_InitArena((void *) base, size);
    func_80086588();
}

