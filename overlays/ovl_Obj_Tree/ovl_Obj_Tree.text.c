void func_80B9A20C(ObjTree *arg0, f32, ?);          /* static */
void func_80B9A220(ObjTree *arg0, GlobalContext *arg1); /* static */
void func_80B9A230(Actor *arg0);                    /* static */
void func_80B9A27C(ObjTree *arg0, ? arg1);          /* static */
void func_80B9A348(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000680;
extern ? D_060007C8;
extern CollisionHeader D_06001B2C;
static ColliderCylinderInit D_80B9A570 = {
    {0xD, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0x100020A, 0, 0}, 0, 1, 1},
    {0x1C, 0x78, 0, {0, 0, 0}},
};
static DamageTable D_80B9A59C = {
    {
        0,
        0xF0,
        0,
        0,
        0,
        0,
        0xF2,
        0x10,
        0xF2,
        0xF1,
        0xF1,
        0,
        0,
        0,
        0xF1,
        0x10,
        0,
        0,
        0,
        0,
        0,
        0,
        0xF0,
        0,
        0xF1,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static CollisionCheckInfoInit2 D_80B9A5BC = {8, 0, 0, 0, 0xFE};

typedef struct ObjTree {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x14];                 /* maybe part of unk144[6]? */
    /* 0x015C */ ColliderCylinder unk15C;           /* inferred */
    /* 0x01A8 */ void (*actionFunc)(ObjTree *, GlobalContext *);
    /* 0x01AC */ f32 unk1AC;                        /* inferred */
    /* 0x01B0 */ s16 unk1B0;                        /* inferred */
    /* 0x01B2 */ s16 unk1B2;                        /* inferred */
    /* 0x01B4 */ s16 unk1B4;                        /* inferred */
    /* 0x01B6 */ char pad1B6[0x2];                  /* maybe part of unk1B4[2]? */
} ObjTree;                                          /* size 0x1B8 */

void ObjTree_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjTree *this = (ObjTree *) thisx;
    CollisionHeader *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;

    sp24 = NULL;
    if ((this->actor.params & 0x8000) != 0) {
        Actor_SetScale(&this->actor, 0.15f);
        this->actor.uncullZoneForward = 4000.0f;
    } else {
        Actor_SetScale(&this->actor, 0.1f);
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        BgCheck_RelocateMeshHeader(&D_06001B2C, &sp24);
        this->unk144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    }
    temp_a1 = &this->unk15C;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B9A570);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B9A59C, &D_80B9A5BC);
    if ((this->actor.params & 0x8000) != 0) {
        this->unk15C.dim.height = 0xDC;
    }
    this->unk1AC = 0.0f;
    this->unk1B0 = 0;
    this->unk1B2 = 0;
    func_80B9A20C(this);
}

void ObjTree_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjTree *this = (ObjTree *) thisx;
    s32 temp_a2;

    if ((this->actor.params & 0x8000) == 0) {
        temp_a2 = this->unk144;
        this = this;
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, temp_a2);
    }
    Collider_DestroyCylinder(globalCtx, this + 0x15C);
}

void func_80B9A20C(ObjTree *arg0) {
    arg0->actionFunc = func_80B9A220;
}

void func_80B9A220(ObjTree *arg0, GlobalContext *arg1) {

}

void func_80B9A230(Actor *arg0) {
    arg0->unk1B4 = 0;
    arg0->unk1B2 = 0x18E3;
    arg0->unk1AC = 546.0f;
    Audio_PlayActorSound2(arg0, 0x2877U);
    arg0->unk1A8 = func_80B9A27C;
}

void func_80B9A27C(ObjTree *arg0, ? arg1) {
    f32 temp_f18;

    if ((s32) arg0->unk1B4 >= 0x51) {
        func_80B9A20C(arg0, 0.0f, 0x3DCC0000);
        return;
    }
    Math_SmoothStepToF(arg0 + 0x1AC, 0.0f, 0.1f, 91.0f, 18.0f);
    arg0->unk1B2 += 0xB6;
    arg0->unk1B0 += arg0->unk1B2;
    arg0->actor.shape.rot.x = (s16) (s32) (Math_SinS(arg0->unk1B0) * arg0->unk1AC);
    temp_f18 = Math_CosS(arg0->unk1B0) * arg0->unk1AC;
    arg0->unk1B4 += 1;
    arg0->actor.shape.rot.z = (s16) (s32) temp_f18;
}

void func_80B9A348(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    Actor *temp_a0;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    temp_a1 = arg0 + 0x15C;
    sp1C = temp_a1;
    temp_a0 = arg0;
    arg0 = arg0;
    Collider_UpdateCylinder(temp_a0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp18 = temp_a1_2;
    CollisionCheck_SetOC(arg1, temp_a1_2, &sp1C->base);
    if (arg0->xzDistToPlayer < 600.0f) {
        arg0 = arg0;
        CollisionCheck_SetAC(arg1, temp_a1_2, &sp1C->base);
        if (arg0->home.rot.y == 1) {
            arg0->home.rot.y = 0;
            func_80B9A230(arg0);
        }
    }
}

void ObjTree_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTree *this = (ObjTree *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B9A348(&this->actor, globalCtx);
}

void ObjTree_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjTree *this = (ObjTree *) thisx;
    s16 sp36;
    s16 sp34;
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    sp36 = (s16) (s32) (f32) this->actor.shape.rot.x;
    sp34 = (s16) (s32) (f32) this->actor.shape.rot.z;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp28 = temp_v0;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_06000680;
    temp_v0_2->words.w0 = 0xDE000000;
    SysMatrix_InsertRotation(sp36, 0, sp34, 1);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_060007C8;
    temp_v0_4->words.w0 = 0xDE000000;
}

