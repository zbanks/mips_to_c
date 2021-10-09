OSThread *__osActiveQueue = (OSThread *) &__osThreadTail;
OSThread *__osThreadTail = NULL;



void osCreateThread(OSThread *t, s32 id, void *entry, void *arg, void *sp, s32 p) {
    s32 sp20;
    u32 temp_s0;

    t->id = id;
    t->priority = p;
    t->next = NULL;
    t->queue = NULL;
    t->context.pc = (u32) entry;
    t->unk38 = (s32) ((s32) arg >> 0x1F);
    t->unk3C = arg;
    t->unkF4 = (void *) (sp - 0x10);
    t->unkF0 = (s32) (((s32) sp >> 0x1F) - ((u32) sp < 0x10U));
    t->unk100 = (s32) ((s32) __osCleanupThread >> 0x1F);
    t->unk104 = __osCleanupThread;
    sp20 = 0x3FFF01;
    t->context.sr = 0xFF03;
    t->context.rcp = (u32) (sp20 & 0x3F0000) >> 0x10;
    t->context.fpcsr = 0x1000800;
    t->fp = 0;
    t->state = 1;
    t->flags = 0;
    temp_s0 = __osDisableInt();
    t->tlnext = __osActiveQueue;
    __osActiveQueue = t;
    __osRestoreInt(temp_s0);
}

