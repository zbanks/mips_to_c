f32 func_80179A44(Vec3f *, PosRot *, Vec3f *, PosRot *); /* extern */
extern ? D_0407E8C0;
static InitChainEntry D_80B24480;                   /* unable to generate initializer */
static ? D_80B2448C;                                /* unable to generate initializer */
static s32 D_80B245CC = 0xFFFFFFFF;



void ObjWind_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjWind *this = (ObjWind *) thisx;
    WaterBox *sp2C;
    f32 sp28;

    Actor_ProcessInitChain(&this->actor, &D_80B24480);
    if ((func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp28, &sp2C) != 0) && (this->actor.world.pos.y < sp28)) {
        this->unk144 = 1;
    }
}

void ObjWind_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjWind *this = (ObjWind *) thisx;

}

void ObjWind_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjWind *this = (ObjWind *) thisx;
    Actor *sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    Vec3f sp6C;
    Vec3f sp60;
    Vec3f sp54;
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
        Math_Vec3f_Copy(&sp6C, &this->actor.world.pos);
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
            temp_f0_2 = Math_Vec3f_DistXYZAndStoreDiff(&temp_a3_2->pos, &sp60, &sp54);
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
                temp_f14_2 = (sp78 * sp40) + (sp54.x * temp_f4);
                temp_f16_2 = (sp7C * sp40) + (sp54.y * temp_f4);
                sp34 = temp_f16_2;
                temp_f12_2 = (sp80 * sp40) + (sp54.z * temp_f4);
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

void ObjWind_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjWind *this = (ObjWind *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

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

