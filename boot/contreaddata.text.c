struct _mips2c_stack___osPackReadData {
    /* 0x00 */ char pad0[0xC];
    /* 0x0C */ s8 spC;                              /* inferred */
    /* 0x0D */ s8 spD;                              /* inferred */
    /* 0x0E */ s8 spE;                              /* inferred */
    /* 0x0F */ s8 spF;                              /* inferred */
    /* 0x10 */ s16 sp10;                            /* inferred */
    /* 0x12 */ s8 sp12;                             /* inferred */
    /* 0x13 */ s8 sp13;                             /* inferred */
    /* 0x14 */ char pad14[0x4];
};                                                  /* size = 0x18 */

struct _mips2c_stack_osContGetReadData {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ ? sp4;                               /* inferred */
    /* 0x04 */ char pad4[0x2];
    /* 0x06 */ u8 sp6;                              /* inferred */
    /* 0x07 */ char pad7[0x1];
    /* 0x08 */ u16 sp8;                             /* inferred */
    /* 0x0A */ s8 spA;                              /* inferred */
    /* 0x0B */ s8 spB;                              /* inferred */
    /* 0x0C */ char padC[0x4];
};                                                  /* size = 0x10 */

struct _mips2c_stack_osContStartReadData {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

static ? D_8009CF0C;
u8 __osContLastCmd;
OSPifRam __osContPifRam;
u8 __osMaxControllers;

s32 osContStartReadData(OSMesgQueue *mq) {
    s32 sp1C;
    s32 temp_v0;

    __osSiGetAccess();
    if (__osContLastCmd != 1) {
        __osPackReadData();
        __osSiRawStartDma(1, (void *) &__osContPifRam);
        osRecvMesg(mq, NULL, 1);
    }
    temp_v0 = __osSiRawStartDma(0, (void *) &__osContPifRam);
    sp1C = temp_v0;
    __osContLastCmd = 1;
    __osSiRelAccess();
    return temp_v0;
}

void osContGetReadData(OSContPad *data) {
    ? sp4;
    s32 temp_t1;
    s32 temp_v1;
    OSPifRam *phi_v0;
    OSContPad *phi_a0;
    s32 phi_v1;

    phi_v0 = &__osContPifRam;
    phi_a0 = data;
    phi_v1 = 0;
    if ((s32) __osMaxControllers > 0) {
        do {
            sp4.unk0 = (s32) (unaligned s32) phi_v0->unk0;
            sp4.unk4 = (s32) (unaligned s32) phi_v0->unk4;
            temp_t1 = (s32) (sp6 & 0xC0) >> 4;
            phi_a0->errno = (u8) temp_t1;
            if ((temp_t1 & 0xFF) == 0) {
                phi_a0->button = sp8;
                phi_a0->stick_x = spA;
                phi_a0->stick_y = spB;
            }
            temp_v1 = phi_v1 + 1;
            phi_v0 += 8;
            phi_a0 += 6;
            phi_v1 = temp_v1;
        } while (temp_v1 < (s32) __osMaxControllers);
    }
}

void __osPackReadData(void) {
    s8 sp13;
    s8 sp12;
    s16 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    OSPifRam *temp_v0;
    s32 temp_v1;
    u32 temp_a0;
    OSPifRam *phi_a0;
    OSPifRam *phi_v0;
    s32 phi_v1;
    OSPifRam *phi_v0_2;

    phi_a0 = &__osContPifRam;
    phi_v0 = &__osContPifRam;
    phi_v0_2 = &__osContPifRam;
    do {
        temp_a0 = phi_a0 + 4;
        temp_a0->unk-4 = 0;
        phi_a0 = (OSPifRam *) temp_a0;
    } while (temp_a0 < (u32) &D_8009CF0C);
    __osContPifRam.pifstatus = 1;
    spC = 0xFF;
    spD = 1;
    spE = 4;
    spF = 1;
    sp10 = 0xFFFF;
    sp12 = -1;
    sp13 = -1;
    phi_v1 = 0;
    if ((s32) __osMaxControllers > 0) {
        do {
            temp_v1 = phi_v1 + 1;
            temp_v0 = phi_v0 + 8;
            temp_v0->unk-8 = (unaligned s32) spC.unk0;
            temp_v0->unk-4 = (unaligned s32) spC.unk4;
            phi_v0 = temp_v0;
            phi_v1 = temp_v1;
            phi_v0_2 = temp_v0;
        } while (temp_v1 < (s32) __osMaxControllers);
    }
    *phi_v0_2 = 0xFE;
}
