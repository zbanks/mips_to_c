struct _mips2c_stack_StackCheck_Check {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_StackCheck_CheckAll {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_StackCheck_Cleanup {};         /* size 0x0 */

struct _mips2c_stack_StackCheck_GetState {};        /* size 0x0 */

struct _mips2c_stack_StackCheck_Init {};            /* size 0x0 */

StackEntry *sStackInfoListEnd = NULL;
StackEntry *sStackInfoListStart = NULL;

void StackCheck_Init(StackEntry *entry, void *stackTop, void *stackBottom, u32 initValue, s32 minSpace, s8 *name) {
    StackEntry *temp_v0;
    StackEntry *temp_v0_2;
    StackEntry *temp_v0_3;
    u32 temp_v0_4;
    void *temp_v0_5;
    StackEntry *phi_v0;
    u32 phi_v0_2;

    if (entry == 0) {
        sStackInfoListStart = NULL;
        return;
    }
    entry->head = (u32) stackTop;
    entry->tail = (u32) stackBottom;
    entry->initValue = initValue;
    entry->minSpace = minSpace;
    entry->name = name;
    temp_v0 = sStackInfoListStart;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_3:
        if (phi_v0 != entry) {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 == 0) {
                goto block_5;
            }
            goto loop_3;
        }
    } else {
block_5:
        entry->next = NULL;
        entry->prev = sStackInfoListEnd;
        temp_v0_3 = sStackInfoListEnd;
        if (temp_v0_3 != 0) {
            temp_v0_3->next = entry;
        }
        sStackInfoListEnd = entry;
        if (sStackInfoListStart == 0) {
            sStackInfoListStart = entry;
        }
        if (entry->minSpace != -1) {
            temp_v0_4 = entry->head;
            phi_v0_2 = temp_v0_4;
            if (temp_v0_4 < (u32) entry->tail) {
                do {
                    temp_v0_5 = phi_v0_2 + 4;
                    temp_v0_5->unk_-4 = (u32) entry->initValue;
                    phi_v0_2 = (u32) temp_v0_5;
                } while ((u32) temp_v0_5 < (u32) entry->tail);
            }
        }
    }
}

void StackCheck_Cleanup(StackEntry *entry) {
    StackEntry *temp_v1;

    temp_v1 = entry->prev;
    if (temp_v1 == 0) {
        if (entry == sStackInfoListStart) {
            sStackInfoListStart = entry->next;
        }
    } else {
        temp_v1->next = entry->next;
    }
    if ((entry->next == 0) && (entry == sStackInfoListEnd)) {
        sStackInfoListEnd = entry->prev;
    }
}

s32 StackCheck_GetState(StackEntry *entry) {
    s32 *temp_v0;
    s32 temp_v0_2;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_v1;
    s32 *phi_v0;
    u32 phi_v0_2;

    temp_v1 = entry->head;
    temp_a1 = entry->tail;
    phi_v0 = (s32 *) temp_v1;
    phi_v0_2 = temp_v1;
    if (temp_v1 < temp_a1) {
loop_2:
        phi_v0_2 = (u32) phi_v0;
        if (entry->initValue == *phi_v0) {
            temp_v0 = phi_v0 + 4;
            phi_v0 = temp_v0;
            phi_v0_2 = (u32) temp_v0;
            if ((u32) temp_v0 < temp_a1) {
                goto loop_2;
            }
        }
    }
    temp_a1_2 = phi_v0_2 - temp_v1;
    if (temp_a1_2 == 0) {
        return 2;
    }
    temp_v0_2 = entry->minSpace;
    if ((temp_a1_2 < (u32) temp_v0_2) && (temp_v0_2 != -1)) {
        return 1;
    }
    return 0;
}

u32 StackCheck_CheckAll(void) {
    StackEntry *temp_s0;
    StackEntry *temp_s0_2;
    StackEntry *phi_s0;
    u32 phi_s1;
    u32 phi_s1_2;

    temp_s0 = sStackInfoListStart;
    phi_s0 = temp_s0;
    phi_s1 = 0U;
    phi_s1_2 = 0U;
    if (temp_s0 != 0) {
        do {
            if (StackCheck_GetState(phi_s0) != 0) {
                phi_s1_2 = 1U;
            }
            temp_s0_2 = phi_s0->next;
            phi_s0 = temp_s0_2;
            phi_s1 = phi_s1_2;
        } while (temp_s0_2 != 0);
    }
    return phi_s1;
}

u32 StackCheck_Check(StackEntry *entry) {
    if (entry == 0) {
        return StackCheck_CheckAll();
    }
    return StackCheck_GetState(entry);
}
