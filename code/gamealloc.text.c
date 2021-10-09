

GameAlloc *func_80173BF0(GameAlloc *heap) {
    GameAllocNode *temp_v0;
    GameAllocNode *temp_v0_2;
    GameAllocNode *phi_v0;
    GameAlloc *phi_v0_2;

    temp_v0 = heap->base.next;
    phi_v0 = temp_v0;
    phi_v0_2 = (GameAlloc *) temp_v0;
    if (heap != temp_v0) {
        do {
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
            phi_v0_2 = (GameAlloc *) temp_v0_2;
        } while (heap != temp_v0_2);
    }
    return phi_v0_2;
}

void *Gamealloc_Alloc(GameAlloc *heap, u32 size) {
    void *temp_v0;

    heap = heap;
    temp_v0 = SystemArena_Malloc(size + 0x10);
    if (temp_v0 != 0) {
        temp_v0->unk8 = size;
        temp_v0->unk4 = (GameAllocNode *) heap->head;
        heap->head->next = (GameAllocNode *) temp_v0;
        heap->head = (GameAllocNode *) temp_v0;
        temp_v0->unk0 = heap;
        heap->base.prev = heap->head;
        return temp_v0 + 0x10;
    }
    return NULL;
}

void Gamealloc_Free(GameAlloc *heap, void *ptr) {
    if (ptr != 0) {
        *ptr->unk-C = ptr->unk-10;
        ptr->unk-10->unk4 = (void **) ptr->unk-C;
        heap->head = heap->base.prev;
        SystemArena_Free(ptr - 0x10);
    }
}

void Gamealloc_FreeAll(GameAlloc *heap) {
    GameAllocNode *temp_s0;
    void *temp_s0_2;
    void *phi_s0;

    temp_s0 = heap->base.next;
    phi_s0 = (void *) temp_s0;
    if (heap != temp_s0) {
        do {
            temp_s0_2 = *phi_s0;
            SystemArena_Free(phi_s0);
            phi_s0 = temp_s0_2;
        } while (heap != temp_s0_2);
    }
    heap->head = &heap->base;
    heap->base.next = &heap->base;
    heap->base.prev = &heap->base;
}

void Gamealloc_Init(GameAlloc *iParm1) {
    iParm1->head = &iParm1->base;
    iParm1->base.next = &iParm1->base;
    iParm1->base.prev = &iParm1->base;
}

