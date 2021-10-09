typedef struct EnHonotrap {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnHonotrap *, GlobalContext *);
    /* 0x148 */ ColliderCylinder unk148;            /* inferred */
    /* 0x194 */ char pad194[0x8C];                  /* maybe part of unk148[2]? */
    /* 0x220 */ s16 unk220;                         /* inferred */
    /* 0x222 */ s16 unk222;                         /* inferred */
    /* 0x224 */ char pad224[0x4];                   /* maybe part of unk222[3]? */
    /* 0x228 */ f32 unk228;                         /* inferred */
    /* 0x22C */ f32 unk22C;                         /* inferred */
    /* 0x230 */ f32 unk230;                         /* inferred */
    /* 0x234 */ f32 unk234;                         /* inferred */
    /* 0x238 */ char pad238[0x4];
    /* 0x23C */ f32 unk23C;                         /* inferred */
    /* 0x240 */ char pad240[0x84];                  /* maybe part of unk23C[34]? */
} EnHonotrap;                                       /* size = 0x2C4 */

struct _mips2c_stack_EnHonotrap_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnHonotrap_Draw {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad20[0x8];                     /* maybe part of sp1C[3]? */
    /* 0x28 */ GraphicsContext *sp28;               /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnHonotrap_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnHonotrap_Update {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8092E510 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ CollisionCheckContext *sp24;         /* inferred */
    /* 0x28 */ char pad28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8092E5A4 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092E638 {
    /* 0x00 */ char pad0[0x70];
    /* 0x70 */ ? sp70;                              /* inferred */
    /* 0x70 */ char pad70[0xC];
    /* 0x7C */ ? sp7C;                              /* inferred */
    /* 0x7C */ char pad7C[0xC];
    /* 0x88 */ ? sp88;                              /* inferred */
    /* 0x88 */ char pad88[0x20];
};                                                  /* size = 0xA8 */

struct _mips2c_stack_func_8092E840 {
    /* 0x00 */ char pad0[0x20];
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8092E988 {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_8092EBC0 {};              /* size 0x0 */

struct _mips2c_stack_func_8092EBDC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092EC9C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8092ECF0 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ char pad44[0x4];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_8092EDC0 {};              /* size 0x0 */

struct _mips2c_stack_func_8092EDD8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092EE08 {};              /* size 0x0 */

struct _mips2c_stack_func_8092EE1C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092EE68 {};              /* size 0x0 */

struct _mips2c_stack_func_8092EE90 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092EF3C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8092EF98 {
    /* 0x00 */ char pad0[0x44];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_8092F05C {};              /* size 0x0 */

struct _mips2c_stack_func_8092F074 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092F0A4 {};              /* size 0x0 */

struct _mips2c_stack_func_8092F0B8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092F0F8 {};              /* size 0x0 */

struct _mips2c_stack_func_8092F10C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092F1A0 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092F208 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_8092F34C {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8092F3D8 {
    /* 0x00 */ char pad0[0x34];
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad40[0xC];
    /* 0x4C */ ? sp4C;                              /* inferred */
    /* 0x4C */ char pad4C[0x18];
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ char pad6C[0x4];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_8092F5AC {};              /* size 0x0 */

struct _mips2c_stack_func_8092F5EC {
    /* 0x00 */ char pad0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad30[0x2];
    /* 0x32 */ s16 sp32;                            /* inferred */
    /* 0x34 */ char pad34[0xC];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_8092F7A8 {};              /* size 0x0 */

struct _mips2c_stack_func_8092F7BC {
    /* 0x00 */ char pad0[0x28];
    /* 0x28 */ s32 sp28;                            /* inferred */
    /* 0x2C */ char pad2C[0x4];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_8092F854 {};              /* size 0x0 */

struct _mips2c_stack_func_8092F878 {
    /* 0x00 */ char pad0[0x54];
    /* 0x54 */ s32 sp54;                            /* inferred */
    /* 0x58 */ char pad58[0x10];                    /* maybe part of sp54[5]? */
    /* 0x68 */ ? sp68;                              /* inferred */
    /* 0x68 */ char pad68[0x8];
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ char pad74[0x4];
    /* 0x78 */ s32 sp78;                            /* inferred */
    /* 0x7C */ s32 sp7C;                            /* inferred */
    /* 0x80 */ f32 sp80;                            /* inferred */
    /* 0x84 */ f32 sp84;                            /* inferred */
    /* 0x88 */ f32 sp88;                            /* inferred */
    /* 0x8C */ char pad8C[0xC];                     /* maybe part of sp88[4]? */
    /* 0x98 */ f32 *sp98;                           /* inferred */
    /* 0x9C */ char pad9C[0x4];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_8092FE44 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_8092FEFC {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80930030 {
    /* 0x00 */ char pad0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad44[0x8];                     /* maybe part of sp40[3]? */
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad50[0x10];
};                                                  /* size = 0x60 */

struct _mips2c_stack_func_80930190 {
    /* 0x00 */ char pad0[0xB8];
    /* 0xB8 */ ? spB8;                              /* inferred */
    /* 0xB8 */ char padB8[0x2];
    /* 0xBA */ s16 spBA;                            /* inferred */
    /* 0xBC */ char padBC[0x1C];
};                                                  /* size = 0xD8 */

? EffectSsBomb2_SpawnLayered(GlobalContext *, PosRot *, ? *, ? *, s32, s32); /* extern */
? func_800DFC90(? *, Camera *);                     /* extern */
void func_8092E510(Actor *arg0, GlobalContext *arg1); /* static */
void func_8092E5A4(? *arg0, Vec3f *arg1);           /* static */
void func_8092E638(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_8092E840(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_8092E988(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_8092EBC0(Actor *arg0);                    /* static */
void func_8092EC9C(Actor *arg0);                    /* static */
void func_8092EDC0(EnHonotrap *arg0);               /* static */
void func_8092EE08(void *arg0);                     /* static */
void func_8092EE68(Actor *arg0);                    /* static */
void func_8092EF3C(Actor *arg0);                    /* static */
void func_8092F05C(EnHonotrap *arg0);               /* static */
void func_8092F0A4(void *arg0);                     /* static */
void func_8092F0F8(Actor *arg0);                    /* static */
void func_8092F1A0(EnHonotrap *arg0);               /* static */
void func_8092F34C(EnHonotrap *arg0);               /* static */
void func_8092F5AC(EnHonotrap *arg0);               /* static */
void func_8092F7A8(EnHonotrap *arg0, ? *);          /* static */
void func_8092F854(Actor *arg0);                    /* static */
void func_8092FE44(Actor *this, GlobalContext *globalCtx); /* static */
void func_8092FEFC(Actor *this, GlobalContext *globalCtx); /* static */
void func_80930030(Actor *this, GlobalContext *globalCtx); /* static */
void func_80930190(Actor *this, GlobalContext *globalCtx); /* static */
static void *D_809303F0[4] = {(void *)0x500B6C0, (void *)0x500BEC0, (void *)0x500C6C0, (void *)0x500C6C0};
static s32 D_80930400 = 1;
static ColliderTrisElementInit D_80930424[2] = {
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {{{0.0f, 23.0f, 8.5f}, {-23.0f, 0.0f, 8.5f}, {0.0f, -23.0f, 8.5f}}},
    },
    {
        {4, {0, 0, 0}, {0x3820, 0, 0}, 0, 1, 0},
        {{{0.0f, 23.0f, 8.5f}, {0.0f, -23.0f, 8.5f}, {23.0f, 0.0f, 8.5f}}},
    },
};
static ColliderTrisInit D_8093049C = {{0xA, 0, 9, 0, 0, 2}, 2, &D_80930424};
static ColliderCylinderInit D_809304AC = {
    {0xA, 0x11, 9, 0x39, 0x20, 1},
    {0, {0xF7CFFFFF, 1, 4}, {0x100000, 0, 0}, 0x19, 1, 1},
    {0xA, 0x19, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit D_809304D8 = {0, 9, 0x17, 1};
static InitChainEntry D_809304E0[3];                /* unable to generate initializer */
static ? D_809304EC;                                /* unable to generate initializer */
static ? D_809304F8;                                /* unable to generate initializer */

void func_8092E510(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp24;
    ColliderCylinder *temp_s1;
    CollisionCheckContext *temp_a1;
    u8 temp_t0;
    u8 temp_t8;

    temp_s1 = arg0 + 0x148;
    Collider_UpdateCylinder(arg0, temp_s1);
    temp_a1 = arg1 + 0x18884;
    sp24 = temp_a1;
    CollisionCheck_SetAT(arg1, temp_a1, (Collider *) temp_s1);
    CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_s1);
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_s1);
    temp_t8 = arg0->unk2C0 | 1;
    temp_t0 = temp_t8 | 2;
    arg0->unk2C0 = temp_t8;
    arg0->unk2C0 = temp_t0;
    arg0->unk2C0 = (u8) (temp_t0 | 4);
}

void func_8092E5A4(? *arg0, Vec3f *arg1) {
    f32 temp_f0;
    f32 temp_f2;

    arg0 = arg0;
    temp_f0 = Math3D_Vec3fMagnitude(arg1);
    if (temp_f0 < 0.001f) {
        arg0->unk4 = 0.0f;
        arg0->unk0 = 0.0f;
        arg0->unk8 = 1.0f;
        return;
    }
    temp_f2 = 1.0f / temp_f0;
    arg0->unk0 = (f32) (arg1->x * temp_f2);
    arg0->unk4 = (f32) (arg1->y * temp_f2);
    arg0->unk8 = (f32) (arg1->z * temp_f2);
}

void func_8092E638(Actor *arg0, GlobalContext *arg1) {
    ? sp88;
    ? sp7C;
    ? sp70;
    ColliderTris *temp_s7;
    f32 temp_f20;
    f32 temp_f22;
    s32 temp_s1;
    s32 temp_s2;
    void **temp_s0;
    void *temp_v0;
    void *temp_v0_2;
    void **phi_s0;
    s32 phi_s2;
    s32 phi_s1;
    Vec3f *phi_s0_2;

    temp_f20 = Math_SinS(arg0->home.rot.y);
    temp_f22 = Math_CosS(arg0->home.rot.y);
    Actor_SetScale(arg0, 0.1f);
    phi_s0 = D_809303F0;
    if (D_80930400 != 0) {
        D_80930400 = 0;
        do {
            temp_s0 = phi_s0 + 4;
            temp_s0->unk-4 = Lib_SegmentedToVirtual(*phi_s0);
            phi_s0 = temp_s0;
        } while (temp_s0 != &D_80930400);
    }
    temp_s7 = arg0 + 0x148;
    Collider_InitTris(arg1, temp_s7);
    Collider_SetTris(arg1, temp_s7, arg0, &D_8093049C, arg0 + 0x168);
    phi_s2 = 0;
    do {
        phi_s1 = 0;
        phi_s0_2 = (Vec3f *) &sp70;
loop_5:
        temp_v0 = &D_8093049C.elements[phi_s2] + phi_s1;
        temp_v0_2 = temp_v0 + 0x18;
        phi_s0_2->x = (temp_v0->unk20 * temp_f20) + (temp_v0->unk18 * temp_f22);
        phi_s0_2->y = temp_v0_2->unk4;
        phi_s0_2->z = (temp_v0_2->unk8 * temp_f22) - (temp_v0_2->unk0 * temp_f20);
        Math_Vec3f_Sum(phi_s0_2, (Vec3f *) &arg0->world, phi_s0_2);
        temp_s1 = phi_s1 + 0xC;
        phi_s1 = temp_s1;
        phi_s0_2 += 0xC;
        if (temp_s1 != 0x24) {
            goto loop_5;
        }
        Collider_SetTrisVertices(temp_s7, phi_s2, (Vec3f *) &sp70, (Vec3f *) &sp7C, (Vec3f *) &sp88);
        temp_s2 = phi_s2 + 1;
        phi_s2 = temp_s2;
    } while (temp_s2 != 2);
    Actor_SetHeight(arg0, 0.0f);
    if (arg0->params == 0) {
        func_8092EBC0(arg0);
        return;
    }
    func_8092EE68(arg0);
}

void func_8092E840(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    ColliderCylinder *sp20;
    Actor *temp_t9;
    ColliderCylinder *temp_a1;

    sp24 = (s32) arg0->params;
    Actor_SetScale(arg0, 0.0001f);
    temp_a1 = arg0 + 0x148;
    sp20 = temp_a1;
    Collider_InitCylinder(arg1, temp_a1);
    Collider_SetCylinder(arg1, temp_a1, arg0, &D_809304AC);
    Collider_UpdateCylinder(arg0, temp_a1);
    arg0->minVelocityY = -1.0f;
    CollisionCheck_SetInfo(&arg0->colChkInfo, NULL, &D_809304D8);
    ActorShape_Init(&arg0->shape, 0.0f, func_800B3FC0, 30.0f);
    arg0->shape.shadowAlpha = 0x80;
    temp_t9 = arg1->actorCtx.actorList[2].first;
    arg0->unk228 = (f32) temp_t9->world.pos.x;
    arg0->unk22C = (f32) temp_t9->world.pos.y;
    arg0->unk230 = (f32) temp_t9->world.pos.z;
    arg0->unk22C = (f32) (arg0->unk22C + 10.0f);
    arg0->unk23A = (s16) (s32) (Rand_ZeroOne() * 511.0f);
    Audio_PlayActorSound2(arg0, 0x2822U);
    if (sp24 == 2) {
        arg0->room = -1;
        arg0->unk188 = 0xC;
        arg0->unk18A = 0x1E;
        arg0->shape.yOffset = -1000.0f;
    }
    func_8092F0F8(arg0);
}

void func_8092E988(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *temp_s0;
    s32 temp_s1;
    s16 phi_s0;
    void *phi_s2;
    s32 phi_s1;

    Actor_SetScale(arg0, 0.0001f);
    temp_s0 = arg0 + 0x148;
    Collider_InitCylinder(arg1, temp_s0);
    Collider_SetCylinder(arg1, temp_s0, arg0, &D_809304AC);
    CollisionCheck_SetInfo(&arg0->colChkInfo, NULL, &D_809304D8);
    phi_s0 = (s16) (s32) (Rand_ZeroOne() * 511.0f);
    phi_s2 = arg0 + 0x23C;
    phi_s1 = 0;
    do {
        phi_s2->unk1C = phi_s0;
        temp_s1 = phi_s1 + 0x14;
        phi_s0 = (phi_s0 + (s32) Rand_ZeroFloat(300.0f) + 0x64) & 0x1FF;
        phi_s2 += 0x14;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x78);
    Audio_PlayActorSound2(arg0, 0x2822U);
    func_8092F854(arg0);
}

void EnHonotrap_Init(EnHonotrap *this, GlobalContext *globalCtx) {
    s32 sp24;
    s16 temp_v0;
    EnHonotrap *this = (EnHonotrap *) thisx;

    temp_v0 = this->actor.params;
    globalCtx = globalCtx;
    sp24 = (s32) temp_v0;
    Actor_ProcessInitChain((Actor *) this, D_809304E0);
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        func_8092E638((Actor *) this, globalCtx, globalCtx);
        return;
    }
    if (temp_v0 == 4) {
        func_8092E988((Actor *) this, globalCtx, globalCtx);
        this->actor.update = func_8092FEFC;
        this->actor.draw = func_80930190;
        this->actor.uncullZoneScale = 500.0f;
        this->actor.uncullZoneDownward = 500.0f;
        return;
    }
    func_8092E840((Actor *) this, globalCtx, globalCtx);
    this->actor.update = func_8092FE44;
    this->actor.draw = func_80930030;
}

void EnHonotrap_Destroy(EnHonotrap *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    EnHonotrap *this = (EnHonotrap *) thisx;

    temp_v0 = this->actor.params;
    if ((temp_v0 == 0) || (temp_v0 == 3)) {
        Collider_DestroyTris(globalCtx, (ColliderTris *) &this->unk148);
        return;
    }
    Collider_DestroyCylinder(globalCtx, &this->unk148);
}

void func_8092EBC0(Actor *arg0) {
    arg0->unk144 = func_8092EBDC;
    arg0->unk222 = 3;
}

void func_8092EBDC(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    if (this->actor.child != 0) {
        this->unk220 = 0xC8;
        return;
    }
    if (((s32) this->unk220 <= 0) && (this->actor.xzDistToPlayer < 750.0f)) {
        temp_f0 = this->actor.yDistToPlayer;
        if ((temp_f0 < 0.0f) && (temp_f0 > -700.0f)) {
            temp_v0 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
            if (((s32) temp_v0 >= -0x3FFF) && ((s32) temp_v0 < 0x4000)) {
                func_8092EC9C();
            }
        }
    }
}

void func_8092EC9C(Actor *arg0) {
    arg0->unk144 = func_8092ECF0;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    arg0->unk220 = 0x1E;
    Audio_PlayActorSound2(arg0, 0x2881U);
}

void func_8092ECF0(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 sp40;

    this->unk222 += -1;
    if ((s32) this->unk222 <= 0) {
        func_8092EDC0(this);
        sp40 = Math_SinS(this->actor.shape.rot.y);
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x8C, (sp40 * 12.0f) + this->actor.home.pos.x, this->actor.home.pos.y - 10.0f, (Math_CosS(this->actor.shape.rot.y) * 12.0f) + this->actor.home.pos.z, (s16) (s32) this->actor.home.rot.x, (s16) (s32) this->actor.home.rot.y, (s16) (s32) this->actor.home.rot.z, 1);
    }
}

void func_8092EDC0(EnHonotrap *arg0) {
    arg0->actionFunc = func_8092EDD8;
    arg0->unk222 = 0;
}

void func_8092EDD8(EnHonotrap *this, GlobalContext *globalCtx) {
    if ((s32) this->unk220 <= 0) {
        func_8092EE08();
    }
}

void func_8092EE08(void *arg0) {
    arg0->unk144 = func_8092EE1C;
}

void func_8092EE1C(EnHonotrap *this, GlobalContext *globalCtx) {
    this->unk222 += 1;
    if ((s32) this->unk222 >= 3) {
        func_8092EBC0();
        this->unk220 = 0xC8;
    }
}

void func_8092EE68(Actor *arg0) {
    arg0->unk222 = 3;
    arg0->unk220 = 0x50;
    arg0->unk224 = 0;
    arg0->unk144 = func_8092EE90;
}

void func_8092EE90(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    if (((s32) this->unk220 <= 0) && (this->actor.xzDistToPlayer < 120.0f)) {
        temp_f0 = this->actor.yDistToPlayer;
        if ((temp_f0 < 0.0f) && (temp_f0 > -700.0f)) {
            temp_v0 = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
            if (((s32) temp_v0 >= -0x3FFF) && ((s32) temp_v0 < 0x4000)) {
                func_8092EF3C();
            }
        }
    }
}

void func_8092EF3C(Actor *arg0) {
    Audio_PlayActorSound2(arg0, 0x2881U);
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    arg0->unk220 = 0x28;
    arg0->unk144 = func_8092EF98;
}

void func_8092EF98(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 sp44;

    this->unk222 += -1;
    if ((s32) this->unk222 <= 0) {
        sp44 = Math_SinS(this->actor.shape.rot.y);
        Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, 0x8C, (sp44 * 12.0f) + this->actor.home.pos.x, this->actor.home.pos.y, (Math_CosS(this->actor.shape.rot.y) * 12.0f) + this->actor.home.pos.z, (s16) (s32) this->actor.home.rot.x, (s16) (s32) this->actor.home.rot.y, (s16) (s32) this->actor.home.rot.z, 4);
        func_8092F05C(this);
    }
}

void func_8092F05C(EnHonotrap *arg0) {
    arg0->actionFunc = func_8092F074;
    arg0->unk222 = 0;
}

void func_8092F074(EnHonotrap *this, GlobalContext *globalCtx) {
    if ((s32) this->unk220 <= 0) {
        func_8092F0A4();
    }
}

void func_8092F0A4(void *arg0) {
    arg0->unk144 = func_8092F0B8;
}

void func_8092F0B8(EnHonotrap *this, GlobalContext *globalCtx) {
    this->unk222 += 1;
    if ((s32) this->unk222 >= 3) {
        func_8092EE68();
    }
}

void func_8092F0F8(Actor *arg0) {
    arg0->unk144 = func_8092F10C;
}

void func_8092F10C(EnHonotrap *this, GlobalContext *globalCtx) {
    Vec3f *temp_a0;
    f32 temp_f0;
    s32 temp_v0;
    f32 phi_f0;

    temp_a0 = &this->actor.scale;
    if (this->actor.params == 1) {
        phi_f0 = 0.004f;
    } else {
        phi_f0 = 0.0048f;
    }
    this = this;
    temp_v0 = Math_StepToF((f32 *) temp_a0, phi_f0, 0.0006f);
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
    if (temp_v0 != 0) {
        if (this->actor.params == 1) {
            func_8092F34C(this);
            return;
        }
        func_8092F1A0(this);
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_8092F1A0(EnHonotrap *arg0) {
    s16 temp_a0;

    arg0->unk220 = 0x28;
    temp_a0 = arg0->actor.world.rot.y;
    arg0->actor.velocity.y = 1.0f;
    arg0 = arg0;
    arg0->actor.velocity.x = 2.0f * Math_SinS(temp_a0);
    arg0->actor.velocity.z = 2.0f * Math_CosS(arg0->actor.world.rot.y);
    arg0->actionFunc = func_8092F208;
}

void func_8092F208(EnHonotrap *this, GlobalContext *globalCtx) {
    s32 temp_v1;
    u8 temp_v0;

    temp_v0 = this->unk148.base.atFlags;
    temp_v1 = temp_v0 & 2;
    if ((temp_v1 != 0) || ((s32) this->unk220 <= 0)) {
        if ((temp_v1 != 0) && ((temp_v0 & 4) == 0)) {
            func_800B8D98(globalCtx, (Actor *) this, 5.0f, this->actor.yawTowardsPlayer, 0.0f);
        }
        this->actor.velocity.z = 0.0f;
        this->actor.velocity.y = 0.0f;
        this->actor.velocity.x = 0.0f;
        func_8092F7A8(this);
        return;
    }
    if (this->actor.velocity.y > 0.0f) {
        this->actor.world.pos.x += this->actor.velocity.x;
        this->actor.world.pos.z += this->actor.velocity.z;
        Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 12.0f, 0.0f, 5U);
    }
    if (Math_StepToF(&this->actor.world.pos.y, this->actor.floorHeight + 1.0f, this->actor.velocity.y) == 0) {
        this->actor.velocity.y += 1.0f;
    } else {
        this->actor.velocity.y = 0.0f;
    }
    func_8092E510((Actor *) this, globalCtx);
}

void func_8092F34C(Actor *arg0) {
    f32 temp_f2;

    arg0->unk144 = func_8092F3D8;
    temp_f2 = 1.0f / (Actor_DistanceToPoint(arg0, arg0 + 0x228) + 1.0f);
    arg0->unk220 = 0xA0;
    arg0->velocity.x = (arg0->unk228 - arg0->world.pos.x) * temp_f2;
    arg0->unk234 = 0.0f;
    arg0->velocity.y = (arg0->unk22C - arg0->world.pos.y) * temp_f2;
    arg0->velocity.z = (arg0->unk230 - arg0->world.pos.z) * temp_f2;
}

void func_8092F3D8(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 sp68;
    f32 sp64;
    ? sp4C;
    ? sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    Actor *temp_v0_2;
    Vec3f *temp_a2_2;
    f32 *temp_a1;
    f32 temp_a2;
    f32 temp_f2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    u8 temp_v0;

    Math_StepToF(&this->unk234, 13.0f, 0.5f);
    temp_f2 = this->unk234;
    temp_a2 = fabsf(temp_f2 * this->actor.velocity.x);
    sp64 = fabsf(temp_f2 * this->actor.velocity.y);
    sp68 = fabsf(temp_f2 * this->actor.velocity.z);
    temp_s1 = Math_StepToF((f32 *) &this->actor.world, this->unk228, temp_a2) & 1;
    temp_s1_2 = temp_s1 & Math_StepToF(&this->actor.world.pos.y, this->unk22C, sp64);
    temp_s1_3 = temp_s1_2 & Math_StepToF(&this->actor.world.pos.z, this->unk230, sp68);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 0.0f, 0x1DU);
    temp_v0 = this->unk148.base.atFlags;
    if ((temp_v0 & 4) != 0) {
        temp_v0_2 = globalCtx->actorCtx.actorList[2].first;
        temp_a1 = &sp34;
        sp34 = -temp_v0_2->unkD24;
        sp38 = -temp_v0_2->unkD28;
        sp3C = -temp_v0_2->unkD2C;
        func_8092E5A4(&sp4C, (Vec3f *) temp_a1);
        temp_a2_2 = &this->actor.velocity;
        sp40.unk0 = (f32) temp_a2_2->x;
        sp40.unk4 = (f32) temp_a2_2->y;
        sp40.unk8 = (f32) temp_a2_2->z;
        func_80179F64((Vec3f *) &sp40, (Vec3f *) &sp4C, temp_a2_2);
        this->actor.speedXZ = this->unk234 * 0.5f;
        this->actor.world.rot.y = Math_FAtan2F(this->actor.velocity.z, this->actor.velocity.x);
        func_8092F7A8(this);
        return;
    }
    if ((temp_v0 & 2) != 0) {
        this->actor.speedXZ = 0.0f;
        this->actor.velocity.y = 0.0f;
        func_8092F7A8(this);
        return;
    }
    if ((s32) this->unk220 <= 0) {
        func_8092F7A8(this);
        return;
    }
    func_8092E510((Actor *) this, globalCtx);
    if (temp_s1_3 != 0) {
        func_8092F5AC(this);
    }
}

void func_8092F5AC(EnHonotrap *arg0) {
    s16 temp_v0;

    arg0->actor.world.rot.z = 0;
    temp_v0 = arg0->actor.world.rot.z;
    arg0->actionFunc = func_8092F5EC;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.velocity.z = 0.0f;
    arg0->actor.velocity.y = 0.0f;
    arg0->actor.velocity.x = 0.0f;
    arg0->unk220 = 0x64;
    arg0->actor.world.rot.y = temp_v0;
    arg0->actor.world.rot.x = temp_v0;
}

void func_8092F5EC(EnHonotrap *this, GlobalContext *globalCtx) {
    ? sp30;
    u8 temp_v0;

    Math_ScaledStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 0x300);
    Math_StepToF(&this->actor.speedXZ, 3.0f, 0.1f);
    if (-this->actor.yDistToPlayer < 10.0f) {
        this->actor.gravity = 0.08f;
    } else {
        this->actor.gravity = -0.08f;
    }
    Actor_SetVelocityYRotationAndGravity((Actor *) this);
    if (this->actor.velocity.y > 1.0f) {
        this->actor.velocity.y = 1.0f;
    }
    this->actor.velocity.y *= 0.95f;
    Actor_ApplyMovement((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 0.0f, 0x1DU);
    temp_v0 = this->unk148.base.atFlags;
    if ((temp_v0 & 4) != 0) {
        func_8018219C(globalCtx->actorCtx.actorList[2].first + 0xD04, (Vec3s *) &sp30, 0);
        this->actor.world.rot.y = ((sp32 * 2) - this->actor.world.rot.y) + 0x8000;
        func_8092F7A8(this);
        return;
    }
    if ((temp_v0 & 2) != 0) {
        this->actor.speedXZ *= 0.1f;
        this->actor.velocity.y *= 0.1f;
        func_8092F7A8(this, &sp30);
        return;
    }
    if (((this->actor.bgCheckFlags & 8) != 0) || ((s32) this->unk220 <= 0)) {
        func_8092F7A8(this, &sp30);
        return;
    }
    func_8092E510((Actor *) this, globalCtx);
}

void func_8092F7A8(EnHonotrap *arg0) {
    arg0->actionFunc = func_8092F7BC;
}

void func_8092F7BC(EnHonotrap *this, GlobalContext *globalCtx) {
    s32 sp28;
    f32 temp_f0;

    sp28 = Math_StepToF((f32 *) &this->actor.scale, 0.0001f, 0.00015f);
    temp_f0 = this->actor.scale.x;
    this->actor.scale.y = temp_f0;
    this->actor.scale.z = temp_f0;
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 10.0f, 10.0f, 0.0f, 0x1DU);
    if (sp28 != 0) {
        Actor_MarkForDeath((Actor *) this);
    }
}

void func_8092F854(Actor *arg0) {
    arg0->unk144 = func_8092F878;
    arg0->unk220 = 0x50;
    arg0->unk244 = 0.0f;
}

void func_8092F878(EnHonotrap *this, GlobalContext *globalCtx) {
    f32 *sp98;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    s32 sp7C;
    s32 sp78;
    f32 sp70;
    ? sp68;
    s32 sp54;
    ColliderCylinder *temp_s1;
    CollisionCheckContext *temp_s0;
    f32 *temp_s2;
    f32 *temp_s4;
    f32 temp_f0;
    f32 temp_f14;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f20_3;
    f32 temp_f20_4;
    f32 temp_f22;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f6;
    s32 temp_cond;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_s2_2;
    f32 *phi_s2;
    s32 phi_v0;
    void *phi_s2_2;
    f32 phi_f20;
    s32 phi_v1;
    void *phi_s0;
    f32 phi_f0;
    f32 phi_f20_2;

    temp_s4 = &this->unk23C;
    sp98 = temp_s4;
    sp78 = 0;
    temp_f0 = fabsf(Math_CosS(func_800DFCB4(globalCtx->cameraPtrs[globalCtx->activeCamera])));
    temp_f6 = temp_f0 * -10.5f;
    sp80 = temp_f0;
    sp7C = (s32) temp_f6 - 0xA;
    Math_StepToF(temp_s4, 1.0f, 0.05f);
    if ((s32) this->unk220 < 0x29) {
        sp78 = Math_StepToF(temp_s4 + 4, 1.0f, 0.05f);
    } else if (this->actor.parent == 0) {
        this->unk220 = 0x28;
    }
    phi_s2 = temp_s4;
    phi_v0 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        temp_s2 = phi_s2 + 0x14;
        temp_s2->unkA = 0;
        phi_s2 = temp_s2;
        phi_v0 = temp_v0;
    } while (temp_v0 < 6);
    sp88 = Math_SinS(this->actor.shape.rot.y) * 120.0f;
    temp_f2 = Math_CosS(this->actor.shape.rot.y) * 120.0f;
    temp_v1 = 0 * 0x10;
    temp_s2_2 = temp_s4 + temp_v1;
    temp_s4->unk8 = (f32) (temp_s4->unk8 + (0.05f * (1.0f - temp_s4->unk4)));
    temp_f14 = temp_s4->unk8;
    phi_s2_2 = temp_s2_2;
    phi_v1 = temp_v1;
    phi_s0 = temp_s2_2 + 0xC;
    if (temp_f14 > 0.16666667f) {
        temp_s4->unk8 = (f32) (temp_f14 - 0.16666667f);
    }
    temp_f20 = temp_s4->unk4 + temp_s4->unk8;
    phi_f20 = temp_f20;
    if (temp_f20 <= temp_s4->unk0) {
        sp84 = temp_f2;
loop_10:
        phi_s2_2->unk1E = 1;
        phi_s2_2->unkC = (f32) ((sp88 * phi_f20) + this->actor.world.pos.x);
        phi_s2_2->unk10 = (f32) this->actor.world.pos.y;
        phi_s2_2->unk14 = (f32) ((sp84 * phi_f20) + this->actor.world.pos.z);
        sp54 = phi_v1;
        temp_f2_2 = Math_SinS((s16) (s32) (phi_f20 * 25486.223f)) * 1.6f;
        temp_cond = temp_f2_2 > 1.0f;
        phi_s0->unkC = temp_f2_2;
        if (temp_cond) {
            phi_s0->unkC = 1.0f;
        } else if (phi_s0->unkC < 0.0f) {
            phi_s0->unkC = 0.0f;
        }
        temp_v1_2 = phi_v1 + 0x14;
        temp_f20_2 = phi_f20 + 0.16666667f;
        phi_s0->unkC = (f32) (phi_s0->unkC * (0.006f * (((1.0f - temp_s4->unk4) * 0.8f) + 0.2f)));
        phi_s0->unk10 = (s16) (phi_s0->unk10 + sp7C);
        phi_s0->unk10 = (s16) (phi_s0->unk10 & 0x1FF);
        phi_s2_2 += 0x14;
        phi_f20 = temp_f20_2;
        phi_v1 = temp_v1_2;
        phi_s0 += 0x14;
        if ((temp_v1_2 < 0x78) && (temp_f20_2 <= *sp98)) {
            goto loop_10;
        }
    }
    if ((sp78 != 0) || ((s32) this->unk220 <= 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    temp_f20_3 = temp_s4->unk0 * 120.0f;
    temp_f22 = temp_s4->unk4 * 120.0f;
    Actor_CalcOffsetOrientedToDrawRotation((Actor *) this, (Vec3f *) &sp68, (Vec3f *) &globalCtx->actorCtx.actorList[2].first->world);
    phi_f0 = sp70;
    if (sp70 < temp_f22) {
        phi_f0 = temp_f22;
    } else if (temp_f20_3 < sp70) {
        phi_f0 = temp_f20_3;
    }
    sp70 = phi_f0;
    temp_f20_4 = Math_SinS((s16) (s32) (phi_f0 * 212.3852f)) * 1.6f;
    phi_f20_2 = temp_f20_4;
    if (temp_f20_4 > 1.0f) {
        phi_f20_2 = 1.0f;
    }
    if ((sp80 * (((1.0f - temp_s4->unk4) * 0.8f) + 0.2f)) > 0.2f) {
        this->unk148.dim.pos.x = (s16) (s32) ((Math_SinS(this->actor.shape.rot.y) * sp70) + this->actor.world.pos.x);
        this->unk148.dim.pos.y = (s16) (s32) (this->actor.world.pos.y - (24.0f * phi_f20_2));
        temp_s1 = &this->unk148;
        temp_s0 = &globalCtx->colChkCtx;
        this->unk148.dim.pos.z = (s16) (s32) ((Math_CosS(this->actor.shape.rot.y) * sp70) + this->actor.world.pos.z);
        this->unk148.dim.radius = (s16) (s32) (15.0f * phi_f20_2);
        this->unk148.dim.height = (s16) (s32) (37.5f * phi_f20_2);
        CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) temp_s1);
        CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) temp_s1);
        CollisionCheck_SetOC(globalCtx, temp_s0, (Collider *) temp_s1);
    }
}

void EnHonotrap_Update(EnHonotrap *this, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s16 temp_v0;
    u8 temp_v0_3;
    EnHonotrap *this = (EnHonotrap *) thisx;

    temp_v0 = this->unk220;
    if ((s32) temp_v0 > 0) {
        this->unk220 = temp_v0 - 1;
    }
    temp_v0_2 = this->actor.child;
    if ((temp_v0_2 != 0) && (temp_v0_2->update == 0)) {
        this->actor.child = NULL;
    }
    this->actionFunc(this, globalCtx);
    temp_v0_3 = this->unk148.base.acFlags;
    if ((temp_v0_3 & 2) != 0) {
        EffectSsBomb2_SpawnLayered(globalCtx, &this->actor.world, &D_809304EC, &D_809304F8, 0xF, 8);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((s32) this->unk222 < 3) {
        this->unk148.base.acFlags = temp_v0_3 & 0xFFFD;
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, (Collider *) &this->unk148);
    }
}

void func_8092FE44(Actor *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->unk220;
    if ((s32) temp_v0 > 0) {
        this->unk220 = (s16) (temp_v0 - 1);
    }
    this->unk2C0 = 0;
    this->unk238 = (s16) (this->unk238 + 0x640);
    if (this->params != 4) {
        this->shape.yOffset = (Math_SinS(this->unk238) * 1000.0f) + 600.0f;
    }
    Actor_SetHeight(this, 5.0f);
    Audio_PlayActorSound2(this, 0x205BU);
    this->unk144(this, globalCtx);
    this->unk23A = (s16) (this->unk23A - 0x14);
    this->unk23A = (s16) (this->unk23A & 0x1FF);
}

void func_8092FEFC(Actor *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->parent;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        this->parent = NULL;
    }
    temp_v0_2 = this->unk220;
    if ((s32) temp_v0_2 > 0) {
        this->unk220 = (s16) (temp_v0_2 - 1);
    }
    this->unk238 = (s16) (this->unk238 + 0x640);
    Audio_PlayActorSound2(this, 0x205BU);
    this->unk144(this, globalCtx);
}

void EnHonotrap_Draw(EnHonotrap *this, GlobalContext *globalCtx) {
    GraphicsContext *sp28;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    EnHonotrap *this = (EnHonotrap *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp28 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    temp_v0->words.w1 = (u32) D_809303F0[this->unk222];
    temp_v0_2 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDA380003;
    sp28 = sp28;
    sp1C = temp_v0_2;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_3 = sp28->polyOpa.p;
    sp28->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_050085F0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void func_80930030(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp4C;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp4C = temp_v0;
    sp4C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (u32) this->unk23A, 0x20, 0x80);
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFFC800FF;
    temp_v0_2->words.w0 = 0xFA008080;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = 0xFF000000;
    temp_v0_3->words.w0 = 0xFB000000;
    Matrix_RotateY((s16) (func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) + 0x8000), 1U);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_4 + 8;
    temp_v0_4->words.w0 = 0xDA380003;
    sp40 = temp_v0_4;
    sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_5 + 8;
    temp_v0_5->words.w1 = (u32) D_0407D590;
    temp_v0_5->words.w0 = 0xDE000000;
}

void func_80930190(Actor *this, GlobalContext *globalCtx) {
    s16 spBA;
    ? spB8;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f14;
    s32 temp_s4;
    void *temp_s0;
    void *phi_s3;
    s32 phi_s4;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xFA008080;
    temp_v0->words.w1 = 0xFFC800FF;
    temp_v0_2 = temp_s2->polyXlu.p;
    temp_s2->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0xFF000000;
    temp_v0_2->words.w0 = 0xFB000000;
    func_800DFC90(&spB8, globalCtx->cameraPtrs[globalCtx->activeCamera]);
    spBA += 0x8000;
    phi_s3 = this + 0x23C;
    phi_s4 = 0;
    do {
        temp_s0 = phi_s3 + 0xC;
        if (phi_s3->unk1E != 0) {
            temp_v0_3 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060020;
            temp_v0_3->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (u32) temp_s0->unk10, 0x20, 0x80);
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk0, temp_s0->unk4 - (4000.0f * temp_s0->unkC), temp_s0->unk8, (Vec3s *) &spB8);
            temp_f14 = temp_s0->unkC;
            Matrix_Scale(((fabsf(Math_SinS((s16) ((s32) (s16) (spBA - this->shape.rot.y) >> 1))) * 0.2f) + 1.7f) * temp_f14, temp_f14, 1.0f, 1);
            temp_v0_4 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_5 = temp_s2->polyXlu.p;
            temp_s2->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w1 = (u32) D_0407D590;
            temp_v0_5->words.w0 = 0xDE000000;
        }
        temp_s4 = phi_s4 + 0x14;
        phi_s3 += 0x14;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x78);
}
