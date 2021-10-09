struct _mips2c_stack_THA_AllocEnd {};               /* size 0x0 */

struct _mips2c_stack_THA_AllocEndAlign {};          /* size 0x0 */

struct _mips2c_stack_THA_AllocEndAlign16 {};        /* size 0x0 */

struct _mips2c_stack_THA_AllocStart {};             /* size 0x0 */

struct _mips2c_stack_THA_AllocStart1 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_THA_Ct {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_THA_Dt {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_THA_GetHead {};                /* size 0x0 */

struct _mips2c_stack_THA_GetSize {};                /* size 0x0 */

struct _mips2c_stack_THA_GetTail {};                /* size 0x0 */

struct _mips2c_stack_THA_Init {};                   /* size 0x0 */

struct _mips2c_stack_THA_IsCrash {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_THA_SetHead {};                /* size 0x0 */

void *THA_GetHead(TwoHeadArena *tha) {
    return tha->head;
}

void THA_SetHead(TwoHeadArena *tha, void *start) {
    tha->head = start;
}

void *THA_GetTail(TwoHeadArena *tha) {
    return tha->tail;
}

void *THA_AllocStart(TwoHeadArena *tha, u32 size) {
    void *temp_v0;

    temp_v0 = tha->head;
    tha->head = temp_v0 + size;
    return temp_v0;
}

void *THA_AllocStart1(TwoHeadArena *tha) {
    return THA_AllocStart(tha, 1U);
}

void *THA_AllocEnd(TwoHeadArena *tha, u32 size) {
    s32 temp_v0;
    s32 phi_v1;

    if (size >= 0x10U) {
        phi_v1 = -0x10;
    } else if ((size & 1) != 0) {
        phi_v1 = -1;
    } else if ((size & 2) != 0) {
        phi_v1 = -2;
    } else if ((size & 4) != 0) {
        phi_v1 = -4;
    } else {
        phi_v1 = -1;
        if ((size & 8) != 0) {
            phi_v1 = -8;
        }
    }
    temp_v0 = (((s32) tha->tail & phi_v1) - size) & phi_v1;
    tha->tail = (void *) temp_v0;
    return (void *) temp_v0;
}

void *THA_AllocEndAlign16(TwoHeadArena *tha, u32 size) {
    s32 temp_v0;

    temp_v0 = (((s32) tha->tail & ~0xF) - size) & ~0xF;
    tha->tail = (void *) temp_v0;
    return (void *) temp_v0;
}

void *THA_AllocEndAlign(TwoHeadArena *tha, u32 size, u32 mask) {
    s32 temp_v0;

    temp_v0 = (((s32) tha->tail & mask) - size) & mask;
    tha->tail = (void *) temp_v0;
    return (void *) temp_v0;
}

s32 THA_GetSize(TwoHeadArena *tha) {
    return tha->tail - tha->head;
}

u32 THA_IsCrash(TwoHeadArena *tha) {
    return THA_GetSize(tha) < 0;
}

void THA_Init(TwoHeadArena *tha) {
    void *temp_v0;

    temp_v0 = tha->bufp;
    tha->head = temp_v0;
    tha->tail = temp_v0 + tha->size;
}

void THA_Ct(TwoHeadArena *tha, void *ptr, u32 size) {
    bzero((void *) tha, 0x10);
    tha->bufp = ptr;
    tha->size = size;
    THA_Init(tha);
}

void THA_Dt(TwoHeadArena *tha) {
    bzero((void *) tha, 0x10);
}
