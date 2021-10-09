OSThread *__osThreadTail = NULL;



void osCreateMesgQueue(OSMesgQueue *mq, void **msq, s32 count) {
    mq->mtQueue = (OSThread *) &__osThreadTail;
    mq->fullQueue = (OSThread *) &__osThreadTail;
    mq->validCount = 0;
    mq->first = 0;
    mq->msgCount = count;
    mq->msg = msq;
}

