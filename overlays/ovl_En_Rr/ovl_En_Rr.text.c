typedef struct EnRr {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnRr *, GlobalContext *);
    /* 0x148 */ ColliderCylinder unk148;            /* inferred */
    /* 0x194 */ ColliderCylinder unk194;            /* inferred */
    /* 0x1E0 */ u8 unk1E0;                          /* inferred */
    /* 0x1E1 */ u8 unk1E1;                          /* inferred */
    /* 0x1E2 */ u8 unk1E2;                          /* inferred */
    /* 0x1E3 */ char pad1E3[0x1];
    /* 0x1E4 */ s16 unk1E4;                         /* inferred */
    /* 0x1E6 */ s16 unk1E6;                         /* inferred */
    /* 0x1E8 */ s16 unk1E8;                         /* inferred */
    /* 0x1EA */ s16 unk1EA;                         /* inferred */
    /* 0x1EC */ char pad1EC[0x2];
    /* 0x1EE */ s16 unk1EE;                         /* inferred */
    /* 0x1F0 */ s16 unk1F0;                         /* inferred */
    /* 0x1F2 */ char pad1F2[0x2];
    /* 0x1F4 */ s16 unk1F4;                         /* inferred */
    /* 0x1F6 */ s16 unk1F6;                         /* inferred */
    /* 0x1F8 */ s16 unk1F8;                         /* inferred */
    /* 0x1FA */ s16 unk1FA;                         /* inferred */
    /* 0x1FC */ s16 unk1FC;                         /* inferred */
    /* 0x1FE */ char pad1FE[0x2];
    /* 0x200 */ f32 unk200;                         /* inferred */
    /* 0x204 */ f32 unk204;                         /* inferred */
    /* 0x208 */ f32 unk208;                         /* inferred */
    /* 0x20C */ f32 unk20C;                         /* inferred */
    /* 0x210 */ f32 unk210;                         /* inferred */
    /* 0x214 */ f32 unk214;                         /* inferred */
    /* 0x218 */ f32 unk218;                         /* inferred */
    /* 0x21C */ f32 unk21C;                         /* inferred */
    /* 0x220 */ f32 unk220;                         /* inferred */
    /* 0x224 */ f32 unk224;                         /* inferred */
    /* 0x228 */ f32 unk228;                         /* inferred */
    /* 0x22C */ f32 unk22C;                         /* inferred */
    /* 0x230 */ f32 unk230;                         /* inferred */
    /* 0x234 */ Vec3f unk234;                       /* inferred */
    /* 0x240 */ char pad240[0xE4];                  /* maybe part of unk234[20]? */
    /* 0x324 */ f32 unk324;                         /* inferred */
    /* 0x328 */ f32 unk328;                         /* inferred */
    /* 0x32C */ f32 unk32C;                         /* inferred */
    /* 0x330 */ char pad330[0x4];
    /* 0x334 */ f32 unk334;                         /* inferred */
    /* 0x338 */ char pad338[0x6];                   /* maybe part of unk334[2]? */
    /* 0x33E */ s16 unk33E;                         /* inferred */
    /* 0x340 */ char pad340[0x68];                  /* maybe part of unk33E[53]? */
    /* 0x3A8 */ f32 unk3A8;                         /* inferred */
    /* 0x3AC */ char pad3AC[0x4];
    /* 0x3B0 */ f32 unk3B0;                         /* inferred */
    /* 0x3B4 */ char pad3B4[0x10];                  /* maybe part of unk3B0[5]? */
} EnRr;                                             /* size = 0x3C4 */

struct _mips2c_stack_EnRr_Destroy {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnRr_Draw {
    /* 0x00 */ char pad0[0x80];
    /* 0x80 */ Vec3f *sp80;                         /* inferred */
    /* 0x84 */ char pad84[0x18];                    /* maybe part of sp80[7]? */
    /* 0x9C */ GraphicsContext *sp9C;               /* inferred */
    /* 0xA0 */ char padA0[0x4];
    /* 0xA4 */ f32 spA4;                            /* inferred */
    /* 0xA8 */ f32 spA8;                            /* inferred */
    /* 0xAC */ f32 spAC;                            /* inferred */
    /* 0xB0 */ char padB0[0x18];
};                                                  /* size = 0xC8 */

struct _mips2c_stack_EnRr_Init {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnRr_Update {
    /* 0x00 */ char pad0[0x48];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_808FA01C {
    /* 0x00 */ char pad0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808FA11C {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FA19C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FA238 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808FA260 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808FA344 {};              /* size 0x0 */

struct _mips2c_stack_func_808FA3F8 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808FA4F4 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ u32 sp38;                            /* inferred */
    /* 0x3C */ char pad3C[0x4];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808FA6B8 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FA7AC {};              /* size 0x0 */

struct _mips2c_stack_func_808FA870 {};              /* size 0x0 */

struct _mips2c_stack_func_808FA910 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FA9CC {};              /* size 0x0 */

struct _mips2c_stack_func_808FAA94 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ void *sp2C;                          /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FAC80 {
    /* 0x00 */ char pad0[0x1C];
    /* 0x1C */ void *sp1C;                          /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FAD1C {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FAE50 {
    /* 0x00 */ char pad0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FAF94 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_808FB088 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808FB1C0 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FB2C0 {
    /* 0x00 */ char pad0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808FB398 {
    /* 0x00 */ char pad0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808FB42C {
    /* 0x00 */ char pad0[0x74];
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ f32 sp78;                            /* inferred */
    /* 0x7C */ f32 sp7C;                            /* inferred */
    /* 0x80 */ char pad80[0x10];
};                                                  /* size = 0x90 */

struct _mips2c_stack_func_808FB680 {
    /* 0x00 */ char pad0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808FB710 {
    /* 0x00 */ char pad0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808FB794 {
    /* 0x00 */ char pad0[0x2C];
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
};                                                  /* size = 0x38 */

void func_808FA01C(Actor *arg0, GlobalContext *arg1, void *arg2); /* static */
void func_808FA11C(Actor *arg0, GlobalContext *);   /* static */
void func_808FA19C(Actor *arg0, GlobalContext *arg1); /* static */
void func_808FA238(Actor *arg0, f32 arg1);          /* static */
void func_808FA260(Actor *arg0);                    /* static */
void func_808FA344(EnRr *arg0);                     /* static */
void func_808FA3F8(Actor *arg0, void *arg1, Actor *); /* static */
void func_808FA4F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_808FA6B8(Actor *arg0);                    /* static */
void func_808FA7AC(EnRr *arg0);                     /* static */
void func_808FA870(EnRr *arg0);                     /* static */
void func_808FA910(Actor *arg0);                    /* static */
void func_808FA9CC(Actor *arg0);                    /* static */
s32 func_808FAA94(Actor *arg0, GlobalContext *arg1); /* static */
void func_808FAC80(Actor *arg0, GlobalContext *arg1); /* static */
void func_808FAD1C(EnRr *arg0, GlobalContext *arg1); /* static */
void func_808FAE50(EnRr *arg0, GlobalContext *arg1); /* static */
void func_808FB398(void *arg0, ? arg1);             /* static */
void func_808FB794(EnRr *arg0, GlobalContext *arg1); /* static */
extern ? D_06000470;
static ColliderCylinderInit D_808FC150 = {
    {0, 0x11, 9, 0x39, 0x10, 1},
    {1, {0x20000000, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 5, 1},
    {0x2D, 0x3C, 0, {0, 0, 0}},
};
static ColliderCylinderInit D_808FC17C = {
    {0, 0x11, 9, 0, 0x10, 1},
    {1, {0x20000000, 0, 0}, {0xF7CFFFFF, 0, 0}, 0x19, 5, 0},
    {0x1E, 0x2D, 0xFFE2, {0, 0, 0}},
};
static DamageTable D_808FC1A8 = {
    {
        0,
        3,
        1,
        1,
        0x10,
        1,
        0,
        0xE0,
        1,
        1,
        3,
        0x22,
        0x32,
        0x42,
        2,
        0x10,
        1,
        2,
        0,
        0x52,
        0,
        0,
        1,
        2,
        1,
        0,
        0,
        0,
        0,
        0,
        0,
        1,
    },
};
static CollisionCheckInfoInit D_808FC1C8 = {3, 0x2D, 0x3C, 0xFA};
static InitChainEntry D_808FC1D0[5];                /* unable to generate initializer */
static f32 D_808FC1E4[5] = {0.0f, 500.0f, 750.0f, 1000.0f, 1000.0f};
static f32 D_808FC1F8[6] = {0.0f, 500.0f, 750.0f, 1000.0f, 1000.0f, 0.0f};

void EnRr_Init(EnRr *this, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;
    s16 temp_v0;
    EnRr *this = (EnRr *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_808FC1D0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk148, (Actor *) this, &D_808FC150);
    temp_a1 = &this->unk194;
    sp24 = temp_a1;
    Collider_InitAndSetCylinder(globalCtx, temp_a1, (Actor *) this, &D_808FC17C);
    if (this->actor.params != 3) {
        this->actor.scale.x = 0.019f;
        this->actor.scale.z = 0.019f;
        this->actor.scale.y = 0.015f;
    } else {
        this->actor.scale.y = 0.022499999f;
        this->actor.scale.x = 0.028499998f;
        this->actor.scale.z = 0.028499998f;
        this->unk148.dim.radius = (s16) (s32) ((f32) this->unk148.dim.radius * 1.5f);
        this->unk148.dim.height = (s16) (s32) ((f32) this->unk148.dim.height * 1.5f);
        this->unk194.dim.radius = (s16) (s32) ((f32) this->unk194.dim.radius * 1.5f);
        this->unk194.dim.height = (s16) (s32) ((f32) this->unk194.dim.height * 1.5f);
        this->unk194.dim.yShift = (s16) (s32) ((f32) this->unk194.dim.yShift * 1.5f);
    }
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    Actor_SetHeight((Actor *) this, this->actor.scale.y * 2000.0f);
    CollisionCheck_SetInfo(&this->actor.colChkInfo, &D_808FC1A8, &D_808FC1C8);
    temp_v0 = this->actor.params;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        this->actor.colChkInfo.health = 6;
        if (temp_v0 == 2) {
            this->actor.colChkInfo.mass = 0xFE;
        }
    }
    this->actionFunc = func_808FAF94;
    func_808FAD1C(this, globalCtx);
}

void EnRr_Destroy(EnRr *this, GlobalContext *globalCtx) {
    EnRr *this = (EnRr *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk148);
    Collider_DestroyCylinder(globalCtx, &this->unk194);
}

void func_808FA01C(Actor *arg0, GlobalContext *arg1, void *arg2) {
    u8 temp_v0;

    temp_v0 = arg0->colChkInfo.damageEffect;
    if (temp_v0 == 2) {
        arg0->unk1E0 = 0;
        arg0->unk220 = 0.85f;
        arg0->unk21C = 4.0f;
        return;
    }
    if (temp_v0 == 4) {
        arg0->unk1E0 = 0x14;
        arg0->unk220 = 0.85f;
        arg0->unk21C = 4.0f;
        Actor_Spawn(arg1 + 0x1CA0, arg1, 0xA2, (f32) arg2->unk26, (f32) arg2->unk28, (f32) arg2->unk2A, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        return;
    }
    if (temp_v0 == 5) {
        arg0->unk1E0 = 0x1E;
        arg0->unk220 = 0.85f;
        arg0->unk21C = 4.0f;
    }
}

void func_808FA11C(Actor *arg0) {
    arg0->unk1E0 = 0xA;
    arg0->unk15C = 3;
    arg0->unk174 = 0;
    arg0->unk1EE = 0x50;
    arg0->unk220 = 0.85f;
    arg0->flags &= -0x401;
    arg0->unk224 = 1.2750001f;
    arg0->unk21C = 1.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x50);
}

void func_808FA19C(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    arg0->unk1EE = 0;
    if (arg0->unk1E0 == 0xA) {
        arg0->unk1E0 = 0U;
        arg0->unk15C = 0;
        arg0->unk174 = 1;
        arg0->unk21C = 0.0f;
        temp_f0 = arg0->scale.y;
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x234), 0x14, 2, temp_f0 * 23.333334f, temp_f0 * 20.000002f);
        arg0->flags |= 0x400;
    }
}

void func_808FA238(Actor *arg0, f32 arg1) {
    arg0->speedXZ = arg1;
    Audio_PlayActorSound2(arg0, 0x3990U);
}

void func_808FA260(Actor *arg0) {
    void *temp_v0;
    void *temp_v1;

    arg0->unk1E1 = 1;
    arg0->unk1E6 = 0x14;
    arg0->unk1F6 = 0x9C4;
    arg0->unk210 = 0.0f;
    arg0->unk338 = 0x1770;
    arg0->unk33C = 0;
    temp_v1 = (1 * 4) + D_808FC1E4;
    arg0->unk330 = 0.8f;
    arg0->unk328 = (f32) *D_808FC1E4;
    temp_v0 = arg0 + (1 << 5);
    temp_v0->unk338 = 0x1770;
    temp_v0->unk33C = 0;
    temp_v0->unk330 = 0.8f;
    temp_v0->unk328 = (f32) temp_v1->unk0;
    temp_v0->unk35C = 0;
    temp_v0->unk358 = 0x1770;
    temp_v0->unk350 = 0.8f;
    temp_v0->unk348 = (f32) temp_v1->unk4;
    temp_v0->unk37C = 0;
    temp_v0->unk378 = 0x1770;
    temp_v0->unk370 = 0.8f;
    temp_v0->unk368 = (f32) temp_v1->unk8;
    temp_v0->unk39C = 0;
    temp_v0->unk398 = 0x1770;
    temp_v0->unk390 = 0.8f;
    temp_v0->unk388 = (f32) temp_v1->unkC;
    arg0->unk144 = func_808FB088;
    Audio_PlayActorSound2(arg0, 0x3991U);
}

void func_808FA344(EnRr *arg0) {
    void *temp_v1;

    arg0->unk1E1 = 0;
    arg0->unk210 = 0.0f;
    arg0->unk1F6 = 0x9C4;
    arg0->unk328 = 0.0f;
    arg0->unk338 = 0;
    arg0->unk33C = 0;
    temp_v1 = arg0 + (1 << 5);
    arg0->unk330 = 1.0f;
    temp_v1->unk39C = 0;
    temp_v1->unk398 = 0;
    temp_v1->unk388 = 0.0f;
    temp_v1->unk37C = 0;
    temp_v1->unk378 = 0;
    temp_v1->unk368 = 0.0f;
    temp_v1->unk35C = 0;
    temp_v1->unk358 = 0;
    temp_v1->unk348 = 0.0f;
    temp_v1->unk328 = 0.0f;
    temp_v1->unk338 = 0;
    temp_v1->unk33C = 0;
    temp_v1->unk390 = 1.0f;
    temp_v1->unk370 = 1.0f;
    temp_v1->unk350 = 1.0f;
    temp_v1->unk330 = 1.0f;
    if (arg0->unk1E2 != 0) {
        arg0->unk1E6 = 0x64;
        arg0->actionFunc = func_808FB680;
        return;
    }
    arg0->unk1E6 = 0x3C;
    arg0->actionFunc = func_808FAF94;
}

void func_808FA3F8(Actor *arg0, void *arg1) {
    void *temp_v0;

    arg0->unk1EA = 0x64;
    arg0->unk1FC = 0x14;
    arg0->unk15A = (u8) (arg0->unk15A & 0xFFF7);
    arg0->flags &= -2;
    arg0->unk1F0 = 8;
    arg0->unk1E1 = 0;
    arg0->speedXZ = 0.0f;
    arg0->unk218 = 0.0f;
    arg0->unk210 = 0.0f;
    arg0->unk1F6 = 0x1388;
    arg0->unk33C = 0;
    arg0->unk338 = 0;
    arg0->unk328 = 0.0f;
    temp_v0 = arg0 + (1 << 5);
    arg0->unk204 = 0.15f;
    arg0->unk20C = 512.0f;
    arg0->unk330 = 1.0f;
    temp_v0->unk39C = 0;
    temp_v0->unk398 = 0;
    temp_v0->unk388 = 0.0f;
    temp_v0->unk37C = 0;
    temp_v0->unk378 = 0;
    temp_v0->unk368 = 0.0f;
    temp_v0->unk35C = 0;
    temp_v0->unk358 = 0;
    temp_v0->unk348 = 0.0f;
    temp_v0->unk328 = 0.0f;
    temp_v0->unk338 = 0;
    temp_v0->unk33C = 0;
    temp_v0->unk390 = 1.0f;
    temp_v0->unk370 = 1.0f;
    temp_v0->unk350 = 1.0f;
    temp_v0->unk330 = 1.0f;
    arg0->unk144 = func_808FB1C0;
    Audio_PlayActorSound2(arg0, 0x3992U);
}

void func_808FA4F4(Actor *arg0, GlobalContext *arg1) {
    u32 sp38;
    s32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f18;
    void *temp_s1;
    s32 phi_v1;
    u32 phi_v0;

    temp_s1 = arg1->actorCtx.actorList[2].first;
    if ((temp_s1->unkA70 & 0x80) != 0) {
        temp_s1->parent = NULL;
        temp_s1->unkAE8 = 0x64;
        arg0->flags |= 1;
        arg0->unk1F0 = 0x6E;
        arg0->unk1F6 = 0x9C4;
        arg0->unk210 = 0.0f;
        arg0->unk20C = 2048.0f;
        if ((arg0->unk1E2 == 0) && (gSaveContext.playerForm == 4) && (phi_v1 = 1, (((s32) (gSaveContext.equips.equipment & *(gEquipMasks + 2)) >> gEquipShifts[1]) == 1))) {
            sp34 = 1;
            arg0->unk1E2 = func_8012ED78(arg1, 1);
        } else {
            phi_v1 = 0;
        }
        if ((phi_v1 != 0) && (func_80152498(&arg1->msgCtx) == 0)) {
            func_801518B0(arg1, 0xF6U, NULL);
        }
        phi_v0 = 0x10U;
        if (arg0->params == 0) {
            phi_v0 = 8U;
        }
        temp_f0 = arg0->scale.x;
        temp_f18 = temp_f0 * 631.579f;
        sp30 = temp_f0 * 210.52632f;
        sp2C = temp_f18;
        sp38 = phi_v0;
        temp_s1->world.pos.x += sp30 * Math_SinS(arg0->shape.rot.y);
        temp_s1->world.pos.y += temp_f18;
        temp_s1->world.pos.z += sp30 * Math_CosS(arg0->shape.rot.y);
        func_800B8D50(arg1, arg0, sp30, arg0->shape.rot.y, sp2C, phi_v0);
        Audio_PlayActorSound2(arg0, 0x3994U);
    }
}

void func_808FA6B8(Actor *arg0) {
    void *temp_v0;

    arg0->unk1E1 = 0;
    if (arg0->colChkInfo.damageEffect == 5) {
        arg0->unk1EC = 0x50;
    } else {
        arg0->unk1EC = 0x28;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) (s32) arg0->unk1EC);
    arg0->unk1E6 = 0x14;
    arg0->unk1F6 = 0x9C4;
    arg0->unk338 = 0;
    arg0->unk33C = 0;
    temp_v0 = arg0 + (1 << 5);
    arg0->unk210 = 0.0f;
    arg0->unk204 = 0.0f;
    arg0->unk20C = 0.0f;
    arg0->unk328 = 0.0f;
    arg0->unk330 = 1.0f;
    temp_v0->unk39C = 0;
    temp_v0->unk398 = 0;
    temp_v0->unk37C = 0;
    temp_v0->unk378 = 0;
    temp_v0->unk35C = 0;
    temp_v0->unk358 = 0;
    temp_v0->unk338 = 0;
    temp_v0->unk33C = 0;
    temp_v0->unk388 = 0.0f;
    temp_v0->unk368 = 0.0f;
    temp_v0->unk348 = 0.0f;
    temp_v0->unk328 = 0.0f;
    temp_v0->unk390 = 1.0f;
    temp_v0->unk370 = 1.0f;
    temp_v0->unk350 = 1.0f;
    temp_v0->unk330 = 1.0f;
    arg0->unk144 = func_808FB398;
    Audio_PlayActorSound2(arg0, 0x3995U);
}

void func_808FA7AC(EnRr *arg0) {
    void *temp_a1;
    void *temp_v1;

    arg0->unk1F6 = 0x9C4;
    arg0->unk1E1 = 1;
    arg0->unk1E6 = 0xA;
    arg0->unk210 = 0.0f;
    arg0->unk338 = 0x1388;
    arg0->unk33C = 0;
    temp_a1 = (1 * 4) + D_808FC1F8;
    arg0->unk330 = 0.8f;
    arg0->unk328 = *D_808FC1F8;
    temp_v1 = arg0 + (1 << 5);
    temp_v1->unk338 = 0x1388;
    temp_v1->unk33C = 0;
    temp_v1->unk330 = 0.8f;
    temp_v1->unk328 = (f32) temp_a1->unk0;
    temp_v1->unk35C = 0;
    temp_v1->unk358 = 0x1388;
    temp_v1->unk350 = 0.8f;
    temp_v1->unk348 = (f32) temp_a1->unk4;
    temp_v1->unk37C = 0;
    temp_v1->unk378 = 0x1388;
    temp_v1->unk370 = 0.8f;
    temp_v1->unk368 = (f32) temp_a1->unk8;
    temp_v1->unk39C = 0;
    temp_v1->unk398 = 0x1388;
    temp_v1->unk390 = 0.8f;
    temp_v1->unk388 = (f32) temp_a1->unkC;
    arg0->actionFunc = func_808FB2C0;
}

void func_808FA870(EnRr *arg0) {
    void *temp_v1;

    arg0->unk210 = 0.0f;
    arg0->unk1F6 = 0x9C4;
    arg0->unk33C = 0;
    arg0->unk338 = 0;
    arg0->unk328 = 0.0f;
    temp_v1 = arg0 + (1 << 5);
    arg0->unk204 = 0.15f;
    arg0->unk20C = 2048.0f;
    arg0->unk330 = 1.0f;
    temp_v1->unk39C = 0;
    temp_v1->unk398 = 0;
    temp_v1->unk388 = 0.0f;
    temp_v1->unk37C = 0;
    temp_v1->unk378 = 0;
    temp_v1->unk368 = 0.0f;
    temp_v1->unk35C = 0;
    temp_v1->unk358 = 0;
    temp_v1->unk348 = 0.0f;
    temp_v1->unk328 = 0.0f;
    temp_v1->unk338 = 0;
    temp_v1->unk33C = 0;
    temp_v1->unk390 = 1.0f;
    temp_v1->unk370 = 1.0f;
    temp_v1->unk350 = 1.0f;
    temp_v1->unk330 = 1.0f;
    arg0->actionFunc = func_808FAF94;
}

void func_808FA910(Actor *arg0) {
    Actor *temp_a0;
    void *temp_v0;

    arg0->unk1E4 = 0;
    arg0->unk214 = 0.0f;
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 0x28);
    temp_a0 = arg0;
    temp_a0->unk338 = 0;
    temp_a0->unk33C = 0;
    temp_v0 = temp_a0 + (1 << 5);
    temp_a0->unk210 = 0.0f;
    temp_a0->unk328 = 0.0f;
    temp_v0->unk39C = 0;
    temp_v0->unk398 = 0;
    temp_v0->unk37C = 0;
    temp_v0->unk378 = 0;
    temp_v0->unk35C = 0;
    temp_v0->unk358 = 0;
    temp_v0->unk338 = 0;
    temp_v0->unk33C = 0;
    temp_v0->unk388 = 0.0f;
    temp_v0->unk368 = 0.0f;
    temp_v0->unk348 = 0.0f;
    temp_v0->unk328 = 0.0f;
    temp_a0->unk144 = func_808FB42C;
    arg0 = temp_a0;
    Audio_PlayActorSound2(temp_a0, 0x3996U);
    arg0->flags &= -2;
}

void func_808FA9CC(Actor *arg0) {
    void *temp_v1;

    arg0->unk1F2 = 0;
    arg0->unk1F4 = 0;
    arg0->unk1F6 = 0x9C4;
    arg0->unk1F8 = 0;
    arg0->unk1FA = 0;
    arg0->unk200 = 0.0f;
    arg0->unk208 = 0.0f;
    arg0->unk33C = 0;
    arg0->unk33A = 0;
    arg0->unk338 = 0;
    temp_v1 = arg0 + (1 << 5);
    arg0->unk204 = 0.15f;
    arg0->unk20C = 2048.0f;
    arg0->unk32C = 1.0f;
    arg0->unk330 = 1.0f;
    temp_v1->unk39C = 0;
    temp_v1->unk39A = 0;
    temp_v1->unk398 = 0;
    temp_v1->unk37C = 0;
    temp_v1->unk37A = 0;
    temp_v1->unk378 = 0;
    temp_v1->unk35C = 0;
    temp_v1->unk35A = 0;
    temp_v1->unk358 = 0;
    temp_v1->unk338 = 0;
    temp_v1->unk33A = 0;
    temp_v1->unk33C = 0;
    temp_v1->unk390 = 1.0f;
    temp_v1->unk38C = 1.0f;
    temp_v1->unk370 = 1.0f;
    temp_v1->unk36C = 1.0f;
    temp_v1->unk350 = 1.0f;
    temp_v1->unk34C = 1.0f;
    temp_v1->unk32C = 1.0f;
    temp_v1->unk330 = 1.0f;
    arg0->unk144 = func_808FB710;
}

s32 func_808FAA94(Actor *arg0, GlobalContext *arg1) {
    void *sp2C;
    s32 temp_v0;
    u8 temp_v0_2;
    u8 temp_v1;

    temp_v1 = arg0->unk159;
    temp_v0 = (temp_v1 & 2) != 0;
    if ((temp_v0 != 0) || ((arg0->unk1A5 & 2) != 0)) {
        if (temp_v0 != 0) {
            sp2C = arg0 + 0x148;
        } else {
            sp2C = arg0 + 0x194;
        }
        arg0->unk159 = (u8) (temp_v1 & 0xFFFD);
        arg0->unk1A5 = (u8) (arg0->unk1A5 & 0xFFFD);
        if ((arg0->unk1E0 == 0xA) && ((*sp2C->unk3C & 0xDB0B3) != 0)) {
            goto block_19;
        }
        if (arg0->colChkInfo.damageEffect == 0xE) {
            goto block_19;
        }
        func_800BE258(arg0, sp2C + 0x18);
        func_808FA4F4(arg0, arg1);
        func_808FA19C(arg0, arg1);
        if (Actor_ApplyDamage(arg0) == 0) {
            Enemy_StartFinishingBlow(arg1, arg0);
            if (arg0->colChkInfo.damageEffect == 3) {
                func_808FA11C(arg0, arg1);
                arg0->unk159 = (u8) (arg0->unk159 & 0xFFFE);
                arg0->unk1A5 = (u8) (arg0->unk1A5 & 0xFFFE);
                func_808FA9CC(arg0);
                return 1;
            }
            func_808FA01C(arg0, arg1, sp2C);
            func_808FA910(arg0);
            return 1;
        }
        temp_v0_2 = arg0->colChkInfo.damageEffect;
        if (temp_v0_2 == 1) {
            Audio_PlayActorSound2(arg0, 0x389EU);
            func_800BCB70(arg0, 0, 0xFF, 0, (s16) 0x50);
            arg0->unk1EE = 0x50;
            func_808FA9CC(arg0);
            return 1;
        }
        if (temp_v0_2 == 3) {
            func_808FA11C(arg0);
            func_808FA9CC(arg0);
            return 1;
        }
        func_808FA01C(arg0, arg1, sp2C);
        func_808FA6B8(arg0);
        return 1;
    }
block_19:
    return 0;
}

void func_808FAC80(Actor *arg0, GlobalContext *arg1) {
    void *sp1C;
    Actor *temp_a2;
    u8 temp_v0;

    temp_a2 = arg0;
    sp1C = arg1->actorCtx.actorList[2].first;
    if ((temp_a2->unk1F0 == 0) && ((temp_v0 = temp_a2->unk1A4, ((temp_v0 & 2) != 0)) || ((temp_a2->unk158 & 2) != 0))) {
        temp_a2->unk1A4 = (u8) (temp_v0 & 0xFFFD);
        temp_a2->unk158 = (u8) (temp_a2->unk158 & 0xFFFD);
        arg0 = temp_a2;
        if (arg1->grabPlayer(arg1, sp1C, temp_a2, arg1) != 0) {
            sp1C->parent = arg0;
            func_808FA3F8(arg0, sp1C, arg0);
        }
    }
}

void func_808FAD1C(EnRr *arg0, GlobalContext *arg1) {
    EnRr *temp_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    EnRr *phi_v0;
    s32 phi_s0;
    s32 phi_s0_2;
    void *phi_s1;

    arg0->unk1F2 = 0;
    arg0->unk1F4 = 0;
    arg0->unk1F6 = 0x9C4;
    arg0->unk1F8 = 0;
    arg0->unk1FA = 0;
    arg0->unk200 = 0.0f;
    arg0->unk208 = 0.0f;
    arg0->unk204 = 0.15f;
    arg0->unk20C = 2048.0f;
    phi_v0 = arg0;
    phi_s0 = 0;
    do {
        phi_v0->unk338 = 0;
        phi_v0->unk33A = 0;
        phi_v0->unk33C = 0;
        phi_v0->unk32C = 1.0f;
        phi_v0->unk330 = 1.0f;
        temp_s0 = phi_s0 + 1;
        temp_v0 = phi_v0 + 0x20;
        temp_v0->unk314 = arg0->unk200;
        phi_v0 = temp_v0;
        phi_s0 = temp_s0;
    } while (temp_s0 < 5);
    phi_s0_2 = 1;
    phi_s1 = arg0 + 0x344;
    do {
        phi_s1->unk14 = (s16) (s32) (Math_CosS((s16) (arg0->unk1F8 * phi_s0_2)) * arg0->unk208);
        temp_s0_2 = phi_s0_2 + 1;
        phi_s1->unk18 = (s16) (s32) (Math_SinS((s16) (arg0->unk1FA * phi_s0_2)) * arg0->unk208);
        phi_s0_2 = temp_s0_2;
        phi_s1 += 0x20;
    } while (temp_s0_2 != 5);
}

void func_808FAE50(EnRr *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 phi_s3;
    void *phi_s1;
    s32 phi_s0;
    void *phi_s1_2;

    phi_s1 = arg0 + 0x324;
    if (func_808FB42C != arg0->actionFunc) {
        phi_s3 = 0;
        do {
            temp_s3 = phi_s3 + 0x4000;
            phi_s1->unk10 = (f32) (Math_CosS((s16) (arg0->unk1F2 + phi_s3)) * arg0->unk200);
            phi_s3 = temp_s3;
            phi_s1 += 0x20;
        } while (temp_s3 < 0x14000);
        phi_s0 = 1;
        phi_s1_2 = arg0 + 0x344;
        if (arg0->unk1E1 == 0) {
            do {
                phi_s1_2->unk14 = (s16) (s32) (Math_CosS((s16) (arg0->unk1F2 + (phi_s0 * arg0->unk1F8))) * arg0->unk208);
                temp_s0 = phi_s0 + 1;
                phi_s1_2->unk18 = (s16) (s32) (Math_SinS((s16) (arg0->unk1F2 + (phi_s0 * arg0->unk1FA))) * arg0->unk208);
                phi_s0 = temp_s0;
                phi_s1_2 += 0x20;
            } while (temp_s0 != 5);
        }
    }
    if (arg0->unk1EE == 0) {
        arg0->unk1F2 += arg0->unk1F4;
    }
}

void func_808FAF94(EnRr *this, GlobalContext *globalCtx) {
    Actor *sp2C;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1F4, (s16) 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if ((this->unk1E6 == 0) && ((sp2C->unkA70 & 0x80) == 0) && (Player_GetMask(globalCtx) != 0x10) && (this->actor.xzDistToPlayer < (8421.053f * this->actor.scale.x))) {
        func_808FA260((Actor *) this);
        return;
    }
    if ((this->actor.xzDistToPlayer < 400.0f) && (this->actor.speedXZ == 0.0f)) {
        func_808FA238((Actor *) this, 2.0f);
    }
}

void func_808FB088(EnRr *this, GlobalContext *globalCtx) {
    u8 temp_t7;

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 0xA, 0x1F4, (s16) 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (Player_GetMask(globalCtx) == 0x10) {
        func_808FA344(this);
        return;
    }
    temp_t7 = this->unk1E1;
    switch (temp_t7) {
    case 1:
        if (this->unk1E6 == 0) {
            this->unk1E1 = 2;
            return;
        }
    default:
        return;
    case 2:
        if (this->unk1E6 == 0) {
            this->unk1E6 = 5;
            this->unk1E1 = 3;
            this->unk3B0 = 1.5f;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    case 3:
        if (this->unk1E6 == 0) {
            this->unk1E6 = 2;
            this->unk1E1 = 4;
            this->unk3A8 = 2000.0f;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    case 4:
        if (this->unk1E6 == 0) {
            this->unk1E6 = 0x14;
            this->unk1E1 = 5;
            this->unk3B0 = 0.8f;
            return;
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    case 5:
        if (this->unk1E6 == 0) {
            func_808FA344(this);
        }
        /* Duplicate return node #14. Try simplifying control flow for better match */
        return;
    }
}

void func_808FB1C0(EnRr *this, GlobalContext *globalCtx) {
    Actor *temp_s1;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    func_8013ECE0(this->actor.xyzDistToPlayerSq, 0x78U, 2U, 0x78U);
    if ((this->unk1E4 & 7) == 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3993U);
    }
    temp_s1->unkAE8 = 0;
    this->unk1F0 = 8;
    this->unk1EA += -1;
    if (this->unk1EA == 0) {
        func_808FA7AC(this);
        return;
    }
    Math_StepToF((f32 *) &temp_s1->world, this->unk228, 30.0f);
    Math_StepToF(&temp_s1->world.pos.y, this->unk22C + this->unk218, 30.0f);
    Math_StepToF(&temp_s1->world.pos.z, this->unk230, 30.0f);
    Math_StepToF(&this->unk218, -(f32) this->unk148.dim.height, 5.0f);
}

void func_808FB2C0(EnRr *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v0;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    this->unk1E6 += -1;
    temp_v0->unkAE8 = 0;
    sp24 = temp_v0;
    Math_StepToF((f32 *) &temp_v0->world, this->unk228, 30.0f);
    Math_StepToF(&temp_v0->world.pos.y, this->unk22C + this->unk218, 30.0f);
    Math_StepToF(&temp_v0->world.pos.z, this->unk230, 30.0f);
    Math_StepToF(&this->unk218, -(f32) this->unk148.dim.height, 5.0f);
    if (this->unk1E6 == 0) {
        this->unk1E1 = 0;
        func_808FA4F4((Actor *) this, globalCtx);
        func_808FA344(this);
    }
}

void func_808FB398(void *arg0, ? arg1) {
    s16 temp_v0;
    void *temp_v0_2;
    s16 phi_v1;

    arg0->unk1EC = (s16) (arg0->unk1EC - 1);
    temp_v0 = arg0->unk1EC;
    if (temp_v0 == 0) {
        func_808FA870();
        return;
    }
    if (arg0->unk1E0 == 0x1E) {
        if ((temp_v0 & 2) != 0) {
            phi_v1 = 0x3E8;
        } else {
            phi_v1 = -0x3E8;
        }
    } else {
        phi_v1 = -0x1388;
        if ((temp_v0 & 8) != 0) {
            phi_v1 = 0x1388;
        }
    }
    temp_v0_2 = arg0 + 0x20;
    temp_v0_2->unk35C = phi_v1;
    temp_v0_2->unk37C = phi_v1;
    temp_v0_2->unk39C = phi_v1;
    temp_v0_2->unk33C = phi_v1;
}

void func_808FB42C(EnRr *this, GlobalContext *globalCtx) {
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 *temp_s1;
    f32 temp_f0;
    f32 temp_f20;
    s16 temp_v0;
    s32 temp_s0;
    f32 *phi_s2;
    s32 phi_s0;
    f32 *phi_s1;

    temp_v0 = this->unk1E4;
    this->actor.colorFilterTimer = 0x28;
    phi_s1 = &this->unk324;
    if ((s32) temp_v0 < 0x28) {
        phi_s2 = &this->unk328;
        phi_s0 = 0;
        do {
            Math_StepToF(phi_s2, (f32) (phi_s0 + 0x3B) - ((f32) this->unk1E4 * 25.0f), 50.0f);
            temp_s0 = phi_s0 + 1;
            temp_f0 = (f32) (4 - phi_s0);
            phi_s1->unkC = (f32) ((temp_f0 * temp_f0 * (f32) this->unk1E4 * 0.003f) + 1.0f);
            phi_s2 += 0x20;
            phi_s0 = temp_s0;
            phi_s1 += 0x20;
        } while (temp_s0 != 5);
        return;
    }
    if ((s32) temp_v0 >= 0x5F) {
        if (this->unk1E2 != 0) {
            Item_DropCollectible(globalCtx, (Vec3f *) &this->actor.world, 0x16U);
        }
        Item_DropCollectibleRandom(globalCtx, (Actor *) this, (Vec3f *) &this->actor.world, 0x90);
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (temp_v0 == 0x58) {
        temp_s1 = &sp74;
        sp74 = this->actor.world.pos.x;
        sp78 = this->actor.world.pos.y + 20.0f;
        sp7C = this->actor.world.pos.z;
        func_800B3030(globalCtx, (Vec3f *) temp_s1, &D_801D15B0, &D_801D15B0, (s16) 0x64, (s16) 0, 0);
        Audio_PlaySoundAtPosition(globalCtx, (Vec3f *) temp_s1, 0xB, 0x3878U);
        return;
    }
    temp_f20 = this->actor.scale.y * 66.66667f;
    Math_StepToF((f32 *) &this->actor.scale, 0.0f, this->unk214);
    Math_StepToF(&this->unk214, 0.001f * temp_f20, 0.00001f * temp_f20);
    this->actor.scale.z = this->actor.scale.x;
}

void func_808FB680(EnRr *this, GlobalContext *globalCtx) {
    if (this->unk1E6 == 0) {
        this->actionFunc = func_808FAF94;
        return;
    }
    Math_SmoothStepToS(&this->actor.shape.rot.y, (s16) (this->actor.yawTowardsPlayer + 0x8000), 0xA, 0x3E8, (s16) 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    if (this->actor.speedXZ == 0.0f) {
        func_808FA238((Actor *) this, 2.0f);
    }
}

void func_808FB710(EnRr *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    this->unk1EE += -1;
    temp_v0 = this->unk1EE;
    if (temp_v0 == 0) {
        func_808FA19C((Actor *) this);
        func_808FA870(this);
        this->actionFunc = func_808FAF94;
        return;
    }
    if ((this->actor.colChkInfo.health == 0) && (temp_v0 == 0x4D)) {
        func_808FA19C((Actor *) this);
        func_808FA910((Actor *) this);
    }
}

void func_808FB794(EnRr *arg0, GlobalContext *arg1) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f0_2;

    temp_f0 = arg0->actor.yDistToWater;
    if ((temp_f0 < (f32) arg0->unk148.dim.height) && (temp_f0 > 1.0f) && (((u32) arg1->gameplayFrames % 9U) == 0)) {
        sp2C = arg0->actor.world.pos.x;
        sp30 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
        sp34 = arg0->actor.world.pos.z;
        temp_f0_2 = arg0->actor.scale.x;
        EffectSsGRipple_Spawn(arg1, (Vec3f *) &sp2C, (s16) (s32) (temp_f0_2 * 34210.527f), (s16) (s32) (temp_f0_2 * 60526.316f), (s16) 0);
    }
}

void EnRr_Update(EnRr *this, GlobalContext *globalCtx) {
    ColliderCylinder *temp_s2;
    ColliderCylinder *temp_s3;
    CollisionCheckContext *temp_s0;
    f32 *temp_s0_2;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_s2_2;
    void (*temp_v0_3)(EnRr *, GlobalContext *);
    CollisionCheckContext *phi_s0;
    s16 *phi_s5;
    EnRr *phi_s1;
    s16 *phi_s4;
    f32 *phi_s0_2;
    f32 *phi_s3;
    s32 phi_s2;
    EnRr *this = (EnRr *) thisx;

    this->unk1E4 += 1;
    if (this->unk1EE == 0) {
        this->unk1E8 += 1;
    }
    temp_v0 = this->unk1E6;
    if (temp_v0 != 0) {
        this->unk1E6 = temp_v0 - 1;
    }
    temp_v0_2 = this->unk1F0;
    if (temp_v0_2 != 0) {
        this->unk1F0 = temp_v0_2 - 1;
    }
    Actor_SetHeight((Actor *) this, this->actor.scale.y * 2000.0f);
    func_808FAE50(this, globalCtx);
    if (func_808FAA94((Actor *) this, globalCtx) == 0) {
        func_808FAC80((Actor *) this, globalCtx);
    }
    this->actionFunc(this, globalCtx);
    if (this->actor.params == 2) {
        this->actor.speedXZ = 0.0f;
    } else {
        Math_StepToF(&this->actor.speedXZ, 0.0f, 0.1f);
    }
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 30.0f, (f32) this->unk148.dim.radius, 0.0f, 0x5DU);
    func_808FB794(this, globalCtx);
    temp_v1 = this->unk1FC;
    temp_s2 = &this->unk148;
    if (((s32) temp_v1 > 0) && ((globalCtx->actorCtx.actorList[2].first->unkA70 & 0x80) == 0)) {
        this->unk1FC = temp_v1 - 1;
        if (this->unk1FC == 0) {
            this->unk148.base.ocFlags1 |= 8;
        }
    }
    Collider_UpdateCylinder((Actor *) this, temp_s2);
    temp_v0_3 = this->actionFunc;
    if ((func_808FB42C != temp_v0_3) && (func_808FB398 != temp_v0_3)) {
        temp_s0 = &globalCtx->colChkCtx;
        CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) temp_s2);
        temp_s3 = &this->unk194;
        CollisionCheck_SetAC(globalCtx, temp_s0, (Collider *) temp_s3);
        if ((this->unk1F0 == 0) && (func_808FB088 == this->actionFunc) && (this->unk1EE == 0)) {
            CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) temp_s2);
            CollisionCheck_SetAT(globalCtx, temp_s0, (Collider *) temp_s3);
            phi_s0 = temp_s0;
        } else {
            this->unk194.base.atFlags &= 0xFFFD;
            this->unk148.base.atFlags &= 0xFFFD;
            phi_s0 = temp_s0;
        }
    } else {
        this->unk194.base.atFlags &= 0xFFFD;
        this->unk148.base.atFlags &= 0xFFFD;
        this->unk194.base.acFlags &= 0xFFFD;
        this->unk148.base.acFlags &= 0xFFFD;
        phi_s0 = &globalCtx->colChkCtx;
    }
    CollisionCheck_SetOC(globalCtx, phi_s0, (Collider *) temp_s2);
    if (this->unk1EE == 0) {
        Math_ScaledStepToS(&this->unk1F4, this->unk1F6, 0x32);
        Math_ScaledStepToS(&this->unk1F8, 0x3000, 0xA4);
        Math_ScaledStepToS(&this->unk1FA, 0x1000, 0x29);
        Math_StepToF(&this->unk200, this->unk204, 0.0015f);
        Math_StepToF(&this->unk208, this->unk20C, 20.0f);
        temp_s0_2 = &this->unk324;
        phi_s5 = &this->unk33E;
        phi_s1 = this;
        phi_s4 = temp_s0_2 + 0x1E;
        phi_s0_2 = temp_s0_2;
        phi_s3 = temp_s0_2 + 8;
        phi_s2 = 0;
        do {
            Math_SmoothStepToS(phi_s5, phi_s1->unk338, 5, (s16) (s32) (this->unk210 * 1000.0f), (s16) 0);
            Math_SmoothStepToS(phi_s4, phi_s0_2->unk18, 5, (s16) (s32) (this->unk210 * 1000.0f), (s16) 0);
            Math_StepToF(phi_s3, phi_s0_2->unkC, this->unk210 * 0.2f);
            Math_StepToF(phi_s0_2, phi_s0_2->unk4, this->unk210 * 300.0f);
            temp_s2_2 = phi_s2 + 0x20;
            phi_s5 += 0x20;
            phi_s1 += 0x20;
            phi_s4 += 0x20;
            phi_s0_2 += 0x20;
            phi_s3 += 0x20;
            phi_s2 = temp_s2_2;
        } while (temp_s2_2 != 0xA0);
        Math_StepToF(&this->unk210, 1.0f, 0.2f);
    }
    if (this->unk21C > 0.0f) {
        if (this->unk1E0 != 0xA) {
            Math_StepToF(&this->unk21C, 0.0f, 0.05f);
            temp_f0 = (this->unk21C + 1.0f) * 0.425f;
            this->unk220 = temp_f0;
            if (temp_f0 > 0.85f) {
                this->unk220 = 0.85f;
                return;
            }
            this->unk220 = this->unk220;
            return;
        }
        if (Math_StepToF(&this->unk224, 0.85f, 0.02125f) == 0) {
            func_800B9010((Actor *) this, 0x20B2U);
        }
        /* Duplicate return node #34. Try simplifying control flow for better match */
    }
}

void EnRr_Draw(EnRr *this, GlobalContext *globalCtx) {
    f32 spA4;
    GraphicsContext *sp9C;
    Vec3f *sp80;
    Gfx *temp_s0;
    Gfx *temp_s5;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_s0_2;
    Vec3f *temp_s0_3;
    Vec3f *temp_s0_4;
    Vec3f *temp_s0_5;
    Vec3f *temp_s0_6;
    Vec3f *temp_s0_7;
    f32 temp_f12;
    f32 temp_f20;
    s16 *temp_s1;
    s32 temp_s2;
    u32 temp_a3;
    s16 *phi_s1;
    s16 *phi_s3;
    RSPMatrix *phi_s5;
    s32 phi_s2;
    Vec3f *phi_s0;
    EnRr *this = (EnRr *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0->polyOpa.d - 0x100;
    temp_s5 = temp_s0;
    temp_a0->polyOpa.d = temp_s0;
    temp_a0_2 = globalCtx->state.gfxCtx;
    sp9C = temp_a0_2;
    func_8012C28C(temp_a0_2);
    temp_v0 = sp9C->polyOpa.p;
    sp9C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w1 = (u32) temp_s0;
    temp_v0->words.w0 = 0xDB060030;
    temp_v0_2 = sp9C->polyOpa.p;
    sp9C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDB060020;
    temp_a3 = 0 & 0x3F;
    temp_v0_2->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0 & 0x7F, temp_a3, 0x20, 0x10, 1, temp_a3, ((s32) this->unk1E8 * -6) & 0x7F, 0x20, 0x10);
    SysMatrix_StatePush();
    temp_f12 = this->unk32C * (1.0f + this->unk334);
    Matrix_Scale(temp_f12, 1.0f, temp_f12, 1);
    temp_v0_3 = sp9C->polyOpa.p;
    sp9C->polyOpa.p = temp_v0_3 + 8;
    temp_v0_3->words.w0 = 0xDA380003;
    temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_a1 = &this->unk234;
    temp_s0_2 = temp_a1 + 0xC;
    sp80 = temp_a1;
    SysMatrix_GetStateTranslationAndScaledZ(1842.1053f, temp_a1);
    temp_s0_3 = temp_s0_2 + 0xC;
    SysMatrix_GetStateTranslationAndScaledZ(-1842.1053f, temp_s0_2);
    temp_s0_4 = temp_s0_3 + 0xC;
    SysMatrix_GetStateTranslationAndScaledX(1842.1053f, temp_s0_3);
    SysMatrix_GetStateTranslationAndScaledX(-1842.1053f, temp_s0_4);
    SysMatrix_StatePop();
    temp_s1 = &this->actor.unk20;
    phi_s1 = temp_s1;
    phi_s3 = temp_s1 + 0x324;
    phi_s5 = (RSPMatrix *) temp_s5;
    phi_s2 = 1;
    phi_s0 = temp_s0_4 + 0xC;
    do {
        temp_f20 = (phi_s1->unk334 + 1.0f) * phi_s1->unk32C;
        SysMatrix_InsertTranslation(0.0f, phi_s1->unk324 + 1000.0f, 0.0f, 1);
        SysMatrix_InsertRotation(phi_s3->unk1A, phi_s3->unk1C, phi_s3->unk1E, 1);
        SysMatrix_StatePush();
        Matrix_Scale(temp_f20, 1.0f, temp_f20, 1);
        SysMatrix_GetStateAsRSPMatrix(phi_s5);
        if ((phi_s2 & 1) != 0) {
            Matrix_RotateY(0x2000, 1U);
        }
        temp_s0_5 = phi_s0 + 0xC;
        SysMatrix_GetStateTranslationAndScaledZ(1842.1053f, phi_s0);
        temp_s0_6 = temp_s0_5 + 0xC;
        SysMatrix_GetStateTranslationAndScaledZ(-1842.1053f, temp_s0_5);
        temp_s0_7 = temp_s0_6 + 0xC;
        SysMatrix_GetStateTranslationAndScaledX(1842.1053f, temp_s0_6);
        SysMatrix_GetStateTranslationAndScaledX(-1842.1053f, temp_s0_7);
        SysMatrix_StatePop();
        phi_s5 += 0x40;
        phi_s0 = temp_s0_7 + 0xC;
        if (phi_s2 == 3) {
            SysMatrix_GetStateTranslation((Vec3f *) &spA4);
        }
        temp_s2 = phi_s2 + 1;
        phi_s1 += 0x20;
        phi_s3 += 0x20;
        phi_s2 = temp_s2;
    } while (temp_s2 != 5);
    SysMatrix_GetStateTranslation((Vec3f *) &this->unk228);
    this->unk194.dim.pos.x = (s16) (s32) (((this->unk228 - spA4) * 0.85f) + spA4);
    this->unk194.dim.pos.y = (s16) (s32) (((this->unk22C - spA8) * 0.85f) + spA8);
    this->unk194.dim.pos.z = (s16) (s32) (((this->unk230 - spAC) * 0.85f) + spAC);
    temp_v0_4 = sp9C->polyOpa.p;
    sp9C->polyOpa.p = temp_v0_4 + 8;
    temp_v0_4->words.w1 = (u32) &D_06000470;
    temp_v0_4->words.w0 = 0xDE000000;
    func_800BE680(globalCtx, (Actor *) this, (Vec3f []) sp80, 0x14, this->actor.scale.y * 66.66667f * this->unk220, this->unk224, this->unk21C, (u8) (s32) this->unk1E0);
}
