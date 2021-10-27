typedef struct Actor {
    /* 0x000 */ s16 id;
    /* 0x002 */ u8 category;
    /* 0x003 */ s8 room;
    /* 0x004 */ u32 flags;
    /* 0x008 */ PosRot home;
    /* 0x01C */ s16 params;
    /* 0x01E */ s8 objBankIndex;
    /* 0x01F */ s8 targetMode;
    /* 0x020 */ s16 unk20;
    /* 0x022 */ char pad_22[0x2];
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ u8 unk_52;                          /* inferred */
    /* 0x053 */ s8 unk_53;                          /* inferred */
    /* 0x054 */ f32 targetArrowOffset;
    /* 0x058 */ Vec3f scale;
    /* 0x064 */ Vec3f velocity;
    /* 0x070 */ f32 speedXZ;
    /* 0x074 */ f32 gravity;
    /* 0x078 */ f32 minVelocityY;
    /* 0x07C */ CollisionPoly *wallPoly;
    /* 0x080 */ CollisionPoly *floorPoly;
    /* 0x084 */ u8 wallBgId;
    /* 0x085 */ u8 floorBgId;
    /* 0x086 */ s16 wallYaw;
    /* 0x088 */ f32 floorHeight;
    /* 0x08C */ f32 yDistToWater;
    /* 0x090 */ u16 bgCheckFlags;
    /* 0x092 */ s16 yawTowardsPlayer;
    /* 0x094 */ f32 xyzDistToPlayerSq;
    /* 0x098 */ f32 xzDistToPlayer;
    /* 0x09C */ f32 yDistToPlayer;
    /* 0x0A0 */ CollisionCheckInfo colChkInfo;
    /* 0x0BC */ ActorShape shape;
    /* 0x0EC */ Vec3f projectedPos;
    /* 0x0F8 */ f32 projectedW;
    /* 0x0FC */ f32 uncullZoneForward;
    /* 0x100 */ f32 uncullZoneScale;
    /* 0x104 */ f32 uncullZoneDownward;
    /* 0x108 */ Vec3f prevPos;
    /* 0x114 */ u8 isTargeted;
    /* 0x115 */ u8 targetPriority;
    /* 0x116 */ u16 textId;
    /* 0x118 */ u16 freezeTimer;
    /* 0x11A */ u16 colorFilterParams;
    /* 0x11C */ u8 colorFilterTimer;
    /* 0x11D */ u8 isDrawn;
    /* 0x11E */ u8 dropFlag;
    /* 0x11F */ u8 hintId;
    /* 0x120 */ Actor *parent;
    /* 0x124 */ Actor *child;
    /* 0x128 */ Actor *prev;
    /* 0x12C */ Actor *next;
    /* 0x130 */ void (*init)(Actor *, GlobalContext *);
    /* 0x134 */ void (*destroy)(Actor *, GlobalContext *);
    /* 0x138 */ void (*update)(Actor *, GlobalContext *);
    /* 0x13C */ void (*draw)(Actor *, GlobalContext *);
    /* 0x140 */ ActorOverlay *overlayEntry;
} Actor;                                            /* size = 0x144 */

typedef struct {
    /* 0x00 */ Vec3s rot;
    /* 0x06 */ s16 face;
    /* 0x08 */ f32 yOffset;
    /* 0x0C */ void (*shadowDraw)(Actor *, Lights *, GlobalContext *);
    /* 0x10 */ f32 shadowScale;
    /* 0x14 */ u8 shadowAlpha;
    /* 0x15 */ u8 feetFloorFlags;
    /* 0x16 */ s16 unk_16;                          /* inferred */
    /* 0x18 */ Vec3f feetPos[2];
} ActorShape;                                       /* size = 0x30 */

typedef struct EnGs {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ void (*unk_190)(Actor *, GlobalContext *); /* inferred */
    /* 0x194 */ s8 unk_194;                         /* inferred */
    /* 0x195 */ s8 unk_195;                         /* inferred */
    /* 0x196 */ s8 unk_196;                         /* inferred */
    /* 0x197 */ char pad_197[0x1];
    /* 0x198 */ s16 unk_198;                        /* inferred */
    /* 0x19A */ s16 unk_19A;                        /* inferred */
    /* 0x19C */ char pad_19C[0x2];
    /* 0x19E */ s16 unk_19E;                        /* inferred */
    /* 0x1A0 */ s16 unk_1A0;                        /* inferred */
    /* 0x1A2 */ s16 unk_1A2;                        /* inferred */
    /* 0x1A4 */ s16 unk_1A4;                        /* inferred */
    /* 0x1A6 */ s16 unk_1A6;                        /* inferred */
    /* 0x1A8 */ s16 unk_1A8;                        /* inferred */
    /* 0x1AA */ char pad_1AA[0x6];                  /* maybe part of unk_1A8[4]? */
    /* 0x1B0 */ Vec3f unk_1B0;                      /* inferred */
    /* 0x1BC */ Vec3f unk_1BC;                      /* inferred */
    /* 0x1C8 */ char pad_1C8[0x2C];                 /* maybe part of unk_1BC[4]? */
    /* 0x1F4 */ u8 unk_1F4;                         /* inferred */
    /* 0x1F5 */ u8 unk_1F5;                         /* inferred */
    /* 0x1F6 */ u8 unk_1F6;                         /* inferred */
    /* 0x1F7 */ Color_RGB8 unk_1F7;                 /* inferred */
    /* 0x1FA */ Color_RGB8 unk_1FA;                 /* inferred */
    /* 0x1FD */ char pad_1FD[0x3];
    /* 0x200 */ f32 unk_200;                        /* inferred */
    /* 0x204 */ s32 unk_204;                        /* inferred */
    /* 0x208 */ s32 unk_208;                        /* inferred */
    /* 0x20C */ char pad_20C[0x6];                  /* maybe part of unk_208[2]? */
    /* 0x212 */ s16 unk_212;                        /* inferred */
    /* 0x214 */ char pad_214[0x2];
    /* 0x216 */ s16 unk_216;                        /* inferred */
    /* 0x218 */ s16 unk_218;                        /* inferred */
    /* 0x21A */ char pad_21A[0x2];
    /* 0x21C */ s16 unk_21C;                        /* inferred */
    /* 0x21E */ s16 unk_21E;                        /* inferred */
} EnGs;                                             /* size = 0x220 */

struct _mips2c_stack_EnGs_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGs_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ Gfx *sp40;                           /* inferred */
    /* 0x44 */ char pad_44[0x8];                    /* maybe part of sp40[3]? */
    /* 0x4C */ u32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x8];
};                                                  /* size = 0x58 */

struct _mips2c_stack_EnGs_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Color_RGB8 *sp24;                    /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGs_Update {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Color_RGB8 *sp20;                    /* inferred */
    /* 0x24 */ Color_RGB8 *sp24;                    /* inferred */
    /* 0x28 */ u8 *sp28;                            /* inferred */
    /* 0x2C */ s16 sp2C;                            /* inferred */
    /* 0x2E */ s16 sp2E;                            /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80997A90 {};              /* size 0x0 */

struct _mips2c_stack_func_80997AFC {};              /* size 0x0 */

struct _mips2c_stack_func_80997D14 {};              /* size 0x0 */

struct _mips2c_stack_func_80997D38 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80997DEC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80997E4C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80997FF0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80998040 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099807C {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80998300 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80998334 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_809984F4 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809985B8 {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ ? sp38;                              /* inferred */
    /* 0x38 */ char pad_38[0x10];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80998704 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_8099874C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809989B4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809989F4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80998A48 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80998BBC {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ Actor *sp34;                         /* inferred */
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80998D44 {
    /* 0x00 */ char pad_0[0x3C];
    /* 0x3C */ Actor *sp3C;                         /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80998F9C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ CollisionCheckInfo *sp2C;            /* inferred */
    /* 0x30 */ char pad_30[0xA];                    /* maybe part of sp2C[3]? */
    /* 0x3A */ s16 sp3A;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];                    /* maybe part of sp3A[3]? */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ f32 sp48;                            /* inferred */
    /* 0x4C */ Actor *sp4C;                         /* inferred */
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80999584 {};              /* size 0x0 */

struct _mips2c_stack_func_809995A4 {
    /* 0x00 */ char pad_0[0x54];
    /* 0x54 */ f32 sp54;                            /* inferred */
    /* 0x58 */ f32 sp58;                            /* inferred */
    /* 0x5C */ f32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ f32 sp64;                            /* inferred */
    /* 0x68 */ f32 sp68;                            /* inferred */
    /* 0x6C */ f32 sp6C;                            /* inferred */
    /* 0x70 */ f32 sp70;                            /* inferred */
    /* 0x74 */ f32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x4];
    /* 0x7C */ Actor *sp7C;                         /* inferred */
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80999A8C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80999AC0 {};              /* size 0x0 */

struct _mips2c_stack_func_80999B34 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80999BC8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
    /* 0x28 */ CollisionCheckContext *sp28;         /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

? EffectSsBomb2_SpawnLayered(GlobalContext *, f32 *, ? *, ? *, s32, s32); /* extern */
s32 func_800B8718(EnGs *, GlobalContext *);         /* extern */
? func_800B874C(void *, s32, ?, ?);                 /* extern */
? func_800BC848(EnGs *, GlobalContext *, s16, s16); /* extern */
? func_8013E8F8(void *, s32, f32, f32, s32, s32, s32); /* extern */
? func_80165658(s16, s16);                          /* extern */
? func_8016566C(s16, s16);                          /* extern */
? func_80165690();                                  /* extern */
? func_801A5080(?);                                 /* extern */
s32 func_801A5100();                                /* extern */
s8 func_80997A90(s16 arg0, s16 arg1);               /* static */
void func_80997AFC(s8 arg0, Color_RGB8 *arg1, Color_RGB8 *); /* static */
void func_80997D14(EnGs *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_80997D38(void *arg0, s32 arg1);           /* static */
void func_80997DEC(EnGs *arg0, GlobalContext *arg1); /* static */
void func_80997E4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80997FF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998040(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099807C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998300(Actor *arg0, GlobalContext *arg1); /* static */
f32 func_80998334(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, s16 *arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9); /* static */
void func_809984F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809985B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998704(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099874C(EnGs *arg0, GlobalContext *arg1); /* static */
void func_809989B4(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_809989F4(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_80998A48(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
Actor *func_80998BBC(EnGs *arg0, GlobalContext *, Actor *, EnGs *); /* static */
Actor *func_80998D44(EnGs *arg0, GlobalContext *, Actor *, EnGs *); /* static */
Actor *func_80998F9C(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_80999584(void *arg0, ? *arg1);            /* static */
Actor *func_809995A4(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_80999A8C(Actor *arg0, ? arg1);            /* static */
void func_80999AC0(Actor *arg0, s8);                /* static */
void func_80999B34(EnGs *arg0);                     /* static */
void func_80999BC8(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000950;
extern ? D_060009D0;
extern ? D_06000A60;
static ColliderCylinderInit D_8099A3A0 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x15, 0x30, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8099A3CC = {0, 0, 0, 0, 0xFF};
static DamageTable D_8099A3D8 = {
    {
        0xE0,
        0xF0,
        0,
        0xC0,
        0xE0,
        0xE0,
        0,
        0xE0,
        0xD0,
        0xF0,
        0xD0,
        0xB0,
        0xB0,
        0xB0,
        0xE0,
        0xE0,
        0xD0,
        0,
        0,
        0,
        0,
        0,
        0xE0,
        0xE0,
        0xE0,
        0xE0,
        0,
        0,
        0,
        0,
        0,
        0xC0,
    },
};
static ? D_8099A3F8;                                /* unable to generate initializer */
static InitChainEntry D_8099A404;                   /* unable to generate initializer */
static ? D_8099A408;                                /* unable to generate initializer */
static ? D_8099A418;                                /* unable to generate initializer */
static ? D_8099A41B;                                /* unable to generate initializer */
static ? D_8099A41E;                                /* unable to generate initializer */
static Vec3f D_8099A424 = {0.0f, -0.3f, 0.0f};
static Color_RGBA8 D_8099A430 = {0xC8, 0xC8, 0xC8, 0x80};
static Color_RGBA8 D_8099A434 = {0x64, 0x64, 0x64, 0};
static ? D_8099A438;                                /* unable to generate initializer */
static ? D_8099A444;                                /* unable to generate initializer */
static ? D_8099A450;                                /* unable to generate initializer */
static ? D_8099A458;                                /* unable to generate initializer */
static f32 *D_8099A4EC = (f32 *)0x3F4CCCCD;         /* const */
static s16 *D_8099A4F0 = (s16 *)0x3BA3D70A;         /* const */

s8 func_80997A90(s16 arg0, s16 arg1) {
    s8 phi_v1;

    if ((arg0 == 0) || ((arg0 != 1) && (arg0 != 2) && (arg0 == 3))) {
        phi_v1 = 0;
    } else {
        phi_v1 = (s8) (((u32) gSaveContext.roomInf[126][1] >> (arg1 * 3)) & 7);
    }
    return phi_v1;
}

void func_80997AFC(s8 arg0, Color_RGB8 *arg1) {
    void *temp_t8;

    temp_t8 = (arg0 * 3) + &D_8099A3F8;
    arg1->r = temp_t8->unk_0;
    arg1->g = temp_t8->unk_1;
    arg1->b = temp_t8->unk_2;
}

void EnGs_Init(Actor *thisx, GlobalContext *globalCtx) {
    Color_RGB8 *sp24;
    Color_RGB8 *temp_a2;
    s16 temp_t8;
    EnGs *this = (EnGs *) thisx;

    Actor_ProcessInitChain((Actor *) this, &D_8099A404);
    temp_t8 = this->actor.world.rot.z;
    this->unk_208 = -1;
    this->unk_204 = 1;
    this->unk_195 = this->actor.params & 0x1F;
    this->unk_196 = ((s32) this->actor.params >> 5) & 0x7F;
    this->actor.params = ((s32) this->actor.params >> 0xC) & 0xF;
    this->actor.world.rot.z = 0;
    this->unk_198 = temp_t8;
    Collider_InitAndSetCylinder(globalCtx, &this->unk_144, (Actor *) this, &D_8099A3A0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8099A3D8, &D_8099A3CC);
    this->actor.targetMode = 6;
    this->unk_216 = 0;
    this->unk_218 = 0;
    this->unk_200 = 1.0f;
    this->unk_194 = func_80997A90(this->actor.params, this->unk_198);
    temp_a2 = &this->unk_1FA;
    sp24 = temp_a2;
    func_80997AFC(this->unk_194, temp_a2, temp_a2);
    this->unk_1F4 = temp_a2->r;
    this->unk_1F5 = temp_a2->g;
    this->unk_1F6 = temp_a2->b;
    Math_Vec3f_Copy(&this->unk_1B0, &D_801C5DB0);
    Math_Vec3f_Copy(&this->unk_1BC, &D_801C5DB0);
    func_8013E3B8((Actor *) this, (s16 []) &this->unk_212, 2);
    func_801A5080(0);
    if (this->actor.params == 1) {
        Actor_SetScale((Actor *) this, 0.15f);
        this->unk_144.dim.radius = (s16) (s32) ((f32) this->unk_144.dim.radius * 1.5f);
        this->unk_144.dim.height = (s16) (s32) ((f32) this->unk_144.dim.height * 1.5f);
    }
    func_80997D14(this, globalCtx);
}

void EnGs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGs *this = (EnGs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_144);
    func_80165690();
}

void func_80997D14(EnGs *arg0, GlobalContext *arg1) {
    arg0->unk_19A &= 0xFDFF;
    arg0->unk_190 = func_80997D38;
}

void func_80997D38(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (func_80152498(arg1 + 0x4908) == 0) {
        temp_f0 = *(&D_8099A408 + (arg0->params * 4));
        if (arg0->xzDistToPlayer <= temp_f0) {
            func_8013E8F8(arg0, arg1, temp_f0, temp_f0, 0, 0x2000, 0x2000);
        }
    }
    if (arg0->params != 2) {
        func_800B874C(arg0, arg1, 0x42C80000, 0x42C80000);
    }
}

void func_80997DEC(EnGs *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    if (Player_GetMask(arg1) == 1) {
        arg0->unk_210 = 0x20D1;
    } else {
        arg0->unk_210 = 0x20D0;
    }
    arg0->unk_19A |= 0x200;
    arg0->unk_190 = func_80997E4C;
}

void func_80997E4C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_v1;
    u16 temp_t2;
    u16 temp_t4;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_t8_2;
    u16 temp_v0_2;
    u32 temp_v0;
    u16 phi_a1;

    temp_a0 = arg1 + 0x4908;
    arg0 = arg0;
    arg1 = arg1;
    temp_v0 = func_80152498(temp_a0);
    switch (temp_v0) {
    case 0:
        func_801518B0(arg1, arg0->unk_210, arg0);
        return;
    case 4:
    case 5:
    case 6:
        temp_a0_2 = arg1;
        arg0 = arg0;
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            if (temp_v0_2 != 0x20D0) {
                if (temp_v0_2 != 0x20D1) {
                    func_80997D14((EnGs *) arg0, arg1, arg0, arg1);
                    /* Duplicate return node #22. Try simplifying control flow for better match */
                    return;
                }
                temp_v0_3 = arg0->params;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        if (temp_v0_3 != 2) {
                            if (temp_v0_3 != 3) {
                                phi_a1 = arg0->unk_210;
                            } else {
                                temp_t4 = arg0->unk_195 + 0x20B0;
                                arg0->unk_210 = temp_t4;
                                phi_a1 = temp_t4 & 0xFFFF;
                            }
                        } else {
                            temp_t8 = arg0->unk_195 + 0x20F7;
                            arg0->unk_210 = temp_t8;
                            phi_a1 = temp_t8 & 0xFFFF;
                        }
                    } else {
                        temp_t6 = arg0->unk_195 + 0x20F3;
                        arg0->unk_210 = temp_t6;
                        phi_a1 = temp_t6 & 0xFFFF;
                    }
                } else {
                    temp_t8_2 = arg0->unk_195 + 0x20D3;
                    temp_a1 = temp_t8_2 & 0xFFFF;
                    arg0->unk_210 = temp_t8_2;
                    phi_a1 = (u16) temp_a1;
                    if (temp_a1 >= 0x20D4) {
                        temp_v1 = temp_a1 - 0x20D4;
                        if (temp_a1 < 0x20E8) {
                            temp_t2 = temp_v1 + 0x2103;
                            if ((temp_v1 + 0x36) == gSaveContext.inventory.items[(&gItemSlots[54])[temp_v1]]) {
                                arg0->unk_210 = temp_t2;
                                phi_a1 = temp_t2 & 0xFFFF;
                            }
                        }
                    }
                }
                func_80151938(arg1, phi_a1);
                return;
            }
            func_80997D14((EnGs *) arg0, arg1, arg0, arg1);
            return;
        }
    default:
        return;
    }
}

void func_80997FF0(Actor *arg0, GlobalContext *arg1) {
    if (func_8013E2D4(arg0, arg1->unk_1879C[0], -1, 1) != 0) {
        func_80998040(arg0, arg1);
    }
}

void func_80998040(Actor *arg0, GlobalContext *arg1) {
    func_80152434(arg1, 1U);
    arg0->unk_190 = func_8099807C;
}

void func_8099807C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t6;
    u16 temp_v0;

    temp_v0 = arg1->msgCtx.unk1202A;
    if (temp_v0 != 0) {
        if (temp_v0 != 3) {
            if (temp_v0 != 4) {
                if (temp_v0 != 0x1A) {
                    return;
                }
                goto block_21;
            }
            goto block_20;
        }
        temp_t6 = arg1->msgCtx.unk1202E;
        switch (temp_t6) {
        case 7:
        case 8:
            if (Flags_GetSwitch(arg1, (s32) arg0[1].unk_52) == 0) {
                Actor_Spawn(&arg1->actorCtx, arg1, 0x10, arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
                Audio_PlayActorSound2(arg0, 0x28E7U);
                Actor_SetSwitchFlag(arg1, (s32) arg0[1].unk_52);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        case 10:
            if (Flags_GetSwitch(arg1, (s32) arg0[1].unk_52) == 0) {
                Actor_Spawn(&arg1->actorCtx, arg1, 0x10, arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 7);
                Audio_PlayActorSound2(arg0, 0x28E7U);
                Actor_SetSwitchFlag(arg1, (s32) arg0[1].unk_52);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        case 0:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 3)) {
                arg0->unk_194 = 1;
                arg0->unk_19C = 5;
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        case 2:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 2)) {
                arg0->unk_194 = 3;
                arg0->unk_19C = 5;
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        case 1:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 1)) {
                arg0->unk_194 = 2;
                arg0->unk_19C = 5;
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
    } else {
block_20:
        func_80998300(arg0, arg1);
block_21:
        func_80997D14((EnGs *) arg0, arg1);
    default:
    }
}

void func_80998300(Actor *arg0, GlobalContext *arg1) {
    if (arg0->cutscene != -1) {
        ActorCutscene_Stop(arg1->unk_1879C[0]);
    }
}

f32 func_80998334(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, s16 *arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9) {
    f32 sp2C;
    f32 sp24;
    f32 temp_f2;

    sp2C = Math_SmoothStepToF(arg2, *arg3, arg5, arg6, arg7);
    if (arg9 == 0) {
        sp2C = Math_SmoothStepToF(arg2, *arg3, arg5, arg6, arg7);
        temp_f2 = 1.0f / (f32) arg8;
        sp24 = temp_f2;
        arg0[1].velocity.z = (*arg2 * __sinf((f32) ((s32) *arg4 % arg8) * temp_f2 * 360.0f * 0.017453292f)) + 1.0f;
        arg0[1].speedXZ = 1.0f - (*arg2 * __sinf((f32) ((s32) *arg4 % arg8) * temp_f2 * 360.0f * 0.017453292f));
        *arg4 += 1;
    }
    return sp2C;
}

void func_809984F4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0xEF);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((arg0 != temp_v0) && (temp_v0->unk_194 == arg0->unk_194)) {
                temp_v0->unk_19A = (s16) (temp_v0->unk_19A | 1);
                func_80999AC0(temp_v0);
                temp_v0->unk_19C = 3;
                func_80998704(temp_v0, arg1);
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
    func_800B7298(arg1, arg0, 7U);
    arg0->unk_190 = func_809985B8;
}

void func_809985B8(Actor *arg0, GlobalContext *arg1) {
    ? sp38;
    Actor *temp_v0_2;
    Vec3f *temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    if (func_8013E2D4(arg0, arg0->unk_212, -1, 0) != 0) {
        temp_s2 = arg1->actorCtx.actorList[2].first;
        Matrix_RotateY(arg0->shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(160.0f, (Vec3f *) &sp38);
        temp_s0 = temp_s2 + 0x24;
        Math_Vec3f_Sum(temp_s0, (Vec3f *) &sp38, temp_s0);
        Math_Vec3f_Copy(temp_s2 + 0x108, temp_s0);
        arg0->unk_200 = 0.0f;
        temp_v0 = arg0->unk_198 * 3;
        gSaveContext.roomInf[126][1] = (gSaveContext.roomInf[126][1] & ~(7 << temp_v0)) | ((arg0->unk_194 & 7) << temp_v0);
        phi_s0 = NULL;
        do {
            temp_v0_2 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0xEF);
            phi_s0_2 = temp_v0_2;
            if (temp_v0_2 != 0) {
                if ((temp_v0_2 != arg0) && (temp_v0_2->params == 2) && (arg0->unk_198 == temp_v0_2->unk_198)) {
                    temp_v0_2->unk_200 = 0.0f;
                    temp_v0_2->unk_194 = (s8) arg0->unk_194;
                }
                phi_s0_2 = temp_v0_2->next;
            }
            phi_s0 = phi_s0_2;
        } while (phi_s0_2 != 0);
        func_80998704(arg0, arg1);
    }
}

void func_80998704(Actor *arg0, GlobalContext *arg1) {
    arg0->unk_19D = 0;
    arg0->unk_19A = (s16) (arg0->unk_19A & 0xFEFB);
    Audio_PlayActorSound2(arg0, 0x298CU);
    arg0->unk_190 = func_8099874C;
}

void func_8099874C(EnGs *arg0, GlobalContext *arg1) {
    EnGs *temp_a0;
    EnGs *temp_a3;
    s32 temp_v1;
    s8 temp_t0;
    u8 temp_t6;
    u8 temp_v1_2;
    Actor *phi_a2;
    EnGs *phi_a3;
    s32 phi_v1;
    Actor *phi_a2_2;
    Actor *phi_v0;

    temp_a3 = arg0;
    temp_t6 = temp_a3->unk_19C;
    phi_a2 = NULL;
    phi_a3 = temp_a3;
    phi_a2_2 = NULL;
    switch (temp_t6) {
    case 0:
        temp_a0 = temp_a3;
        arg0 = temp_a3;
        phi_v0 = func_80998A48(temp_a0, arg1, NULL, temp_a3);
block_7:
        phi_a2 = phi_v0;
        phi_a3 = arg0;
        break;
    case 1:
        arg0 = temp_a3;
        phi_v0 = func_80998BBC(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 2:
        arg0 = temp_a3;
        phi_v0 = func_80998D44(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 3:
    case 5:
        arg0 = temp_a3;
        phi_v0 = func_80998F9C(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 4:
        arg0 = temp_a3;
        phi_v0 = func_809995A4(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    }
    if (phi_a2 == 0) {
        phi_a3->unk_216 = 0;
        if ((phi_a3->unk_19C == 5) && (phi_a3->unk_194 != 0)) {
            arg0 = phi_a3;
            ActorCutscene_Stop(phi_a3->unk_212);
            temp_t0 = arg0->unk_194;
            phi_v1 = 0;
            phi_a2_2 = (Actor *)1;
            do {
                temp_v1 = phi_v1 + 3;
                phi_v1 = temp_v1;
                if (temp_t0 != (((u32) gSaveContext.roomInf[126][1] >> phi_v1) & 7)) {

                }
            } while (temp_v1 != 0xC);
            if (phi_a2_2 != 0) {
                arg0->unk_20C = -1;
                if (temp_t0 != 1) {
                    if (temp_t0 != 2) {
                        if (temp_t0 != 3) {

                        } else if ((gSaveContext.weekEventReg[77] & 0x10) == 0) {
                            arg0->unk_20C = 6;
                            gSaveContext.weekEventReg[77] |= 0x10;
                        }
                    } else if ((gSaveContext.weekEventReg[77] & 0x20) == 0) {
                        arg0->unk_20C = 6;
                        gSaveContext.weekEventReg[77] |= 0x20;
                    }
                } else if ((gSaveContext.weekEventReg[77] & 8) == 0) {
                    arg0->unk_20C = 6;
                    gSaveContext.weekEventReg[77] |= 8;
                }
                temp_v1_2 = gSaveContext.weekEventReg[90];
                if ((temp_v1_2 & 0x10) == 0) {
                    gSaveContext.weekEventReg[90] = temp_v1_2 | 0x10;
                    arg0->unk_20C = 0xC;
                }
                if (arg0->unk_20C > 0) {
                    func_809989B4(arg0, arg1, phi_a2_2, arg0);
                    return;
                }
                func_80997D14(arg0, arg1, phi_a2_2, (GlobalContext *) arg0);
                return;
            }
            func_80997D14(arg0, arg1, phi_a2_2, (GlobalContext *) arg0);
            return;
        }
        func_80997D14(phi_a3, arg1, phi_a2, (GlobalContext *) phi_a3);
        /* Duplicate return node #33. Try simplifying control flow for better match */
    }
}

void func_809989B4(Actor *arg0, GlobalContext *arg1) {
    func_800B8A1C(arg0, arg1, arg0[1].shape.shadowDraw, arg0->xzDistToPlayer, arg0->yDistToPlayer);
    arg0->unk_190 = func_809989F4;
}

void func_809989F4(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        func_80997D14((EnGs *) arg0, arg1);
        return;
    }
    func_800B8A1C(arg0, arg1, (s32) arg0[1].shape.shadowDraw, arg0->xzDistToPlayer, arg0->yDistToPlayer);
}

Actor *func_80998A48(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk_19D;
    phi_v1 = (Actor *)-1;
    if (temp_v0 == 0) {
        arg0[1].shape.unk_16 = 0xC8;
        sp3C = (Actor *)-1;
        Audio_PlayActorSound2(arg0, 0x3831U);
        arg0[1].unk_53 += 1;
        arg0[1].bgCheckFlags = 0;
        arg0->unk_19A = (s16) (arg0->unk_19A | 1);
        arg0->unk_21C = 5;
        arg0->unk_21E = 0x28;
        arg0[1].unk_53 &= 0xF;
        arg0->unk_19D = 1U;
        arg0[1].xzDistToPlayer = 0.5f;
        arg0[1].yDistToPlayer = 0.0f;
    } else if (temp_v0 == 1) {
        sp3C = (Actor *)-1;
        if (func_80998334(arg0, arg1, &arg0[1].xzDistToPlayer, &arg0[1].yDistToPlayer, (s16 *) &arg0[1].bgCheckFlags, 0.8f, 0.007f, 0.001f, 7, 0) == 0.0f) {
            if ((arg0->params != 0) && (func_801690CC(arg1) == 0) && (func_80152498(&arg1->msgCtx) == 0)) {
                arg0[1].shape.unk_16 = 0;
                Audio_PlayActorSound2(arg0, 0x4846U);
                func_801518B0(arg1, 0x20D2U, NULL);
            }
            arg0->unk_19A = (s16) (arg0->unk_19A & 0xFFFE);
            phi_v1 = NULL;
        }
    }
    return phi_v1;
}

Actor *func_80998BBC(Actor *arg0) {
    Actor *sp34;
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk_19D;
    phi_v1 = (Actor *)-1;
    if (temp_v0 == 0) {
        arg0[1].shape.unk_16 = 0xC8;
        sp34 = (Actor *)-1;
        Audio_PlayActorSound2(arg0, 0x3831U);
        arg0[1].unk_53 += -1;
        arg0[1].bgCheckFlags = 0;
        arg0->unk_19A = (s16) (arg0->unk_19A | 1);
        arg0->unk_21C = 5;
        arg0->unk_21E = 0x28;
        arg0[1].unk_53 &= 0xF;
        arg0->unk_19D = 1U;
        arg0[1].xzDistToPlayer = 0.3f;
        arg0[1].yDistToPlayer = 0.0f;
    } else if (temp_v0 == 1) {
        arg0->unk_1A2 = (s16) (s32) ((f32) ((s32) (s16) arg0[1].bgCheckFlags % 8) * 0.125f * 360.0f * 182.04445f);
        arg0->unk_1A8 = (s16) -(s32) arg0->unk_1A2;
        sp34 = (Actor *)-1;
        if (func_80998334((Actor *) &arg0[1].xzDistToPlayer, (GlobalContext *) &arg0[1].yDistToPlayer, (f32 *) &arg0[1].bgCheckFlags, (f32 *)0x3F4CCCCD, (s16 *)0x3BA3D70A, 0.001f, 1e-44.0f, 0.0f) == 0.0f) {
            arg0->unk_19A = (s16) (arg0->unk_19A & 0xFFFE);
            phi_v1 = NULL;
        }
    }
    return phi_v1;
}

Actor *func_80998D44(Actor *arg0) {
    Actor *sp3C;
    u8 temp_v0;

    sp3C = (Actor *)-1;
    temp_v0 = arg0->unk_19D;
    if (temp_v0 == 0) {
        arg0[1].shape.unk_16 = 0xC8;
        arg0[1].xzDistToPlayer = arg0[1].speedXZ - 1.0f;
        arg0[1].yDistToPlayer = -0.8f;
        Audio_PlayActorSound2(arg0, 0x286DU);
        arg0->unk_19A = (s16) (arg0->unk_19A | 1);
        arg0->unk_21C = 0x28;
        arg0->unk_21E = 0xB;
        arg0->unk_19D = (u8) (arg0->unk_19D + 1);
    } else if (temp_v0 == 1) {
        arg0[1].speedXZ = arg0[1].xzDistToPlayer + 1.0f;
        if (Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 1.0f, 0.4f, 0.001f) == 0.0f) {
            arg0[1].shape.unk_16 = 0;
            arg0[1].bgCheckFlags = 0;
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
        }
    } else if (temp_v0 == 2) {
        arg0[1].bgCheckFlags = (s16) arg0[1].bgCheckFlags + 1;
        if ((s32) (s16) arg0[1].bgCheckFlags >= 0x64) {
            arg0[1].shape.unk_16 = 0xC8;
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
            arg0[1].xzDistToPlayer = arg0[1].speedXZ - 1.0f;
            arg0[1].yDistToPlayer = 0.0f;
        }
    } else if (temp_v0 == 3) {
        arg0[1].speedXZ = arg0[1].xzDistToPlayer + 1.0f;
        if (Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 1.0f, 0.5f, 0.001f) == 0.0f) {
            arg0[1].shape.unk_16 = 0;
            arg0[1].yDistToPlayer = 0.0f;
            arg0[1].bgCheckFlags = 0;
            arg0->unk_21C = 0xA;
            arg0->unk_21E = 0xA;
            arg0[1].xzDistToPlayer = 0.5f;
            Audio_PlayActorSound2(arg0, 0x3831U);
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
        }
    } else if ((temp_v0 == 4) && (func_80998334(arg0, (GlobalContext *) &arg0[1].xzDistToPlayer, &arg0[1].yDistToPlayer, (f32 *) &arg0[1].bgCheckFlags, (s16 *)0x3F800000, 0.03f, 0.001f, 7e-45.0f, 0) == 0.0f)) {
        arg0->unk_19A = (s16) (arg0->unk_19A & 0xFFFE);
        sp3C = NULL;
    }
    return sp3C;
}

Actor *func_80998F9C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    CollisionCheckInfo *sp2C;
    f32 temp_f10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v1;
    u8 temp_v0;
    u8 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    sp4C = (Actor *)-1;
    sp3A = arg0->unk_1A0;
    temp_v0 = arg0->unk_19D;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        arg0[1].xzDistToPlayer = 0.0f;
        arg0[1].yDistToPlayer = 90.0f;
        arg0->unk_19D = 1U;
        arg0->unk_21C = 2;
        arg0->unk_21E = 0x28;
        arg0[1].shape.unk_16 = 0xC8;
        arg0[1].colChkInfo.damageTable = 0.1f;
        arg0[1].colChkInfo.displacement.x = 2.0f;
        arg0[1].colChkInfo.displacement.y = 0.0f;
        phi_v0 = 1U & 0xFF;
    }
    if (phi_v0 == 1) {
        Math_SmoothStepToF(arg0 + 0x1E4, arg0[1].colChkInfo.displacement.x, 1.0f, 0.1f, 0.001f);
        arg0->unk_1A0 = (s16) (arg0->unk_1A0 + (s32) (arg0[1].xzDistToPlayer * 182.04445f));
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0[1].yDistToPlayer, 1.0f, arg0[1].colChkInfo.damageTable, 0.001f) == 0.0f) {
            arg0[1].bgCheckFlags = 0;
            arg0->unk_19D = 2U;
        }
    }
    if (arg0->unk_19D == 2) {
        temp_v0_2 = arg0[1].bgCheckFlags;
        temp_v1 = ((s32) temp_v0_2 < 0x29) ^ 1;
        arg0[1].bgCheckFlags = temp_v0_2 + 1;
        arg0->unk_1A0 = (s16) (arg0->unk_1A0 + (s32) (arg0[1].xzDistToPlayer * 182.04445f));
        if (temp_v1 != 0) {
            arg0[1].xzDistToPlayer = arg0[1].speedXZ - 1.0f;
            arg0[1].yDistToPlayer = 1.5f;
            arg0[1].colChkInfo.damageTable = arg0[1].wallPoly - 1.0f;
            arg0[1].colChkInfo.displacement.x = -0.3f;
            Audio_PlayActorSound2(arg0, 0x28E9U);
            arg0->unk_19D = 3U;
        }
    }
    if (arg0->unk_19D == 3) {
        arg0->unk_1A0 = (s16) (arg0->unk_1A0 + 0x4000);
        sp2C = &arg0[1].colChkInfo;
        sp48 = Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 0.8f, 0.2f, 0.001f);
        Math_SmoothStepToF((f32 *) sp2C, arg0[1].colChkInfo.displacement.x, 0.8f, 0.2f, 0.001f);
        arg0[1].velocity.z = (bitwise f32) arg0[1].colChkInfo.damageTable + 1.0f;
        arg0[1].speedXZ = arg0[1].xzDistToPlayer + 1.0f;
        if (sp48 == 0.0f) {
            arg0[1].xzDistToPlayer = 0.6981317f;
            arg0->unk_19D = 4U;
            arg0[1].yDistToPlayer = 0.34906584f;
        }
    }
    if (arg0->unk_19D == 4) {
        arg0->unk_1A0 = (s16) (arg0->unk_1A0 + (s32) arg0[1].xzDistToPlayer);
        if (Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 0.8f, 16384.0f, 3640.0f) == 0.0f) {
            temp_v0_3 = arg0->unk_1A0;
            phi_v0_2 = temp_v0_3;
            if ((s32) temp_v0_3 > 0) {
                phi_v0_2 = temp_v0_3 + 0xFFFF0000;
            }
            arg0->unk_19D = 5U;
            arg0[1].yDistToPlayer = 0.0f;
            arg0[1].xzDistToPlayer = (f32) phi_v0_2;
        }
    }
    if (arg0->unk_19D == 5) {
        temp_v0_4 = arg0->unk_1A0;
        phi_v0_3 = temp_v0_4;
        if ((s32) temp_v0_4 > 0) {
            phi_v0_3 = temp_v0_4 + 0xFFFF0001;
        }
        arg0[1].xzDistToPlayer = (f32) phi_v0_3;
        arg0->unk_1A0 = (s16) (s32) arg0[1].xzDistToPlayer;
        if (Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 0.8f, 3640.0f, 0.001f) == 0.0f) {
            arg0->unk_1A0 = 0;
            arg0[1].bgCheckFlags = 0;
            arg0[1].xzDistToPlayer = arg0[1].speedXZ - 1.0f;
            arg0[1].yDistToPlayer = 0.0f;
            arg0[1].colChkInfo.damageTable = (bitwise DamageTable *) (arg0[1].velocity.z - 1.0f);
            arg0[1].colChkInfo.displacement.x = 0.0f;
            arg0[1].colChkInfo.displacement.z = 0.0f;
            arg0[1].colChkInfo.displacement.y = 0.5f;
            Audio_PlayActorSound2(arg0, 0x3831U);
            arg0->unk_21C = 0x14;
            arg0->unk_21E = 2;
            arg0->unk_19D = 6U;
        }
    }
    if (arg0->unk_19D == 6) {
        sp2C = &arg0[1].colChkInfo;
        sp48 = Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 0.8f, 0.1f, 0.001f);
        sp44 = Math_SmoothStepToF((f32 *) sp2C, arg0[1].colChkInfo.displacement.x, 0.8f, 0.1f, 0.001f);
        sp40 = Math_SmoothStepToF(&arg0[1].colChkInfo.displacement.y, arg0[1].colChkInfo.displacement.z, 0.8f, 0.02f, 0.001f);
        arg0[1].velocity.z = (bitwise f32) arg0[1].colChkInfo.damageTable + 1.0f;
        arg0[1].speedXZ = arg0[1].xzDistToPlayer + 1.0f;
        arg0[1].velocity.z += __sinf((f32) ((s32) (s16) arg0[1].bgCheckFlags % 0xA) * 0.1f * 360.0f * 0.017453292f) * arg0[1].colChkInfo.displacement.y;
        temp_f10 = __sinf((f32) ((s32) (s16) arg0[1].bgCheckFlags % 0xA) * 0.1f * 360.0f * 0.017453292f) * arg0[1].colChkInfo.displacement.y;
        arg0[1].bgCheckFlags = (s16) arg0[1].bgCheckFlags + 1;
        arg0[1].speedXZ += temp_f10;
        if ((sp48 == 0.0f) && (sp44 == 0.0f) && (sp40 == 0.0f)) {
            arg0[1].shape.unk_16 = 0;
            sp4C = NULL;
        }
    }
    if ((s32) (u16) arg0->unk_1A0 < (s32) (u16) sp3A) {
        Audio_PlayActorSound2(arg0, 0x28EBU);
    }
    return sp4C;
}

void func_80999584(void *arg0, ? *arg1) {
    arg0->unk_0 = (u8) arg1->unk_0;
    arg0->unk_1 = (u8) arg1->unk_1;
    arg0->unk_2 = (u8) arg1->unk_2;
}

Actor *func_809995A4(Actor *arg0, GlobalContext *arg1) {
    Actor *sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_hi;
    s32 temp_s0_2;
    u8 temp_t0;
    u8 temp_v1;
    void *temp_s0;
    u8 phi_v0;
    s32 phi_s0;
    u8 phi_v0_2;

    sp7C = (Actor *)-1;
    temp_v1 = arg0->unk_19D;
    phi_v0 = temp_v1;
    if (temp_v1 == 0) {
        temp_t0 = temp_v1 + 1;
        arg0[1].bgCheckFlags = 0x28;
        arg0->unk_19A = (s16) (arg0->unk_19A | 0x100);
        arg0->unk_19D = temp_t0;
        phi_v0 = temp_t0 & 0xFF;
    }
    temp_s0 = arg0 + 0x1FA;
    if (phi_v0 == 1) {
        temp_v0 = arg0[1].bgCheckFlags;
        arg0[1].bgCheckFlags = temp_v0 - 1;
        if (temp_v0 == 0) {
            arg0[1].bgCheckFlags = 0x50;
            arg0->unk_19A = (s16) (arg0->unk_19A | 4);
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
        }
    }
    if (arg0->unk_19D == 2) {
        arg0[1].bgCheckFlags += -1;
        func_80999584(temp_s0, &D_8099A41E);
        temp_v0_2 = arg0[1].bgCheckFlags;
        if ((s32) temp_v0_2 < 0x50) {
            temp_hi = (s32) temp_v0_2 % 0x14;
            if (temp_hi < 8) {
                if ((s32) temp_v0_2 < 0x14) {
                    if (temp_hi == 7) {
                        func_80999584(temp_s0, &D_8099A418);
                        arg0->unk_1F4 = (u8) temp_s0->unk_0;
                        arg0->unk_1F5 = (u8) temp_s0->unk_1;
                        arg0->unk_1F6 = (u8) temp_s0->unk_2;
                        play_sound(0x481AU);
                        arg0->unk_200 = 0.0f;
                    }
                } else if (temp_hi == 7) {
                    func_80999584(temp_s0, &D_8099A41B);
                    arg0->unk_1F4 = (u8) temp_s0->unk_0;
                    arg0->unk_1F5 = (u8) temp_s0->unk_1;
                    arg0->unk_1F6 = (u8) temp_s0->unk_2;
                    play_sound(0x4819U);
                    arg0->unk_200 = 0.0f;
                }
            }
        }
        if ((s32) arg0[1].bgCheckFlags <= 0) {
            arg0->unk_19A = (s16) (arg0->unk_19A & 0xFFFB);
            arg0->unk_21C = 3;
            arg0->unk_21E = 0x28;
            arg0[1].bgCheckFlags = 0;
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
        }
    }
    phi_v0_2 = arg0->unk_19D;
    if (arg0->unk_19D == 3) {
        phi_s0 = 0;
        do {
            sp60 = randPlusMinusPoint5Scaled(15.0f);
            sp64 = Rand_ZeroFloat(-1.0f);
            temp_f0 = randPlusMinusPoint5Scaled(15.0f);
            sp68 = temp_f0;
            sp6C = arg0->world.pos.x + (2.0f * sp60);
            sp70 = arg0->world.pos.y + 7.0f;
            sp74 = arg0->world.pos.z + (2.0f * temp_f0);
            func_800B0EB0(arg1, (Vec3f *) &sp6C, (Vec3f *) &sp60, &D_8099A424, &D_8099A430, &D_8099A434, (s16) (s32) (Rand_ZeroFloat(50.0f) + 200.0f), (s16) 0x28, (s16) 0xF);
            temp_s0_2 = (phi_s0 + 1) & 0xFF;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 < 3);
        func_800B9010(arg0, 0x2033U);
        temp_v0_3 = (s16) arg0[1].bgCheckFlags;
        arg0[1].bgCheckFlags = temp_v0_3 + 1;
        if ((((s32) temp_v0_3 < 0x28) ^ 1) != 0) {
            arg0->unk_19A = (s16) (arg0->unk_19A | 0x10);
            arg0->uncullZoneForward = 12000.0f;
            arg0->unk_19D = (u8) (arg0->unk_19D + 1);
            arg0->unk_21C = 5;
            arg0->unk_21E = 0x14;
            arg0->unk_19A = (s16) (arg0->unk_19A | 1);
            arg0[1].shape.unk_16 = 0xC8;
            arg0[1].yDistToPlayer = (f32) (((s32) arg0[1].unk_53 >> 2) * 0x444);
            arg0->gravity = 0.3f;
            arg0[1].xzDistToPlayer = 0.0f;
        }
        phi_v0_2 = arg0->unk_19D;
    }
    if (phi_v0_2 == 4) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 20.0f, 20.0f, 60.0f, 3U);
        if ((arg0->bgCheckFlags & 0x18) != 0) {
            sp54 = arg0->world.pos.x;
            sp58 = arg0->world.pos.y;
            sp5C = arg0->world.pos.z;
            Audio_PlayActorSound2(arg0, 0x180EU);
            EffectSsBomb2_SpawnLayered(arg1, &sp54, &D_8099A438, &D_8099A444, 0x64, 0x14);
            arg0[1].bgCheckFlags = 0xA;
            arg0->unk_19A = (s16) (arg0->unk_19A | 8);
            arg0[1].shape.unk_16 = 0;
            arg0->unk_190 = func_80999A8C;
        } else {
            func_800B9010(arg0, 0x20EAU);
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        Math_SmoothStepToF(&arg0[1].xzDistToPlayer, arg0[1].yDistToPlayer, 0.5f, 364.0f, 0.0f);
        arg0->unk_1A6 = (s16) (arg0->unk_1A6 + (s32) arg0[1].xzDistToPlayer);
        if ((arg0->world.pos.y - arg0->home.pos.y) >= 4000.0f) {
            arg0[1].shape.unk_16 = 0;
        }
        if (arg0->yDistToPlayer < -12000.0f) {
            Actor_Spawn(&arg1->actorCtx, arg1, 9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s16) 0);
            Actor_MarkForDeath(arg0);
            sp7C = NULL;
        }
    }
    return sp7C;
}

void func_80999A8C(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0[1].bgCheckFlags;
    arg0[1].bgCheckFlags = temp_v0 - 1;
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80999AC0(Actor *arg0) {
    ? *temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1_2;
    ? *phi_v1;
    s32 phi_v0;
    void *phi_v1_2;
    s32 phi_v0_2;

    phi_v1 = arg0 + 0x19E;
    phi_v0 = 0;
    phi_v0_2 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        *phi_v1 = (unaligned s32) D_8099A450.unk_0;
        temp_v1 = phi_v1 + 6;
        temp_v1->unk_-2 = (u16) D_8099A450.unk_4;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 < 3);
    phi_v1_2 = arg0 + 0x1B0;
    do {
        temp_v0_2 = phi_v0_2 + 1;
        temp_v1_2 = phi_v1_2 + 0xC;
        temp_v1_2->unk_-C = (s32) D_8099A458.unk_0;
        temp_v1_2->unk_-8 = (s32) D_8099A458.unk_4;
        temp_v1_2->unk_-4 = (s32) D_8099A458.unk_8;
        phi_v1_2 = temp_v1_2;
        phi_v0_2 = temp_v0_2;
    } while (temp_v0_2 != 2);
}

void func_80999B34(EnGs *arg0) {
    s16 temp_a1;
    s16 temp_v0;

    temp_a1 = arg0->unk_216;
    if ((s32) temp_a1 > 0) {
        temp_v0 = arg0->unk_218;
        if (temp_v0 == 0) {
            func_8016566C(temp_a1, temp_a1);
            arg0->unk_218 = arg0->unk_216;
            return;
        }
        func_80165658(temp_v0, temp_a1);
        return;
    }
    if ((s32) arg0->unk_218 > 0) {
        Math_StepToS(arg0 + 0x218, temp_a1, 0x14);
        func_80165658(arg0->unk_218);
        if ((s32) arg0->unk_218 <= 0) {
            func_80165690();
        }
    }
}

void func_80999BC8(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Actor *sp24;
    Actor *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    u8 temp_t7;
    u8 temp_v0_2;

    if ((arg0->isTargeted != 0) && (func_801A5100() == 0)) {
        arg0->unk_19D = 0;
        arg0->unk_19A = (s16) (arg0->unk_19A | 1);
        func_80999AC0(arg0);
        arg0->unk_19C = 0;
        func_80998704(arg0, arg1);
        arg0[1].shape.yOffset = 0.0f;
    }
    if (arg0->params == 1) {
        Actor_SetHeight(arg0, 34.5f);
    } else {
        Actor_SetHeight(arg0, 23.0f);
    }
    temp_v0 = arg0->unk_21A;
    if ((s32) temp_v0 > 0) {
        arg0->unk_21A = (s16) (temp_v0 - 1);
        if ((s32) arg0->unk_21A <= 0) {
            arg0->unk_21A = 0;
        }
    }
    if (((arg0->unk_19A & 0x210) == 0) && (arg0->unk_21A == 0)) {
        temp_v0_2 = arg0->unk_155;
        if ((temp_v0_2 & 2) != 0) {
            temp_t7 = arg0->colChkInfo.damageEffect;
            arg0->unk_19D = 0;
            arg0->unk_155 = (u8) (temp_v0_2 & 0xFFFD);
            switch (temp_t7) {
            case 15:
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0);
                arg0->unk_19C = 0;
                func_80998704(arg0, arg1);
                arg0->unk_21A = 5;
                break;
            case 14:
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0);
                arg0->unk_19C = 1;
                func_80998704(arg0, arg1);
block_19:
                arg0->unk_21A = 5;
                break;
            case 13:
                func_80999AC0(arg0);
                arg0->unk_19C = 2;
                func_80998704(arg0, arg1);
                arg0->unk_21A = 5;
                break;
            case 12:
                arg0->unk_19A = (s16) (arg0->unk_19A | 2);
                func_80999AC0(arg0);
                arg0->unk_19C = 4;
                func_80998704(arg0, arg1);
                arg0->unk_21A = 5;
                break;
            case 11:
                arg0->unk_19A = (s16) (arg0->unk_19A | 1);
                func_80999AC0(arg0);
                arg0->unk_19C = 3;
                func_80998704(arg0, arg1);
                goto block_19;
            }
        }
        temp_a1 = &arg0[1];
        sp24 = temp_a1;
        Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a1);
        temp_a1_2 = &arg1->colChkCtx;
        sp28 = temp_a1_2;
        CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp24);
        CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp24);
        arg0->unk_190(arg0, arg1);
        return;
    }
    arg0->unk_155 = (u8) (arg0->unk_155 & 0xFFFD);
    arg0->unk_190(arg0, arg1);
}

void EnGs_Update(Actor *thisx, GlobalContext *globalCtx) {
    s16 sp2E;
    s16 sp2C;
    u8 *sp28;
    Color_RGB8 *sp24;
    Color_RGB8 *sp20;
    Color_RGB8 *temp_a1;
    Color_RGB8 *temp_a3;
    s16 temp_a2;
    s16 temp_v0;
    u8 *temp_a0;
    EnGs *this = (EnGs *) thisx;

    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        this->unk_144.base.acFlags &= 0xFFFD;
        func_80997DEC(this, globalCtx);
        return;
    }
    if (func_800B8718(this, globalCtx) != 0) {
        this->unk_19A |= 0x200;
        this->unk_144.base.acFlags &= 0xFFFD;
        if (this->actor.cutscene != -1) {
            this->unk_190 = func_80997FF0;
            return;
        }
        func_80998040((Actor *) this, globalCtx);
        return;
    }
    if (((this->actor.flags & 0x40) != 0) || (temp_v0 = this->unk_19A, ((temp_v0 & 0x100) != 0)) || ((temp_v0 & 0x200) != 0)) {
        func_80999BC8((Actor *) this, globalCtx);
        func_800B8898(globalCtx, (Actor *) this, &sp2E, &sp2C);
        if ((this->actor.xyzDistToPlayerSq > 160000.0f) || ((s32) sp2E < 0) || ((s32) sp2E >= 0x141) || ((s32) sp2C < 0) || ((s32) sp2C >= 0xF1)) {
            goto block_17;
        }
        temp_a2 = this->unk_21C;
        if ((s32) temp_a2 > 0) {
            func_800BC848(this, globalCtx, temp_a2, this->unk_21E);
        }
    } else {
block_17:
        this->unk_216 = 0;
    }
    if (this->unk_200 < 1.0f) {
        if ((this->unk_19A & 4) != 0) {
            Math_StepToF(&this->unk_200, 1.0f, 0.06f);
        } else {
            Math_StepToF(&this->unk_200, 1.0f, 0.02f);
        }
        temp_a1 = &this->unk_1F7;
        sp20 = temp_a1;
        func_80997AFC(this->unk_194, temp_a1);
        temp_a0 = &this->unk_1F4;
        temp_a3 = &this->unk_1FA;
        sp24 = temp_a3;
        sp28 = temp_a0;
        Lib_LerpRGB((Color_RGB8 *) temp_a0, temp_a1, this->unk_200, temp_a3);
        if (this->unk_200 >= 1.0f) {
            temp_a0->unk_0 = temp_a3->r;
            temp_a0[1] = temp_a3->g;
            temp_a0[2] = temp_a3->b;
        }
    }
    if ((s32) this->unk_21C > 0) {
        this->unk_21C = 0;
    }
    func_80999B34(this);
}

void EnGs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    u32 sp4C;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    EnGs *this = (EnGs *) thisx;

    if ((this->unk_19A & 8) == 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s1 = temp_a0;
        sp4C = globalCtx->gameplayFrames;
        func_8012C28C(temp_a0);
        SysMatrix_StatePush();
        if ((this->unk_19A & 1) != 0) {
            Matrix_RotateY(this->unk_1A0, 1U);
            SysMatrix_InsertXRotation_s(this->unk_19E, 1);
            SysMatrix_InsertZRotation_s(this->unk_1A2, 1);
            Matrix_Scale(this->unk_1B0.x, this->unk_1B0.y, this->unk_1B0.z, 1);
            Matrix_RotateY(this->unk_1A6, 1U);
            SysMatrix_InsertXRotation_s(this->unk_1A4, 1);
            SysMatrix_InsertZRotation_s(this->unk_1A8, 1);
        }
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp40 = temp_v0;
        sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = (u32) &D_06000950;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = (this->unk_1FA.r << 0x18) | (this->unk_1FA.g << 0x10) | (this->unk_1FA.b << 8) | 0xFF;
        temp_v0_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = (u32) &D_060009D0;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_5 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) &D_06000A60;
        temp_v0_5->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        if ((this->unk_19A & 2) != 0) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            Matrix_Scale(0.05f, -0.05f, 1.0f, 1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v0_6[1];
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v0_7[1];
            temp_v0_7->words.w0 = 0xDB060020;
            temp_v0_7->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (s32) sp4C * -0x14, 0x20, 0x80);
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v0_8[1];
            temp_v0_8->words.w0 = 0xFA008080;
            temp_v0_8->words.w1 = 0xFFFF00FF;
            temp_v0_9 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v0_9[1];
            temp_v0_9->words.w1 = 0xFF000000;
            temp_v0_9->words.w0 = 0xFB000000;
            temp_v0_10 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v0_10[1];
            temp_v0_10->words.w0 = 0xDE000000;
            temp_v0_10->words.w1 = (u32) D_0407D590;
        }
    }
}
