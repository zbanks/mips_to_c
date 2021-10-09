s32 func_800F50D4(s32);                             /* extern */
? func_8014026C(OSViMode *, ?, u32, ?, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
void func_80178750();                               /* static */
void func_80178818();                               /* static */
void func_80178978();                               /* static */
void func_801789D4();                               /* static */
u16 **func_80178A24();                              /* static */
u16 func_80178A34(s32 arg0, s32 arg1);              /* static */
void func_80178AC0(u16 *arg0, u32 arg1, u32 arg2);  /* static */
void func_80178C80(u32 arg0, s32 arg1, u32 *arg2, s32 *arg3, s32 *arg4); /* static */
void func_80178D7C(u32 arg0, u32 arg1, void *arg2); /* static */
void func_80178DAC(u32 arg2, u32 arg3, u8 *, s32);  /* static */
void func_80178E3C(u32 arg0, u32 arg1, u8 *arg2, s32 arg3); /* static */
void func_80178E7C(u32 arg0, u8 *arg1, ? arg2);     /* static */
u16 *get_zbuffer();                                 /* static */
static u16 **D_801FBB90;
static u16 **D_801FBB94;
static s32 D_801FBB98;
static u16 (*D_801FBB9C)[320];
static u32 *D_801FBBA0;
static s32 D_801FBBB0;
static u16 (*D_801FBBB4)[320];
static u32 *D_801FBBB8;
static u16 *D_801FBBBC;
static u16 **D_801FBBC0;
static u16 **D_801FBBC4;
static s32 D_801FBBC8;
static s16 D_801FBBD0;
static s16 D_801FBBD2;
static s8 D_801FBBD4;
static void D_801FBBE0;
OSViMode D_801FBB30;
OSViMode *D_801FBB88;
s16 D_801FBBCC;
s16 D_801FBBCE;
u8 D_80780000[17920];
u16 gFramebuffer0[240][320];
u32 *gFramebuffers[2];
s32 gScreenHeight = 0xF0;
s32 gScreenWidth = 0x140;
u16 *gZBufferPtr;
u16 **sys_cfb_fifol;
u16 **sys_cfb_wbufl;
u16 *sys_cfb_zbufl;



void func_80178750(void) {
    gFramebuffers->unk4 = (u16 (*)[320]) D_801FBB9C;
    gFramebuffers->unk0 = D_801FBBA0;
    gZBufferPtr = sys_cfb_zbufl;
    D_801FBB90 = sys_cfb_wbufl;
    D_801FBB94 = sys_cfb_fifol;
    D_801FBB98 = D_801FBBB0;
    D_801FBBCC = 0x140;
    D_801FBBCE = 0xF0;
    D_801FBBD0 = 0;
    D_801FBBD2 = 0;
    D_801FBBD4 = 0;
    gScreenWidth = (s32) D_801FBBCC;
    gScreenHeight = (s32) D_801FBBCE;
    D_801FBB88 = &osViModeNtscLan1;
}

void func_80178818(void) {
    s16 temp_v0;
    s16 temp_v1;

    gFramebuffers->unk4 = (u16 (*)[320]) D_801FBBB4;
    gFramebuffers->unk0 = D_801FBBB8;
    gZBufferPtr = D_801FBBBC;
    D_801FBB90 = D_801FBBC0;
    D_801FBB94 = D_801FBBC4;
    D_801FBB98 = D_801FBBC8;
    D_801FBBCC = 0x240;
    D_801FBBCE = 0x1C6;
    D_801FBBD0 = 0x1E;
    D_801FBBD2 = 0xA;
    temp_v0 = D_801FBBCC;
    gScreenWidth = (s32) temp_v0;
    temp_v1 = D_801FBBCE;
    gScreenHeight = (s32) temp_v1;
    if ((temp_v0 == 0x280) && (temp_v1 == 0x1E0)) {
        D_801FBB88 = &osViModeNtscHpf1;
    } else {
        func_8014026C(&D_801FBB30, -1, osTvType, 0, 1, 0, 1, (s32) temp_v0, (s32) temp_v1, 0x1E, temp_v0 - 0x262, 0xA, temp_v1 - 0x1D6);
        D_801FBB88 = &D_801FBB30;
    }
    D_801FBBD4 = 1;
}

void func_80178978(void) {
    D_801FBB9C = gFramebuffer1;
    D_801FBBA0 = (u32 *) gFramebuffer0;
    D_801FBBB4 = gFramebuffer1;
    D_801FBBB8 = (u32 *) D_80780000;
    func_80178750();
}

void func_801789D4(void) {
    gFramebuffers->unk0 = NULL;
    gFramebuffers->unk4 = 0;
}

u32 *get_framebuffer(s32 index) {
    if (index < 2) {
        return gFramebuffers[index];
    }
    return NULL;
}

u16 *get_zbuffer(void) {
    return gZBufferPtr;
}

u16 **func_80178A24(void) {
    return D_801FBB90;
}

u16 func_80178A34(s32 arg0, s32 arg1) {
    u16 *temp_v0;
    u16 phi_v1;

    temp_v0 = get_zbuffer();
    if (temp_v0 != 0) {
        phi_v1 = (&temp_v0[arg0])[arg1 * D_801FBBCC];
    } else {
        phi_v1 = 0U;
    }
    return phi_v1;
}

s32 func_80178A94(s32 param_1, s32 param_2) {
    return func_800F50D4(func_80178A34() * 4) >> 3;
}

void func_80178AC0(u16 *arg0, u32 arg1, u32 arg2) {
    s8 spF;
    s8 spE;
    s8 spD;
    s8 spC;
    u16 sp8;
    u16 sp4;
    u16 *temp_v1;
    u16 temp_t7;
    u32 temp_a0;
    void *temp_v0;
    u16 *phi_v1;
    u32 phi_v0;
    u32 phi_a0;

    phi_v1 = arg0;
    phi_v0 = arg1;
    if ((u32) (arg1 - arg2) < arg1) {
        phi_a0 = arg1 - arg2;
        do {
            temp_t7 = *phi_v1;
            temp_v1 = phi_v1 + 2;
            temp_a0 = phi_a0 + 4;
            sp8 = temp_t7;
            phi_a0 = temp_a0;
            phi_v1 = temp_v1;
            if ((temp_t7 & 0xFFFF & 1) == 1) {
                spF = 0xFF;
                spC = (s8) ((u32) (((u32) sp8 >> 0x1B) * 0xFF) / 0x1FU);
                spD = (s8) ((u32) (((u32) ((u32) sp8 << 5) >> 0x1B) * 0xFF) / 0x1FU);
                spE = (s8) ((u32) (((u32) ((u32) sp8 << 0xA) >> 0x1B) * 0xFF) / 0x1FU);
            } else if (sp8 == 0) {
                spC = 0;
            } else {
                sp4 = sp8;
                sp8 = *temp_v1;
                spC = (((u32) sp8 >> 0x1B) * 8) | ((u32) sp4 >> 0x1D);
                spD = (((u32) ((u32) sp8 << 5) >> 0x1B) * 8) | ((u32) ((u32) sp4 * 8) >> 0x1D);
                spE = (((u32) ((u32) sp8 << 0xA) >> 0x1B) * 8) | ((u32) ((u32) sp4 << 6) >> 0x1D);
                spF = ((sp8 & 1) << 7) | ((u32) (((u32) ((u32) sp4 << 9) >> 0x1B) * 0x7F) / 0x3FU);
                phi_v1 = temp_v1 + 2;
            }
            temp_v0 = phi_v0 + 4;
            temp_v0->unk-4 = (s32) spC;
            phi_v0 = (u32) temp_v0;
        } while (temp_a0 < arg1);
    }
}

void func_80178C80(u32 arg0, s32 arg1, u32 *arg2, s32 *arg3, s32 *arg4) {
    s32 sp24;
    s32 temp_v1;
    u32 temp_v0;

    DmaMgr_DMARomToRam(arg0, &D_801FBBE0, 4U);
    temp_v1 = D_801FBBE0.unk0;
    temp_v0 = arg1 * 4;
    if ((u32) (temp_v1 - 4) < temp_v0) {
        *arg2 = arg0;
        *arg3 = 0;
    } else if (temp_v0 == 0) {
        sp24 = temp_v1;
        DmaMgr_DMARomToRam(arg0 + 4, &D_801FBBE0, 4U);
        *arg2 = arg0 + temp_v1;
        *arg3 = D_801FBBE0.unk0;
    } else {
        sp24 = temp_v1;
        DmaMgr_DMARomToRam(temp_v0 + arg0, &D_801FBBE0, 8U);
        *arg2 = D_801FBBE0.unk0 + arg0 + temp_v1;
        *arg3 = D_801FBBE0.unk4 - D_801FBBE0.unk0;
    }
    *arg4 = 0;
}

void func_80178D7C(u32 arg0, u32 arg1, void *arg2) {
    if (arg1 != 0) {
        Yaz0_Decompress(arg0, arg2, arg1);
    }
}

void func_80178DAC(u32 arg2, u32 arg3) {
    u32 sp2C;
    u32 sp28;
    u32 sp24;
    void *sp20;
    void *temp_v0;

    func_80178C80((u32) &sp2C, (s32) &sp28, &sp24);
    if ((sp24 & 1) != 0) {
        temp_v0 = SystemArena_Malloc(0x1000U);
        sp20 = temp_v0;
        func_80178D7C(sp2C, sp28, temp_v0);
        func_80178AC0((u16 *) sp20, arg2, arg3);
        SystemArena_Free(sp20);
        return;
    }
    func_80178D7C(sp2C, sp28, (void *) arg2);
}

void func_80178E3C(u32 arg0, u32 arg1, u8 *arg2, s32 arg3) {
    func_80178DAC(DmaMgr_TranslateVromToRom(arg0), arg1, arg2, arg3);
}

void func_80178E7C(u32 arg0, u8 *arg1, ? arg2) {
    u32 temp_s0;
    u32 temp_s2;
    u32 temp_s3;
    u32 temp_v0;
    u32 phi_s0;
    u8 *phi_s1;

    temp_v0 = DmaMgr_TranslateVromToRom(arg0);
    temp_s2 = temp_v0;
    DmaMgr_DMARomToRam(temp_v0, &D_801FBBE0, 4U);
    temp_s3 = ((u32) D_801FBBE0 >> 2) - 1;
    phi_s0 = 0U;
    phi_s1 = arg1;
    if (temp_s3 != 0) {
        do {
            func_80178DAC(temp_s2, phi_s0, phi_s1, 0);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
            phi_s1 = D_8009BE20;
        } while (temp_s0 < temp_s3);
    }
}

