void Slowly_Main(void *arg0);                       /* static */
void Slowly_ThreadEntry();                          /* static */



void Slowly_Main(void *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1B0;
    arg0->unk1B1 = (u8) (arg0->unk1B1 | 2);
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {

            } else {
                arg0->unk1B4(arg0->unk1B8, arg0->unk1BC);
            }
        } else {
            arg0->unk1B4(arg0->unk1B8);
        }
    } else {
        arg0->unk1B4();
    }
    arg0->unk1B1 = (u8) (arg0->unk1B1 | 1);
}

void Slowly_ThreadEntry(void) {
    Slowly_Main();
}

void Slowly_Start(SlowlyTask *slowly, void *stack, void (*callback)(), void *callbackArg0, void *callbackArg1) {
    bzero((void *) slowly, 0x1C0);
    slowly->callbackArgCount = 2;
    slowly->status = 0;
    slowly->callback0 = callback;
    slowly->callbackArg0 = callbackArg0;
    slowly->callbackArg1 = callbackArg1;
    osCreateThread(&slowly->thread, 2, (void *) Slowly_ThreadEntry, (void *) slowly, stack, 5);
    osStartThread(&slowly->thread);
}

void Slowly_Stop(SlowlyTask *slowly) {
    osDestroyThread(&slowly->thread);
}

