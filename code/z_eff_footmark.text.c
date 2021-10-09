struct _mips2c_stack_EffFootmark_Add {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EffFootmark_Draw {
    /* 0x00 */ char pad0[0x58];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EffFootmark_Init {};           /* size 0x0 */

struct _mips2c_stack_EffFootmark_Update {};         /* size 0x0 */

static ? D_801BC210;                                /* unable to generate initializer */
Gfx D_801BC240[9] = {
    {{0xFD700000, 0x4076C40}},
    {{0xF5700000, 0x7094250}},
    {{0xE6000000, 0}},
    {{0xF3000000, 0x73FF100}},
    {{0xE7000000, 0}},
    {{0xF5701000, 0x94250}},
    {{0xF2000000, 0x7C07C}},
    {{0xFCFF9604, 0xFFFDFFF8}},
    {{0xDF000000, 0}},
};
Gfx D_801BC288[3] = {{{0x1003006, (u32) &D_801BC210}}, {{0x5000204, 0}}, {{0xDF000000, 0}}};

void EffFootmark_Init(GlobalContext *globalCtx) {
    EffFootmark *temp_v0;
    s32 temp_v1;
    EffFootmark *phi_v0;
    s32 phi_v1;

    phi_v0 = globalCtx->footprintInfo;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 4;
        phi_v0->unkA0 = 0;
        phi_v0->unkA4 = 0.0f;
        phi_v0->unkA8 = 0.0f;
        phi_v0->unkAC = 0.0f;
        phi_v0->unkB0 = 0;
        phi_v0->unkB1 = 0;
        phi_v0->unkB6 = 0;
        phi_v0->unkB8 = 0;
        phi_v0->unk100 = 0;
        phi_v0->unk104 = 0.0f;
        phi_v0->unk108 = 0.0f;
        phi_v0->unk10C = 0.0f;
        phi_v0->unk110 = 0;
        phi_v0->unk111 = 0;
        phi_v0->unk116 = 0;
        phi_v0->unk118 = 0;
        phi_v0->unk160 = 0;
        phi_v0->unk164 = 0.0f;
        phi_v0->unk168 = 0.0f;
        phi_v0->unk16C = 0.0f;
        phi_v0->unk170 = 0;
        phi_v0->unk171 = 0;
        phi_v0->unk176 = 0;
        phi_v0->unk178 = 0;
        temp_v0 = phi_v0 + 0x180;
        temp_v0->unk-140 = 0;
        temp_v0->unk-13C = 0.0f;
        temp_v0->unk-138 = 0.0f;
        temp_v0->unk-134 = 0.0f;
        temp_v0->unk-130 = 0;
        temp_v0->unk-12F = 0;
        temp_v0->unk-12A = 0;
        temp_v0->unk-128 = 0;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
    } while (temp_v1 != 0x64);
}

void EffFootmark_Add(GlobalContext *globalCtx, MtxF *displayMatrix, Actor *actor, u8 id, Vec3f *location, u16 size, u8 red, u8 green, u8 blue, u16 alpha, u16 alphaChange, u16 fadeoutDelay) {
    s32 temp_t0;
    u8 temp_a3;
    EffFootmark *phi_v0;
    MtxF *phi_s0;
    MtxF *phi_t1;
    s32 phi_t0;
    s32 phi_t2;
    MtxF *phi_s0_2;
    MtxF *phi_t1_2;
    MtxF *phi_s0_3;
    MtxF *phi_s0_4;
    MtxF *phi_t1_3;

    temp_a3 = id & 0xFF;
    phi_v0 = globalCtx->footprintInfo;
    phi_s0 = NULL;
    phi_t1 = NULL;
    phi_t0 = 0;
    phi_t2 = 1;
loop_1:
    temp_t0 = phi_t0 + 1;
    phi_t0 = temp_t0;
    phi_s0_2 = phi_s0;
    phi_t1_2 = phi_t1;
    phi_s0_4 = phi_s0;
    phi_t1_3 = phi_t1;
    if ((actor == phi_v0->actor) && (temp_a3 == phi_v0->id) && ((phi_v0->flags & 1) == 0)) {
        if ((fabsf(phi_v0->location.x - location->x) <= 1.0f) && (fabsf(phi_v0->location.z - location->z) <= 1.0f)) {
            phi_t2 = 0;
        } else {
            phi_v0->flags = 1;
            goto block_8;
        }
    } else {
block_8:
        if (phi_v0->actor == 0) {
            phi_s0_4 = (MtxF *) phi_v0;
        } else if ((phi_s0 == 0) && (((phi_t1 != 0) && ((s32) phi_t1->unk5E < (s32) phi_v0->age)) || (phi_t1 == 0))) {
            phi_t1_3 = (MtxF *) phi_v0;
        }
        phi_v0 += 0x60;
        phi_s0 = phi_s0_4;
        phi_t1 = phi_t1_3;
        phi_s0_2 = phi_s0_4;
        phi_t1_2 = phi_t1_3;
        if (temp_t0 != 0x64) {
            goto loop_1;
        }
    }
    phi_s0_3 = phi_s0_2;
    if ((phi_t2 != 0) && ((phi_s0_2 != 0) || (phi_t1_2 != 0))) {
        if (phi_s0_2 == 0) {
            phi_s0_3 = phi_t1_2;
        }
        id = temp_a3;
        Matrix_MtxFCopy(phi_s0_3, displayMatrix);
        phi_s0_3->unk40 = actor;
        phi_s0_3->unk44 = (f32) location->x;
        phi_s0_3->unk48 = (f32) location->y;
        phi_s0_3->unk50 = 0;
        phi_s0_3->unk51 = id;
        phi_s0_3->unk4C = (f32) location->z;
        phi_s0_3->unk52 = red;
        phi_s0_3->unk54 = green;
        phi_s0_3->unk53 = blue;
        phi_s0_3->unk56 = alpha;
        phi_s0_3->unk58 = alphaChange;
        phi_s0_3->unk5A = size;
        phi_s0_3->unk5E = 0;
        phi_s0_3->unk5C = fadeoutDelay;
    }
}

void EffFootmark_Update(GlobalContext *globalCtx) {
    s32 temp_v1;
    u16 temp_a0;
    u16 temp_a0_2;
    u16 temp_a0_3;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_a0_6;
    u16 temp_a1;
    u16 temp_a1_2;
    void *temp_v0;
    EffFootmark *phi_v0;
    s32 phi_v1;

    phi_v0 = globalCtx->footprintInfo;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if ((phi_v0->actor != 0) && ((phi_v0->flags & 1) == 1)) {
            temp_a0 = phi_v0->age;
            if ((u32) temp_a0 < 0xFFFFU) {
                phi_v0->age = temp_a0 + 1;
            }
            temp_a0_2 = phi_v0->fadeoutDelay;
            if (temp_a0_2 == 0) {
                temp_a1 = phi_v0->alphaChange;
                temp_a0_3 = phi_v0->alpha;
                if ((s32) temp_a0_3 >= (temp_a1 + 0x1000)) {
                    phi_v0->alpha = temp_a0_3 - temp_a1;
                } else {
                    phi_v0->actor = NULL;
                }
            } else if ((s32) temp_a0_2 > 0) {
                phi_v0->fadeoutDelay = temp_a0_2 - 1;
            }
        }
        temp_v0 = phi_v0 + 0x60;
        if ((phi_v0->unkA0 != 0) && ((temp_v0->unk50 & 1) == 1)) {
            temp_a0_4 = temp_v0->unk5E;
            if ((u32) temp_a0_4 < 0xFFFFU) {
                temp_v0->unk5E = (u16) (temp_a0_4 + 1);
            }
            temp_a0_5 = temp_v0->unk5C;
            if (temp_a0_5 == 0) {
                temp_a1_2 = temp_v0->unk58;
                temp_a0_6 = temp_v0->unk56;
                if ((s32) temp_a0_6 >= (temp_a1_2 + 0x1000)) {
                    temp_v0->unk56 = (u16) (temp_a0_6 - temp_a1_2);
                } else {
                    temp_v0->unk40 = 0;
                }
            } else if ((s32) temp_a0_5 > 0) {
                temp_v0->unk5C = (u16) (temp_a0_5 - 1);
            }
        }
        phi_v0 = temp_v0 + 0x60;
    } while (temp_v1 != 0x64);
}

void EffFootmark_Draw(GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f6;
    s32 temp_s3;
    u16 temp_t0;
    MtxF *phi_s0;
    f32 phi_f6;
    s32 phi_s3;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C448(temp_a0);
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) D_801BC240;
    temp_v0->words.w0 = 0xDE000000;
    phi_s0 = (MtxF *) globalCtx->footprintInfo;
    phi_s3 = 0;
    do {
        if (phi_s0->unk40 != 0) {
            SysMatrix_SetCurrentState(phi_s0);
            temp_t0 = phi_s0->unk5A;
            temp_f6 = (f32) temp_t0;
            phi_f6 = temp_f6;
            if ((s32) temp_t0 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_f0 = phi_f6 * 0.00390625f;
            Matrix_Scale(temp_f0 * 0.7f, 1.0f, temp_f0, 1);
            temp_v0_2 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFA000000;
            temp_v0_3->words.w1 = (phi_s0->unk52 << 0x18) | (phi_s0->unk54 << 0x10) | (phi_s0->unk53 << 8) | (((s32) phi_s0->unk56 >> 8) & 0xFF);
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = (u32) D_801BC288;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x60;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x64);
}
