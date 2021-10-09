void func_80A490E4(EnWizBrock *, GlobalContext *);  /* static */
void func_80A490FC(EnWizBrock *, GlobalContext *);  /* static */
extern Gfx D_060010E8;
extern CollisionHeader D_06001690;
extern ? D_06005870;
extern void D_06005C64;
static s16 D_80A495B0 = 0;

typedef struct EnWizBrock {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x58];                 /* maybe part of unk144[23]? */
    /* 0x01A0 */ void (*actionFunc)(EnWizBrock *, GlobalContext *);
    /* 0x01A4 */ s16 unk1A4;                        /* inferred */
    /* 0x01A6 */ s16 unk1A6;                        /* inferred */
    /* 0x01A8 */ s16 unk1A8;                        /* inferred */
    /* 0x01AA */ s16 unk1AA;                        /* inferred */
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
} EnWizBrock;                                       /* size 0x1B0 */

void EnWizBrock_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnWizBrock *this = (EnWizBrock *) thisx;
    CollisionHeader *sp28;

    sp28 = NULL;
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck_RelocateMeshHeader(&D_06001690, &sp28);
    this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp28);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.colChkInfo.health = 3;
    this->unk1A6 = 0;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk1A8 = D_80A495B0;
    D_80A495B0 += 1;
    this->actionFunc = func_80A490E4;
    this->actor.scale.x = 0.01f;
    this->actor.scale.y = 0.01f;
    this->actor.scale.z = 0.01f;
    this->unk1AC = 255.0f;
}

void EnWizBrock_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnWizBrock *this = (EnWizBrock *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80A490E4(EnWizBrock *arg0, GlobalContext *arg1) {
    arg0->actionFunc = func_80A490FC;
}

void func_80A490FC(EnWizBrock *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0_2;
    GameInfo *temp_v0_3;
    GameInfo *temp_v0_4;
    u8 temp_v0;

    if (arg0->unk1AA == 0) {
        temp_v0 = arg0->actor.colChkInfo.health;
        if (temp_v0 != 3) {
            arg0->unk1AA = (s16) temp_v0;
        }
    }
    if (arg0->actor.colChkInfo.health == 0) {
        arg0->unk1A4 += 1;
        temp_v0_2 = gGameInfo;
        if ((temp_v0_2->data[2449] + 0x1E) < (s32) arg0->unk1A4) {
            Math_ApproachZeroF(&arg0->actor.scale.y, ((f32) temp_v0_2->data[2450] / 10.0f) + 0.3f, ((f32) temp_v0_2->data[2451] / 10000.0f) + 0.003f);
            temp_v0_3 = gGameInfo;
            Math_ApproachZeroF(&arg0->unk1AC, ((f32) temp_v0_3->data[2452] / 10.0f) + 1.0f, ((f32) temp_v0_3->data[2453] / 10.0f) + 35.0f);
            temp_v0_4 = gGameInfo;
            Math_ApproachF(&arg0->actor.scale.x, ((f32) temp_v0_4->data[2454] / 100.0f) + 0.02f, ((f32) temp_v0_4->data[2455] / 100.0f) + 0.2f, ((f32) temp_v0_4->data[2456] / 1000.0f) + 0.002f);
            arg0->actor.scale.z = arg0->actor.scale.x;
            if (arg0->actor.scale.y < 0.001f) {
                Actor_MarkForDeath(&arg0->actor);
            }
        }
    }
}

void EnWizBrock_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnWizBrock *this = (EnWizBrock *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnWizBrock_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnWizBrock *this = (EnWizBrock *) thisx;
    GraphicsContext *sp54;
    GraphicsContext *sp3C;
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_t0;

    func_8012C28C(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_t0 = globalCtx->state.gfxCtx;
    sp54 = temp_t0;
    SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, 0);
    Matrix_Scale(this->actor.scale.x, this->actor.scale.y, this->actor.scale.z, 1);
    if (this->actor.colChkInfo.health != 0) {
        sp54 = temp_t0;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v1 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v1 + 8;
        temp_v1->words.w1 = 0;
        temp_v1->words.w0 = 0xE7000000;
        temp_v1_2 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v1_2 + 8;
        temp_v1_2->words.w1 = -1;
        temp_v1_2->words.w0 = 0xFB000000;
        func_800BDFC0(globalCtx, &D_060010E8);
    } else {
        sp54 = temp_t0;
        Scene_SetRenderModeXlu(globalCtx, 1, 2U);
        temp_v1_3 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w1 = 0;
        temp_v1_3->words.w0 = 0xE7000000;
        temp_v1_4 = temp_t0->polyXlu.p;
        temp_t0->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFB000000;
        temp_v1_4->words.w1 = ((s32) this->unk1AC & 0xFF) | ~0xFF;
        func_800BE03C(globalCtx, &D_060010E8);
    }
    if (this->unk1AA != 0) {
        temp_a2 = globalCtx->state.gfxCtx;
        sp3C = temp_a2;
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06005C64));
        temp_v0 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0 + 8;
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = -1;
        temp_v0_2->words.w0 = 0xFA008080;
        if (this->unk1AA == 1) {
            temp_v0_3 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v0_3->words.w1 = ((s32) this->unk1AC & 0xFF) | 0xFF006400;
        } else {
            temp_v0_4 = temp_a2->polyXlu.p;
            temp_a2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xFB000000;
            temp_v0_4->words.w1 = ((s32) this->unk1AC & 0xFF) | 0x3200FF00;
        }
        temp_v0_5 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        sp3C = temp_a2;
        sp24 = temp_v0_5;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_a2->polyXlu.p;
        temp_a2->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = (u32) &D_06005870;
        temp_v0_6->words.w0 = 0xDE000000;
    }
}

