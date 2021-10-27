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
    /* 0x053 */ u8 unk_53;                          /* inferred */
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

typedef struct EnGg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ColliderCylinder unk_144;           /* inferred */
    /* 0x190 */ SkelAnime unk_190;                  /* inferred */
    /* 0x1D4 */ void (*actionFunc)(EnGg *, GlobalContext *);
    /* 0x1D8 */ Vec3s unk_1D8;                      /* inferred */
    /* 0x1DE */ Vec3s unk_1DE;                      /* inferred */
    /* 0x1E4 */ Vec3s unk_1E4;                      /* inferred */
    /* 0x1EA */ char pad_1EA[0x72];                 /* maybe part of unk_1E4[20]? */
    /* 0x25C */ Vec3s unk_25C;                      /* inferred */
    /* 0x262 */ char pad_262[0x78];                 /* maybe part of unk_25C[21]? */
    /* 0x2DA */ u8 unk_2DA;                         /* inferred */
    /* 0x2DB */ char pad_2DB[0x1];
    /* 0x2DC */ s16 unk_2DC;                        /* inferred */
    /* 0x2DE */ char pad_2DE[0x4];                  /* maybe part of unk_2DC[3]? */
    /* 0x2E2 */ s16 unk_2E2;                        /* inferred */
    /* 0x2E4 */ char pad_2E4[0x4];                  /* maybe part of unk_2E2[3]? */
    /* 0x2E8 */ s16 unk_2E8;                        /* inferred */
    /* 0x2EA */ char pad_2EA[0x1A];                 /* maybe part of unk_2E8[14]? */
    /* 0x304 */ s16 unk_304;                        /* inferred */
    /* 0x306 */ char pad_306[0x2];
    /* 0x308 */ u8 unk_308;                         /* inferred */
    /* 0x309 */ u8 unk_309;                         /* inferred */
    /* 0x30A */ s16 unk_30A;                        /* inferred */
    /* 0x30C */ char pad_30C[0x4];                  /* maybe part of unk_30A[3]? */
    /* 0x310 */ f32 unk_310;                        /* inferred */
    /* 0x314 */ char pad_314[0x30];                 /* maybe part of unk_310[13]? */
    /* 0x344 */ ? unk_344;                          /* inferred */
    /* 0x344 */ char pad_344[0x38];
    /* 0x37C */ ? (*unk_37C)(? *, GlobalContext *, GraphicsContext *); /* inferred */
    /* 0x380 */ char pad_380[0x10];                 /* maybe part of unk_37C[5]? */
} EnGg;                                             /* size = 0x390 */

struct _mips2c_stack_EnGg_Destroy {};               /* size 0x0 */

struct _mips2c_stack_EnGg_Draw {
    /* 0x00 */ char pad_0[0x38];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ Gfx *sp3C;                           /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_EnGg_Init {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ColliderCylinder *sp34;              /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_EnGg_Update {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80B34F70 {};              /* size 0x0 */

struct _mips2c_stack_func_80B34FB4 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ ? sp34;                              /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
    /* 0x40 */ ? sp40;                              /* inferred */
    /* 0x40 */ char pad_40[0x4];
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80B35108 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B351A4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B35250 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B352A4 {
    /* 0x00 */ char pad_0[0x26];
    /* 0x26 */ s16 sp26;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B35450 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B3556C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B35634 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ u32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B357F0 {};              /* size 0x0 */

struct _mips2c_stack_func_80B3584C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B358D8 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80B35968 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B359DC {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80B35B24 {};              /* size 0x0 */

struct _mips2c_stack_func_80B35B44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B35C84 {
    /* 0x00 */ char pad_0[0x74];
    /* 0x74 */ s32 sp74;                            /* inferred */
};                                                  /* size = 0x78 */

struct _mips2c_stack_func_80B3610C {
    /* 0x00 */ char pad_0[0x70];
};                                                  /* size = 0x70 */

struct _mips2c_stack_func_80B363E8 {};              /* size 0x0 */

struct _mips2c_stack_func_80B364D4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B368B0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80B368F0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ f32 sp34;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ char pad_3C[0x4];
};                                                  /* size = 0x40 */

? func_800B90F4(GlobalContext *, GlobalContext *);  /* extern */
void func_80B34F70(EnGg *arg0);                     /* static */
? func_80B34FB4(EnGg *arg0, GlobalContext *arg1);   /* static */
void func_80B35108(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B351A4(EnGg *arg0);                     /* static */
void func_80B35250(Actor *arg0);                    /* static */
void func_80B352A4(void *arg0, ? arg1);             /* static */
void func_80B35450(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3556C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B35634(Actor *arg0, GlobalContext *arg1); /* static */
s16 func_80B357F0(Actor *arg0);                     /* static */
void func_80B3584C(EnGg *arg0);                     /* static */
void func_80B358D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B35968(EnGg *arg0, GlobalContext *);    /* static */
void func_80B359DC(Actor *arg0, void *arg1);        /* static */
void func_80B35B24(? *arg0, GlobalContext *arg1);   /* static */
void func_80B35B44(void *arg0);                     /* static */
void func_80B35C84(void *arg0, GraphicsContext **arg1); /* static */
void func_80B3610C(void *arg0, GraphicsContext **arg1); /* static */
void func_80B363E8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4); /* static */
void func_80B364D4(? *arg0, GlobalContext *);       /* static */
s32 func_80B368B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_80B368F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_0600F578;
extern FlexSkeletonHeader D_0600F6C0;
static ColliderCylinderInit D_80B36C00 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x18, 0x48, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B36C2C = {0, 0x18, 0x48, 0, 0xFF};
static DamageTable D_80B36C38 = {
    {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    },
};
static ActorAnimationEntry D_80B36C58[16] = {
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600D528, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600D174, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600ECC0, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600BAF0, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x60100C8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600CDA0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600B560, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600A4B4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E86C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600D99C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E2A4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static ? D_80B36DD8;                                /* unable to generate initializer */
static ? D_80B36DE4;                                /* unable to generate initializer */
static Vec3f D_80B36DF0 = {1800.0f, 300.0f, 200.0f};
static ? D_80B36DFC;                                /* unable to generate initializer */

void func_80B34F70(EnGg *arg0) {
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + 80.0f;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
}

? func_80B34FB4(EnGg *arg0, GlobalContext *arg1) {
    f32 sp44;
    ? sp40;
    f32 sp38;
    ? sp34;
    f32 temp_f0;
    s16 temp_v0_2;
    void *temp_v0;
    s16 phi_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp40.unk_0 = (s32) temp_v0->world.pos.x;
    sp40.unk_4 = (s32) temp_v0->world.pos.y;
    sp40.unk_8 = (s32) temp_v0->world.pos.z;
    sp44 = temp_v0[9].shape.feetPos[1].x + 3.0f;
    sp34.unk_0 = (s32) arg0->actor.world.pos.x;
    sp34.unk_4 = (s32) arg0->actor.world.pos.y;
    sp34.unk_8 = (s32) arg0->actor.world.pos.z;
    sp38 += 70.0f;
    temp_f0 = arg0->actor.xzDistToPlayer;
    if ((temp_f0 < 250.0f) && (temp_f0 > 50.0f) && (((arg0->actor.flags & 0x80) == 0x80) || ((gSaveContext.weekEventReg[19] & 0x80) != 0))) {
        Math_SmoothStepToS(arg0 + 0x2E8, Math_Vec3f_Pitch((Vec3f *) &sp34, (Vec3f *) &sp40), 4, 0x2AA8, (s16) 1);
    } else {
        Math_SmoothStepToS(arg0 + 0x2E8, 0, 4, 0x2AA8, (s16) 1);
    }
    temp_v0_2 = arg0->unk_2E8;
    if ((s32) temp_v0_2 < 0) {
        arg0->unk_2E8 = 0;
    } else {
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1C71) {
            phi_v1 = 0x1C70;
        }
        arg0->unk_2E8 = phi_v1;
    }
    return 1;
}

void func_80B35108(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    arg0->unk_18A = (s16) (s32) arg0->world.pos.x;
    temp_a0 = arg1;
    arg0[1].focus.rot.x = (s16) (s32) arg0->world.pos.y;
    arg0[1].focus.rot.y = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    CollisionCheck_SetAC(temp_a0, temp_a1, arg0 + 0x144);
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 30.0f, 30.0f, 7U);
}

void func_80B351A4(EnGg *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk_2E6;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        arg0->unk_2E2 = 3;
        return;
    }
    temp_v0_2 = arg0->unk_2E4 - 1;
    if ((s32) temp_v0_2 >= 3) {
        arg0->unk_2E2 = 0;
        goto block_8;
    }
    if (temp_v0_2 == 0) {
        arg0->unk_2E2 = 2;
        arg0->unk_2E4 = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->unk_2E2 = 1;
block_8:
    arg0->unk_2E4 = temp_v0_2;
}

void func_80B35250(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk_2E4 = 0x14;
    temp_a3->unk_2E2 = 0;
    temp_a3->unk_2E6 = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x190, (ActorAnimationEntry []) D_80B36C58, 0);
    arg0->unk_1D4 = func_80B35450;
}

void func_80B352A4(void *arg0, ? arg1) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_f6;
    u16 temp_t0;
    u16 temp_v1;

    temp_f6 = (s32) arg0->unk_1A8;
    sp26 = (s16) temp_f6;
    temp_v0 = SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B36C58[arg0->unk_2E6].animation);
    if ((s16) temp_f6 == temp_v0) {
        temp_t0 = arg0->unk_116;
        switch (temp_t0) {
        case 3301:
            arg0->unk_2E6 = 1;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 1);
            break;
        case 3302:
        case 3308:
            arg0->unk_2E6 = 0;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 0);
            break;
        case 3304:
            arg0->unk_2E6 = 2;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 2);
            break;
        case 3305:
            arg0->unk_2E6 = 3;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 3);
            break;
        case 3309:
        case 3310:
            arg0->unk_2E6 = 4;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 4);
            break;
        default:
            arg0->unk_2E6 = 0;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 0);
            break;
        }
        gSaveContext.weekEventReg[19] |= 0x80;
        arg0->unk_1D4 = func_80B3556C;
        return;
    }
    if ((arg0->unk_2E6 == 0) && ((temp_v1 = arg0->unk_116, (temp_v1 == 0xCED)) || (temp_v1 == 0xCEE))) {
        if ((s32) (s16) temp_f6 < (temp_v0 - 1)) {
            arg0->unk_1AC = 2.0f;
            return;
        }
        arg0->unk_2E6 = 4;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 4);
        /* Duplicate return node #16. Try simplifying control flow for better match */
    }
}

void func_80B35450(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (((gSaveContext.weekEventReg[91] & 0x10) != 0) && (arg1->csCtx.state == 0)) {
        func_80B359DC(arg0);
    }
    arg1 = arg1;
    if (func_800B84D0(arg0, arg1) != 0) {
        if ((arg0->flags & 0x80) == 0x80) {
            func_800B90F4(arg1, arg1);
        }
        arg0->unk_308 = 1;
        arg0->unk_1D4 = func_80B352A4;
        return;
    }
    temp_f0 = arg0->xzDistToPlayer;
    if ((temp_f0 < 200.0f) && (temp_f0 > 50.0f)) {
        if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
            func_800B863C(arg0, arg1);
            arg0->textId = 0xCEE;
            return;
        }
        if ((arg0->flags & 0x80) == 0x80) {
            func_800B863C(arg0, arg1);
            arg0->textId = 0xCE5;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
    }
}

void func_80B3556C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk_2E6 == 4) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk_308 = 0;
            arg0->flags &= -0x81;
            func_80B35250(arg0);
            return;
        }
        temp_v0 = func_80B357F0(arg0);
        arg0->textId = temp_v0;
        func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
        arg0->unk_1D4 = func_80B352A4;
        /* Duplicate return node #5. Try simplifying control flow for better match */
    }
}

void func_80B35634(Actor *arg0, GlobalContext *arg1) {
    u32 sp20;
    s32 temp_t6;
    u16 temp_a0;
    u16 temp_t0;
    u32 temp_v0;
    void *temp_v1;
    GlobalContext *phi_a3;

    if (func_800EE29C(arg1, 0x77U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x77U);
        temp_t6 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_v1 = arg1 + temp_t6;
        temp_a0 = *temp_v1->unk_1F4C;
        if (arg0[2].unk_53 != temp_a0) {
            arg0[2].unk_53 = (u8) temp_a0;
            temp_t0 = *temp_v1->unk_1F4C;
            switch (temp_t0) {
            case 1:
                arg0[2].unk_52 = 0;
                arg0->unk_2E6 = 0;
block_13:
                func_800BDC5C((SkelAnime *) &arg0[1].focus.rot.z, (ActorAnimationEntry []) D_80B36C58, (s32) arg0[2].unk_52);
                goto block_14;
            case 2:
                arg0[2].unk_52 = 9;
                arg0->unk_2E6 = 9;
                goto block_13;
            case 3:
                arg0[2].unk_52 = 0xA;
                arg0->unk_2E6 = 0xA;
                goto block_13;
            case 4:
                arg0[2].unk_52 = 0xB;
                arg0->unk_374 = 0xBU;
                arg0->unk_2E6 = 0xB;
                func_80B364D4(arg0 + 0x344, arg1);
                goto block_13;
            case 5:
                arg0[2].unk_52 = 0xC;
                arg0->unk_374 = 0xCU;
                arg0->unk_2E6 = 0xC;
                goto block_13;
            case 6:
                arg0[2].unk_52 = 0xD;
                arg0->unk_374 = 0xDU;
                arg0->unk_2E6 = 0xD;
                goto block_13;
            case 7:
                arg0[2].unk_52 = 0xE;
                arg0->unk_374 = 0xEU;
                arg0->unk_2E6 = 0xE;
                func_80B364D4(arg0 + 0x344, arg1);
                goto block_13;
            case 8:
                Actor_MarkForDeath(arg0);
                return;
            default:
                arg0[2].unk_52 = 0;
                goto block_13;
            }
        } else {
block_14:
            phi_a3 = arg1;
            if (arg0[2].unk_52 == 0xE) {
                func_80B358D8(arg0, arg1);
                phi_a3 = arg1;
            }
            func_800EDF24(arg0, phi_a3, sp20);
            arg0->shape.yOffset = 0.0f;
        }
    } else {
        arg0[2].unk_53 = 0x63;
    }
}

u16 func_80B357F0(Actor *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->textId;
    switch (temp_t6) {
    case 3301:
        return 0xCE6U;
    case 3302:
        return 0xCE8U;
    case 3304:
        return 0xCE9U;
    case 3305:
        return 0xCECU;
    case 3308:
        return 0xCEDU;
    default:
        return 0U;
    }
}

void func_80B3584C(EnGg *arg0) {
    arg0->unk_30A += 0x72C;
    arg0->actor.shape.yOffset = Math_SinS(arg0->unk_30A) * 100.0f;
    arg0->actor.shape.shadowScale = 30.0f - (Math_SinS(arg0->unk_30A) * 5.0f);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80B358D8(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0[1].velocity.x;
    temp_t8 = arg0[2].unk_52;
    arg0 = arg0;
    if ((arg0->unk_2E6 == 0xE) && (sp1E == SkelAnime_GetFrameCount((AnimationHeaderCommon *) D_80B36C58[temp_t8].animation))) {
        arg0->unk_2E6 = 0xF;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) D_80B36C58, 0xF);
    }
}

void func_80B35968(EnGg *arg0) {
    ? (*temp_v0)(void *, void *, void *);
    u8 temp_v0_2;
    void *temp_a2;
    void *temp_a3;

    temp_v0 = arg0->unk_378;
    temp_a2 = arg0 + 0x320;
    temp_a3 = arg0 + 0x32C;
    if (temp_v0 != 0) {
        temp_v0(arg0 + 0x344, temp_a2, temp_a3);
        return;
    }
    temp_v0_2 = arg0->unk_2DA;
    if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xE)) {
        arg0->unk_374 = temp_v0_2;
    }
    func_80B363E8(arg0 + 0x344, temp_a2, temp_a3, arg0 + 0x338);
}

void func_80B359DC(Actor *arg0, void *arg1) {
    void *sp24;
    u8 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->unk_1CCC;
    if (arg0->xzDistToPlayer < 200.0f) {
        if (arg0->unk_306 == 0) {
            if ((temp_v0->unk_A70 * 0x10) < 0) {
                arg0->unk_306 = 1U;
                sp24 = temp_v0;
                play_sound(0x4807U);
            }
        } else if ((temp_v0->unk_A70 * 0x10) >= 0) {
            arg0->unk_306 = 0U;
        }
        if ((arg1->unk_1CCC->unk_14B == 4) && (arg1->unk_16932 == 3) && (arg1->unk_16936 == 7)) {
            temp_v0_2 = gSaveContext.weekEventReg[19];
            if ((temp_v0_2 & 0x80) == 0) {
                gSaveContext.weekEventReg[19] = temp_v0_2 | 0x80;
            }
            arg0->unk_307 = 1U;
        }
        if (ActorCutscene_GetCanPlayNext(arg0->unk_2DC) != 0) {
            ActorCutscene_Start(arg0->unk_2DC, arg0);
            goto block_18;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        if (arg0->unk_307 != 0) {
            ActorCutscene_SetIntentToPlay(arg0->unk_2DC);
            return;
        }
        /* Duplicate return node #19. Try simplifying control flow for better match */
        return;
    }
block_18:
    arg0->unk_307 = 0U;
}

void func_80B35B24(? *arg0, GlobalContext *arg1) {
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0;
    arg0->unk_44 = 0;
}

void func_80B35B44(void *arg0) {
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = arg0->unk_30;
    if (temp_v0 == 0xE) {
        temp_v0_2 = arg0->unk_40 + 1;
        arg0->unk_40 = temp_v0_2;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 >= 0x47) {
            arg0->unk_48 = 1U;
            arg0->unk_40 = 0;
            phi_v0 = 0;
        }
        if (phi_v0 != 0x46) {
            temp_v1 = phi_v0 - 0xF;
            if (arg0->unk_48 != 0) {
                arg0->unk_44 = 0x37;
                return;
            }
            arg0->unk_44 = temp_v1;
            if (temp_v1 < 0) {
                arg0->unk_44 = 0;
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        temp_t2 = arg0->unk_44 + 1;
        arg0->unk_44 = temp_t2;
        if (temp_t2 >= 0x38) {
            arg0->unk_44 = 0x37;
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC)) {
        temp_t6 = arg0->unk_40 + 1;
        arg0->unk_40 = temp_t6;
        if (temp_t6 >= 0x47) {
            arg0->unk_48 = 1U;
            arg0->unk_40 = 0;
            return;
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0 == 0xD) {
        arg0->unk_48 = 0U;
        temp_v0_3 = arg0->unk_40 + 1;
        arg0->unk_40 = temp_v0_3;
        phi_v0_2 = temp_v0_3;
        if (temp_v0_3 >= 0x47) {
            arg0->unk_40 = 0x46;
            phi_v0_2 = 0x46;
        }
        temp_v1_2 = phi_v0_2 - 0xF;
        if (phi_v0_2 != 0x46) {
            arg0->unk_44 = temp_v1_2;
            if (temp_v1_2 < 0) {
                arg0->unk_44 = 0;
                return;
            }
            /* Duplicate return node #22. Try simplifying control flow for better match */
            return;
        }
        temp_t3 = arg0->unk_44 + 1;
        arg0->unk_44 = temp_t3;
        if (temp_t3 >= 0x38) {
            func_80B364D4();
        }
        /* Duplicate return node #22. Try simplifying control flow for better match */
    }
}

void func_80B35C84(void *arg0, GraphicsContext **arg1) {
    s32 sp74;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    s32 temp_hi;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 phi_s7;
    s32 phi_s3;
    s32 phi_s3_2;

    if (arg0->unk_48 != 0) {
        temp_hi = (s32) arg0->unk_40 % 0xA;
        sp74 = temp_hi;
        arg0->unk_40 = temp_hi;
        phi_s7 = 0x46;
    } else if (arg0->unk_30 == 0xD) {
        sp74 = arg0->unk_40;
        phi_s7 = 0x46;
    } else {
        temp_v0 = arg0->unk_40;
        sp74 = temp_v0 % 0xA;
        phi_s7 = temp_v0 - arg0->unk_44;
    }
    if (phi_s7 > 0) {
        temp_s1 = *arg1;
        SysMatrix_StatePush();
        phi_s3 = sp74;
        if (sp74 < phi_s7) {
            do {
                temp_f0 = (f32) phi_s3 * 0.14f;
                temp_f22 = arg0->unk_0 + (arg0->unk_18 * temp_f0) + (0.5f * arg0->unk_24 * temp_f0 * temp_f0);
                temp_f24 = arg0->unk_4 - Math_SinS((s16) ((s32) (phi_s3 * 0x27FFB) / 0x46));
                temp_f26 = arg0->unk_8 + (arg0->unk_20 * temp_f0) + (0.5f * arg0->unk_2C * temp_f0 * temp_f0);
                temp_f20 = Rand_ZeroOne() * 0.003f;
                SysMatrix_InsertTranslation(temp_f22, temp_f24, temp_f26, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = -1;
                temp_v0_2->words.w0 = 0xFA000080;
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xFB000000;
                temp_v0_3->words.w1 = 0xFF9600FF;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_5 = temp_s1->polyXlu.p;
                temp_s3 = phi_s3 + 0xA;
                temp_s1->polyXlu.p = &temp_v0_5[1];
                temp_v0_5->words.w1 = (u32) D_04023210;
                temp_v0_5->words.w0 = 0xDE000000;
                phi_s3 = temp_s3;
            } while (temp_s3 < phi_s7);
        }
        SysMatrix_StatePop();
        SysMatrix_StatePush();
        phi_s3_2 = sp74;
        if (sp74 < phi_s7) {
            do {
                temp_f0_2 = (f32) phi_s3_2 * 0.14f;
                temp_f22_2 = arg0->unk_C + ((arg0->unk_18 * temp_f0_2) + (0.5f * arg0->unk_24 * temp_f0_2 * temp_f0_2));
                temp_f24_2 = arg0->unk_10 - Math_SinS((s16) ((s32) (phi_s3_2 * 0x27FFB) / 0x46));
                temp_f26_2 = arg0->unk_14 + (arg0->unk_20 * temp_f0_2) + (0.5f * arg0->unk_2C * temp_f0_2 * temp_f0_2);
                temp_f20_2 = Rand_ZeroOne() * 0.003f;
                SysMatrix_InsertTranslation(temp_f22_2, temp_f24_2, temp_f26_2, 0);
                Matrix_Scale(temp_f20_2, temp_f20_2, temp_f20_2, 1);
                temp_v0_6 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_6[1];
                temp_v0_6->words.w1 = -1;
                temp_v0_6->words.w0 = 0xFA000080;
                temp_v0_7 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_7[1];
                temp_v0_7->words.w0 = 0xFB000000;
                temp_v0_7->words.w1 = 0xFF9600FF;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_8 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = &temp_v0_8[1];
                temp_v0_8->words.w0 = 0xDA380003;
                temp_v0_8->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_9 = temp_s1->polyXlu.p;
                temp_s3_2 = phi_s3_2 + 0xA;
                temp_s1->polyXlu.p = &temp_v0_9[1];
                temp_v0_9->words.w1 = (u32) D_04023210;
                temp_v0_9->words.w0 = 0xDE000000;
                phi_s3_2 = temp_s3_2;
            } while (temp_s3_2 < phi_s7);
        }
        SysMatrix_StatePop();
        temp_v0_10 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_10[1];
        temp_v0_10->words.w0 = 0xDA380003;
        temp_v0_10->words.w1 = (u32) &D_801D1DE0;
    }
}

void func_80B3610C(void *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    s32 temp_s3;
    s32 phi_s4;
    f32 phi_f0;
    f32 phi_f22;
    s32 phi_s3;

    if (arg0->unk_48 != 0) {
        phi_s4 = 0x46;
    } else {
        phi_s4 = arg0->unk_40;
    }
    if (phi_s4 > 0) {
        temp_s2 = *arg1;
        SysMatrix_StatePush();
        phi_s3 = 0;
        if (phi_s4 > 0) {
            do {
                if (arg0->unk_48 != 0) {
                    phi_f0 = (f32) phi_s3;
                    phi_f22 = (f32) phi_s4 / 70.0f;
                } else {
                    temp_f0 = (f32) phi_s3;
                    phi_f0 = temp_f0;
                    phi_f22 = temp_f0 / 70.0f;
                }
                temp_f24 = arg0->unk_C + (arg0->unk_18 * phi_f0) + (0.5f * arg0->unk_24 * phi_f0 * phi_f0);
                temp_f26 = arg0->unk_10 + (arg0->unk_1C * phi_f0) + (0.5f * arg0->unk_28 * phi_f0 * phi_f0);
                temp_f28 = arg0->unk_14 + (arg0->unk_20 * phi_f0) + (0.5f * arg0->unk_2C * phi_f0 * phi_f0);
                temp_f20 = Rand_ZeroOne() * 0.003f;
                temp_f30 = Rand_Centered();
                SysMatrix_InsertTranslation((temp_f30 * (100.0f * phi_f22)) + temp_f24, temp_f26, (Rand_Centered() * (30.0f * phi_f22)) + temp_f28, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_v0 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = -1;
                temp_v0->words.w0 = 0xFA000080;
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0xFF9600FF;
                temp_v0_2->words.w0 = 0xFB000000;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = &temp_v0_3[1];
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s3 = phi_s3 + 1;
                temp_s2->polyXlu.p = &temp_v0_4[1];
                temp_v0_4->words.w1 = (u32) D_04023210;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_s3 = temp_s3;
            } while (temp_s3 != phi_s4);
        }
        SysMatrix_StatePop();
        temp_v0_5 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = (u32) &D_801D1DE0;
    }
}

void func_80B363E8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    u8 temp_v0;

    arg0->unk_34 = func_80B35B44;
    arg0->unk_0 = (f32) arg2->unk_0;
    arg0->unk_4 = (s32) arg2->unk_4;
    arg0->unk_8 = (s32) arg2->unk_8;
    temp_v0 = arg0->unk_30;
    arg0->unk_C = (f32) arg2->unk_0;
    arg0->unk_10 = (s32) arg2->unk_4;
    arg0->unk_14 = (s32) arg2->unk_8;
    arg0->unk_18 = (s32) arg3->unk_0;
    arg0->unk_1C = (s32) arg3->unk_4;
    arg0->unk_20 = (s32) arg3->unk_8;
    arg0->unk_24 = (s32) arg4->unk_0;
    arg0->unk_28 = (s32) arg4->unk_4;
    arg0->unk_48 = 0;
    arg0->unk_0 = (f32) (arg0->unk_0 + -4.0f);
    arg0->unk_C = (f32) (arg0->unk_C + 4.0f);
    arg0->unk_2C = (s32) arg4->unk_8;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC) || (temp_v0 == 0xD)) {
        arg0->unk_38 = func_80B35C84;
        return;
    }
    if (temp_v0 == 0xE) {
        arg0->unk_38 = func_80B3610C;
    }
}

void func_80B364D4(? *arg0) {
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    func_80B35B24();
}

void EnGg_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    u32 temp_t1;
    u32 temp_t4;
    u8 temp_t6;
    u8 temp_t8;
    EnGg *this = (EnGg *) thisx;

    if (gSaveContext.inventory.items[gItemSlots[51]] == 0x33) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    this->actor.bgCheckFlags |= 0x400;
    SkelAnime_InitSV(globalCtx, &this->unk_190, &D_0600F6C0, &D_0600F578, &this->unk_1E4, &this->unk_25C, 0x14);
    temp_a1 = &this->unk_144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, (Actor *) this, &D_80B36C00);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B36C38, &D_80B36C2C);
    temp_t6 = gSaveContext.weekEventReg[20] & 0xFB;
    temp_t8 = temp_t6 & 0xF7;
    gSaveContext.weekEventReg[20] = temp_t6;
    gSaveContext.weekEventReg[20] = temp_t8;
    gSaveContext.weekEventReg[20] = temp_t8 & 0xEF;
    temp_t1 = this->actor.flags & ~0x80;
    temp_t4 = temp_t1 | 0x2000000;
    this->actor.flags = temp_t1;
    this->actor.flags = temp_t4;
    this->unk_308 = 0;
    this->unk_309 = 0;
    this->unk_304 = 0;
    this->unk_30A = 0;
    this->actor.flags = temp_t4 | 0x10;
    this->unk_310 = this->actor.home.pos.y;
    this->unk_2DC = (s16) this->actor.cutscene;
    func_80B35B24(&this->unk_344, globalCtx);
    func_80B35250((Actor *) this);
}

void EnGg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGg *this = (EnGg *) thisx;

}

void EnGg_Update(Actor *thisx, GlobalContext *globalCtx) {
    u32 temp_t3;
    u32 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    SaveContext *phi_v1;
    EnGg *this = (EnGg *) thisx;

    if (globalCtx->actorCtx.unk4 == 0x64) {
        temp_t9 = this->actor.flags | 0x80;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 1;
    } else {
        temp_t3 = this->actor.flags & ~0x80;
        this->actor.flags = temp_t3;
        this->actor.flags = temp_t3 & ~1;
    }
    if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
        if (globalCtx->csCtx.state == 0) {
            this->actor.flags |= 1;
        } else {
            this->actor.flags &= -2;
        }
    }
    if (globalCtx->csCtx.state == 0) {
        temp_v0 = this->unk_2DA;
        if ((temp_v0 != 0xE) && (temp_v0 != 0xB) && (temp_v0 != 0xC) && (temp_v0 != 0xD)) {
            func_80B364D4(&this->unk_344, globalCtx);
        }
    }
    temp_v0_2 = this->unk_2DA;
    phi_v1 = &gSaveContext;
    if (((temp_v0_2 == 0xE) || (temp_v0_2 == 0xB) || (temp_v0_2 == 0xC) || (temp_v0_2 == 0xD)) && (this->unk_309 == 1)) {
        func_80B35968(this, globalCtx);
        phi_v1 = &gSaveContext;
    }
    temp_v0_3 = phi_v1->weekEventReg[91];
    if (((temp_v0_3 & 0x10) == 0) && (((phi_v1->weekEventReg[19] & 0x80) != 0) || ((this->actor.flags & 0x80) == 0x80) || (this->unk_308 == 1))) {
        phi_v1->weekEventReg[91] = temp_v0_3 | 0x10;
    }
    this->actionFunc(this, globalCtx);
    func_80B34F70(this);
    func_80B35108((Actor *) this, globalCtx);
    func_80B34FB4(this, globalCtx);
    Actor_SetVelocityAndMoveXYRotation((Actor *) this);
    SkelAnime_FrameUpdateMatrix(&this->unk_190);
    if (globalCtx->csCtx.state == 0) {
        func_80B3584C(this);
    } else {
        this->unk_2E8 = 0;
    }
    func_80B35634((Actor *) this, globalCtx);
    func_800E9250(globalCtx, (Actor *) this, &this->unk_1D8, &this->unk_1DE, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80B351A4(this);
}

s32 func_80B368B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 2) {
        SysMatrix_InsertZRotation_s(arg5[124].x, 1);
    }
    return 0;
}

void func_80B368F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    f32 sp24;
    u8 temp_v0;

    sp30.unk_0 = D_80B36DD8.unk_0;
    (&sp30)[1] = D_80B36DD8.unk_4;
    (&sp30)[2] = D_80B36DD8.unk_8;
    sp24.unk_0 = D_80B36DE4.unk_0;
    (&sp24)[1] = D_80B36DE4.unk_4;
    (&sp24)[2] = D_80B36DE4.unk_8;
    temp_v0 = arg4[2].unk_52;
    if (temp_v0 == 0xE) {
        sp34 = 3.0f;
        sp38 = -1.0f;
        sp28 = -0.07f;
        arg4->unk_309 = 1;
    } else if ((temp_v0 == 0xB) || (temp_v0 == 0xC) || (temp_v0 == 0xD)) {
        sp30 = 0x40400000;
        sp24 = 0x3F000000;
        arg4->unk_309 = 1;
    } else {
        arg4->unk_309 = 0;
    }
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_80B36DF0, arg4 + 0x320);
        SysMatrix_StatePush();
        Matrix_RotateY(arg4->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg4 + 0x32C);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + 0x338);
        SysMatrix_StatePop();
    }
}

void EnGg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp3C;
    Gfx *sp38;
    ? (*temp_v0)(? *, GlobalContext *, GraphicsContext *);
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s1;
    GraphicsContext *phi_a2;
    EnGg *this = (EnGg *) thisx;

    temp_v0 = this->unk_37C;
    temp_a2 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a2;
    if (temp_v0 != 0) {
        temp_v0(&this->unk_344, globalCtx, temp_a2);
    }
    phi_a2 = globalCtx->state.gfxCtx;
    if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        sp3C = temp_v0_2;
        sp3C->words.w1 = Lib_SegmentedToVirtual(*(&D_80B36DFC + (this->unk_2E2 * 4)));
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80B368B0, func_80B368F0, (Actor *) this, temp_s1->polyOpa.p);
        goto block_7;
    }
    if (((this->actor.flags & 0x80) == 0x80) || (this->unk_308 == 1)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDB060020;
        sp38 = temp_v0_3;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80B36DFC + (this->unk_2E2 * 4)));
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk_190.skeleton, this->unk_190.limbDrawTbl, (s32) this->unk_190.dListCount, func_80B368B0, func_80B368F0, (Actor *) this, temp_s1->polyXlu.p);
block_7:
        phi_a2 = globalCtx->state.gfxCtx;
    }
    func_8012C2DC(phi_a2);
}
