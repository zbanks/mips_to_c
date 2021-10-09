struct _mips2c_stack_func_800E9C90 {};              /* size 0x0 */

struct _mips2c_stack_func_800E9CA0 {};              /* size 0x0 */

struct _mips2c_stack_func_800E9CFC {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_800E9DBC {
    /* 0x0 */ char pad0[0x4];
    /* 0x4 */ s32 sp4;                              /* inferred */
};                                                  /* size = 0x8 */

struct _mips2c_stack_func_800E9E94 {
    /* 0x00 */ char pad0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_800E9F78 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x30];
    /* 0x60 */ Gfx *sp60;                           /* inferred */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
};                                                  /* size = 0x68 */

void func_800E9C90();                               /* static */
void func_800E9CA0(s32 arg0, s8 arg1);              /* static */
void func_800E9CFC(GfxPrint *arg0);                 /* static */
void func_800E9DBC(s32 arg0, s32 arg1, s32 arg2, u8 *arg3); /* static */
void func_800E9E94(GfxPrint *arg0);                 /* static */
static s32 D_801BB090 = 0;
static ? D_801BB094;                                /* unable to generate initializer */
static ? D_801BB0DC;                                /* unable to generate initializer */
static s16 D_801BB0FC = 0;
static ? D_801BB100;                                /* unable to generate initializer */
static ? D_801F3F80;
static ? D_801F3F83;

void func_800E9C90(void) {
    D_801BB090 = 0;
}

void func_800E9CA0(s32 arg0, s8 arg1, u8 *arg2) {
    s8 *temp_v0;
    u8 *temp_a2;
    void *temp_v1;
    u8 *phi_a2;
    void *phi_v1;

    temp_v0 = (arg0 * 0xC) + &D_801BB094;
    D_801BB090 |= 1;
    *temp_v0 = arg1;
    phi_a2 = arg2;
    phi_v1 = temp_v0 + 1;
    do {
        temp_v1 = phi_v1 + 1;
        temp_a2 = phi_a2 + 1;
        temp_v1->unk-1 = (u8) *phi_a2;
        phi_a2 = temp_a2;
        phi_v1 = temp_v1;
    } while (temp_a2->unk-1 != 0);
}

void func_800E9CFC(GfxPrint *arg0) {
    s32 temp_s1;
    void *temp_v0;
    s32 phi_s1;
    ? *phi_s0;

    phi_s1 = 0x14;
    phi_s0 = &D_801BB094;
    do {
        GfxPrint_SetPos(arg0, 0x1A, phi_s1);
        temp_v0 = &D_801BB0DC + (phi_s0->unk0 * 4);
        GfxPrint_SetColor(arg0, (u32) temp_v0->unk0, (u32) temp_v0->unk1, (u32) temp_v0->unk2, (u32) temp_v0->unk3);
        GfxPrint_Printf(arg0, "%s", phi_s0 + 1);
        temp_s1 = phi_s1 + 1;
        phi_s0->unk1 = 0;
        phi_s1 = temp_s1;
        phi_s0 += 0xC;
    } while (temp_s1 != 0x1A);
}

void func_800E9DBC(s32 arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s16 temp_v1;
    s8 *temp_t0;
    s8 *temp_t0_2;
    u8 temp_a3;
    u8 temp_a3_2;
    void *temp_v0;
    s32 phi_v1;
    u8 *phi_s0;
    s8 *phi_t0;
    s8 *phi_t0_2;

    temp_v1 = D_801BB0FC;
    temp_v0 = (temp_v1 * 0x2C) + &D_801F3F80;
    D_801BB090 |= 2;
    if ((s32) temp_v1 < 0x50) {
        temp_v0->unk0 = (s8) (arg0 & 0xFF);
        temp_v0->unk1 = (s8) (arg1 & 0xFF);
        temp_v0->unk2 = (s8) (arg2 & 0xFF);
        temp_a3 = *arg3;
        temp_t0 = temp_v0 + 4;
        temp_v0->unk3 = temp_a3;
        phi_v1 = 0;
        phi_s0 = arg3 + 1;
        phi_t0 = temp_t0;
        phi_t0_2 = temp_t0;
        if (temp_a3 != 0) {
loop_2:
            phi_v1 = (s32) (s16) (phi_v1 + 1);
            phi_t0_2 = phi_t0;
            if (((phi_v1 < 0x29) ^ 1) == 0) {
                temp_a3_2 = *phi_s0;
                temp_t0_2 = phi_t0 + 1;
                temp_t0_2->unk-1 = temp_a3_2;
                phi_s0 += 1;
                phi_t0 = temp_t0_2;
                phi_t0_2 = temp_t0_2;
                if (temp_a3_2 != 0) {
                    goto loop_2;
                }
            }
        }
        *phi_t0_2 = 0;
        D_801BB0FC += 1;
    }
}

void func_800E9E94(GfxPrint *arg0) {
    s32 temp_s2;
    void *temp_v0;
    ? *phi_s0;
    ? *phi_s1;
    s32 phi_s2;

    phi_s0 = &D_801F3F80;
    phi_s2 = 0;
    if ((s32) D_801BB0FC > 0) {
        phi_s1 = &D_801F3F83;
        do {
            temp_v0 = &D_801BB100 + (phi_s0->unk2 * 4);
            GfxPrint_SetColor(arg0, (u32) temp_v0->unk0, (u32) temp_v0->unk1, (u32) temp_v0->unk2, (u32) temp_v0->unk3);
            GfxPrint_SetPos(arg0, (s32) phi_s0->unk0, (s32) phi_s0->unk1);
            GfxPrint_Printf(arg0, "%s", phi_s1);
            temp_s2 = phi_s2 + 1;
            phi_s0 += 0x2C;
            phi_s1 += 0x2C;
            phi_s2 = temp_s2;
        } while (temp_s2 < (s32) D_801BB0FC);
    }
}

void func_800E9F78(GraphicsContext *gfxCtx) {
    Gfx *sp64;
    Gfx *sp60;
    ? sp30;
    Gfx *temp_a0;
    Gfx *temp_a0_2;
    Gfx *temp_a1;
    Gfx *temp_a1_2;
    Gfx *temp_v0;
    Gfx *temp_v0_3;
    s32 temp_v0_2;
    s32 phi_v0;

    if (THGA_GetSize(&gfxCtx->polyOpa) >= 0x2800) {
        GfxPrint_Init((GfxPrint *) &sp30);
        temp_a0 = gfxCtx->polyOpa.p;
        sp60 = temp_a0;
        temp_v0 = Graph_GfxPlusOne(temp_a0);
        temp_a1 = temp_v0;
        temp_a0_2 = gfxCtx->unk1B8.p;
        gfxCtx->unk1B8.p = temp_a0_2 + 8;
        temp_a0_2->words.w1 = (u32) temp_v0;
        temp_a0_2->words.w0 = 0xDE000000;
        GfxPrint_Open((GfxPrint *) &sp30, temp_a1);
        temp_v0_2 = D_801BB090;
        phi_v0 = temp_v0_2;
        if ((temp_v0_2 & 2) != 0) {
            func_800E9E94((GfxPrint *) &sp30);
            phi_v0 = D_801BB090;
        }
        D_801BB0FC = 0;
        if ((phi_v0 & 1) != 0) {
            func_800E9CFC((GfxPrint *) &sp30);
        }
        temp_v0_3 = GfxPrint_Close((GfxPrint *) &sp30);
        temp_v0_3->words.w0 = 0xDF000000;
        temp_a1_2 = temp_v0_3 + 8;
        temp_v0_3->words.w1 = 0;
        sp64 = temp_a1_2;
        Graph_BranchDlist(sp60, temp_a1_2);
        gfxCtx->polyOpa.p = temp_a1_2;
        GfxPrint_Destroy((GfxPrint *) &sp30);
    }
}
