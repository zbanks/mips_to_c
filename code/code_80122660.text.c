void func_80122660(void *arg0);                     /* static */
? func_80122670(void *arg0, void *arg1);            /* static */



void func_80122660(void *arg0) {
    arg0->unk4 = 0;
    arg0->unk0 = 0;
}

? func_80122670(void *arg0, void *arg1) {
    s32 temp_t2;
    u16 temp_v0;

    if ((arg0->unk0 == 0) || ((temp_v0 = arg1->unk0, (~(temp_v0 | ~0x2000) == 0)) && ((~(arg1->unkC | ~0x10) == 0) || ((~(temp_v0 | ~0x10) == 0) && (temp_t2 = arg0->unk4 + 1, arg0->unk4 = temp_t2, ((temp_t2 < 9) == 0)))))) {
        arg0->unk4 = 0;
        return 1;
    }
    return 0;
}

