typedef struct ObjTree {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ char pad_148[0x14];                 /* maybe part of unk_144[6]? */
    /* 0x15C */ ColliderCylinder unk_15C;           /* inferred */
    /* 0x1A8 */ void (*actionFunc)(ObjTree *, GlobalContext *);
    /* 0x1AC */ f32 unk_1AC;                        /* inferred */
    /* 0x1B0 */ s16 unk_1B0;                        /* inferred */
    /* 0x1B2 */ s16 unk_1B2;                        /* inferred */
    /* 0x1B4 */ s16 unk_1B4;                        /* inferred */
    /* 0x1B6 */ char pad_1B6[0x2];
} ObjTree;                                          /* size = 0x1B8 */

struct _mips2c_stack_ObjTree_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjTree_Draw {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x8];                    /* maybe part of sp28[3]? */
    /* 0x34 */ s16 sp34;                            /* inferred */
    /* 0x36 */ s16 sp36;                            /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_ObjTree_Init {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ CollisionHeader *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_ObjTree_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9A20C {};              /* size 0x0 */

struct _mips2c_stack_func_80B9A220 {};              /* size 0x0 */

struct _mips2c_stack_func_80B9A230 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B9A27C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B9A348 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ CollisionCheckContext *sp18;         /* inferred */
    /* 0x1C */ ColliderCylinder *sp1C;              /* inferred */
};                                                  /* size = 0x20 */

void func_80B9A20C(ObjTree *arg0, f32, ?);          /* static */
void func_80B9A220(s32 arg0, ? arg1);               /* static */
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

void ObjTree_Init(Actor *thisx, GlobalContext *globalCtx) {
    CollisionHeader *sp24;
    ColliderCylinder *sp20;
    ColliderCylinder *temp_a1;
    ObjTree *this = (ObjTree *) thisx;

    sp24 = NULL;
    if ((this->actor.params & 0x8000) != 0) {
        Actor_SetScale((Actor *) this, 0.15f);
        this->actor.uncullZoneForward = 4000.0f;
    } else {
        Actor_SetScale((Actor *) this, 0.1f);
        BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
        BgCheck_RelocateMeshHeader(&D_06001B2C, &sp24);
        this->unk_144 = BgCheck_AddActorMesh(globalCtx, &globalCtx->colCtx.dyna, (DynaPolyActor *) this, sp24);
    }
    temp_a1 = &this->unk_15C;
    sp20 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B9A570);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B9A59C, &D_80B9A5BC);
    if ((this->actor.params & 0x8000) != 0) {
        this->unk_15C.dim.height = 0xDC;
    }
    this->unk_1AC = 0.0f;
    this->unk_1B0 = 0;
    this->unk_1B2 = 0;
    func_80B9A20C(this);
}

void ObjTree_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_a2;
    ObjTree *this = (ObjTree *) thisx;

    if ((this->actor.params & 0x8000) == 0) {
        temp_a2 = this->unk_144;
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
    arg0->unk_1B4 = 0;
    arg0->unk_1B2 = 0x18E3;
    arg0[1].velocity.y = 546.0f;
    Audio_PlayActorSound2(arg0, 0x2877U);
    arg0[1].velocity.x = (bitwise f32) func_80B9A27C;
}

void func_80B9A27C(ObjTree *arg0, ? arg1) {
    f32 temp_f18;

    if ((s32) arg0->unk_1B4 >= 0x51) {
        func_80B9A20C(arg0, 0.0f, 0x3DCC0000);
        return;
    }
    Math_SmoothStepToF(arg0 + 0x1AC, 0.0f, 0.1f, 91.0f, 18.0f);
    arg0->unk_1B2 += 0xB6;
    arg0->unk_1B0 += arg0->unk_1B2;
    arg0->actor.shape.rot.x = (s16) (s32) (Math_SinS(arg0->unk_1B0) * arg0->unk_1AC);
    temp_f18 = Math_CosS(arg0->unk_1B0) * arg0->unk_1AC;
    arg0->unk_1B4 += 1;
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
    CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp1C);
    if (arg0->xzDistToPlayer < 600.0f) {
        arg0 = arg0;
        CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp1C);
        if (arg0->home.rot.y == 1) {
            arg0->home.rot.y = 0;
            func_80B9A230(arg0);
        }
    }
}

void ObjTree_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjTree *this = (ObjTree *) thisx;
    this->actionFunc(this, globalCtx);
    func_80B9A348((Actor *) this, globalCtx);
}

void ObjTree_Draw(Actor *thisx, GlobalContext *globalCtx) {
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
    ObjTree *this = (ObjTree *) thisx;

    sp36 = (s16) (s32) (f32) this->actor.shape.rot.x;
    sp34 = (s16) (s32) (f32) this->actor.shape.rot.z;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp28 = temp_v0;
    sp28->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06000680;
    temp_v0_2->words.w0 = 0xDE000000;
    SysMatrix_InsertRotation(sp36, 0, sp34, 1);
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_060007C8;
    temp_v0_4->words.w0 = 0xDE000000;
}
