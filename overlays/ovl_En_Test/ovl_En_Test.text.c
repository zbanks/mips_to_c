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

typedef struct EnTest {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ActorShape unk144;                 /* inferred */
    /* 0x0174 */ s32 unk174;                        /* inferred */
    /* 0x0178 */ ? unk178;                          /* inferred */
    /* 0x0179 */ char pad179[0x47];
    /* 0x01C0 */ ? unk1C0;                          /* inferred */
    /* 0x01C1 */ char pad1C1[0x47];
    /* 0x0208 */ u8 unk208;                         /* inferred */
    /* 0x0209 */ u8 unk209;                         /* inferred */
    /* 0x020A */ u8 unk20A;                         /* inferred */
    /* 0x020B */ char pad20B[0x1];                  /* maybe part of unk20A[2]? */
    /* 0x020C */ ? unk20C;                          /* inferred */
    /* 0x020D */ char pad20D[0x4AF];
} EnTest;                                           /* size 0x6BC */

void func_80862B70(? *arg0) {
    s32 temp_v0;
    ? *phi_v1;
    s32 phi_v0;

    phi_v1 = arg0;
    phi_v0 = 0;
    do {
        phi_v1->unk0 = 0;
        phi_v1->unk4 = 0;
        phi_v1->unk8 = 0.0f;
        phi_v1->unkC = 0.0f;
        phi_v1->unk10 = 0.0f;
        phi_v1->unk14 = 0.0f;
        phi_v1->unk18 = 0.0f;
        phi_v1->unk1C = 0.0f;
        phi_v1->unk20 = 0.0f;
        phi_v1->unk24 = 0.0f;
        phi_v1->unk28 = 0.0f;
        phi_v1->unk2C = 0.001f;
        phi_v1->unk30 = 0;
        phi_v1->unk32 = 0;
        phi_v1->unk34 = 0;
        phi_v1->unk36 = 0;
        phi_v1->unk38 = 0;
        phi_v1->unk3A = 0;
        temp_v0 = phi_v0 + 4;
        phi_v1->unk3C = 0;
        phi_v1->unk40 = 0;
        phi_v1->unk44 = 0.0f;
        phi_v1->unk48 = 0.0f;
        phi_v1->unk4C = 0.0f;
        phi_v1->unk50 = 0.0f;
        phi_v1->unk54 = 0.0f;
        phi_v1->unk58 = 0.0f;
        phi_v1->unk5C = 0.0f;
        phi_v1->unk60 = 0.0f;
        phi_v1->unk64 = 0.0f;
        phi_v1->unk68 = 0.001f;
        phi_v1->unk6C = 0;
        phi_v1->unk6E = 0;
        phi_v1->unk70 = 0;
        phi_v1->unk72 = 0;
        phi_v1->unk74 = 0;
        phi_v1->unk76 = 0;
        phi_v1->unk78 = 0;
        phi_v1->unk7C = 0;
        phi_v1->unk80 = 0.0f;
        phi_v1->unk84 = 0.0f;
        phi_v1->unk88 = 0.0f;
        phi_v1->unk8C = 0.0f;
        phi_v1->unk90 = 0.0f;
        phi_v1->unk94 = 0.0f;
        phi_v1->unk98 = 0.0f;
        phi_v1->unk9C = 0.0f;
        phi_v1->unkA0 = 0.0f;
        phi_v1->unkA4 = 0.001f;
        phi_v1->unkA8 = 0;
        phi_v1->unkAA = 0;
        phi_v1->unkAC = 0;
        phi_v1->unkAE = 0;
        phi_v1->unkB0 = 0;
        phi_v1->unkB2 = 0;
        phi_v1->unkB4 = 0;
        phi_v1->unkB8 = 0;
        phi_v1->unkBC = 0.0f;
        phi_v1->unkC0 = 0.0f;
        phi_v1->unkC4 = 0.0f;
        phi_v1->unkC8 = 0.0f;
        phi_v1->unkCC = 0.0f;
        phi_v1->unkD0 = 0.0f;
        phi_v1->unkD4 = 0.0f;
        phi_v1->unkD8 = 0.0f;
        phi_v1->unkDC = 0.0f;
        phi_v1->unkE0 = 0.001f;
        phi_v1->unkE4 = 0;
        phi_v1->unkE6 = 0;
        phi_v1->unkE8 = 0;
        phi_v1->unkEA = 0;
        phi_v1->unkEC = 0;
        phi_v1->unkEE = 0;
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
    if (phi_s0->unk0 == 0) {
        temp_v0 = (s32) (Rand_ZeroOne() * 65535.0f);
        sp26 = (s16) temp_v0;
        phi_s0->unk0 = 1;
        phi_s0->unk8 = (f32) ((Math_CosS((s16) temp_v0) * 20.0f) + arg1->pos.x);
        phi_s0->unkC = (f32) arg1->pos.y;
        phi_s0->unk10 = (f32) ((Math_SinS(sp26) * 20.0f) + arg1->pos.z);
        sp20 = Rand_ZeroOne();
        phi_s0->unk14 = (f32) (Math_CosS(sp26) * 13.0f * sp20);
        phi_s0->unk18 = (f32) ((Rand_ZeroOne() * 5.0f) + 8.0f);
        temp_f10 = Math_SinS(sp26) * 13.0f;
        phi_s0->unk20 = 0.0f;
        phi_s0->unk28 = 0.0f;
        phi_s0->unk24 = -2.0f;
        phi_s0->unk1C = (f32) (temp_f10 * sp20);
        phi_s0->unk2C = (f32) ((Rand_ZeroOne() * 0.0004f) + 0.0004f);
        phi_s0->unk30 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk32 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk34 = (s16) (s32) (Rand_ZeroOne() * 32766.0f);
        phi_s0->unk36 = (s16) (s32) (Rand_ZeroOne() * 8192.0f);
        phi_s0->unk38 = (s16) (s32) (Rand_ZeroOne() * 8192.0f);
        temp_f0 = Rand_ZeroOne();
        phi_s0->unk4 = 0xA;
        phi_s0->unk3A = (s16) (s32) (temp_f0 * 8192.0f);
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
        if (phi_a1->unk0 != 0) {
            temp_t8 = phi_a1->unk4 - 1;
            phi_a1->unk4 = temp_t8;
            if (temp_t8 < 0) {
                phi_a1->unk0 = 0;
            }
            temp_f0 = phi_a1->unk14;
            temp_f2 = phi_a1->unk18;
            temp_f12 = phi_a1->unk1C;
            phi_a1->unk8 = (f32) (phi_a1->unk8 + temp_f0);
            phi_a1->unkC = (f32) (phi_a1->unkC + temp_f2);
            phi_a1->unk10 = (f32) (phi_a1->unk10 + temp_f12);
            phi_a1->unk14 = (f32) (temp_f0 + phi_a1->unk20);
            phi_a1->unk18 = (f32) (temp_f2 + phi_a1->unk24);
            phi_a1->unk1C = (f32) (temp_f12 + phi_a1->unk28);
            phi_a1->unk30 = (s16) (phi_a1->unk30 + phi_a1->unk36);
            phi_a1->unk32 = (s16) (phi_a1->unk32 + phi_a1->unk38);
            phi_a1->unk34 = (s16) (phi_a1->unk34 + phi_a1->unk3A);
        }
        if (phi_a1->unk3C != 0) {
            temp_t1 = temp_v0->unk4 - 1;
            temp_v0->unk4 = temp_t1;
            if (temp_t1 < 0) {
                temp_v0->unk0 = 0;
            }
            temp_f0_2 = temp_v0->unk14;
            temp_f2_2 = temp_v0->unk18;
            temp_f12_2 = temp_v0->unk1C;
            temp_v0->unk8 = (f32) (temp_v0->unk8 + temp_f0_2);
            temp_v0->unkC = (f32) (temp_v0->unkC + temp_f2_2);
            temp_v0->unk10 = (f32) (temp_v0->unk10 + temp_f12_2);
            temp_v0->unk34 = (s16) (temp_v0->unk34 + temp_v0->unk3A);
            temp_v0->unk32 = (s16) (temp_v0->unk32 + temp_v0->unk38);
            temp_v0->unk30 = (s16) (temp_v0->unk30 + temp_v0->unk36);
            temp_v0->unk1C = (f32) (temp_f12_2 + temp_v0->unk28);
            temp_v0->unk18 = (f32) (temp_f2_2 + temp_v0->unk24);
            temp_v0->unk14 = (f32) (temp_f0_2 + temp_v0->unk20);
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
        if (phi_s0->unk0 != 0) {
            SysMatrix_InsertTranslation(phi_s0->unk8, phi_s0->unkC, phi_s0->unk10, 0);
            SysMatrix_InsertRotation(phi_s0->unk30, phi_s0->unk32, phi_s0->unk34, 1);
            temp_f12 = phi_s0->unk2C;
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
    EnTest *this = (EnTest *) thisx;
    MtxF sp38;
    s32 sp34;
    ActorShape *sp30;
    CollisionContext *sp28;
    ActorShape *temp_a0_3;
    ActorShape *temp_a3;
    CollisionContext *temp_a0;
    CollisionPoly *temp_a0_2;
    f32 temp_f0;
    s16 temp_v0;

    temp_v0 = this->actor.params;
    this->unk209 = 0;
    this->unk174 = 0;
    if ((s32) temp_v0 > 0) {
        Actor_SetScale(&this->actor, (f32) temp_v0 / 100000.0f);
        this->unk20A = 0;
        goto block_6;
    }
    this->actor.floorPoly = NULL;
    this->actor.world.pos.y += 10.0f;
    temp_a0 = &globalCtx->colCtx;
    sp28 = temp_a0;
    temp_a0_2 = this->actor.floorPoly;
    this->actor.floorHeight = func_800C40B4(temp_a0, &this->actor.floorPoly, &sp34, &this->actor.world);
    if ((temp_a0_2 == 0) || (temp_f0 = this->actor.floorHeight, (temp_f0 == -32000.0f))) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->actor.world.pos.y = temp_f0;
    func_800C0094(temp_a0_2, this->actor.world.pos.x, temp_f0, this->actor.world.pos.z, &sp38);
    temp_a3 = &this->actor.shape;
    sp30 = temp_a3;
    func_8018219C(&sp38, &temp_a3->rot, 1);
    this->unk30 = (unaligned s32) temp_a3->unk0;
    this->actor.world.rot.z = (s16) (u16) temp_a3->rot.z;
    this->unk20A = func_800C9BB8(sp28, this->actor.floorPoly, sp34);
block_6:
    temp_a0_3 = &this->unk144;
    sp30 = temp_a0_3;
    func_80183430(temp_a0_3, &D_0406EB70, &D_0406BB0C, &this->unk178, &this->unk1C0, 0);
    func_801834A8(temp_a0_3, &D_0406BB0C);
    this->unk144.shadowScale = 9.0f;
    func_80862B70(&this->unk20C);
}

void EnTest_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTest *this = (EnTest *) thisx;
    func_8018349C(&this->unk144, this);
}

void EnTest_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTest *this = (EnTest *) thisx;
    s32 temp_s0;
    s32 temp_v0;
    u8 temp_t1;
    s32 phi_s0;

    this->unk208 = (u8) (u32) this->unk144.shadowScale;
    if ((func_80183DE0(&this->unk144) != 0) && (this->actor.parent == 0) && (this->actor.params != -1)) {
        temp_t1 = this->unk209 + 1;
        this->unk209 = temp_t1;
        if ((temp_t1 & 0xFF) >= 0x15) {
            Actor_MarkForDeath(&this->actor);
        }
    }
    if ((this->actor.params != -1) && ((s32) this->unk208 >= 2)) {
        temp_v0 = this->unk174;
        phi_s0 = 0;
        if ((temp_v0 & 1) == 0) {
            this->unk174 = temp_v0 | 1;
            do {
                func_80862CBC(&this->unk20C, &this->actor.world);
                temp_s0 = phi_s0 + 1;
                phi_s0 = temp_s0;
            } while (temp_s0 != 0x14);
        }
    }
    func_80862EDC(&this->unk20C);
}

? func_808634B8(void **arg0, ? arg1, s32 arg2, s32 *arg3, void *arg5) {
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    temp_v0 = *arg0;
    if ((arg5->unk1C == -1) && ((arg2 == 1) || (arg2 == 2))) {
        *arg3 = 0;
    }
    if ((arg5->unk1C == -2) && (arg2 == 3)) {
        *arg3 = 0;
    }
    if (arg2 == 3) {
        temp_v1 = temp_v0->unk2C0;
        temp_v0->unk2C0 = (void *) (temp_v1 + 8);
        temp_v1->unk0 = 0xFA000080;
        temp_v1->unk4 = (s32) ((u32) (((f32) (0x14 - arg5->unk209) * 255.0f) / 20.0f) & 0xFF);
        temp_v1_2 = temp_v0->unk2C0;
        temp_v0->unk2C0 = (void *) (temp_v1_2 + 8);
        temp_v1_2->unk0 = 0xFB000000;
        temp_v1_2->unk4 = (s32) ((u32) (((f32) (0x14 - arg5->unk209) * 255.0f) / 20.0f) & 0xFF);
    }
    return 1;
}

void EnTest_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTest *this = (EnTest *) thisx;
    u32 sp2C;
    Gfx *sp28;
    Gfx *temp_a2_2;
    GraphicsContext *temp_v0_2;
    s32 temp_a2;
    u8 temp_v0;
    u32 phi_a2;

    temp_a2 = this->unk208 - 1;
    phi_a2 = (u32) temp_a2;
    if (temp_a2 >= 0x1D) {
        phi_a2 = 0x1DU;
    }
    temp_v0 = this->unk20A;
    if ((temp_v0 == 0xF) || (temp_v0 == 0xE)) {
        sp2C = phi_a2;
        AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual((void *) &D_0406B730), phi_a2);
    } else {
        sp2C = phi_a2;
        AnimatedMat_DrawStep(globalCtx, Lib_SegmentedToVirtual(&D_0406B6A0), phi_a2);
    }
    temp_v0_2 = globalCtx->state.gfxCtx;
    temp_a2_2 = temp_v0_2->polyOpa.d - (((this->unk144.feetPos[0].x->unk1 << 6) + 0xF) & ~0xF);
    temp_v0_2->polyOpa.d = temp_a2_2;
    if (temp_a2_2 != 0) {
        sp28 = temp_a2_2;
        func_8012C2DC(globalCtx->state.gfxCtx);
        func_8018450C(globalCtx, &this->unk144, temp_a2_2, func_808634B8, 0, this);
        func_80863048(&globalCtx->state.gfxCtx, &this->unk20C);
    }
}

