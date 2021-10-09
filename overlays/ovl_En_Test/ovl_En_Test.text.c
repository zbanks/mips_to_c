typedef struct EnTest {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ActorShape unk_144;                 /* inferred */
    /* 0x174 */ s32 unk_174;                        /* inferred */
    /* 0x178 */ ? unk_178;                          /* inferred */
    /* 0x178 */ char pad_178[0x48];
    /* 0x1C0 */ ? unk_1C0;                          /* inferred */
    /* 0x1C0 */ char pad_1C0[0x48];
    /* 0x208 */ u8 unk_208;                         /* inferred */
    /* 0x209 */ u8 unk_209;                         /* inferred */
    /* 0x20A */ u8 unk_20A;                         /* inferred */
    /* 0x20B */ char pad_20B[0x1];
    /* 0x20C */ ? unk_20C;                          /* inferred */
    /* 0x20C */ char pad_20C[0x4B0];
} EnTest;                                           /* size = 0x6BC */

struct _mips2c_stack_EnTest_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnTest_Draw {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ u32 sp2C;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnTest_Init {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ CollisionContext *sp28;              /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ ActorShape *sp30;                    /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x48];
};                                                  /* size = 0x80 */

struct _mips2c_stack_EnTest_Update {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80862B70 {};              /* size 0x0 */

struct _mips2c_stack_func_80862CBC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x2];
    /* 0x26 */ s16 sp26;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80862EDC {};              /* size 0x0 */

struct _mips2c_stack_func_80863048 {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808634B8 {};              /* size 0x0 */

f32 func_800C40B4(CollisionContext *, CollisionPoly **, s32 *, PosRot *); /* extern */
? func_80183430(ActorShape *, ? *, s32 *, ? *, ? *, s32); /* extern */
? func_8018349C(ActorShape *, EnTest *);            /* extern */
? func_801834A8(ActorShape *, s32 *);               /* extern */
s32 func_80183DE0(ActorShape *);                    /* extern */
? func_8018450C(GlobalContext *, ActorShape *, Gfx *, ? (*)(void **, ?, s32, s32 *, void *), s32, EnTest *); /* extern */
void func_80862B70(? *arg0);                        /* static */
void func_80862CBC(? *arg0, PosRot *arg1);          /* static */
void func_80862EDC(? *arg0);                        /* static */
void func_80863048(GraphicsContext **arg0, ? *arg1); /* static */
? func_808634B8(void **arg0, ? arg1, s32 arg2, s32 *arg3, void *arg5); /* static */
extern void D_0406B6A0;
extern ? D_0406EB70;

void func_80862B70(? *arg0) {
    s32 temp_v0;
    ? *phi_v1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        phi_v1->unk_0 = 0;
        phi_v1->unk_4 = 0;
        phi_v1->unk_8 = 0.0f;
        phi_v1->unk_C = 0.0f;
        phi_v1->unk_10 = 0.0f;
        phi_v1->unk_14 = 0.0f;
        phi_v1->unk_18 = 0.0f;
        phi_v1->unk_1C = 0.0f;
        phi_v1->unk_20 = 0.0f;
        phi_v1->unk_24 = 0.0f;
        phi_v1->unk_28 = 0.0f;
        phi_v1->unk_2C = 0.001f;
        phi_v1->unk_30 = 0;
        phi_v1->unk_32 = 0;
        phi_v1->unk_34 = 0;
        phi_v1->unk_36 = 0;
        phi_v1->unk_38 = 0;
        phi_v1->unk_3A = 0;
        temp_v0 = phi_v0 + 4;
        phi_v1->unk_3C = 0;
        phi_v1->unk_40 = 0;
        phi_v1->unk_44 = 0.0f;
        phi_v1->unk_48 = 0.0f;
        phi_v1->unk_4C = 0.0f;
        phi_v1->unk_50 = 0.0f;
        phi_v1->unk_54 = 0.0f;
        phi_v1->unk_58 = 0.0f;
        phi_v1->unk_5C = 0.0f;
        phi_v1->unk_60 = 0.0f;
        phi_v1->unk_64 = 0.0f;
        phi_v1->unk_68 = 0.001f;
        phi_v1->unk_6C = 0;
        phi_v1->unk_6E = 0;
        phi_v1->unk_70 = 0;
        phi_v1->unk_72 = 0;
        phi_v1->unk_74 = 0;
        phi_v1->unk_76 = 0;
        phi_v1->unk_78 = 0;
        phi_v1->unk_7C = 0;
        phi_v1->unk_80 = 0.0f;
        phi_v1->unk_84 = 0.0f;
        phi_v1->unk_88 = 0.0f;
        phi_v1->unk_8C = 0.0f;
        phi_v1->unk_90 = 0.0f;
        phi_v1->unk_94 = 0.0f;
        phi_v1->unk_98 = 0.0f;
        phi_v1->unk_9C = 0.0f;
        phi_v1->unk_A0 = 0.0f;
        phi_v1->unk_A4 = 0.001f;
        phi_v1->unk_A8 = 0;
        phi_v1->unk_AA = 0;
        phi_v1->unk_AC = 0;
        phi_v1->unk_AE = 0;
        phi_v1->unk_B0 = 0;
        phi_v1->unk_B2 = 0;
        phi_v1->unk_B4 = 0;
        phi_v1->unk_B8 = 0;
        phi_v1->unk_BC = 0.0f;
        phi_v1->unk_C0 = 0.0f;
        phi_v1->unk_C4 = 0.0f;
        phi_v1->unk_C8 = 0.0f;
        phi_v1->unk_CC = 0.0f;
        phi_v1->unk_D0 = 0.0f;
        phi_v1->unk_D4 = 0.0f;
        phi_v1->unk_D8 = 0.0f;
        phi_v1->unk_DC = 0.0f;
        phi_v1->unk_E0 = 0.001f;
        phi_v1->unk_E4 = 0;
        phi_v1->unk_E6 = 0;
        phi_v1->unk_E8 = 0;
        phi_v1->unk_EA = 0;
        phi_v1->unk_EC = 0;
        phi_v1->unk_EE = 0;
        phi_v1 += 0xF0;
        phi_v0 = temp_v0;
    } while (temp_v0 != 0x14);
}

void func_80862CBC(? *arg0, PosRot *arg1) {
    s16 sp26;
    f32 sp20;
    f32 temp_f0;
    f32 temp_f10;
    s32 temp_v0;
    s32 temp_v0_2;
    ? *phi_s0;
    s32 phi_v0;

    phi_s0 = arg0;
    phi_v0 = 0;
loop_1:
    if (phi_s0->unk_0 == 0) {
        temp_v0 = (s32) (Rand_ZeroOne() * 65535.0f);
        sp26 = (s16) temp_v0;
        phi_s0->unk_0 = 1;
        phi_s0->unk_8 = (f32) ((Math_CosS((s16) temp_v0) * 20.0f) + arg1->pos.x);
        phi_s0->unk_C = (f32) arg1->pos.y;
        phi_s0->unk_10 = (f32) ((Math_SinS(sp26) * 20.0f) + arg1->pos.z);
        sp20 = Rand_ZeroOne();
        phi_s0->unk_14 = (f32) (Math_CosS(sp26) * 13.0f * sp20);
        phi_s0->unk_18 = (f32) ((Rand_ZeroOne() * 5.0f) + 8.0f);
        temp_f10 = Math_SinS(sp26) * 13.0f;
        phi_s0->unk_20 = 0.0f;
        phi_s0->unk_28 = 0.0f;
        phi_s0->unk_24 = -2.0f;
        phi_s0->unk_1C = (f32) (temp_f10 * sp20);
        phi_s0->unk_2C = (f32) ((Rand_ZeroOne() * 0.0004f) + 0.0004f);
        phi_s0->unk_30 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk_32 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk_34 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk_36 = (s16) (s32) (Rand_ZeroOne() * 8192.0f);
        phi_s0->unk_38 = (s16) (s32) (Rand_ZeroOne() * 8192.0f);
        temp_f0 = Rand_ZeroOne();
        phi_s0->unk_4 = 0xA;
        phi_s0->unk_3A = (s16) (s32) (temp_f0 * 8192.0f);
        return;
    }
    temp_v0_2 = phi_v0 + 0x3C;
    phi_s0 += 0x3C;
    phi_v0 = temp_v0_2;
    if (temp_v0_2 == 0x4B0) {
        return;
    }
    goto loop_1;
}

void func_80862EDC(? *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_t1;
    s32 temp_t8;
    s32 temp_v1;
    void *temp_v0;
    ? *phi_a1;
    s32 phi_v1;

    phi_a1 = arg0;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 0x78;
        temp_v0 = phi_a1 + 0x3C;
        phi_v1 = temp_v1;
        if (phi_a1->unk_0 != 0) {
            temp_t8 = phi_a1->unk_4 - 1;
            phi_a1->unk_4 = temp_t8;
            if (temp_t8 < 0) {
                phi_a1->unk_0 = 0;
            }
            temp_f0 = phi_a1->unk_14;
            temp_f2 = phi_a1->unk_18;
            temp_f12 = phi_a1->unk_1C;
            phi_a1->unk_8 = (f32) (phi_a1->unk_8 + temp_f0);
            phi_a1->unk_C = (f32) (phi_a1->unk_C + temp_f2);
            phi_a1->unk_10 = (f32) (phi_a1->unk_10 + temp_f12);
            phi_a1->unk_14 = (f32) (temp_f0 + phi_a1->unk_20);
            phi_a1->unk_18 = (f32) (temp_f2 + phi_a1->unk_24);
            phi_a1->unk_1C = (f32) (temp_f12 + phi_a1->unk_28);
            phi_a1->unk_30 = (s16) (phi_a1->unk_30 + phi_a1->unk_36);
            phi_a1->unk_32 = (s16) (phi_a1->unk_32 + phi_a1->unk_38);
            phi_a1->unk_34 = (s16) (phi_a1->unk_34 + phi_a1->unk_3A);
        }
        if (phi_a1->unk_3C != 0) {
            temp_t1 = temp_v0->unk_4 - 1;
            temp_v0->unk_4 = temp_t1;
            if (temp_t1 < 0) {
                temp_v0->unk_0 = 0;
            }
            temp_f0_2 = temp_v0->unk_14;
            temp_f2_2 = temp_v0->unk_18;
            temp_f12_2 = temp_v0->unk_1C;
            temp_v0->unk_8 = (f32) (temp_v0->unk_8 + temp_f0_2);
            temp_v0->unk_C = (f32) (temp_v0->unk_C + temp_f2_2);
            temp_v0->unk_10 = (f32) (temp_v0->unk_10 + temp_f12_2);
            temp_v0->unk_34 = (s16) (temp_v0->unk_34 + temp_v0->unk_3A);
            temp_v0->unk_32 = (s16) (temp_v0->unk_32 + temp_v0->unk_38);
            temp_v0->unk_30 = (s16) (temp_v0->unk_30 + temp_v0->unk_36);
            temp_v0->unk_1C = (f32) (temp_f12_2 + temp_v0->unk_28);
            temp_v0->unk_18 = (f32) (temp_f2_2 + temp_v0->unk_24);
            temp_v0->unk_14 = (f32) (temp_f0_2 + temp_v0->unk_20);
        }
        phi_a1 += 0x78;
    } while (temp_v1 != 0x4B0);
}

void func_80863048(GraphicsContext **arg0, ? *arg1) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    Mtx *temp_v0;
    f32 temp_f12;
    s32 temp_s1;
    ? *phi_s0;
    s32 phi_s1;

    temp_a0 = *arg0;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v1 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w1 = -1;
    temp_v1->words.w0 = 0xFA000080;
    temp_v1_2 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w1 = -1;
    temp_v1_2->words.w0 = 0xFB000000;
    phi_s0 = arg1;
    phi_s1 = 0;
    do {
        if (phi_s0->unk_0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk_8, phi_s0->unk_C, phi_s0->unk_10, 0);
            SysMatrix_InsertRotation(phi_s0->unk_30, phi_s0->unk_32, phi_s0->unk_34, 1);
            temp_f12 = phi_s0->unk_2C;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = Matrix_NewMtx(*arg0);
            temp_v1_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v1_3 + 8;
            temp_v1_3->words.w1 = (u32) temp_v0;
            temp_v1_3->words.w0 = 0xDA380003;
            temp_v1_4 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v1_4 + 8;
            temp_v1_4->words.w1 = (u32) &D_0406AB30;
            temp_v1_4->words.w0 = 0xDE000000;
        }
        temp_s1 = phi_s1 + 0x3C;
        phi_s0 += 0x3C;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x4B0);
}

void EnTest_Init(Actor *thisx, GlobalContext *globalCtx) {
    ? sp38;
    s32 sp34;
    ActorShape *sp30;
    CollisionContext *sp28;
    ActorShape *temp_a0_3;
    ActorShape *temp_a3;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;
    EnTest *this = (EnTest *) thisx;

    temp_v0 = this->actor.params;
    this->unk_209 = 0;
    this->unk_174 = 0;
    if ((s32) temp_v0 > 0) {
        Actor_SetScale((Actor *) this, (f32) temp_v0 / 100000.0f);
        this->unk_20A = 0;
        goto block_6;
    }
    this->actor.floorPoly = NULL;
    this->actor.world.pos.y += 10.0f;
    temp_a0 = &globalCtx->colCtx;
    sp28 = temp_a0;
    temp_a0_2 = this->actor.floorPoly;
    this->actor.floorHeight = func_800C40B4(temp_a0, &this->actor.floorPoly, &sp34, &this->actor.world);
    if ((temp_a0_2 == 0) || (temp_f0 = this->actor.floorHeight, (temp_f0 == -32000.0f))) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.world.pos.y = temp_f0;
    func_800C0094(temp_a0_2, this->actor.world.pos.x, temp_f0, this->actor.world.pos.z, (MtxF *) &sp38);
    temp_a3 = &this->actor.shape;
    sp30 = temp_a3;
    func_8018219C((MtxF *) &sp38, (Vec3s *) temp_a3, 1);
    this->unk_30 = (unaligned s32) temp_a3->unk_0;
    this->actor.world.rot.z = (s16) (u16) temp_a3->rot.z;
    this->unk_20A = func_800C9BB8(sp28, this->actor.floorPoly, sp34);
block_6:
    temp_a0_3 = &this->unk_144;
    sp30 = temp_a0_3;
    func_80183430(temp_a0_3, &D_0406EB70, &D_0406BB0C, &this->unk_178, &this->unk_1C0, 0);
    func_801834A8(temp_a0_3, &D_0406BB0C);
    this->unk_144.shadowScale = 9.0f;
    func_80862B70(&this->unk_20C);
}

void EnTest_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest *this = (EnTest *) thisx;
    func_8018349C(&this->unk_144, this);
}

void EnTest_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_s0;
    s32 temp_v0;
    u8 temp_t1;
    s32 phi_s0;
    EnTest *this = (EnTest *) thisx;

    this->unk_208 = (u8) (u32) this->unk_144.shadowScale;
    if ((func_80183DE0(&this->unk_144) != 0) && (this->actor.parent == 0) && (this->actor.params != -1)) {
        temp_t1 = this->unk_209 + 1;
        this->unk_209 = temp_t1;
        if ((temp_t1 & 0xFF) >= 0x15) {
            Actor_MarkForDeath((Actor *) this);
        }
    }
    if ((this->actor.params != -1) && ((s32) this->unk_208 >= 2)) {
        temp_v0 = this->unk_174;
        phi_s0 = 0;
        if ((temp_v0 & 1) == 0) {
            this->unk_174 = temp_v0 | 1;
            do {
                func_80862CBC(&this->unk_20C, &this->actor.world);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x14);
        }
    }
    func_80862EDC(&this->unk_20C);
}

? func_808634B8(void **arg0, ? arg1, s32 arg2, s32 *arg3, void *arg5) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = *arg0;
    if ((arg5->unk_1C == -1) && ((arg2 == 1) || (arg2 == 2))) {
        *arg3 = 0;
    }
    if ((arg5->unk_1C == -2) && (arg2 == 3)) {
        *arg3 = 0;
    }
    if (arg2 == 3) {
        temp_v1 = temp_v0->unk_2C0;
        temp_v0->unk_2C0 = (void *) (temp_v1 + 8);
        temp_v1->unk_0 = 0xFA000080;
        temp_v1->unk_4 = (s32) ((u32) (((f32) (0x14 - arg5->unk_209) * 255.0f) / 20.0f) & 0xFF);
        temp_v1_2 = temp_v0->unk_2C0;
        temp_v0->unk_2C0 = (void *) (temp_v1_2 + 8);
        temp_v1_2->unk_0 = 0xFB000000;
        temp_v1_2->unk_4 = (s32) ((u32) (((f32) (0x14 - arg5->unk_209) * 255.0f) / 20.0f) & 0xFF);
    }
    return 1;
}

void EnTest_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u32 sp2C;
    Gfx *sp28;
    Gfx *temp_a2_2;
    GraphicsContext *temp_v0_2;
    s32 temp_a2;
    u8 temp_v0;
    u32 phi_a2;
    EnTest *this = (EnTest *) thisx;

    temp_a2 = this->unk_208 - 1;
    phi_a2 = (u32) temp_a2;
    if (temp_a2 >= 0x1D) {
        phi_a2 = 0x1DU;
    }
    temp_v0 = this->unk_20A;
    if ((temp_v0 == 0xF) || (temp_v0 == 0xE)) {
        sp2C = phi_a2;
        AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual((void *) &D_0406B730), phi_a2);
    } else {
        sp2C = phi_a2;
        AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual(&D_0406B6A0), phi_a2);
    }
    temp_v0_2 = globalCtx->state.gfxCtx;
    temp_a2_2 = temp_v0_2->polyOpa.d - (((this->unk_144.feetPos[0].x->unk_1 << 6) + 0xF) & ~0xF);
    temp_v0_2->polyOpa.d = temp_a2_2;
    if (temp_a2_2 != 0) {
        sp28 = temp_a2_2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        func_8018450C(globalCtx, &this->unk_144, temp_a2_2, func_808634B8, 0, this);
        func_80863048((GraphicsContext **) globalCtx, &this->unk_20C);
    }
}
