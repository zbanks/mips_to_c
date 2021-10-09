static Arena gSystemArena;



void *SystemArena_Malloc(u32 size) {
    return __osMalloc(&gSystemArena, size);
}

void *SystemArena_MallocR(u32 size) {
    return __osMallocR(&gSystemArena, size);
}

void *SystemArena_Realloc(void *oldPtr, u32 newSize) {
    return __osRealloc(&gSystemArena, oldPtr, newSize);
}

void SystemArena_Free(void *ptr) {
    __osFree(&gSystemArena, ptr);
}

void *SystemArena_Calloc(u32 elements, u32 size) {
    void *sp24;
    u32 sp1C;
    u32 temp_lo;
    void *temp_v0;
    void *phi_a0;

    temp_lo = elements * size;
    sp1C = temp_lo;
    temp_v0 = __osMalloc(&gSystemArena, temp_lo);
    phi_a0 = temp_v0;
    if (temp_v0 != 0) {
        sp24 = temp_v0;
        bzero(temp_v0, (s32) temp_lo);
        phi_a0 = sp24;
    }
    return phi_a0;
}

void SystemArena_AnalyzeArena(u32 *maxFreeBlock, u32 *bytesFree, u32 *bytesAllocated) {
    __osAnalyzeArena(&gSystemArena, maxFreeBlock, bytesFree, bytesAllocated);
}

u32 SystemArena_CheckArena(void) {
    return __osCheckArena(&gSystemArena);
}

void SystemArena_InitArena(void *start, u32 size) {
    __osMallocInit(&gSystemArena, start, size);
}

void SystemArena_Cleanup(void) {
    __osMallocCleanup(&gSystemArena);
}

u8 SystemArena_IsInitialized(void) {
    return __osMallocIsInitalized(&gSystemArena);
}

