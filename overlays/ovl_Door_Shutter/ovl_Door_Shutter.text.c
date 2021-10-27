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
    /* 0x022 */ s8 unk_22;                          /* inferred */
    /* 0x023 */ s8 unk_23;                          /* inferred */
    /* 0x024 */ PosRot world;
    /* 0x038 */ s8 cutscene;
    /* 0x039 */ s8 unk39;
    /* 0x03A */ char pad_3A[0x2];                   /* maybe part of unk39[3]? */
    /* 0x03C */ PosRot focus;
    /* 0x050 */ u16 sfx;
    /* 0x052 */ char pad_52[0x2];
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

typedef struct DoorShutter {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x1A];
    /* 0x15E */ s16 unk_15E;                        /* inferred */
    /* 0x160 */ char pad_160[0x2];
    /* 0x162 */ u8 unk_162;                         /* inferred */
    /* 0x163 */ u8 unk_163;                         /* inferred */
    /* 0x164 */ u8 unk_164;                         /* inferred */
    /* 0x165 */ s8 unk_165;                         /* inferred */
    /* 0x166 */ s8 unk_166;                         /* inferred */
    /* 0x167 */ char pad_167[0x1];
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ void (*actionFunc)(DoorShutter *, GlobalContext *);
} DoorShutter;                                      /* size = 0x170 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_DoorShutter_Destroy {};        /* size 0x0 */

struct _mips2c_stack_DoorShutter_Init {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_DoorShutter_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A08F0 {};              /* size 0x0 */

struct _mips2c_stack_func_808A0900 {};              /* size 0x0 */

struct _mips2c_stack_func_808A0974 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ s32 sp20;                            /* inferred */
    /* 0x24 */ GlobalContext *sp24;                 /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A0D0C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A0D90 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808A0E28 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_808A0F88 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A1080 {};              /* size 0x0 */

struct _mips2c_stack_func_808A1090 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A1288 {
    /* 0x00 */ char pad_0[0x34];
    /* 0x34 */ s32 sp34;                            /* inferred */
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ void *sp3C;                          /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808A1340 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ? sp2C;                              /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_808A1478 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A1548 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A1618 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A1684 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A1784 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A1884 {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ? sp30;                              /* inferred */
    /* 0x30 */ char pad_30[0x14];
    /* 0x44 */ ? sp44;                              /* inferred */
    /* 0x44 */ char pad_44[0x8];
    /* 0x4C */ f32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x3];
    /* 0x53 */ s8 sp53;                             /* inferred */
    /* 0x54 */ void *sp54;                          /* inferred */
};                                                  /* size = 0x58 */

struct _mips2c_stack_func_808A1A70 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_808A1B48 {
    /* 0x00 */ char pad_0[0x3E];
    /* 0x3E */ s16 sp3E;                            /* inferred */
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_808A1C50 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A1D68 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_808A1E14 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ Gfx *sp2C;                           /* inferred */
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0xC];                    /* maybe part of sp30[4]? */
    /* 0x40 */ GraphicsContext *sp40;               /* inferred */
    /* 0x44 */ void *sp44;                          /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

? func_800BC8B8(GlobalContext *, s8, ?);            /* extern */
? func_800DFFAC(s32, DoorShutter *, s16, f32, s32, s32, s32); /* extern */
? func_801226E0(GlobalContext *, s8);               /* extern */
void func_808A08F0(DoorShutter *arg0, void (*arg1)(DoorShutter *, GlobalContext *, DoorShutter *), GlobalContext *, GlobalContext *); /* static */
s32 func_808A0900(DoorShutter *arg0, GlobalContext *arg1, GlobalContext *, GlobalContext *); /* static */
s32 func_808A0974(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A0D0C(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
f32 func_808A0D90(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_808A0E28(Actor *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A0F88(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1080(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1090(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1288(DoorShutter *arg0, void *arg1);  /* static */
s32 func_808A1340(DoorShutter *arg0);               /* static */
s32 func_808A1478(Actor *arg0, GlobalContext *arg1, f32 arg2, Actor *); /* static */
void func_808A1548(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1618(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1684(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1784(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1884(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808A1A70(Actor *arg0);                     /* static */
void func_808A1B48(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1C50(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
s32 func_808A1D68(Actor *arg0, GlobalContext *arg1); /* static */
void func_808A1E14(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_808A2180;                                /* unable to generate initializer */
static ? D_808A21B0;                                /* unable to generate initializer */
static ? D_808A2240;                                /* unable to generate initializer */
static InitChainEntry D_808A2248[4];                /* unable to generate initializer */
static s16 D_808A2258[36] = {
    0x1B,
    0x200,
    0x21,
    0x300,
    0x49,
    0x400,
    0x16,
    0x500,
    0x18,
    0x500,
    0x4B,
    0x600,
    0x56,
    0x700,
    0x1D,
    0x700,
    0x60,
    0x900,
    0x27,
    0xA00,
    0x14,
    0xB00,
    0x23,
    0xB00,
    0x3B,
    0xB00,
    0x2A,
    0x800,
    0x3F,
    0x800,
    0x47,
    0x800,
    0x66,
    0x800,
    0xFFFF,
    0x100,
};
static ? D_808A22A0;                                /* unable to generate initializer */
static Vec3f D_808A22C4 = {120.0f, 0.0f, 0.0f};
static Vec3f D_808A22D0 = {-90.0f, 0.0f, 0.0f};
static ? D_808A22DC;                                /* unable to generate initializer */

void func_808A08F0(DoorShutter *arg0, void (*arg1)(DoorShutter *, GlobalContext *, DoorShutter *)) {
    arg0->actionFunc = arg1;
    arg0->unk_167 = 0;
}

s32 func_808A0900(DoorShutter *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    s8 temp_v1;
    void *temp_v0;
    s32 phi_a1;
    s8 phi_v1;

    temp_v0 = arg1->doorCtx.transitionActorList + (((s32) arg0->actor.params >> 0xA) * 0x10);
    temp_v1 = temp_v0->unk_0;
    phi_v1 = temp_v1;
    if (temp_v1 == temp_v0->unk_2) {
        temp_v0_2 = arg0->actor.shape.rot.y - arg0->actor.yawTowardsPlayer;
        phi_a1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_a1 = -(s32) temp_v0_2;
        }
        if (phi_a1 < 0x4000) {
            phi_v1 = -1;
        }
    }
    return phi_v1 == arg0->actor.room;
}

s32 func_808A0974(DoorShutter *arg0, GlobalContext *arg1) {
    GlobalContext *sp24;
    s32 sp20;
    GlobalContext *temp_a1;
    GlobalContext *temp_a2;
    GlobalContext *temp_a3;
    s32 temp_t7;
    u8 temp_v1;
    u8 phi_v1;
    GlobalContext *phi_a3;

    temp_a3 = arg1;
    temp_v1 = arg0->unk_162;
    temp_t7 = arg0->unk_163 * 4;
    temp_a2 = temp_t7 + &D_808A2180;
    phi_v1 = temp_v1;
    phi_a3 = temp_a3;
    if (temp_v1 != 4) {
        temp_a1 = temp_a3;
        sp20 = (s32) temp_v1;
        sp24 = temp_a2;
        arg1 = temp_a3;
        phi_v1 = temp_v1;
        phi_a3 = arg1;
        if (func_808A0900(arg0, temp_a1, temp_a2, temp_a3) != 0) {
            if ((temp_v1 == 7) || (temp_v1 == 6)) {
                phi_v1 = 1U;
            } else if (temp_v1 == 5) {
                phi_v1 = 3U;
            } else {
                phi_v1 = 0U;
            }
        }
    }
    if (phi_v1 == 0) {
        arg0->unk_164 = (temp_t7 + &D_808A2180)->unk_2;
    } else {
        arg0->unk_164 = (temp_t7 + &D_808A2180)->unk_3;
    }
    if (phi_v1 == 1) {
        if (Actor_GetRoomCleared(phi_a3, (u32) arg0->actor.room) == 0) {
            func_808A08F0(arg0, func_808A0F88);
            arg0->unk_168 = 1.0f;
            return 1;
        }
        goto block_21;
    }
    if ((phi_v1 == 2) || (phi_v1 == 7)) {
        if (Flags_GetSwitch(phi_a3, arg0->actor.params & 0x7F) == 0) {
            func_808A08F0(arg0, func_808A1548);
            arg0->unk_168 = 1.0f;
            return 1;
        }
        func_808A08F0(arg0, func_808A1618);
        goto block_22;
    }
    if (phi_v1 == 3) {
        func_808A08F0(arg0, func_808A1080, temp_t7 + &D_808A2180, phi_a3);
        arg0->unk_168 = 1.0f;
        return 0;
    }
block_21:
    func_808A08F0(arg0, func_808A1090);
block_22:
    return 0;
}

void DoorShutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp24;
    ? *temp_v1_2;
    GlobalContext *temp_a2;
    ObjectContext *temp_a0_2;
    s16 *temp_v1;
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_t0;
    s8 temp_v0_3;
    u8 temp_t0_2;
    u8 temp_t8;
    u8 temp_v0_4;
    s16 *phi_v1;
    s32 phi_v0;
    s16 *phi_v1_2;
    ? *phi_v1_3;
    s32 phi_v0_2;
    ? *phi_v1_4;
    s32 phi_t0;
    DoorShutter *this = (DoorShutter *) thisx;

    globalCtx = globalCtx;
    Actor_ProcessInitChain((Actor *) this, D_808A2248);
    temp_t8 = ((s32) this->actor.params >> 7) & 7;
    this->unk_162 = temp_t8;
    temp_t0 = *(&D_808A2240 + (temp_t8 & 0xFF));
    phi_v1 = D_808A2258;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_t0 = (s32) temp_t0;
    if ((s32) temp_t0 < 0) {
loop_2:
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        phi_v1_2 = phi_v1;
        if (*phi_v1 != globalCtx->sceneNum) {
            temp_v1 = phi_v1 + 4;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v0 != 0x11) {
                goto loop_2;
            }
        }
        temp_t0_2 = phi_v1_2->unk_2;
        phi_t0 = (s32) temp_t0_2;
        if (temp_t0_2 == 6) {
            this->actor.flags |= 0x10000000;
        }
    } else if (temp_t0 == 0) {
        temp_a0 = globalCtx->sceneNum;
        phi_v1_3 = &D_808A22A0;
loop_9:
        temp_v0_2 = phi_v0_2 + 1;
        phi_v0_2 = temp_v0_2;
        phi_v1_4 = phi_v1_3;
        if ((phi_v1_3->unk_0 != temp_a0) && (phi_v1_3->unk_2 != temp_a0)) {
            temp_v1_2 = phi_v1_3 + 6;
            phi_v1_3 = temp_v1_2;
            phi_v1_4 = temp_v1_2;
            if (temp_v0_2 != 5) {
                goto loop_9;
            }
        }
        this->unk_15E = (s16) phi_v1_4->unk_4;
    } else {
        this->actor.room = -1;
    }
    temp_a0_2 = &globalCtx->objectCtx;
    globalCtx = globalCtx;
    sp24 = phi_t0;
    temp_v0_3 = Object_GetIndex(temp_a0_2, *(&D_808A2180 + (phi_t0 * 4)));
    temp_a2 = globalCtx;
    this->unk_165 = temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    globalCtx = temp_a2;
    sp24 = phi_t0;
    func_808A08F0(this, func_808A0D0C, temp_a2);
    temp_v0_4 = this->unk_162;
    this->unk_163 = (u8) phi_t0;
    if (((temp_v0_4 == 4) || (temp_v0_4 == 5)) && (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) == 0)) {
        this->unk_166 = 0xA;
    }
    Actor_SetHeight((Actor *) this, 60.0f);
}

void DoorShutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    TransitionActorEntry *temp_v1;
    DoorShutter *this = (DoorShutter *) thisx;

    if ((s32) this->actor.room >= 0) {
        temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
        temp_v1->id = (s16) -(s32) temp_v1->id;
    }
}

void func_808A0D0C(DoorShutter *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    s8 temp_a1;

    temp_a1 = arg0->unk_165;
    arg0 = arg0;
    if ((Object_IsLoaded(arg1 + 0x17D88, (s32) temp_a1) != 0) && ((temp_v0 = gGameInfo, (temp_v0->data[544] == 0)) || (temp_v0->data[548] == 0))) {
        arg0->actor.draw = func_808A1E14;
        arg0->actor.objBankIndex = arg0->unk_165;
        func_808A0974(arg0, arg1, arg0);
    }
}

f32 func_808A0D90(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp1C;
    f32 *temp_a2;
    void *temp_v0;
    f32 phi_f0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_a2 = &sp28;
    sp28 = temp_v0->world.pos.x;
    sp2C = temp_v0->world.pos.y + arg2;
    sp30 = temp_v0->world.pos.z;
    Actor_CalcOffsetOrientedToDrawRotation(arg1, (Vec3f *) &sp1C, (Vec3f *) temp_a2);
    if ((arg3 < fabsf(sp1C)) || (phi_f0 = sp24, (arg4 < fabsf(sp20)))) {
        phi_f0 = 3.4028235e38f;
    }
    return phi_f0;
}

s32 func_808A0E28(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f4;
    s16 temp_v0_2;
    u8 temp_t0;
    u8 temp_t1;
    void *temp_v0;
    f32 phi_f4;
    f32 phi_f10;
    s32 phi_v0;
    s32 phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (func_801233E4(arg1) == 0) {
        temp_v0 = (arg0->unk_164 * 0xC) + &D_808A21B0;
        temp_t0 = temp_v0->unk_A;
        temp_f4 = (f32) temp_t0;
        phi_f4 = temp_f4;
        if ((s32) temp_t0 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        temp_t1 = temp_v0->unk_B;
        temp_f10 = (f32) temp_t1;
        phi_f10 = temp_f10;
        if ((s32) temp_t1 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_f0 = func_808A0D90(arg1, arg0, 0.0f, phi_f4, phi_f10);
        if (fabsf(temp_f0) < 50.0f) {
            temp_v0_2 = sp24->shape.rot.y - arg0->shape.rot.y;
            phi_v0 = (s32) temp_v0_2;
            if (temp_f0 > 0.0f) {
                phi_v0 = (s32) (s16) (0x8000 - temp_v0_2);
            }
            phi_v1 = phi_v0;
            if (phi_v0 < 0) {
                phi_v1 = -phi_v0;
            }
            if (phi_v1 < 0x3000) {
                if (temp_f0 >= 0.0f) {
                    return (s32) 1.0f;
                }
                return (s32) -1.0f;
            }
            goto block_14;
        }
        goto block_14;
    }
block_14:
    return 0;
}

void func_808A0F88(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_a0_2;

    if ((Actor_GetRoomCleared(arg1, (u32) arg0->room) != 0) || (Actor_GetRoomClearedTemp(arg1, (u32) arg0->room) != 0)) {
        arg0[1].params = (s16) arg0->cutscene;
        if ((u8) arg0[1].objBankIndex == 7) {
            temp_a0_2 = arg0[1].params;
            if (temp_a0_2 != -1) {
                arg0[1].params = ActorCutscene_GetAdditionalCutscene(temp_a0_2);
            }
        }
        if (ActorCutscene_GetCanPlayNext(arg0[1].params) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0[1].params, arg0);
            Actor_SetRoomCleared(arg1, (u32) arg0->room);
            func_808A08F0((DoorShutter *) arg0, func_808A1784);
            arg0[1].unk_23 = -1;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0[1].params);
        return;
    }
    if (func_808A0E28(arg0, arg1) != 0) {
        temp_a0 = arg1->actorCtx.actorList[2].first;
        temp_a0->unk_37C = -1;
        temp_a0[2].projectedW = (bitwise f32) arg0;
        arg0->textId = 0x1801;
        func_80122F28((Player *) temp_a0, MIPS2C_ERROR(Read from unset register $a1), MIPS2C_ERROR(Read from unset register $a2));
    }
}

void func_808A1080(DoorShutter *arg0, GlobalContext *arg1) {

}

void func_808A1090(DoorShutter *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    DoorShutter *temp_a0;
    DoorShutter *temp_a2;
    s16 temp_a1;
    s32 temp_v0;
    u16 temp_t9;
    u8 temp_v0_2;

    temp_a2 = arg0;
    if (temp_a2->unk_15C != 0) {
        temp_a0 = temp_a2;
        arg0 = temp_a2;
        func_808A08F0(temp_a0, func_808A1684, (GlobalContext *) temp_a2);
        arg0->actor.velocity.y = 0.0f;
        if (arg0->unk_166 != 0) {
            temp_a1 = arg0->actor.params;
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1 & 0x7F);
            if (arg0->unk_162 != 5) {
                temp_t9 = gSaveContext.mapIndex;
                gSaveContext.inventory.dungeonKeys[temp_t9] += -1;
                Audio_PlayActorSound2((Actor *) arg0, 0x287CU);
                return;
            }
            Audio_PlayActorSound2((Actor *) arg0, 0x28A9U);
            return;
        }
        /* Duplicate return node #21. Try simplifying control flow for better match */
        return;
    }
    arg0 = temp_a2;
    temp_v0 = func_808A0E28((Actor *) temp_a2, arg1, temp_a2);
    if (temp_v0 != 0) {
        temp_a0_2 = arg1->actorCtx.actorList[2].first;
        temp_a0_2->unk_37C = 2;
        temp_a0_2->unk_37D = (s8) temp_v0;
        temp_a0_2[2].projectedW = (bitwise f32) arg0;
        if (arg0->unk_163 == 7) {
            temp_a0_2->unk_37E = 0xC;
        } else {
            temp_a0_2->unk_37E = 0;
        }
        temp_v0_2 = arg0->unk_162;
        if (temp_v0_2 == 6) {
            if ((s32) gSaveContext.healthCapacity < ((arg0->actor.params & 0x1F) * 0x10)) {
                temp_a0_2->unk_37C = -1;
                arg0->actor.textId = 0x14FC;
            }
        } else if (arg0->unk_166 != 0) {
            if (temp_v0_2 == 5) {
                if ((*gBitFlags & gSaveContext.inventory.dungeonItems[gSaveContext.mapIndex]) == 0) {
                    temp_a0_2->unk_37C = -1;
                    arg0->actor.textId = 0x1803;
                }
                temp_a0_2->unk_37E = (s8) (temp_a0_2->unk_37E + 0xA);
            } else if ((s32) gSaveContext.inventory.dungeonKeys[gSaveContext.mapIndex] <= 0) {
                temp_a0_2->unk_37C = -1;
                arg0->actor.textId = 0x1802;
            } else {
                temp_a0_2->unk_37E = (s8) (temp_a0_2->unk_37E + 0xA);
            }
        }
        func_80122F28((Player *) temp_a0_2, MIPS2C_ERROR(Read from unset register $a1), (Actor *) arg0);
    }
}

void func_808A1288(DoorShutter *arg0, void *arg1) {
    void *sp3C;
    s32 sp38;
    s32 sp34;

    if (arg0->actor.category == 0xA) {
        sp3C = arg1->unk_1CCC;
        sp34 = 0xF;
        sp38 = (s32) arg0->unk_164;
        if (func_808A0974(arg0) != 0) {
            sp34 = 0x20;
        }
        func_808A08F0(arg0, func_808A1684);
        arg0->unk_168 = 0.0f;
        arg0->unk_164 = (u8) sp38;
        func_800DFFAC(arg1->unk_800, arg0, sp3C->unk_3BA, 0.0f, 0xC, sp34, 0xA);
    }
}

s32 func_808A1340(DoorShutter *arg0) {
    ? sp2C;
    u8 temp_v0;
    Vec3f *phi_a2;

    if (arg0->actor.velocity.y == 0.0f) {
        func_808A1288(arg0);
        if (arg0->unk_163 != 7) {
            Audio_PlayActorSound2((Actor *) arg0, 0x2814U);
        }
    }
    temp_v0 = arg0->unk_163;
    if (temp_v0 == 7) {
        if (temp_v0 == 7) {
            func_800B9010((Actor *) arg0, 0x2184U);
        }
        if (arg0->unk_163 == 7) {
            phi_a2 = &D_808A22C4;
        } else {
            phi_a2 = &D_808A22D0;
        }
        Lib_Vec3f_TranslateAndRotateY((Vec3f *) &arg0->actor.home, arg0->actor.shape.rot.y, phi_a2, (Vec3f *) &sp2C);
        Math_StepToF(&arg0->actor.velocity.y, 5.0f, 0.5f);
        if (Math_Vec3f_StepToXZ((Vec3f *) &arg0->actor.world, (Vec3f *) &sp2C, arg0->actor.velocity.y) == 0.0f) {
            return 1;
        }
        goto block_13;
    }
    Math_StepToF(&arg0->actor.velocity.y, 15.0f, 3.0f);
    if (Math_StepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y + 200.0f, arg0->actor.velocity.y) != 0) {
        return 1;
    }
block_13:
    return 0;
}

s32 func_808A1478(Actor *arg0, GlobalContext *arg1, f32 arg2) {
    if ((1.0f - arg2) == arg0[1].world.pos.x) {
        if (arg2 == 1.0f) {
            Audio_PlayActorSound2(arg0, 0x285AU);
        } else {
            Audio_PlayActorSound2(arg0, 0x2859U);
        }
        if ((arg0[1].params != -1) && (ActorCutscene_GetCurrentIndex() == arg0[1].params)) {
            func_800B724C(arg1, arg0, 1U);
        }
    }
    if (Math_StepToF((f32 *) &arg0[1].world, arg2, 0.2f) != 0) {
        return 1;
    }
    return 0;
}

void func_808A1548(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    if (func_808A1478(arg0, arg1, 1.0f) != 0) {
        if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
            arg0[1].params = (s16) arg0->cutscene;
            if (ActorCutscene_GetCanPlayNext(arg0[1].params) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields(arg0[1].params, arg0);
                func_808A08F0((DoorShutter *) arg0, func_808A1784);
                arg0[1].unk_23 = -1;
                return;
            }
            ActorCutscene_SetIntentToPlay(arg0[1].params);
            return;
        }
        if (func_808A0E28(arg0, arg1) != 0) {
            temp_a0 = arg1->actorCtx.actorList[2].first;
            temp_a0->unk_37C = -1;
            temp_a0[2].projectedW = (bitwise f32) arg0;
            arg0->textId = 0x1800;
            func_80122F28((Player *) temp_a0, MIPS2C_ERROR(Read from unset register $a1), MIPS2C_ERROR(Read from unset register $a2));
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
    }
}

void func_808A1618(DoorShutter *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    if ((arg0->unk_15C == 0) && (temp_a1 = arg0->actor.params, arg0 = arg0, (Flags_GetSwitch(arg1, temp_a1 & 0x7F) == 0))) {
        func_808A08F0(arg0, func_808A1548, (GlobalContext *) arg0);
        return;
    }
    func_808A1090(arg0, arg1, arg0);
}

void func_808A1684(DoorShutter *arg0, GlobalContext *arg1) {
    s8 temp_v0;
    s8 phi_v1;
    f32 phi_f0;

    temp_v0 = arg0->unk_166;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_166 = temp_v0 - 1;
        phi_v1 = arg0->unk_166;
    }
    if ((phi_v1 == 0) && (arg1->roomCtx.unk31 == 0) && (func_808A1340(arg0) != 0)) {
        if (arg0->unk_162 == 5) {
            phi_f0 = 20.0f;
        } else {
            phi_f0 = 50.0f;
        }
        if (phi_f0 < arg0->actor.xzDistToPlayer) {
            if (arg0->unk_163 == 7) {
                arg0->actor.velocity.y = 0.0f;
            } else {
                if (func_808A0974(arg0, arg1) != 0) {
                    arg0->actor.velocity.y = 30.0f;
                }
                Audio_PlayActorSound2((Actor *) arg0, 0x281CU);
            }
            func_808A08F0(arg0, func_808A1B48);
        }
    }
}

void func_808A1784(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    Actor *temp_a3;
    s16 temp_a0;
    s8 temp_v0;
    u8 temp_v1;

    temp_a3 = arg0;
    if (temp_a3[1].unk_23 != 0) {
        temp_a0 = temp_a3[1].params;
        arg0 = temp_a3;
        if (func_800F22C4(temp_a0, temp_a3) != 0) {
            temp_v0 = arg0[1].unk_23;
            if ((s32) temp_v0 < 0) {
                if ((arg1->state.frames & 1) != 0) {
                    arg0[1].unk_23 = temp_v0 + 1;
                    return;
                }
                /* Duplicate return node #15. Try simplifying control flow for better match */
                return;
            }
            arg0[1].unk_23 = temp_v0 - 1;
            return;
        }
        /* Duplicate return node #15. Try simplifying control flow for better match */
        return;
    }
    arg0 = temp_a3;
    if (func_808A1478(temp_a3, arg1, 0.0f, temp_a3) != 0) {
        temp_v1 = (u8) arg0[1].objBankIndex;
        if ((temp_v1 != 0) && (temp_v1 != 1) && (((temp_a0_2 = arg0, (temp_v1 != 7)) && (temp_v1 != 6)) || (arg0 = arg0, (func_808A0900((DoorShutter *) temp_a0_2, arg1) == 0)))) {
            func_808A08F0((DoorShutter *) arg0, func_808A1618);
        } else {
            func_808A08F0((DoorShutter *) arg0, func_808A1090);
        }
        func_801A2ED8();
    }
}

void func_808A1884(Actor *arg0, GlobalContext *arg1) {
    void *sp54;
    s8 sp53;
    ? sp44;
    ? sp30;
    s8 temp_v0;
    void *temp_t6;
    void *temp_v0_2;
    void *temp_v1;
    s32 phi_v0;

    temp_t6 = arg1->actorCtx.actorList[2].first;
    sp54 = temp_t6;
    temp_v0 = arg0->room;
    if ((s32) temp_v0 >= 0) {
        sp53 = temp_v0;
        Actor_CalcOffsetOrientedToDrawRotation(arg0, (Vec3f *) &sp44, temp_t6 + 0x24);
        phi_v0 = 1;
        if (sp4C < 0.0f) {
            phi_v0 = 0;
        }
        arg0->room = *(arg1->doorCtx.transitionActorList + (((s32) (u16) arg0->params >> 0xA) * 0x10) + (phi_v0 * 2));
        temp_v0_2 = arg1 + 0x186E0;
        if (temp_v0 != arg0->room) {
            sp30.unk_0 = (s32) temp_v0_2->unk_0;
            temp_v1 = arg1 + 0x186F4;
            sp30.unk_4 = (s32) temp_v0_2->unk_4;
            sp30.unk_8 = (s32) temp_v0_2->unk_8;
            sp30.unk_C = (s32) temp_v0_2->unk_C;
            sp30.unk_10 = (s32) temp_v0_2->unk_10;
            temp_v0_2->unk_0 = (s32) temp_v1->unk_0;
            temp_v0_2->unk_4 = (s32) temp_v1->unk_4;
            temp_v0_2->unk_8 = (s32) temp_v1->unk_8;
            temp_v0_2->unk_C = (s32) temp_v1->unk_C;
            temp_v0_2->unk_10 = (s32) temp_v1->unk_10;
            temp_v1->unk_0 = (s32) sp30.unk_0;
            temp_v1->unk_4 = (s32) sp30.unk_4;
            temp_v1->unk_8 = (s32) sp30.unk_8;
            temp_v1->unk_C = (s32) sp30.unk_C;
            temp_v1->unk_10 = (s32) sp30.unk_10;
            arg1->roomCtx.activeMemPage ^= 1;
        }
        func_8012EBF8(arg1, arg1 + 0x186E0);
    }
    arg0[1].home.rot.z = 0;
    arg0->velocity.y = 0.0f;
    if ((func_808A0974((DoorShutter *) arg0, arg1) != 0) && ((sp54->unk_A6C & 0x800) == 0)) {
        func_808A08F0((DoorShutter *) arg0, func_808A1C50);
        if (ActorCutscene_GetCurrentIndex() == 0x7D) {
            func_801226E0(arg1, gSaveContext.respawn[0].data);
            sp54->unk_A86 = -1;
            func_800B7298(arg1, NULL, 0x73U);
        }
    }
}

s32 func_808A1A70(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0[1].targetMode;
    if (temp_v0 == 7) {
        if (temp_v0 == 7) {
            func_800B9010(arg0, 0x2185U);
        }
        Math_StepToF(&arg0->velocity.y, 5.0f, 0.5f);
        if (Math_Vec3f_StepToXZ((Vec3f *) &arg0->world, (Vec3f *) &arg0->home, arg0->velocity.y) == 0.0f) {
            return 1;
        }
        goto block_9;
    }
    if (arg0->velocity.y < 20.0f) {
        Math_StepToF(&arg0->velocity.y, 20.0f, 8.0f);
    }
    if (Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y, arg0->velocity.y) != 0) {
        return 1;
    }
block_9:
    return 0;
}

void func_808A1B48(Actor *arg0, GlobalContext *arg1) {
    s16 sp3E;
    s16 temp_v0;
    s32 temp_a0;

    if (func_808A1A70(arg0) != 0) {
        if (arg0->velocity.y > 20.0f) {
            arg0->floorHeight = arg0->home.pos.y;
            func_800BBDAC(arg1, arg0, (Vec3f *) &arg0->world, 45.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 0);
        }
        Audio_PlayActorSound2(arg0, 0x281DU);
        temp_v0 = Quake_Add(Play_GetCamera(arg1, 0), 3U);
        temp_a0 = temp_v0 << 0x10;
        sp3E = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), -0x7F18);
        Quake_SetQuakeValues(sp3E, 2, 0, 0, (s16) 0);
        Quake_SetCountdown(sp3E, 0xA);
        func_8013ECE0(arg0->xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
        func_808A1884(arg0, arg1);
    }
}

void func_808A1C50(DoorShutter *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    temp_v0 = arg0->unk_167;
    arg0->unk_167 = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x1F) ^ 1) != 0) {
        if (arg1->actorCtx.actorList[2].first->unk_394 == 0x73) {
            arg0 = arg0;
            func_800B7298(arg1, NULL, 6U);
        }
        func_808A0974(arg0, arg1);
    }
}

void DoorShutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    DoorShutter *temp_a2;
    PosRot *temp_a0;
    PosRot *temp_a1;
    DoorShutter *this = (DoorShutter *) thisx;

    temp_a2 = this;
    if (((globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x100004C0) == 0) || (func_808A0D0C == temp_a2->actionFunc)) {
        this = temp_a2;
        temp_a2->actionFunc(temp_a2, globalCtx);
        temp_a0 = &this->actor.home;
        temp_a1 = &this->actor.world;
        if (this->unk_163 == 7) {
            this = this;
            this->actor.home.rot.z = (s16) (s32) (Math_Vec3f_DistXZ((Vec3f *) temp_a0, (Vec3f *) temp_a1) * -100.0f);
        }
    }
}

s32 func_808A1D68(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_a1;
    s32 phi_a0;
    s32 phi_v0;

    if (func_801233E4(arg1) != 0) {
        return 1;
    }
    temp_v1 = arg0->shape.rot.y;
    temp_a0 = Actor_YawToPoint(arg0, &arg1->view.eye) - temp_v1;
    temp_a1 = arg0->yawTowardsPlayer - temp_v1;
    phi_a1 = (s32) temp_a1;
    phi_a0 = (s32) temp_a0;
    if ((s32) temp_a0 < 0) {
        phi_a0 = -(s32) temp_a0;
    }
    if ((s32) temp_a1 < 0) {
        phi_a1 = -(s32) temp_a1;
    }
    if (((phi_a1 < 0x4000) && (phi_a0 >= 0x4001)) || ((phi_v0 = 1, ((phi_a1 < 0x4001) == 0)) && (phi_a0 < 0x4000))) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_808A1E14(Actor *arg0, GlobalContext *arg1) {
    void *sp44;
    GraphicsContext *sp40;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    TransitionActorEntry *temp_v1;
    f32 temp_f0;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_v1_2;
    s8 temp_v0;
    u8 temp_t7;
    u8 temp_t8;
    s32 phi_a2;
    f32 phi_f8;
    f32 phi_f4;
    ? phi_a2_2;

    if (func_808A1D68(arg0, arg1) != 0) {
        sp44 = (arg0->unk_164 * 0xC) + &D_808A21B0;
        temp_a0 = arg1->state.gfxCtx;
        sp40 = temp_a0;
        func_8012C28C(temp_a0);
        if (arg0->unk_164 == 7) {
            SysMatrix_InsertTranslation(0.0f, 64.96f, 0.0f, 1);
            SysMatrix_InsertZRotation_s(arg0->home.rot.z, 1);
            SysMatrix_InsertTranslation(0.0f, -64.96f, 0.0f, 1);
        }
        if (sp44->unk_4 != 0) {
            temp_v1 = &arg1->doorCtx.transitionActorList[(s32) (u16) arg0->params >> 0xA];
            if (((s32) arg1->roomCtx.prevRoom.num >= 0) || (temp_v0 = temp_v1->sides[0].room, (temp_v0 == temp_v1->sides[1].room))) {
                temp_v1_2 = arg0->shape.rot.y - Math_Vec3f_Yaw(&arg1->view.eye, (Vec3f *) &arg0->world);
                phi_a2 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < 0) {
                    phi_a2 = -(s32) temp_v1_2;
                }
                if (phi_a2 < 0x4000) {
                    SysMatrix_InsertYRotation_f(3.1415927f, 1);
                }
            } else if (arg0->room == temp_v0) {
                SysMatrix_InsertYRotation_f(3.1415927f, 1);
            }
        } else if ((u8) arg0[1].objBankIndex == 5) {
            temp_v0_2 = sp40->polyOpa.p;
            sp40->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDB060020;
            sp30 = temp_v0_2;
            sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_808A22DC + (arg0[1].home.unk_12 * 4)));
        }
        temp_v0_3 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_4 = sp40->polyOpa.p;
        sp40->polyOpa.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = sp44->unk_0;
        temp_f0 = arg0[1].world.pos.x;
        if ((temp_f0 != 0.0f) && (sp44->unk_4 != 0)) {
            temp_t7 = sp44->unk_8;
            temp_f8 = (f32) temp_t7;
            phi_f8 = temp_f8;
            if ((s32) temp_t7 < 0) {
                phi_f8 = temp_f8 + 4294967296.0f;
            }
            temp_t8 = sp44->unk_9;
            temp_f4 = (f32) temp_t8;
            phi_f4 = temp_f4;
            if ((s32) temp_t8 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            SysMatrix_InsertTranslation(0.0f, phi_f8 * (1.0f - temp_f0), phi_f4, 1);
            temp_v0_5 = sp40->polyOpa.p;
            sp40->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xDA380003;
            sp24 = temp_v0_5;
            sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_6 = sp40->polyOpa.p;
            sp40->polyOpa.p = &temp_v0_6[1];
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = sp44->unk_4;
        }
        if (arg0[1].unk_22 != 0) {
            Matrix_Scale(0.01f, 0.01f, 0.025f, 1);
            phi_a2_2 = 0;
            if ((u8) arg0[1].objBankIndex == 5) {
                phi_a2_2 = 1;
            }
            func_800BC8B8(arg1, arg0[1].unk_22, phi_a2_2);
        }
    }
}
