void func_80B66A7C(ObjHariko *arg0);                /* static */
void func_80B66AA0(ObjHariko *arg0);                /* static */
void func_80B66B78(ObjHariko *arg0);                /* static */
extern ? D_06000080;
extern ? D_06000110;

typedef struct ObjHariko {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ void (*actionFunc)(ObjHariko *, GlobalContext *);
    /* 0x0148 */ f32 unk148;                        /* inferred */
    /* 0x014C */ s16 unk14C;                        /* inferred */
    /* 0x014E */ s16 unk14E;                        /* inferred */
    /* 0x0150 */ s16 unk150;                        /* inferred */
    /* 0x0152 */ s16 unk152;                        /* inferred */
    /* 0x0154 */ s16 unk154;                        /* inferred */
    /* 0x0156 */ char pad156[0x2];                  /* maybe part of unk154[2]? */
} ObjHariko;                                        /* size 0x158 */

void ObjHariko_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjHariko *this = (ObjHariko *) thisx;
    Actor_SetScale(&this->actor, 0.1f);
    this->unk14C = 0;
    this->unk14E = 0;
    this->unk150 = 0;
    this->unk152 = 0;
    this->unk148 = 0.0f;
    func_80B66A7C(this);
}

void ObjHariko_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjHariko *this = (ObjHariko *) thisx;

}

void func_80B66A7C(ObjHariko *arg0) {
    arg0->actionFunc = func_80B66A90;
}

void func_80B66A90(ObjHariko *this, GlobalContext *globalCtx) {

}

void func_80B66AA0(ObjHariko *arg0) {
    arg0->unk154 = 0;
    arg0->actionFunc = func_80B66AC4;
    arg0->unk148 = 2730.0f;
}

void func_80B66AC4(ObjHariko *this, GlobalContext *globalCtx) {
    this->unk152 += 0x1555;
    this->unk14C = (s16) (s32) (Math_SinS(this->unk152) * this->unk148);
    this->unk14E = (s16) (s32) (Math_CosS(this->unk152) * this->unk148);
    Math_SmoothStepToF(&this->unk148, 0.0f, 0.5f, 18.0f, 18.0f);
    if (this->unk148 < 182.0f) {
        func_80B66A7C(this);
    }
}

void func_80B66B78(ObjHariko *arg0) {
    if (Quake_NumActiveQuakes() != 0) {
        func_80B66AA0(arg0);
    }
}

void ObjHariko_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjHariko *this = (ObjHariko *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B66B78(this);
}

void ObjHariko_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjHariko *this = (ObjHariko *) thisx;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_StatePush();
    SysMatrix_InsertXRotation_s(this->unk14C, 1);
    Matrix_RotateY(this->unk14E, 1U);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp20 = temp_v0;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000080;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_06000110;
    temp_v0_3->words.w0 = 0xDE000000;
    SysMatrix_StatePop();
}

