typedef struct ObjLupygamelift {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk144;                         /* inferred */
    /* 0x148 */ char pad148[0x14];                  /* maybe part of unk144[6]? */
    /* 0x15C */ void (*actionFunc)(ObjLupygamelift *, GlobalContext *);
    /* 0x160 */ f32 unk160;                         /* inferred */
    /* 0x164 */ s32 unk164;                         /* inferred */
    /* 0x168 */ s32 unk168;                         /* inferred */
    /* 0x16C */ void *unk16C;                       /* inferred */
    /* 0x170 */ s16 unk170;                         /* inferred */
    /* 0x172 */ char pad172[0x2];
} ObjLupygamelift;                                  /* size = 0x174 */

struct _mips2c_stack_ObjLupygamelift_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLupygamelift_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjLupygamelift_Init {
    /* 0x00 */ char pad0[0x4C];
    /* 0x4C */ ActorContext *sp4C;                  /* inferred */
    /* 0x50 */ char pad50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_ObjLupygamelift_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF0394 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF04BC {};              /* size 0x0 */

struct _mips2c_stack_func_80AF04D8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AF0514 {};              /* size 0x0 */

struct _mips2c_stack_func_80AF0530 {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

void func_80AF0394(void *arg0);                     /* static */
void func_80AF04BC(ObjLupygamelift *arg0);          /* static */
void func_80AF04D8(void *arg0, ? arg1);             /* static */
void func_80AF0514(void *arg0);                     /* static */
void func_80AF0530(void *arg0, ? arg1);             /* static */
extern CollisionHeader D_060048D0;
extern Gfx D_060071B8;
static InitChainEntry D_80AF0740[4];                /* unable to generate initializer */
static f32 D_80AF0750 = 100.0f;
static f32 D_80AF0754 = 255.0f;
static f32 D_80AF0758 = 5.0f;
static f32 D_80AF075C = 10.0f;
static f32 D_80AF0760 = -240.0f;
static f32 D_80AF0764 = 30.0f;

void ObjLupygamelift_Init(ObjLupygamelift *this, GlobalContext *globalCtx) {
    ActorContext *sp4C;
    ActorContext *temp_a0;
    Path *temp_v1;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_t2;
    u8 temp_t3;
    s32 phi_v0;
    ObjLupygamelift *this = (ObjLupygamelift *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80AF0740);
    this->actor.shape.rot.x = 0;
    this->actor.world.rot.x = 0;
    this->actor.shape.rot.z = 0;
    this->actor.world.rot.z = 0;
    this->unk170 = 0;
    this->actor.scale.y = 0.15f;
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 0.0f, 0.0f, 0.0f, 4U);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B4024, 0.0f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 1);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_060048D0);
    this->unk160 = (f32) this->actor.home.rot.z * 0.1f;
    temp_f0 = this->unk160;
    if (temp_f0 < 0.0f) {
        this->unk160 = -temp_f0;
    }
    temp_v0 = this->actor.params;
    this->actor.home.rot.x = 0;
    this->actor.home.rot.y = 0;
    this->actor.home.rot.z = 0;
    temp_t2 = ((s32) temp_v0 >> 7) & 0x1F;
    this->unk168 = temp_t2;
    temp_v1 = &globalCtx->setupPathList[temp_v0 & 0x7F];
    temp_t3 = temp_v1->count;
    this->unk164 = (s32) temp_t3;
    if (temp_t2 >= (s32) temp_t3) {
        this->unk168 = 0;
    }
    this->unk16C = Lib_SegmentedToVirtual((void *) temp_v1->points);
    temp_a0 = &globalCtx->actorCtx;
    sp4C = temp_a0;
    Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 0x183, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) (s32) this->actor.shape.rot.x, (s16) (s32) this->actor.shape.rot.y, (s16) (s32) this->actor.shape.rot.z, 0);
    phi_v0 = 0;
    if ((((s32) this->actor.params >> 0xC) & 1) != 0) {
        phi_v0 = 1;
    }
    Actor_Spawn(temp_a0, globalCtx, 0x1D2, this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) phi_v0);
    func_80AF04BC(this);
}

void ObjLupygamelift_Destroy(ObjLupygamelift *this, GlobalContext *globalCtx) {
    ObjLupygamelift *this = (ObjLupygamelift *) thisx;
    BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
}

void func_80AF0394(void *arg0) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 phi_f14;

    temp_f0 = D_80AF0760;
    temp_f12 = arg0->unk28 - temp_f0;
    if (temp_f12 < 0.0f) {
        phi_f14 = 0.0f;
    } else {
        temp_f2 = D_80AF0764 - temp_f0;
        if (temp_f2 < temp_f12) {
            phi_f14 = 1.0f;
        } else {
            phi_f14 = temp_f12 / temp_f2;
        }
    }
    temp_f0_2 = D_80AF0754;
    temp_f2_2 = D_80AF075C;
    arg0->unkD0 = (s8) (u32) (temp_f0_2 - (phi_f14 * (temp_f0_2 - D_80AF0750)));
    arg0->unkCC = (f32) (temp_f2_2 - (phi_f14 * (temp_f2_2 - D_80AF0758)));
}

void func_80AF04BC(ObjLupygamelift *arg0) {
    arg0->unk170 = 5;
    arg0->actionFunc = func_80AF04D8;
}

void func_80AF04D8(ObjLupygamelift *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk170;
    if (temp_v0 == 0) {
        func_80AF0514();
        return;
    }
    arg0->unk170 = temp_v0 - 1;
}

void func_80AF0514(void *arg0) {
    arg0->unk15C = func_80AF0530;
    arg0->unk70 = (f32) arg0->unk160;
}

void func_80AF0530(void *arg0, ? arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 *temp_a1;
    f32 temp_f0;
    s32 temp_v0;
    void *temp_v0_2;

    temp_a1 = &sp30;
    sp30 = (f32) *(arg0->unk16C + (arg0->unk168 * 6));
    sp34 = (f32) (arg0->unk16C + (arg0->unk168 * 6))->unk2;
    sp38 = (f32) (arg0->unk16C + (arg0->unk168 * 6))->unk4;
    temp_f0 = Math_Vec3f_StepTo(arg0 + 0x24, (Vec3f *) temp_a1, arg0->unk70);
    if (temp_f0 > 30.0f) {
        Math_SmoothStepToF(arg0 + 0x70, arg0->unk160, 0.5f, 5.0f, 0.1f);
    } else if (temp_f0 > 0.0f) {
        Math_SmoothStepToF(arg0 + 0x70, 5.0f, 0.5f, 5.0f, 1.0f);
    } else {
        temp_v0 = arg0->unk168;
        if (temp_v0 < (arg0->unk164 - 1)) {
            arg0->unk168 = (s32) (temp_v0 + 1);
        } else {
            arg0->unk168 = 0;
        }
    }
    temp_v0_2 = arg0->unk124;
    if (temp_v0_2->unk138 == 0) {
        arg0->unk124 = NULL;
    } else {
        temp_v0_2->unk24 = (f32) arg0->unk24;
        arg0->unk124->unk28 = (f32) arg0->unk28;
        arg0->unk124->unk2C = (f32) arg0->unk2C;
    }
    func_80AF0394(arg0);
}

void ObjLupygamelift_Update(ObjLupygamelift *this, GlobalContext *globalCtx) {
    ObjLupygamelift *this = (ObjLupygamelift *) thisx;
    this->actionFunc(this, globalCtx);
}

void ObjLupygamelift_Draw(ObjLupygamelift *this, GlobalContext *globalCtx) {
    ObjLupygamelift *this = (ObjLupygamelift *) thisx;
    func_800BDFC0(globalCtx, &D_060071B8);
}
