typedef struct ObjWind {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s8 unk144;                          /* inferred */
    /* 0x145 */ char pad145[0x3];                   /* maybe part of unk144[4]? */
} ObjWind;                                          /* size = 0x148 */

struct _mips2c_stack_ObjWind_Destroy {};            /* size 0x0 */

struct _mips2c_stack_ObjWind_Draw {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad24[0xC];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjWind_Init {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ WaterBox *sp2C;                      /* inferred */
    /* 0x30 */ char pad30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjWind_Update {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ PosRot *sp2C;                        /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ f32 sp50;                            /* inferred */
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ ? sp60;                              /* inferred */
    /* 0x60 */ char pad60[0xC];
    /* 0x6C */ ? sp6C;                              /* inferred */
    /* 0x6C */ char pad6C[0xC];
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ Actor *sp84;                         /* inferred */
    /* 0x88 */ char pad88[0x8];
};                                                  /* size = 0x90 */

f32 func_80179A44(? *, PosRot *, ? *, PosRot *);    /* extern */
extern ? D_0407E8C0;
static InitChainEntry D_80B24480[3];                /* unable to generate initializer */
static ? D_80B2448C;                                /* unable to generate initializer */
static s32 D_80B245CC = 0xFFFFFFFF;

void ObjWind_Init(ObjWind *this, GlobalContext *globalCtx) {
    WaterBox *sp2C;
    f32 sp28;
    ObjWind *this = (ObjWind *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80B24480);
    if ((func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp28, &sp2C) != 0) && (this->actor.world.pos.y < sp28)) {
        this->unk144 = 1;
    }
}

void ObjWind_Destroy(ObjWind *this, GlobalContext *globalCtx) {
    ObjWind *this = (ObjWind *) thisx;

}

void ObjWind_Update(ObjWind *this, GlobalContext *globalCtx) {
    Actor *sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    ? sp6C;
    ? sp60;
    f32 sp54;
    f32 sp50;
    f32 sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp30;
    PosRot *sp2C;
    GameInfo *temp_v0;
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    GameInfo *temp_v0_5;
    PosRot *temp_a3_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f2;
    f32 temp_f4;
    s16 temp_a3;
    s32 temp_a1;
    void *temp_s1;
    f32 phi_f12;
    ObjWind *this = (ObjWind *) thisx;

    temp_v0 = gGameInfo;
    temp_a3 = temp_v0->data[757];
    temp_s1 = &D_80B2448C + ((((s32) this->actor.params >> 7) & 0x1F) * 0xA);
    if (D_80B245CC != temp_a3) {
        if (((s32) temp_a3 >= 0) && ((s32) temp_a3 < 0x20)) {
            temp_v0->data[752] = *(&D_80B2448C + (temp_a3 * 0xA));
            temp_v0_2 = gGameInfo;
            temp_v0_2->data[753] = (&D_80B2448C + (temp_v0_2->data[757] * 0xA))->unk2;
            temp_v0_3 = gGameInfo;
            temp_v0_3->data[754] = (&D_80B2448C + (temp_v0_3->data[757] * 0xA))->unk4;
            temp_v0_4 = gGameInfo;
            temp_v0_4->data[755] = (&D_80B2448C + (temp_v0_4->data[757] * 0xA))->unk6;
            temp_v0_5 = gGameInfo;
            temp_v0_5->data[756] = (&D_80B2448C + (temp_v0_5->data[757] * 0xA))->unk8;
            D_80B245CC = (s32) gGameInfo->data[757];
            goto block_5;
        }
    } else {
        *(&D_80B2448C + (temp_a3 * 0xA)) = temp_v0->data[752];
        (&D_80B2448C + (temp_v0->data[757] * 0xA))->unk2 = (s16) temp_v0->data[753];
        (&D_80B2448C + (temp_v0->data[757] * 0xA))->unk4 = (s16) temp_v0->data[754];
        (&D_80B2448C + (temp_v0->data[757] * 0xA))->unk6 = (s16) temp_v0->data[755];
        (&D_80B2448C + (temp_v0->data[757] * 0xA))->unk8 = (s16) temp_v0->data[756];
block_5:
    }
    temp_a1 = this->actor.params & 0x7F;
    if ((temp_a1 == 0x7F) || (Flags_GetSwitch(globalCtx, temp_a1) == 0)) {
        sp84 = globalCtx->actorCtx.actorList[2].first;
        Math_Vec3f_Copy((Vec3f *) &sp6C, (Vec3f *) &this->actor.world);
        sp7C = Math_CosS(this->actor.shape.rot.x);
        sp50 = Math_SinS(this->actor.shape.rot.x);
        sp78 = Math_SinS(this->actor.shape.rot.y) * sp50;
        temp_f10 = Math_CosS(this->actor.shape.rot.y) * sp50;
        temp_a3_2 = &sp84->world;
        sp2C = temp_a3_2;
        sp80 = temp_f10;
        temp_f0 = func_80179A44(&sp6C, temp_a3_2, &sp60, temp_a3_2);
        sp4C = temp_f0;
        if ((temp_f0 >= 0.0f) && (temp_f0 < (f32) temp_s1->unk0)) {
            temp_f0_2 = Math_Vec3f_DistXYZAndStoreDiff((Vec3f *) temp_a3_2, (Vec3f *) &sp60, (Vec3f *) &sp54);
            sp50 = temp_f0_2;
            temp_f14 = (f32) temp_s1->unk2;
            if (temp_f0_2 < temp_f14) {
                temp_f16 = temp_f0_2 / temp_f14;
                temp_f2 = sp4C / (f32) temp_s1->unk0;
                temp_f12 = 1.0f - temp_f2;
                sp40 = ((f32) temp_s1->unk4 / 100.0f) * ((temp_f12 * (1.0f - temp_f16)) + ((f32) temp_s1->unk8 / 100.0f));
                phi_f12 = temp_f12;
                if (temp_f2 > 0.8f) {
                    phi_f12 = 1.0f - 1.0f;
                }
                sp3C = ((f32) temp_s1->unk6 / 100.0f) * (temp_f16 * phi_f12);
                if (temp_f0_2 != 0.0f) {
                    sp50 = 1.0f / temp_f0_2;
                }
                temp_f4 = sp3C * sp50;
                sp3C = temp_f4;
                temp_f14_2 = (sp78 * sp40) + (sp54 * temp_f4);
                temp_f16_2 = (sp7C * sp40) + (sp58 * temp_f4);
                sp34 = temp_f16_2;
                temp_f12_2 = (sp80 * sp40) + (sp5C * temp_f4);
                sp84->unkB2C = sqrtf((temp_f14_2 * temp_f14_2) + (temp_f16_2 * temp_f16_2) + (temp_f12_2 * temp_f12_2));
                sp38 = temp_f14_2;
                sp30 = temp_f12_2;
                sp84->unkB32 = Math_FAtan2F(temp_f12_2, temp_f14_2);
                sp84->unkB30 = Math_FAtan2F(sqrtf((sp38 * sp38) + (sp30 * sp30)), sp34);
            }
        }
    }
    this->actor.scale.x = (f32) temp_s1->unk2 / 50.0f;
    this->actor.scale.z = (f32) temp_s1->unk2 / 50.0f;
    this->actor.scale.y = (f32) temp_s1->unk0 / 400.0f;
}

void ObjWind_Draw(ObjWind *this, GlobalContext *globalCtx) {
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    ObjWind *this = (ObjWind *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual((void *) &D_0407F218));
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_0407E8C0;
    temp_v0_2->words.w0 = 0xDE000000;
}
