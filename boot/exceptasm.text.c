CRASHED

Warning: missing "jr $ra" in last block (.L800893D4).

/*
Failed to decompile function __osExceptionPreamble:

Unable to determine jump table for jr instruction at exceptasm.text.s line 15.

There must be a read of a variable in the same block as
the instruction, which has a name starting with "jtbl"/"jpt_".
*/
/*
Failed to decompile function __osException:

Cannot find branch target __osDispatchThread
*/
/*
Failed to decompile function send_mesg:

Unable to determine jump table for jr instruction at exceptasm.text.s line 435.

There must be a read of a variable in the same block as
the instruction, which has a name starting with "jtbl"/"jpt_".
*/
/*
Failed to decompile function handle_CpU:

Unable to parse branch: label L80089014 does not exist in function handle_CpU
*/
/*
Failed to decompile function __osEnqueueAndYield:

Cannot find branch target __osDispatchThread
*/
/*
Failed to decompile function __osCleanupThread:

Function __osCleanupThread contains no instructions. Maybe it is rodata?
*/
void __osNop();                                     /* static */
extern s32 D_A430000C;
s32 __OSGlobalIntMask = 0x3FFF01;
OSThread *__osRunQueue = (OSThread *) &__osThreadTail;
OSThread *__osRunningThread = NULL;
OSThread *__osThreadTail = NULL;
u16 D_800991A0[64] = {
    0x555,
    0x556,
    0x559,
    0x55A,
    0x565,
    0x566,
    0x569,
    0x56A,
    0x595,
    0x596,
    0x599,
    0x59A,
    0x5A5,
    0x5A6,
    0x5A9,
    0x5AA,
    0x655,
    0x656,
    0x659,
    0x65A,
    0x665,
    0x666,
    0x669,
    0x66A,
    0x695,
    0x696,
    0x699,
    0x69A,
    0x6A5,
    0x6A6,
    0x6A9,
    0x6AA,
    0x955,
    0x956,
    0x959,
    0x95A,
    0x965,
    0x966,
    0x969,
    0x96A,
    0x995,
    0x996,
    0x999,
    0x99A,
    0x9A5,
    0x9A6,
    0x9A9,
    0x9AA,
    0xA55,
    0xA56,
    0xA59,
    0xA5A,
    0xA65,
    0xA66,
    0xA69,
    0xA6A,
    0xA95,
    0xA96,
    0xA99,
    0xA9A,
    0xAA5,
    0xAA6,
    0xAA9,
    0xAAA,
}; /* const */













void __osEnqueueThread(OSThread **param_1, OSThread *param_2) {
    OSThread *temp_t8;
    OSThread *temp_t8_2;
    s32 temp_t7;
    OSThread *phi_t8;
    OSThread **phi_t9;

    temp_t8 = *param_1;
    temp_t7 = param_2->priority;
    phi_t8 = temp_t8;
    phi_t9 = param_1;
    if (temp_t8->priority >= temp_t7) {
        do {
            temp_t8_2 = phi_t8->next;
            phi_t8 = temp_t8_2;
            phi_t9 = &phi_t8->next;
        } while (temp_t8_2->priority >= temp_t7);
    }
    param_2->next = *phi_t9;
    *phi_t9 = param_2;
    param_2->queue = param_1;
}

OSThread *__osPopThread(OSThread **param_1) {
    OSThread *temp_v0;

    temp_v0 = *param_1;
    *param_1 = temp_v0->next;
    return temp_v0;
}

void __osNop(void) {

}

void __osDispatchThread(void) {
    OSThread *temp_v0;

    temp_v0 = __osPopThread(&__osRunQueue);
    __osRunningThread = temp_v0;
    temp_v0->state = 4;
    MIPS2C_ERROR(unknown instruction: mtc0 $k1, Status);
    MIPS2C_ERROR(unknown instruction: mtlo $k1);
    MIPS2C_ERROR(unknown instruction: mthi $k1);
    MIPS2C_ERROR(unknown instruction: mtc0 $k1, EPC);
    if (temp_v0->fp != 0) {

    }
    D_A430000C = (s32) D_800991A0[temp_v0->context.rcp & ((u32) __OSGlobalIntMask >> 0x10)];
    MIPS2C_ERROR(unknown instruction: eret );
}



