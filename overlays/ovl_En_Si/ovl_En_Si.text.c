typedef struct EnSi {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnSi *, GlobalContext *);
    /* 0x148 */ ColliderSphere unk148;              /* inferred */
    /* 0x15B */ u8 unk15B;                          /* overlap; inferred */
    /* 0x15C */ char pad15C[0x44];                  /* maybe part of unk15B[69]? */
} EnSi;                                             /* size = 0x1A0 */

struct _mips2c_stack_EnSi_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSi_Draw {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnSi_Init {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderSphere *sp20;                /* inferred */
    /* 0x24 */ char pad24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnSi_Update {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098CA20 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098CAD0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8098CB70 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8098CBDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

void func_8098CA20(EnSi *arg0, GlobalContext *arg1); /* static */
void func_8098CAD0(void *arg0, GlobalContext *arg1); /* static */
static ColliderSphereInit D_8098CD80 = {
    {0xA, 0, 9, 0x3D, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {0, {{0, 0, 0}, 0xA}, 0x64},
};
static CollisionCheckInfoInit2 D_8098CDAC = {1, 0, 0, 0, 0xFF};
static DamageTable D_8098CDB8 = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};

void func_8098CA20(EnSi *arg0, GlobalContext *arg1) {
    Collider *temp_a2;

    temp_a2 = arg0 + 0x148;
    arg0->unk148.dim.worldSphere.center.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk148.dim.worldSphere.center.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk148.dim.worldSphere.center.z = (s16) (s32) arg0->actor.world.pos.z;
    arg0->unk148.dim.worldSphere.radius = (s16) (s32) ((f32) arg0->unk148.dim.modelSphere.radius * arg0->unk148.dim.scale);
    if ((s32) arg0->actor.colChkInfo.health > 0) {
        arg0 = arg0;
        CollisionCheck_SetAC(arg1, arg1 + 0x18884, temp_a2);
    }
    CollisionCheck_SetOC(arg1, &arg1->colChkCtx, arg0 + 0x148);
}

void func_8098CAD0(void *arg0, GlobalContext *arg1) {
    s32 temp_a2;

    temp_a2 = (s32) (arg0->unk1C & 0xFC) >> 2;
    if ((temp_a2 < 0x20) && (temp_a2 >= 0)) {
        Actor_SetChestFlag(arg1, (u32) temp_a2);
    }
    Item_Give(arg1, 0x6EU);
    if (func_8012F22C(arg1->sceneNum) >= 0x1E) {
        func_801518B0(arg1, 0xFCU, NULL);
        func_801A3098(0x922U);
        return;
    }
    func_801518B0(arg1, 0x52U, NULL);
    func_801A3098(0x39U);
}

void func_8098CB70(EnSi *this, GlobalContext *globalCtx) {
    if ((this->actor.flags & 0x2000) == 0x2000) {
        this->actionFunc = func_8098CBDC;
        goto block_4;
    }
    if ((this->unk15B & 1) != 0) {
        func_8098CAD0();
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_4:
    this->actor.shape.rot.y += 0x38E;
}

void func_8098CBDC(EnSi *this, GlobalContext *globalCtx) {
    if ((this->actor.flags & 0x2000) != 0x2000) {
        func_8098CAD0();
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnSi_Init(EnSi *this, GlobalContext *globalCtx) {
    ColliderSphere *sp20;
    ColliderSphere *temp_a1;
    EnSi *this = (EnSi *) thisx;

    temp_a1 = &this->unk148;
    sp20 = temp_a1;
    Collider_InitSphere(globalCtx, temp_a1);
    Collider_SetSphere(globalCtx, temp_a1, (Actor *) this, &D_8098CD80);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8098CDB8, &D_8098CDAC);
    Actor_SetScale((Actor *) this, 0.25f);
    this->actionFunc = func_8098CB70;
}

void EnSi_Destroy(EnSi *this, GlobalContext *globalCtx) {
    EnSi *this = (EnSi *) thisx;
    Collider_DestroySphere(globalCtx, &this->unk148);
}

void EnSi_Update(EnSi *this, GlobalContext *globalCtx) {
    EnSi *this = (EnSi *) thisx;
    this->actionFunc(this, globalCtx);
    func_8098CA20(this, globalCtx);
    Actor_SetHeight((Actor *) this, 0.0f);
}

void EnSi_Draw(EnSi *this, GlobalContext *globalCtx) {
    EnSi *this = (EnSi *) thisx;
    func_800B8118((Actor *) this, globalCtx, 0);
    func_800B8050((Actor *) this, globalCtx, 0);
    GetItem_Draw(globalCtx, 0x56);
}
