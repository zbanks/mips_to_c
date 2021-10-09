struct _mips2c_stack_MainHeap_AnalyzeArena {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MainHeap_Check {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MainHeap_Cleanup {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MainHeap_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_MainHeap_IsInitialized {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_zelda_calloc {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ u32 sp1C;                            /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_zelda_free {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_zelda_malloc {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_zelda_mallocR {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_zelda_realloc {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void MainHeap_Check();                              /* static */
void MainHeap_Cleanup();                            /* static */
void MainHeap_IsInitialized();                      /* static */
Arena mainHeap;

void *zelda_malloc(u32 size) {
    return __osMalloc(&mainHeap, size);
}

void *zelda_mallocR(u32 size) {
    return __osMallocR(&mainHeap, size);
}

void *zelda_realloc(void *oldPtr, u32 newSize) {
    return __osRealloc(&mainHeap, oldPtr, newSize);
}

void zelda_free(void *param_1) {
    __osFree(&mainHeap, param_1);
}

void *zelda_calloc(u32 num, u32 size) {
    void *sp24;
    u32 sp1C;
    u32 temp_lo;
    void *temp_v0;
    void *phi_a0;

    temp_lo = num * size;
    sp1C = temp_lo;
    temp_v0 = __osMalloc(&mainHeap, temp_lo);
    phi_a0 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v0;
        bzero(temp_v0, (s32) temp_lo);
        phi_a0 = sp24;
    }
    return phi_a0;
}

void MainHeap_AnalyzeArena(u32 *maxFreeBlock, u32 *bytesFree, u32 *bytesAllocated) {
    __osAnalyzeArena(&mainHeap, maxFreeBlock, bytesFree, bytesAllocated);
}

void MainHeap_Check(void) {
    __osCheckArena(&mainHeap);
}

void MainHeap_Init(u32 base, u32 size) {
    __osMallocInit(&mainHeap, (void *) base, size);
}

void MainHeap_Cleanup(void) {
    __osMallocCleanup(&mainHeap);
}

void MainHeap_IsInitialized(void) {
    __osMallocIsInitalized(&mainHeap);
}
