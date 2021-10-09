void func_80ABA8A4(EnEgblock *, GlobalContext *);   /* static */
void func_80ABA988(EnEgblock *, GlobalContext *);   /* static */
void func_80ABA9B8(EnEgblock *, GlobalContext *);   /* static */
void func_80ABAAF4(EnEgblock *arg0, PosRot *arg1, s16 arg2, s16 arg3); /* static */
void func_80ABACB4(EnEgblock *arg0, GlobalContext *arg1); /* static */
void func_80ABAE64(EnEgblock *arg0, GlobalContext *arg1); /* static */
extern ? D_06001698;
extern CollisionHeader D_06001820;
extern ? D_06001918;
extern ? D_06001BF8;

typedef struct EnEgblock {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x58];                 /* maybe part of unk144[23]? */
    /* 0x01A0 */ void (*actionFunc)(EnEgblock *, GlobalContext *);
    /* 0x01A4 */ s16 unk1A4;                        /* inferred */
    /* 0x01A6 */ s16 unk1A6;                        /* inferred */
    /* 0x01A8 */ s16 unk1A8;                        /* inferred */
    /* 0x01AA */ s16 unk1AA;                        /* inferred */
    /* 0x01AC */ s16 unk1AC;                        /* inferred */
    /* 0x01AE */ char pad1AE[0xC06];                /* maybe part of unk1AC[1540]? */
} EnEgblock;                                        /* size 0xDB4 */

void EnEgblock_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEgblock *this = (EnEgblock *) thisx;
    CollisionHeader *sp28;
    s16 temp_v0;

    sp28 = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06001820, &sp28);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp28);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk1AC = 0;
    Actor_SetScale(&this->actor, 0.5f);
    temp_v0 = this->actor.params;
    this->unk1A4 = ((s32) temp_v0 >> 0xC) & 0xF;
    this->unk1A6 = ((s32) temp_v0 >> 7) & 0x1F;
    this->unk1A8 = temp_v0 & 0x7F;
    if (this->unk1A4 == 0) {
        this->actor.colChkInfo.health = 1;
        this->actionFunc = func_80ABA8A4;
        return;
    }
    this->actionFunc = func_80ABA9B8;
}

void EnEgblock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEgblock *this = (EnEgblock *) thisx;
    if (this->actor.colChkInfo.health == 1) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80ABA8A4(EnEgblock *arg0, GlobalContext *arg1) {
    PosRot *temp_s2;
    s32 temp_s0;
    s32 phi_s0;

    temp_s2 = &arg0->actor.world;
    phi_s0 = 0;
    if ((s32) arg0->actor.colChkInfo.health <= 0) {
        do {
            func_80ABAAF4(arg0, temp_s2, 0x1E, (s16) ((phi_s0 & 1) + 1));
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
        } while (temp_s0 != 0x32);
        BgCheck_RemoveActorMesh(arg1, &arg1->colCtx.dyna, arg0->unk144);
        func_800BBDAC(arg1, &arg0->actor, &temp_s2->pos, 30.0f, 0x1E, 10.0f, (s16) 0x64, (s16) 0x1E, (u8) 1);
        arg0->unk1AC = 1;
        arg0->unk1AA = 0x32;
        arg0->actionFunc = func_80ABA988;
    }
}

void func_80ABA988(EnEgblock *arg0, GlobalContext *arg1) {
    if (arg0->unk1AA == 0) {
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_80ABA9B8(EnEgblock *arg0, GlobalContext *arg1) {

}

void EnEgblock_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnEgblock *this = (EnEgblock *) thisx;
    s16 temp_v0;

    this->actionFunc(this, globalCtx);
    temp_v0 = this->unk1AA;
    if (temp_v0 != 0) {
        this->unk1AA = temp_v0 - 1;
    }
    func_80ABACB4(this, globalCtx);
}

void EnEgblock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnEgblock *this = (EnEgblock *) thisx;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_v1;

    func_8012C28C(globalCtx->state.gfxCtx);
    if (this->unk1AC != 1) {
        temp_v1 = globalCtx->state.gfxCtx;
        temp_v0 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v1;
        sp1C = temp_v0;
        sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFA000080;
        temp_v0_3 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w1 = -1;
        temp_v0_3->words.w0 = 0xFB000000;
        temp_v0_4 = temp_v1->polyOpa.p;
        temp_v1->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_06001698;
        temp_v0_4->words.w0 = 0xDE000000;
    }
    func_80ABAE64(this, globalCtx);
}

void func_80ABAAF4(EnEgblock *arg0, PosRot *arg1, s16 arg2, s16 arg3) {
    f32 temp_f18;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_v0;

    phi_s0 = arg0 + 0x1FC;
    phi_v0 = 0;
loop_1:
    temp_v0 = phi_v0 + 1;
    phi_v0 = temp_v0;
    if (phi_s0->unk0 == 0) {
        phi_s0->unk0 = 1U;
        phi_s0->unk4 = (f32) arg1->pos.x;
        phi_s0->unk8 = (s32) arg1->pos.y;
        phi_s0->unkC = (f32) arg1->pos.z;
        phi_s0->unk4 = (f32) (phi_s0->unk4 + randPlusMinusPoint5Scaled(50.0f));
        phi_s0->unkC = (f32) (phi_s0->unkC + randPlusMinusPoint5Scaled(50.0f));
        phi_s0->unk10 = 0xFF;
        phi_s0->unk12 = arg2;
        phi_s0->unk14 = arg3;
        temp_f18 = Rand_ZeroOne() - 0.5f;
        phi_s0->unk28 = -1.0f;
        phi_s0->unk24 = temp_f18;
        phi_s0->unk2C = (f32) (Rand_ZeroOne() - 0.5f);
        phi_s0->unk18 = (f32) (2.0f * (Rand_ZeroOne() - 0.5f));
        phi_s0->unk1C = (f32) ((Rand_ZeroOne() * 10.0f) + 5.0f);
        phi_s0->unk20 = (f32) (2.0f * (Rand_ZeroOne() - 0.5f));
        phi_s0->unk38 = (f32) ((Rand_ZeroFloat(1.0f) * 0.2f) + 0.5f);
        phi_s0->unk30 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk32 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        phi_s0->unk34 = (s16) (s32) randPlusMinusPoint5Scaled(30000.0f);
        return;
    }
    phi_s0 += 0x3C;
    if ((s32) temp_v0 >= 0x32) {
        return;
    }
    goto loop_1;
}

void func_80ABACB4(EnEgblock *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s32 temp_v1;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x1FC;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk0 != 0) {
            if (phi_v0->unk14 != 0) {
                phi_v0->unk30 = (s16) (phi_v0->unk30 - 0x64);
                phi_v0->unk32 = (s16) (phi_v0->unk32 - 0x64);
                phi_v0->unk34 = (s16) (phi_v0->unk34 - 0x64);
            }
            temp_f0 = phi_v0->unk18;
            temp_f2 = phi_v0->unk1C;
            temp_f12 = phi_v0->unk20;
            temp_a0 = phi_v0->unk12;
            phi_v0->unk4 = (f32) (phi_v0->unk4 + temp_f0);
            phi_v0->unk8 = (f32) (phi_v0->unk8 + temp_f2);
            phi_v0->unkC = (f32) (phi_v0->unkC + temp_f12);
            phi_v0->unk18 = (f32) (temp_f0 + phi_v0->unk24);
            phi_v0->unk1C = (f32) (temp_f2 + phi_v0->unk28);
            phi_v0->unk20 = (f32) (temp_f12 + phi_v0->unk2C);
            if (temp_a0 != 0) {
                phi_v0->unk12 = (s16) (temp_a0 - 1);
            } else {
                phi_v0->unk10 = (s16) (phi_v0->unk10 - 0xA);
                if ((s32) phi_v0->unk10 < 0xA) {
                    phi_v0->unk0 = 0U;
                }
            }
        }
        temp_v0 = phi_v0 + 0x3C;
        if (phi_v0->unk3C != 0) {
            if (temp_v0->unk14 != 0) {
                temp_v0->unk34 = (s16) (temp_v0->unk34 - 0x64);
                temp_v0->unk32 = (s16) (temp_v0->unk32 - 0x64);
                temp_v0->unk30 = (s16) (temp_v0->unk30 - 0x64);
            }
            temp_f0_2 = temp_v0->unk18;
            temp_f2_2 = temp_v0->unk1C;
            temp_f12_2 = temp_v0->unk20;
            temp_a0_2 = temp_v0->unk12;
            temp_v0->unk4 = (f32) (temp_v0->unk4 + temp_f0_2);
            temp_v0->unk8 = (f32) (temp_v0->unk8 + temp_f2_2);
            temp_v0->unkC = (f32) (temp_v0->unkC + temp_f12_2);
            temp_v0->unk18 = (f32) (temp_f0_2 + temp_v0->unk24);
            temp_v0->unk1C = (f32) (temp_f2_2 + temp_v0->unk28);
            temp_v0->unk20 = (f32) (temp_f12_2 + temp_v0->unk2C);
            if (temp_a0_2 != 0) {
                temp_v0->unk12 = (s16) (temp_a0_2 - 1);
            } else {
                temp_v0->unk10 = (s16) (temp_v0->unk10 - 0xA);
                if ((s32) temp_v0->unk10 < 0xA) {
                    temp_v0->unk0 = 0;
                }
            }
        }
        phi_v0 = temp_v0 + 0x3C;
    } while (temp_v1 != 0x32);
}

void func_80ABAE64(EnEgblock *arg0, GlobalContext *arg1) {
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f12;
    s16 temp_s3;
    s16 temp_v0;
    void *phi_s0;
    s16 phi_s3;

    temp_a0 = arg1->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s0 = arg0 + 0x1FC;
    phi_s3 = 0;
    do {
        if ((phi_s0->unk0 != 0) && ((temp_v0 = phi_s0->unk14, (temp_v0 == 0)) || (temp_v0 == 1))) {
            SysMatrix_StatePush();
            SysMatrix_InsertTranslation(phi_s0->unk4, phi_s0->unk8, phi_s0->unkC, 0);
            temp_f12 = phi_s0->unk38;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            Matrix_RotateY(phi_s0->unk32, (u8) 1);
            SysMatrix_InsertXRotation_s(phi_s0->unk30, 1);
            SysMatrix_InsertZRotation_s(phi_s0->unk34, 1);
            temp_v0_2 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDA380003;
            temp_v0_2->words.w1 = Matrix_NewMtx(temp_s2);
            temp_v0_3 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w1 = -1;
            temp_v0_3->words.w0 = 0xFA000080;
            temp_v0_4 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = (phi_s0->unk10 & 0xFF) | ~0xFF;
            if (phi_s0->unk14 == 0) {
                temp_v0_5 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) &D_06001918;
                temp_v0_5->words.w0 = 0xDE000000;
            } else {
                temp_v0_6 = temp_s2->polyOpa.p;
                temp_s2->polyOpa.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = (u32) &D_06001BF8;
                temp_v0_6->words.w0 = 0xDE000000;
            }
            SysMatrix_StatePop();
        }
        temp_s3 = phi_s3 + 1;
        phi_s0 += 0x3C;
        phi_s3 = temp_s3;
    } while ((s32) temp_s3 < 0x32);
}

