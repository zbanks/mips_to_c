static void tmp_task;



OSTask *_VirtualToPhysicalTask(OSTask *intp) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_6;
    void *temp_a0_7;

    bcopy((void *) intp, &tmp_task, 0x40U);
    temp_a0 = *(&tmp_task + 0x10);
    if (temp_a0 != 0) {
        *(&tmp_task + 0x10) = osVirtualToPhysical(temp_a0);
    }
    temp_a0_2 = *(&tmp_task + 0x18);
    if (temp_a0_2 != 0) {
        *(&tmp_task + 0x18) = osVirtualToPhysical(temp_a0_2);
    }
    temp_a0_3 = *(&tmp_task + 0x20);
    if (temp_a0_3 != 0) {
        *(&tmp_task + 0x20) = osVirtualToPhysical(temp_a0_3);
    }
    temp_a0_4 = *(&tmp_task + 0x28);
    if (temp_a0_4 != 0) {
        *(&tmp_task + 0x28) = osVirtualToPhysical(temp_a0_4);
    }
    temp_a0_5 = *(&tmp_task + 0x2C);
    if (temp_a0_5 != 0) {
        *(&tmp_task + 0x2C) = osVirtualToPhysical(temp_a0_5);
    }
    temp_a0_6 = *(&tmp_task + 0x30);
    if (temp_a0_6 != 0) {
        *(&tmp_task + 0x30) = osVirtualToPhysical(temp_a0_6);
    }
    temp_a0_7 = *(&tmp_task + 0x38);
    if (temp_a0_7 != 0) {
        *(&tmp_task + 0x38) = osVirtualToPhysical(temp_a0_7);
    }
    return (OSTask *) &tmp_task;
}

void osSpTaskLoad(OSTask *intp) {
    OSTask *temp_v0;

    temp_v0 = _VirtualToPhysicalTask(intp);
    if ((temp_v0->t.flags & 1) != 0) {
        temp_v0->t.ucode_data = temp_v0->t.yield_data_ptr;
        temp_v0->t.ucode_data_size = temp_v0->t.yield_data_size;
        intp->t.flags &= -2;
        if ((temp_v0->t.flags & 4) != 0) {
            temp_v0->t.ucode = *((s32) (intp->t.yield_data_ptr + 0xBFC) | 0xA0000000);
        }
    }
    osWritebackDCache((void *) temp_v0, 0x40);
    __osSpSetStatus(0x2B00U);
    if (__osSpSetPc((void *)0x4001000) == -1) {
        do {

        } while (__osSpSetPc((void *)0x4001000) == -1);
    }
    if (__osSpRawStartDma(1, (void *)0x4000FC0, (void *) temp_v0, 0x40U) == -1) {
        do {

        } while (__osSpRawStartDma(1, (void *)0x4000FC0, (void *) temp_v0, 0x40U) == -1);
    }
    if (__osSpDeviceBusy() != 0) {
        do {

        } while (__osSpDeviceBusy() != 0);
    }
    if (__osSpRawStartDma(1, (void *)0x4001000, (void *) temp_v0->t.ucode_boot, temp_v0->t.ucode_boot_size) == -1) {
        do {

        } while (__osSpRawStartDma(1, (void *)0x4001000, (void *) temp_v0->t.ucode_boot, temp_v0->t.ucode_boot_size) == -1);
    }
}

void osSpTaskStartGo(OSTask *tp) {
    if (__osSpDeviceBusy() != 0) {
        do {

        } while (__osSpDeviceBusy() != 0);
    }
    __osSpSetStatus(0x125U);
}

