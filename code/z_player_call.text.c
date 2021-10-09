? (*func_801638D8(? *))(s32, s32);                  /* extern */
? func_801639A0();                                  /* extern */
void func_80160A90();                               /* static */
void func_80160AF8(s32 arg0, s32 arg1);             /* static */
void func_80160B40(s32 arg0, s32 arg1);             /* static */
void func_80160B80(s32 arg0, s32 arg1);             /* static */
void func_80160BC0(s32 arg0, s32 arg1);             /* static */
extern ? func_80841AC4;
extern ? func_808460B8;
extern ? func_80846528;
extern ? func_808470D4;
static ? (*D_801F6B30)(s32, s32);
static ? (*D_801F6B34)(s32, s32);
static ? (*D_801F6B38)(s32, s32);
static ? (*D_801F6B3C)(s32, s32);



void func_80160A90(void) {
    D_801F6B30 = func_801638D8(&func_80841AC4);
    D_801F6B34 = func_801638D8(&func_808470D4);
    D_801F6B38 = func_801638D8(&func_808460B8);
    D_801F6B3C = func_801638D8(&func_80846528);
}

void func_80160AF8(s32 arg0, s32 arg1) {
    func_801639A0();
    func_80160A90();
    D_801F6B30(arg0, arg1);
}

void func_80160B40(s32 arg0, s32 arg1) {
    func_801639A0();
    D_801F6B34(arg0, arg1);
}

void func_80160B80(s32 arg0, s32 arg1) {
    func_801639A0();
    D_801F6B38(arg0, arg1);
}

void func_80160BC0(s32 arg0, s32 arg1) {
    func_801639A0();
    D_801F6B3C(arg0, arg1);
}

