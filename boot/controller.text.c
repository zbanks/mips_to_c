struct _mips2c_stack___osContGetInitData {
    /* 0x00 */ char pad_0[0xC];
    /* 0x0C */ ? spC;                               /* inferred */
    /* 0x0C */ char pad_C[0x2];
    /* 0x0E */ u8 spE;                              /* inferred */
    /* 0x0F */ char pad_F[0x1];
    /* 0x10 */ u8 sp10;                             /* inferred */
    /* 0x11 */ u8 sp11;                             /* inferred */
    /* 0x12 */ u8 sp12;                             /* inferred */
    /* 0x13 */ char pad_13[0x5];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osPackRequestData {
    /* 0x00 */ char pad_0[0xC];
    /* 0x0C */ s8 spC;                              /* inferred */
    /* 0x0D */ s8 spD;                              /* inferred */
    /* 0x0E */ s8 spE;                              /* inferred */
    /* 0x0F */ s8 spF;                              /* inferred */
    /* 0x10 */ s8 sp10;                             /* inferred */
    /* 0x11 */ s8 sp11;                             /* inferred */
    /* 0x12 */ s8 sp12;                             /* inferred */
    /* 0x13 */ s8 sp13;                             /* inferred */
    /* 0x14 */ char pad_14[0x4];
};                                                  /* size = 0x18 */

struct _mips2c_stack_osContInit {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ ? sp28;                              /* inferred */
    /* 0x28 */ char pad_28[0x18];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x20];
    /* 0x60 */ s32 sp60;                            /* inferred */
    /* 0x64 */ u32 sp64;                            /* inferred */
    /* 0x68 */ s32 sp68;                            /* inferred */
    /* 0x6C */ void *sp6C;                          /* inferred */
};                                                  /* size = 0x70 */

static ? D_8009CF0C;
static OSMesgQueue D_8009CF38;
static void *D_8009CF50;
s32 D_80097E40 = 0;
u8 __osContLastCmd;
OSPifRam __osContPifRam;
u8 __osMaxControllers;

s32 osContInit(OSMesgQueue *mq, u8 *bitpattern, OSContStatus *data) {
    void *sp6C;
    s32 sp68;
    u32 sp64;
    s32 sp60;
    ? sp40;
    ? sp28;
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v1;
    u64 temp_ret;

    if (D_80097E40 != 0) {
        return 0;
    }
    D_80097E40 = 1;
    temp_ret = osGetTime();
    temp_v0_2 = temp_ret;
    temp_v1 = (u32) temp_ret;
    sp60 = temp_v0_2;
    sp64 = temp_v1;
    if ((temp_v0_2 == 0) && (temp_v1 < 0x165A0BCU)) {
        osCreateMesgQueue((OSMesgQueue *) &sp28, &sp6C, 1);
        osSetTimer((OSTimer *) &sp40, (0 - sp60) - (sp64 > 0x165A0BCU), 0x165A0BCU - sp64, NULL, NULL, &sp28, &sp6C);
        osRecvMesg((OSMesgQueue *) &sp28, &sp6C, 1);
    }
    __osMaxControllers = 4;
    __osPackRequestData(0U);
    __osSiRawStartDma(1, (void *) &__osContPifRam);
    osRecvMesg(mq, &sp6C, 1);
    temp_v0 = __osSiRawStartDma(0, (void *) &__osContPifRam);
    sp68 = temp_v0;
    osRecvMesg(mq, &sp6C, 1);
    __osContGetInitData(bitpattern, data);
    __osContLastCmd = 0;
    __osSiCreateAccessQueue();
    osCreateMesgQueue(&D_8009CF38, &D_8009CF50, 1);
    return temp_v0;
}

void __osContGetInitData(u8 *pattern, OSContStatus *data) {
    ? spC;
    s32 temp_a2;
    s32 temp_t2;
    OSPifRam *phi_v1;
    OSContStatus *phi_a1;
    s32 phi_a2;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;

    phi_v1 = &__osContPifRam;
    phi_a1 = data;
    phi_a2 = 0;
    phi_v0 = 0U;
    phi_v0_3 = 0U;
    if ((s32) __osMaxControllers > 0) {
        do {
            spC.unk_0 = (s32) (unaligned s32) phi_v1->unk_0;
            spC.unk_4 = (s32) (unaligned s32) phi_v1->unk_4;
            temp_t2 = (s32) (spE & 0xC0) >> 4;
            phi_a1->errno = (u8) temp_t2;
            phi_v0_2 = phi_v0_3;
            if ((temp_t2 & 0xFF) == 0) {
                phi_a1->type = (sp11 << 8) | sp10;
                phi_a1->status = sp12;
                phi_v0_2 = (phi_v0_3 | (1 << phi_a2)) & 0xFF;
            }
            temp_a2 = phi_a2 + 1;
            phi_v1 += 8;
            phi_a1 += 4;
            phi_a2 = temp_a2;
            phi_v0 = phi_v0_2;
            phi_v0_3 = phi_v0_2;
        } while (temp_a2 < (s32) __osMaxControllers);
    }
    *pattern = phi_v0;
}

void __osPackRequestData(u8 cmd) {
    s8 sp13;
    s8 sp12;
    s8 sp11;
    s8 sp10;
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    OSPifRam *temp_v1_2;
    s32 temp_v0;
    u32 temp_v1;
    OSPifRam *phi_v1;
    OSPifRam *phi_v1_2;
    s32 phi_v0;
    OSPifRam *phi_v1_3;

    phi_v1 = &__osContPifRam;
    do {
        temp_v1 = phi_v1 + 4;
        temp_v1->unk_-4 = 0;
        phi_v1 = (OSPifRam *) temp_v1;
    } while (temp_v1 < (u32) &D_8009CF0C);
    __osContPifRam.pifstatus = 1;
    spC = 0xFF;
    spD = 1;
    spE = 3;
    spF = cmd & 0xFF;
    sp10 = 0xFF;
    sp11 = 0xFF;
    sp12 = 0xFF;
    sp13 = 0xFF;
    phi_v1_2 = &__osContPifRam;
    phi_v0 = 0;
    phi_v1_3 = &__osContPifRam;
    if ((s32) __osMaxControllers > 0) {
        do {
            temp_v0 = phi_v0 + 1;
            temp_v1_2 = phi_v1_2 + 8;
            temp_v1_2->unk_-8 = (unaligned s32) spC.unk_0;
            temp_v1_2->unk_-4 = (unaligned s32) spC.unk_4;
            phi_v1_2 = temp_v1_2;
            phi_v0 = temp_v0;
            phi_v1_3 = temp_v1_2;
        } while (temp_v0 < (s32) __osMaxControllers);
    }
    *phi_v1_3 = 0xFE;
}
