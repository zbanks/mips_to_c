void *func_80174AB4(void *arg0, s32 arg1);          /* static */
void func_80174B20(ListAlloc *arg0, void *arg1);    /* static */



void func_80174AA0(ListAlloc *alloc) {
    alloc->prev = NULL;
    alloc->next = NULL;
}

void *func_80174AB4(void *arg0, s32 arg1) {
    void *temp_v0;
    void *temp_v1;

    arg0 = arg0;
    temp_v0 = SystemArena_Malloc(arg1 + 8);
    if (temp_v0 == 0) {
        return NULL;
    }
    temp_v1 = arg0->unk4;
    if (temp_v1 != 0) {
        temp_v1->unk4 = temp_v0;
    }
    temp_v0->unk0 = temp_v1;
    temp_v0->unk4 = 0;
    arg0->unk4 = temp_v0;
    if (arg0->unk0 == 0) {
        arg0->unk0 = temp_v0;
    }
    return temp_v0 + 8;
}

void func_80174B20(ListAlloc *arg0, void *arg1) {
    s32 *temp_v0;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = arg1 - 8;
    if (arg1->unk-8 != 0) {
        temp_a0->unk0->unk4 = (s32) temp_a0->unk4;
    }
    temp_a0_2 = arg1 - 8;
    temp_v0 = temp_a0_2->unk4;
    if (temp_v0 != 0) {
        *temp_v0 = temp_a0_2->unk0;
    }
    if (temp_a0_2 == arg0->prev) {
        arg0->prev = temp_a0_2->unk4;
    }
    if (temp_a0_2 == arg0->next) {
        arg0->next = temp_a0_2->unk0;
    }
    SystemArena_Free(temp_a0_2);
}

void func_80174BA0(ListAlloc *alloc) {
    if (alloc->prev != 0) {
        do {
            func_80174B20(alloc, alloc->prev + 8);
        } while (alloc->prev != 0);
    }
}

