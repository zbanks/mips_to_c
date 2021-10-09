

u32 osSpTaskYielded(OSTask *task) {
    u32 temp_t9;
    u32 temp_v0;
    u32 phi_v1;

    temp_v0 = __osSpGetStatus();
    if ((temp_v0 & 0x100) != 0) {
        phi_v1 = 1U;
    } else {
        phi_v1 = 0U;
    }
    if ((temp_v0 & 0x80) != 0) {
        temp_t9 = task->t.flags | phi_v1;
        task->t.flags = temp_t9;
        task->t.flags = temp_t9 & ~2;
    }
    return phi_v1;
}

