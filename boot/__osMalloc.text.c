struct _mips2c_stack_ArenaImpl_GetLastBlock {};     /* size 0x0 */

struct _mips2c_stack_ArenaImpl_Lock {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArenaImpl_LockInit {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ArenaImpl_Unlock {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osAnalyzeArena {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osCheckArena {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ u32 sp18;                            /* inferred */
    /* 0x1C */ char pad1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack___osFree {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osMalloc {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
    /* 0x20 */ char pad20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack___osMallocAddBlock {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
    /* 0x20 */ char pad20[0x10];
};                                                  /* size = 0x30 */

struct _mips2c_stack___osMallocCleanup {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osMallocInit {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack___osMallocIsInitalized {};     /* size 0x0 */

struct _mips2c_stack___osMallocR {
    /* 0x00 */ char pad0[0x18];
    /* 0x18 */ void *sp18;                          /* inferred */
    /* 0x1C */ char pad1C[0xC];
};                                                  /* size = 0x28 */

struct _mips2c_stack___osRealloc {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ void *sp20;                          /* inferred */
    /* 0x24 */ char pad24[0xC];                     /* maybe part of sp20[4]? */
    /* 0x30 */ void *sp30;                          /* inferred */
    /* 0x34 */ char pad34[0x4];
};                                                  /* size = 0x38 */

static void *sArenaLockMsg;

void ArenaImpl_LockInit(Arena *heap) {
    osCreateMesgQueue(&heap->lock, &sArenaLockMsg, 1);
}

void ArenaImpl_Lock(Arena *heap) {
    osSendMesg(&heap->lock, NULL, 1);
}

void ArenaImpl_Unlock(Arena *heap) {
    osRecvMesg(&heap->lock, NULL, 1);
}

ArenaNode *ArenaImpl_GetLastBlock(Arena *param_1) {
    ArenaNode *temp_v0;
    ArenaNode *temp_v0_2;
    ArenaNode *temp_v1;
    ArenaNode *phi_v0;
    ArenaNode *phi_v1;

    temp_v1 = param_1->head;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
        temp_v0 = temp_v1->next;
        phi_v0 = temp_v0;
        if (temp_v0 != 0) {
            do {
                temp_v0_2 = phi_v0->next;
                phi_v0 = temp_v0_2;
                phi_v1 = phi_v0;
            } while (temp_v0_2 != 0);
        }
    }
    return phi_v1;
}

void __osMallocInit(Arena *heap, void *heapBase, u32 heapSize) {
    bzero((void *) heap, 0x24);
    ArenaImpl_LockInit(heap);
    __osMallocAddBlock(heap, heapBase, (s32) heapSize);
    heap->isInit = 1;
}

void __osMallocAddBlock(Arena *heap, void *start, s32 size) {
    s32 sp1C;
    ArenaNode *temp_v0_2;
    s32 temp_v0;
    s32 temp_v1;

    if (start != 0) {
        temp_v1 = (s32) (start + 0xF) & ~0xF;
        temp_v0 = (size - (temp_v1 - start)) & ~0xF;
        if (temp_v0 >= 0x11) {
            temp_v1->unk8 = 0;
            temp_v1->unkC = NULL;
            temp_v1->unk4 = (s32) (temp_v0 - 0x10);
            temp_v1->unk2 = 1;
            temp_v1->unk0 = 0x7373;
            sp1C = temp_v1;
            ArenaImpl_Lock(heap);
            temp_v0_2 = ArenaImpl_GetLastBlock(heap);
            if (temp_v0_2 == 0) {
                heap->head = (ArenaNode *) temp_v1;
                heap->start = start;
            } else {
                temp_v1->unkC = temp_v0_2;
                temp_v0_2->next = (ArenaNode *) temp_v1;
            }
            ArenaImpl_Unlock(heap);
        }
    }
}

void __osMallocCleanup(Arena *heap) {
    bzero((void *) heap, 0x24);
}

u8 __osMallocIsInitalized(Arena *heap) {
    return heap->isInit;
}

void *__osMalloc(Arena *heap, u32 size) {
    void *sp1C;
    ArenaNode *temp_a2;
    ArenaNode *temp_v0;
    ArenaNode *temp_v0_2;
    ArenaNode *temp_v1_2;
    u32 temp_a0;
    u32 temp_v1;
    ArenaNode *phi_v0;

    sp1C = NULL;
    size = (size + 0xF) & ~0xF;
    ArenaImpl_Lock(heap);
    temp_v0 = heap->head;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if ((phi_v0->isFree != 0) && (temp_v1 = phi_v0->size, ((temp_v1 < size) == 0))) {
            temp_a0 = ((size + 0xF) & ~0xF) + 0x10;
            if (temp_a0 < temp_v1) {
                temp_v1_2 = phi_v0 + temp_a0;
                temp_v1_2->prev = phi_v0;
                temp_v1_2->next = phi_v0->next;
                temp_v1_2->size = phi_v0->size - temp_a0;
                temp_v1_2->isFree = 1;
                temp_v1_2->magic = 0x7373;
                phi_v0->next = temp_v1_2;
                phi_v0->size = size;
                temp_a2 = temp_v1_2->next;
                if (temp_a2 != 0) {
                    temp_a2->prev = temp_v1_2;
                }
            }
            phi_v0->isFree = 0;
            sp1C = phi_v0 + 0x10;
        } else {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_1;
            }
        }
    }
    ArenaImpl_Unlock(heap);
    return sp1C;
}

void *__osMallocR(Arena *heap, u32 size) {
    void *sp18;
    ArenaNode *temp_a0;
    ArenaNode *temp_a3;
    ArenaNode *temp_v0;
    ArenaNode *temp_v1;
    u32 temp_a2;
    u32 temp_v0_2;
    ArenaNode *phi_v1;
    ArenaNode *phi_v1_2;

    sp18 = NULL;
    size = (size + 0xF) & ~0xF;
    ArenaImpl_Lock(heap);
    temp_v0 = ArenaImpl_GetLastBlock(heap);
    phi_v1 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        phi_v1_2 = phi_v1;
        if ((phi_v1->isFree != 0) && (temp_v0_2 = phi_v1->size, ((temp_v0_2 < size) == 0))) {
            temp_a2 = ((size + 0xF) & ~0xF) + 0x10;
            if (temp_a2 < temp_v0_2) {
                temp_a0 = (phi_v1 + temp_v0_2) - size;
                temp_a0->prev = phi_v1;
                temp_a0->size = size;
                temp_a0->magic = 0x7373;
                temp_a0->next = phi_v1->next;
                phi_v1->next = temp_a0;
                phi_v1->size -= temp_a2;
                temp_a3 = temp_a0->next;
                phi_v1_2 = temp_a0;
                if (temp_a3 != 0) {
                    temp_a3->prev = temp_a0;
                }
            }
            phi_v1_2->isFree = 0;
            sp18 = phi_v1_2 + 0x10;
        } else {
            temp_v1 = phi_v1->prev;
            phi_v1 = temp_v1;
            if (temp_v1 != 0) {
                goto loop_1;
            }
        }
    }
    ArenaImpl_Unlock(heap);
    return sp18;
}

void __osFree(Arena *heap, void *ptr) {
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;
    void *phi_a0;

    ArenaImpl_Lock(heap);
    temp_v0 = ptr - 0x10;
    if ((ptr != 0) && (temp_v0->unk0 == 0x7373) && (temp_v0->unk2 == 0)) {
        temp_a0 = temp_v0->unk8;
        temp_a1 = temp_v0->unkC;
        temp_v0->unk2 = 1;
        phi_a0 = temp_a0;
        if ((temp_a0 == (temp_v0 + temp_v0->unk4 + 0x10)) && (temp_a0->unk2 != 0)) {
            temp_v1 = temp_a0->unk8;
            if (temp_v1 != 0) {
                temp_v1->unkC = temp_v0;
            }
            temp_v0->unk8 = temp_v1;
            temp_v0->unk4 = (s32) (temp_v0->unk4 + temp_a0->unk4 + 0x10);
            phi_a0 = temp_v1;
        }
        if ((temp_a1 != 0) && (temp_a1->unk2 != 0) && (temp_v0 == (temp_a1 + temp_a1->unk4 + 0x10))) {
            if (phi_a0 != 0) {
                phi_a0->unkC = temp_a1;
            }
            temp_a1->unk8 = phi_a0;
            temp_a1->unk4 = (s32) (temp_a1->unk4 + temp_v0->unk4 + 0x10);
        }
    }
    ArenaImpl_Unlock(heap);
}

void *__osRealloc(Arena *heap, void *oldPtr, u32 newSize) {
    void *sp30;
    void *sp20;
    u32 temp_a3;
    u32 temp_t0;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_v0_3;
    void *temp_v1;
    void *phi_s0;

    ArenaImpl_Lock(heap);
    phi_s0 = oldPtr;
    if (oldPtr == 0) {
        phi_s0 = __osMalloc(heap, newSize);
    } else if (newSize == 0) {
        __osFree(heap, oldPtr);
        phi_s0 = NULL;
    } else {
        temp_v1 = oldPtr - 0x10;
        temp_v0 = temp_v1->unk4;
        temp_a3 = (newSize + 0xF) & ~0xF;
        if ((temp_a3 != temp_v0) && (temp_v0 < temp_a3)) {
            temp_a1 = temp_v1->unk8;
            temp_t0 = temp_a3 - temp_v0;
            if ((temp_a1 == (temp_v1 + temp_v0 + 0x10)) && (temp_a1->unk2 != 0) && (temp_v0_2 = temp_a1->unk4, ((temp_v0_2 < temp_t0) == 0))) {
                temp_a0 = temp_a1->unk8;
                temp_a1->unk4 = (u32) (temp_v0_2 - temp_t0);
                if (temp_a0 != 0) {
                    temp_a0->unkC = (void *) (temp_a1 + temp_t0);
                }
                temp_a0_2 = temp_a1 + temp_t0;
                temp_v1->unk8 = temp_a0_2;
                temp_v1->unk4 = temp_a3;
                __osMemcpy(temp_a0_2, temp_a1, 0x10U);
            } else {
                sp20 = temp_v1;
                temp_v0_3 = __osMalloc(heap, temp_a3);
                sp30 = temp_v0_3;
                if (temp_v0_3 != 0) {
                    bcopy(temp_v0_3, oldPtr, temp_v1->unk4);
                    __osFree(heap, oldPtr);
                }
                phi_s0 = sp30;
            }
        }
    }
    ArenaImpl_Unlock(heap);
    return phi_s0;
}

void __osAnalyzeArena(Arena *heap, u32 *maxFreeBlock, u32 *bytesFree, u32 *bytesAllocated) {
    ArenaNode *temp_v0;
    ArenaNode *temp_v0_2;
    u32 temp_v1;
    ArenaNode *phi_v0;

    ArenaImpl_Lock(heap);
    *maxFreeBlock = 0;
    *bytesFree = 0;
    *bytesAllocated = 0;
    temp_v0 = heap->head;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if (phi_v0->isFree != 0) {
                *bytesFree += phi_v0->size;
                temp_v1 = phi_v0->size;
                if ((u32) *maxFreeBlock < temp_v1) {
                    *maxFreeBlock = temp_v1;
                }
            } else {
                *bytesAllocated += phi_v0->size;
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    ArenaImpl_Unlock(heap);
}

u32 __osCheckArena(Arena *heap) {
    u32 sp18;
    ArenaNode *temp_v0;
    ArenaNode *temp_v0_2;
    ArenaNode *phi_v0;

    sp18 = 0;
    ArenaImpl_Lock(heap);
    temp_v0 = heap->head;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
loop_1:
        if (phi_v0->magic != 0x7373) {
            sp18 = 1;
        } else {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            if (temp_v0_2 != 0) {
                goto loop_1;
            }
        }
    }
    ArenaImpl_Unlock(heap);
    return sp18;
}
